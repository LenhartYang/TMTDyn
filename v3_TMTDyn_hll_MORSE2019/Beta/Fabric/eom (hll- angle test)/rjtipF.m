function r_jtip = rjtipF(phi_sym,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(PHI_SYM,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.2.
%    06-Jul-2019 03:44:29

q1 = in2(:,1);
r_jtip = [0.0,0.0,0.0,sin(q1).*(2.7e1./1.0e2),0.0,cos(q1).*(2.7e1./1.0e2)];
