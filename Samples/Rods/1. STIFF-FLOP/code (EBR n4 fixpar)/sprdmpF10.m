function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF10(in1,in2,s)
%SPRDMPF10
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF10(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 22:57:58

lambda_sym = in1(:,34);
p1_sym = in1(:,22);
p3_sym = in1(:,24);
p5_sym = in1(:,26);
q10 = in2(:,10);
u10 = in2(:,34);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t4 = lambda_sym.^2;
    t8 = t4.*4.439506172839557e-3;
    t2 = t8-1.0;
    t3 = 1.0./lambda_sym;
    t5 = t4.*2.787064548290963e-8;
    t6 = t5-6.277870645482909e-6;
    t7 = 1.0./sqrt(lambda_sym);
    t9 = t2.^2;
    t10 = t9.*2.36469959048496e-10;
    t11 = 1.0./lambda_sym.^2;
    t12 = t10-t11.*2.4004e-8;
    t13 = t12.*pi.*4.1e6;
    t14 = t13-t3.*t6.*pi.*3.5547e3;
    out2 = q10.*t3.*t14;
end
if nargout > 2
    out3 = u10.*(-1.0./2.0);
end
if nargout > 3
    out4 = p1_sym.*t6.*t7.*pi.*(-1.594117647058824e-2)+p3_sym.*t6.*t7.*pi.*7.970588235294118e-3+p5_sym.*t6.*t7.*pi.*7.970588235294115e-3;
end
if nargout > 4
    out5 = q10;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t3.*t14,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-1.0./2.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
