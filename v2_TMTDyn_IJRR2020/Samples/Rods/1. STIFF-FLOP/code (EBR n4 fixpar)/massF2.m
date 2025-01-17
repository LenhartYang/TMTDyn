function [out1,out2,out3,out4] = massF2(in1,in2,s)
%MASSF2
%    [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 12:17:46

lambda_sym = in1(:,34);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
u4 = in2(:,28);
u5 = in2(:,29);
u6 = in2(:,30);
u7 = in2(:,31);
u8 = in2(:,32);
u9 = in2(:,33);
u10 = in2(:,34);
u11 = in2(:,35);
u12 = in2(:,36);
t2 = 1.0./lambda_sym;
t3 = t2.*4.288988684478761e-7;
t4 = lambda_sym.^2;
t5 = t4.*1.265636415391513e-7;
t6 = t3+t5;
out1 = reshape([7.039916437613029e-3,0.0,0.0,0.0,0.0,0.0,0.0,7.039916437613029e-3,0.0,0.0,0.0,0.0,0.0,0.0,7.039916437613029e-3,0.0,0.0,0.0,0.0,0.0,0.0,t6,0.0,0.0,0.0,0.0,0.0,0.0,t6,0.0,0.0,0.0,0.0,0.0,0.0,t2.*8.577977368957521e-7],[6,6]);
if nargout > 1
    t7 = q9.*(1.0./2.0);
    t8 = t7+1.0./1.6e2;
    t9 = q9+1.0./8.0e1;
    t10 = q4.*q8.*(1.0./2.0);
    t11 = q6.*t8.*(1.0./2.0);
    t12 = q4.*q7.*(1.0./2.0);
    t13 = q5.*q8.*(1.0./2.0);
    t14 = q6.*t9.*(1.0./4.0);
    t15 = t11+t12+t13+t14;
    t16 = q4.*q5.*(1.0./2.0);
    t17 = q4.^2;
    t18 = t17.*(1.0./4.0);
    t19 = q5.^2;
    t20 = q6.^2;
    t21 = q4.*t8.*(1.0./2.0);
    t22 = q4.*t9.*(1.0./4.0);
    t23 = q5.*t8.*(1.0./2.0);
    t24 = q5.*t9.*(1.0./4.0);
    t25 = q4.*q6.*(1.0./2.0);
    t26 = q5.*q6.*(1.0./2.0);
    t27 = t19.*(1.0./4.0);
    t28 = q6.*(1.0./2.0);
    t29 = q12.*(1.0./2.0);
    t30 = q4.*q11.*(1.0./4.0);
    t31 = q5.*(1.0./2.0);
    t32 = q11.*(1.0./2.0);
    t33 = q6.*q10.*(1.0./4.0);
    t39 = q4.*q12.*(1.0./4.0);
    t34 = t31+t32+t33-t39;
    t35 = q4.*(1.0./2.0);
    t36 = q10.*(1.0./2.0);
    t37 = q5.*q12.*(1.0./4.0);
    t41 = q6.*q11.*(1.0./4.0);
    t38 = t35+t36+t37-t41;
    t46 = q5.*q10.*(1.0./4.0);
    t40 = t28+t29+t30-t46;
    t42 = q4.*q10.*(1.0./4.0);
    t43 = q5.*q11.*(1.0./4.0);
    t44 = q6.*q12.*(1.0./4.0);
    t45 = t42+t43+t44-1.0;
    t47 = q10.*t34.*(1.0./2.0);
    t48 = q11.*t38.*(1.0./2.0);
    t49 = q10.*t38.*(1.0./2.0);
    t50 = q5.*t38.*(1.0./2.0);
    t51 = q6.*t45.*(1.0./2.0);
    t52 = q4.*t38.*(1.0./2.0);
    t53 = q5.*t34.*(1.0./2.0);
    t54 = q6.*t40.*(1.0./2.0);
    t55 = -t42-t43-t44+t52+t53+t54+1.0;
    t56 = q10.*t40.*(1.0./2.0);
    t57 = q12.*t38.*(1.0./2.0);
    t58 = q11.*t45.*(1.0./2.0);
    t59 = q11.*t40.*(1.0./2.0);
    t60 = q12.*t34.*(1.0./2.0);
    t61 = q11.*t34.*(1.0./2.0);
    t62 = q6.*t38.*(1.0./2.0);
    t63 = q6.*t34.*(1.0./2.0);
    t64 = q4.*t45.*(1.0./2.0);
    out2 = reshape([1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t15,-q9-t10+q5.*q7.*(1.0./2.0)-1.0./8.0e1,q8-t21-t22+q6.*q7.*(1.0./2.0),t49-q4.*q10.*(1.0./4.0)-q5.*q11.*(1.0./4.0)-q6.*q12.*(1.0./4.0)-q11.*t34.*(1.0./2.0)-q12.*t40.*(1.0./2.0)+1.0,-t28-t29-t30+t46+t47+t48+q12.*t45.*(1.0./2.0),t31+t32+t33-t39+t56+t57-t58,q9+t10-q5.*q7.*(1.0./2.0)+1.0./8.0e1,t15,-q7-t23-t24+q6.*q8.*(1.0./2.0),t28+t29+t30+t47+t48-q5.*q10.*(1.0./4.0)-q12.*t45.*(1.0./2.0),-t42-t43-t44-t49+t61-q12.*t40.*(1.0./2.0)+1.0,-t35-t36-t37+t41+t59+t60+q10.*t45.*(1.0./2.0),-q8+t21+t22-q6.*q7.*(1.0./2.0),q7+t23+t24-q6.*q8.*(1.0./2.0),t15,-t31-t32-t33+t39+t56+t57+t58,t35+t36+t37-t41+t59+t60-q10.*t45.*(1.0./2.0),-t42-t43-t44-t49-t61+q12.*t40.*(1.0./2.0)+1.0,t18-t19.*(1.0./4.0)-t20.*(1.0./4.0)+1.0,q6+t16,-q5+t25,0.0,0.0,0.0,-q6+t16,-t18-t20.*(1.0./4.0)+t27+1.0,q4+t26,0.0,0.0,0.0,q5+t25,-q4+t26,-t18+t20.*(1.0./4.0)-t27+1.0,0.0,0.0,0.0,0.0,0.0,0.0,t55,-t28-t29-t30+t46-t50-t51+q4.*t34.*(1.0./2.0),t31+t32+t33-t39-t62+q4.*t40.*(1.0./2.0)+q5.*t45.*(1.0./2.0),0.0,0.0,0.0,t28+t29+t30-t46+t50+t51-q4.*t34.*(1.0./2.0),t55,-t35-t36-t37+t41-t63-t64+q5.*t40.*(1.0./2.0),0.0,0.0,0.0,-t31-t32-t33+t39+t62-q4.*t40.*(1.0./2.0)-q5.*t45.*(1.0./2.0),t35+t36+t37-t41+t63+t64-q5.*t40.*(1.0./2.0),t55,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 2
    t65 = q4.*u8.*(1.0./2.0);
    t66 = q8.*u4.*(1.0./2.0);
    t67 = t8.*u6;
    t68 = q4.*u7.*(1.0./2.0);
    t69 = q7.*u4.*(1.0./2.0);
    t70 = q5.*u8.*(1.0./2.0);
    t71 = q8.*u5.*(1.0./2.0);
    t72 = q6.*u9.*(1.0./2.0);
    t73 = t67+t68+t69+t70+t71+t72;
    t74 = q4.*u5.*(1.0./2.0);
    t75 = q5.*u4.*(1.0./2.0);
    t76 = q4.*u4.*(1.0./2.0);
    t77 = t8.*u4;
    t78 = q4.*u9.*(1.0./2.0);
    t79 = t8.*u5;
    t80 = q5.*u9.*(1.0./2.0);
    t81 = q4.*u6.*(1.0./2.0);
    t82 = q6.*u4.*(1.0./2.0);
    t83 = q5.*u6.*(1.0./2.0);
    t84 = q6.*u5.*(1.0./2.0);
    t85 = q5.*u5.*(1.0./2.0);
    t116 = q10.*q12.*(1.0./4.0);
    t86 = t32-t116;
    t87 = q10.*q11.*(1.0./4.0);
    t88 = t29+t87;
    t89 = q10.^2;
    t90 = t89.*(1.0./8.0);
    t91 = q11.^2;
    t92 = q12.^2;
    t98 = t91.*(1.0./8.0);
    t99 = t92.*(1.0./8.0);
    t93 = t90-t98-t99+1.0./2.0;
    t94 = t17.*(1.0./8.0);
    t95 = t19.*(1.0./8.0);
    t96 = t20.*(1.0./8.0);
    t97 = t94+t95+t96+1.0./2.0;
    t100 = q11.*q12.*(1.0./4.0);
    t101 = t36+t100;
    t102 = t29-t87;
    t103 = t90-t98+t99-1.0./2.0;
    t104 = t31+t32+t33;
    t105 = t35+t36-t41;
    t106 = t105.*u5;
    t107 = t42+t43-1.0;
    t108 = t107.*u6;
    t109 = t36+t37-t41;
    t110 = t109.*u4;
    t111 = t32+t33-t39;
    t112 = t111.*u5;
    t113 = t29+t30-t46;
    t114 = t113.*u6;
    t115 = t110+t112+t114;
    t117 = t90+t98-t99-1.0./2.0;
    t118 = t36-t100;
    t119 = t32+t116;
    t120 = t28+t29-t46;
    t121 = t35+t36+t37;
    t122 = t121.*u6;
    t123 = t42+t44-1.0;
    t124 = t97.*u11;
    t125 = t28+t29+t30;
    t126 = t31+t32-t39;
    t127 = t126.*u6;
    t128 = t43+t44-1.0;
    t129 = t128.*u4;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t73,-t65-t66-u9+q5.*u7.*(1.0./2.0)+q7.*u5.*(1.0./2.0),-t77-t78+u8+q6.*u7.*(1.0./2.0)+q7.*u6.*(1.0./2.0),q4.*u10.*(1.0./2.0)+t86.*u5+t88.*u6-q4.*q11.*u12.*(1.0./4.0)+q4.*q12.*u11.*(1.0./4.0),q4.*u11.*(1.0./2.0)-t101.*u5-t103.*u6+q4.*q10.*u12.*(1.0./4.0)-q4.*q12.*u10.*(1.0./4.0),q4.*u12.*(1.0./2.0)+t117.*u5-t118.*u6-q4.*q10.*u11.*(1.0./4.0)+q4.*q11.*u10.*(1.0./4.0),t65+t66+u9-q5.*u7.*(1.0./2.0)-q7.*u5.*(1.0./2.0),t73,-t79-t80-u7+q6.*u8.*(1.0./2.0)+q8.*u6.*(1.0./2.0),q5.*u10.*(1.0./2.0)-t86.*u4-t93.*u6-q5.*q11.*u12.*(1.0./4.0)+q5.*q12.*u11.*(1.0./4.0),q5.*u11.*(1.0./2.0)+t101.*u4+t102.*u6+q5.*q10.*u12.*(1.0./4.0)-q5.*q12.*u10.*(1.0./4.0),q5.*u12.*(1.0./2.0)-t117.*u4-t119.*u6-q5.*q10.*u11.*(1.0./4.0)+q5.*q11.*u10.*(1.0./4.0),t77+t78-u8-q6.*u7.*(1.0./2.0)-q7.*u6.*(1.0./2.0),t79+t80+u7-q6.*u8.*(1.0./2.0)-q8.*u6.*(1.0./2.0),t73,q6.*u10.*(1.0./2.0)-t88.*u4+t93.*u5-q6.*q11.*u12.*(1.0./4.0)+q6.*q12.*u11.*(1.0./4.0),q6.*u11.*(1.0./2.0)-t102.*u5+t103.*u4+q6.*q10.*u12.*(1.0./4.0)-q6.*q12.*u10.*(1.0./4.0),q6.*u12.*(1.0./2.0)+t118.*u4+t119.*u5-q6.*q10.*u11.*(1.0./4.0)+q6.*q11.*u10.*(1.0./4.0),t76-q5.*u5.*(1.0./2.0)-q6.*u6.*(1.0./2.0),t74+t75+u6,t81+t82-u5,0.0,0.0,0.0,t74+t75-u6,-t76+t85-q6.*u6.*(1.0./2.0),t83+t84+u4,0.0,0.0,0.0,t81+t82+u5,t83+t84-u4,-t76-t85+q6.*u6.*(1.0./2.0),0.0,0.0,0.0,0.0,0.0,0.0,t115,-t106-t108+t104.*u4+t97.*u12,-t122-t124+t120.*u4+t123.*u5,0.0,0.0,0.0,t106+t108-t104.*u4-t97.*u12,t115,-t127-t129+t97.*u10+t125.*u5,0.0,0.0,0.0,t122+t124-t120.*u4-t123.*u5,t127+t129-t97.*u10-t125.*u5,t115,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,24]);
end
if nargout > 3
    out4 = [0.0;0.0;9.81e2./1.0e2;0.0;0.0;0.0];
end
