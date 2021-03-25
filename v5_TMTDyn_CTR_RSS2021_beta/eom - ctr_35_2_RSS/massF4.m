function [out1,out2,out3,out4] = massF4(in1,in2,s,ds,t_sym)
%MASSF4
%    [OUT1,OUT2,OUT3,OUT4] = MASSF4(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    10-Mar-2021 20:34:30

g_xsym = in1(:,33);
g_ysym = in1(:,34);
g_zsym = in1(:,35);
q20 = in2(20,:);
q21 = in2(21,:);
q22 = in2(22,:);
r_s11_ = in1(:,8);
r_s12_ = in1(:,9);
sigma_s_ = in1(:,1);
tau_u2_ = in1(:,50);
t2 = r_s11_.^2;
t3 = r_s12_.^2;
t4 = s.^2;
t5 = s.^3;
t6 = tau_u2_./2.0;
t8 = (q20.*s)./2.0;
t7 = -t3;
t9 = t2./4.0;
t10 = t3./4.0;
t11 = (q21.*t4)./2.0;
t12 = (q22.*t5)./2.0;
t13 = t2+t7;
t16 = t9+t10;
t18 = t6+t8+t11+t12;
t14 = sigma_s_.*t13.*pi;
t19 = cos(t18);
t20 = sin(t18);
t15 = -t14;
t17 = t14.*t16;
t22 = t19.^2;
t23 = t20.^2;
t21 = t15.*t16;
out1 = reshape([t15,0.0,0.0,0.0,0.0,0.0,0.0,t15,0.0,0.0,0.0,0.0,0.0,0.0,t15,0.0,0.0,0.0,0.0,0.0,0.0,t21,0.0,0.0,0.0,0.0,0.0,0.0,t21,0.0,0.0,0.0,0.0,0.0,0.0,t15.*(t2./2.0+t3./2.0)],[6,6]);
if nargout > 1
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,s.*t22+s.*t23,0.0,0.0,0.0,0.0,0.0,t4.*t22+t4.*t23,0.0,0.0,0.0,0.0,0.0,t5.*t22+t5.*t23,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 2
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end