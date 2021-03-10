function [out1,out2] = romF(in1,in2,s,ds,t_sym)
%ROMF
%    [OUT1,OUT2] = ROMF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    10-Mar-2021 20:34:04

f_u1_ = in1(:,49);
f_u3_ = in1(:,51);
l_b1_ = in1(:,36);
l_b2_ = in1(:,37);
l_s1_ = in1(:,39);
l_s2_ = in1(:,40);
t2 = f_u1_+l_s1_;
t3 = -f_u1_;
t4 = -f_u3_;
t5 = -l_b1_;
t6 = -l_s1_;
t7 = l_b2_+t4;
t9 = f_u3_+l_s2_-t2;
t8 = f_u1_+t5+t7;
out1 = reshape([0.0,0.0,0.0,t8,0.0,t7,t2,t9,t7,t2],[5,2]);
if nargout > 1
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t7,t2,t9,t7,t2,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[29,3]);
end
