%% initialize
close all
clear all
format shorte
clc
pause( 1 )

addpath('./hll');


%% parameters
n_p = 2 ; % number of segments

l_s = 50e-3 ; %44e-3 ; % manipulator length
r_s1 = 4.5e-3 ; % manipulator inner radius
r_s2 = 12.5e-3 ; % manipulator outer radius
r_p1 = 2.5e-3 ; % 2.25e-3 pressure chamber inner radius
r_p2 = 3e-3 ; % pressure chamber outer radius
r_t = 0.2e-3 ; % braid diameter
gamma = pi / 2 - acos( 1 - r_t ^ 2 / 2 / r_p2 ^ 2 ) ;
r_o = 8.5e-3 ; %8.4e-3
phi_o = acos( 1 - r_p2 ^ 2 / 2 / r_o ^ 2 ) ;
r_od = [ cos( 3*pi/6 + phi_o )  sin( 3*pi/6 + phi_o )  0 ; % according to Ali's inputs
         cos( 3*pi/6 - phi_o )  sin( 3*pi/6 - phi_o )  0 ;
         cos( -pi/6 + phi_o )   sin( -pi/6 + phi_o )   0 ;
         cos( -pi/6 - phi_o )   sin( -pi/6 - phi_o  )  0 ;
         cos( 7*pi/6 + phi_o )  sin( 7*pi/6 + phi_o )  0 ;
         cos( 7*pi/6 - phi_o )  sin( 7*pi/6 - phi_o )  0 ] ;

m_f = 13.47e-3 ; % force sensor and its mount mass
l_f = 14.5e-3 ; %17e-3 ;
r_f = 7.5e-3 ;

g_x = 0 ; g_y = 0 ; g_z = 9.81 ; % gravity
sigma_s = 1.4 * 1300 ; % silicon density

E_s =205e3 ; % 130e3, 205e3
mu_pow = 1 ; % < 1: rate thining, > 1: rate thikening
mu_x = 1e-1 ; % 1e-1
mu_y = 1e-1 ;
mu_z = 1e-1 ;
mu_xx = 1e-5 ; % 1e-4
mu_yy = 1e-5 ;
mu_zz = 1e-5 ;


%% variables
% symbolic parameters to be changed after EOM derivation
syms sigma_s_ E_s_ r_s1_ r_s2_ r_p1_ l_s_ ...
    mu_x_ mu_y_ mu_z_ mu_xx_ mu_yy_ mu_zz_ mu_pow_ ...
    g_x_ g_y_ g_z_ lambda_ m_f_ l_f_ r_f_ r_o_ gamma_ ...
    p1_ p2_ p3_ p4_ p5_ p6_ ...
    f_tx_ f_ty_ f_tz_ tau_tx_ tau_ty_ tau_tz_ real
vars = [ sigma_s_ E_s_ r_s1_ r_s2_ l_s_ mu_x_ mu_y_ mu_z_ ...
    mu_xx_ mu_yy_ mu_zz_ mu_pow_ g_x_ g_y_ g_z_ m_f_ l_f_ r_f_ ...
    r_p1_ r_o_ gamma_ p1_ p2_ p3_ p4_ p5_ p6_ f_tx_ f_ty_ ...
    f_tz_ tau_tx_ tau_ty_ tau_tz_ lambda_ ] ;

% parameter values, can be changed after derivations
var_vals = [ sigma_s, E_s, r_s1, r_s2, l_s, mu_x, mu_y, mu_z, mu_xx, mu_yy, ...
    mu_zz, mu_pow, g_x, g_y, g_z, m_f, l_f, r_f, r_p1, r_o, gamma, zeros(1,12) , 1 ] ;

% simplification
mu_pow_ = mu_pow ;


%% exp. readings
exp_case = 1 ; % experiment scenario
[ p , tip_pos , tip_RQ , f_ex , t_exp , t_exp_equil ] = sample_exp_data( var_vals , exp_case ); % motor input and robot tip position from a sample experiment

% user_pars contains other data sets such as inputs, experimental data, etc.
user_pars.p = p ;
user_pars.tip_pos = tip_pos ;
user_pars.tip_RQ = tip_RQ ;
user_pars.f_ex = f_ex ;

user_pars.n_l = n_p ;


