%% 10 segment arm

%% initialize
close all
clear all
format shorte
clc
pause( 1 )

addpath('./tmtdyn','./hll','./eom');


%% parameters
n_s = 10 ;
syms ms ixs iys izs ls rs ks mus
var_sym = [ ms ixs iys izs ls rs ks mus ] ;

m = 1;
ix = 1; iy = 1; iz = 1;
l = 1;
r = 0.9;
k = 1;
mu = 1;
var_value = [ m ix iy iz l r k mu ] ;

Is = diag( [ixs; iys; izs] );
I = diag( [ix; iy; iz] );

%% robot
results =...
    tmtdyn()...
        .simulation()...
            .var(var_sym, var_value)...
            .derive_eom(1)...
                .use_mex()...
                .simplify_derivations()...
                .optimize_code()...
            .analysis()...
                ...static_sim('m_file', 0)...
                .dynamic_sim('generate_mex_file', 'matlab_ode', 0, 1)...
            .post_process()...
                .animate()...
                .record_video()...
        .world()...
            .g([0, 0, -9.81])...
        .robot('snake')...
            .body('link_1')...
                .with_mass(m)...
                .with_inertia(I)...
                .with_center_of_mass_at([l/2, 0, 0])...
                .with_tip_at([l, 0, 0])...
                .connected()...
                    .with_transformation_from()...
                        .rot_z()...
                        .rot_y()...
            .body('link_2')...
                .with_mass(r^2*m)...
                .with_inertia(r^2*I)...
                .with_center_of_mass_at([r^2*l/2, 0, 0])...
                .with_tip_at([r^2*l, 0, 0])...
                .connected()...
                    .from_body(1)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_3')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(2)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_4')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(3)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_5')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(4)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
        ...run();
            .body('link_6')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(5)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_7')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(6)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_8')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(7)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
            .body('link_9')...
                .with_mass(r^3*m)...
                .with_inertia(r^3*I)...
                .with_center_of_mass_at([r^3*l/2, 0, 0])...
                .with_tip_at([r^3*l, 0, 0])...
                .connected()...
                    .from_body(8)...
                    .with_transformation_from()...
                        .trans_x(l)...
                        .rot_z()...
                        .rot_y()... 
        .run();
%             .joint('cable_1')...
%                 .to_body(1)...
%                 .with_transformation_from()...
%                     .trans_z(0.1)...
%                 .with_transformation_to()...
%                     .trans_x(l)...
%                     .trans_z(0.1)...
%             .joint('cable_2')...
%                 .from_body(1)...
%                 .to_body(2)...
%                 .with_transformation_from()...
%                     .trans_x(l)...
%                     .trans_z(0.1)...
%                 .with_transformation_to()...
%                     .trans_x(r*l)...
%                     .trans_z(r*0.1)...                    
%         .run();
        
% cable dynamics and kinematics
% cable with guide
% joint limits
% work_space plot
% mesh with .connected