%% preprocess
l_ss = l_s_ / n_p ; % segment length
a_aw = pi * ( r_s2_.^ 2 - r_s1_.^ 2 - 6 * r_p1_.^ 2 ) ; % no change
m_s = a_aw * l_s_ * sigma_s_ ;  % manipulator mass
r_ov = r_o_ * r_od / sqrt( lambda_ ) ;
r_p1_ = r_p1_ * sqrt( 1 - lambda_.^ 2 * cos( gamma_ ) ^ 2 ) / sin( gamma_ ) ;
a_p = pi * r_p1_.^ 2 ;
a_aw = pi * ( ( r_s2_.^ 2 - r_s1_.^ 2 ) / lambda_ - 6 * r_p1_.^ 2 ) ;
m_ss = m_s / l_s_ ; % manipulator segment mass
G_s = E_s_ / 3 ;
I_aw =  [ 1 1 2 ] * 1 / 4 * pi * ( ( r_s2_.^ 4 - r_s1_.^ 4 ) / lambda_.^ 2 - 6 * r_p1_.^ 4 ) ...
    - a_p * diag( r_ov.' * r_ov ).' ;
K_v = diag( [ G_s G_s E_s_ ] ) * a_aw / lambda_ ; % ( l_ss / lambda_ ) to get deformation not strain
K_u = diag( [ E_s_ E_s_ G_s ] ) * diag( I_aw ) / lambda_ ; % ( l_ss / lambda_ ) to get angles not curvatures/torsion
I_ss = diag( ...
    sigma_s_ * pi * (r_s2_.^2-r_s1_.^2) * ...
    [ 1/12*(3*(r_s2_.^2+r_s1_.^2))/lambda_ , ...
    1/12*(3*(r_s2_.^2+r_s1_.^2))/lambda_ , ...
    1/2*(r_s2_.^2+r_s1_.^2)/lambda_ ] ) ; % manipulator segment inertia
I_f = diag( [ 1/12*m_f_*(3*r_f_^2+l_f_.^2) 1/12*m_f_*(3*r_f_.^2+l_f_.^2) 1/2*m_f_*r_f_.^2 ]...
    + m_f_ * (l_f_/2).^2 * [ 1 1 0 ] ) ; % tip force sensor segment inertia
p = [ p1_ p2_ p3_ p4_ p5_ p6_ ] ;
f_p = [ 0 0 p*ones(6,1)*a_p ] ;
tau_p = p * a_p * [ r_ov(:,2) -r_ov(:,1) r_ov(:,3) ] ;
        

%% robot
% break DSL down to smaller pieces to prevent Matlab from complaining about too complex arguments!
results = ...
    tmtdyn()...
        .simulation()... % simulation
            .variables(vars, var_vals)...
            .user_parameters(user_pars)...
            .derive_eom('assume_small_velocities')... % 'full_system', 'assume_small_velocities', 'no'
                .plot_initial_conditions('final')... % 'all', 'final'
                .optimize_code()...
            .analysis()...
                .static_sim('generate_mex_file', t_exp_equil)... % edited_m_file, generate_m_file, generate_mex_file, old_mex_file, generate_mex_from_edited_m_file, generate_mex_from_c_files
                .dynamic_sim('generate_mex_file', 'matlab', t_exp(1), t_exp(end))... % matlab, sundials_ode, sundials_dae, radau, radau_mex, external
                .results_sample_rate(1e2)...
                .spatial_integration_step(1e1)...
            .post_process()...
                .animate('tube', 'show_frame', 30, 20, 20)... % ({null 'none', 'show_frame', 'side_views', 'show_frame_side_views'}, fps, axis edges, cross-section edges) 
                .record_video()...
                .number_of_reports(1)...
                .run_user_code() ;            
results = results...
        .world()... % world
            .g([g_x_, g_y_, g_z_])...
        .robot('series_rigid_link_arm')... % robot
            .body('rigid_link')...
                .with_mass(m_ss)...
                .with_inertia(I_ss)...
                .with_cross_section_radius(1/sqrt(lambda_)*r_s2_)...
                .connected_to_joint()...
                    .rom()...
                        .default_order(n_p)...
                        .default_fit_type('spline_logistic_func', l_s/2)... % polynomial, spline_piecewise, spline_logistic_func
                        .length(0, l_s_)...
                        .fixed_inital_values()...
                    .with_transformation_from_body()... % leave empty for connection to ground
                        .translation([inf,inf,inf])... % axial translation w.r.t. previous joint copy
                            .dof(1)...
                                .base_director(0)... % prependicular at the base
                            .dof(2)...
                                .base_director(0)... % prependicular at the base
                            .dof(3)...
                                .base_director(1)... % prependicular at the base
                                .initial_value_axial_locations(( 1:n_p ) * l_ss)...
                                .initial_value(( 1:n_p ) * l_ss)...
                                .parallel_spring()...
                                    .relaxed_state_from_initial_condition()...
                        .rot_simple_curvilinear_frame([0, 0, 1])...
                        .rot_z()...
                    .beam_stiffness()...
                        .coefficient([ diag( K_v ).' diag( K_u ).' ])...
                        .relaxed_state_from_initial_condition()...
                    .beam_damping()...
                        .viscosity([ mu_x_ mu_y_ mu_z_ mu_xx_ mu_yy_ mu_zz_ ])...
                        .power(mu_pow_)...
                    .beam_internal_actuation([ f_p tau_p ]) ;
results = results...
            .body('tip_force_sensor')...
                .with_mass(m_f_)...
                .with_inertia(I_f)...
                .with_center_of_mass_at( [ 0 0 l_f_/2 ] )...
                .with_tip_at( [ 0 0 l_f_ ] )...
                .with_cross_section_radius(r_f_)...
                .connected_to_joint()...
                    .from_body_tip(1)...
            .exload('tip_load')...
                .exerted_on_body_with_transformation(2)... % >> transformation
                    .translation([0 0 l_f_])... % axial translation w.r.t. previous joint copy
                .force([f_tx_, f_ty_, f_tz_])...
                .moment([tau_tx_, tau_ty_, tau_tz_])...
        .run() ;
    
