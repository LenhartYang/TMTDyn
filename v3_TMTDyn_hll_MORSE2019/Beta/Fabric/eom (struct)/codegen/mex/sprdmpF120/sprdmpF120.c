/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF120.c
 *
 * Code generation for function 'sprdmpF120'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sprdmpF120.h"
#include "sqrt.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 41,    /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 42,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 43,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 44,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 54,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 55,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 56,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 57,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 59,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 60,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 61,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 79,  /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 124, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 190, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 191, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 241, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 287, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 331, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 383, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 430, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 475, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 486, /* lineNo */
  "sprdmpF120",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF120.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

/* Function Definitions */
void sprdmpF120(const emlrtStack *sp, const real_T in1[6], const real_T in2[224],
                real_T s, real_T out1[636], real_T out2[6], real_T out3[6],
                real_T out4[6], real_T *out5, real_T out6[636], real_T out7[636],
                real_T *out8)
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t120;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t58;
  real_T t11;
  real_T t102;
  real_T t12;
  real_T t13_tmp;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t22;
  real_T t21;
  real_T t23;
  real_T t25;
  real_T t27_tmp;
  real_T t27;
  real_T t393;
  real_T t28;
  real_T t29;
  real_T t31;
  real_T t32_tmp;
  real_T t32;
  real_T t394;
  real_T t34;
  real_T t35;
  real_T t36_tmp;
  real_T t37_tmp;
  real_T t38;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t44_tmp;
  real_T b_t44_tmp;
  real_T c_t44_tmp;
  real_T t44;
  real_T t47_tmp;
  real_T t47;
  real_T t48;
  real_T t49;
  real_T t74_tmp;
  real_T t50;
  real_T t51;
  real_T t72;
  real_T t53_tmp;
  real_T t53;
  real_T t54;
  real_T t402;
  real_T t55;
  real_T t76;
  real_T t56;
  real_T t59_tmp;
  real_T t59;
  real_T t60;
  real_T t64;
  real_T t68;
  real_T t78;
  real_T t80;
  real_T t82;
  real_T t83;
  real_T t85;
  real_T t88;
  real_T t92;
  real_T t94;
  real_T t401;
  real_T t98;
  real_T t99;
  real_T t100_tmp;
  real_T t100;
  real_T t107_tmp;
  real_T t103;
  real_T t104;
  real_T t108;
  real_T t109;
  real_T t110;
  real_T t111;
  real_T t113;
  real_T t116_tmp;
  real_T t117;
  real_T t119_tmp;
  real_T t121;
  real_T t122;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t132;
  real_T t133;
  real_T t400;
  real_T t141;
  real_T t142;
  real_T t144;
  real_T t145;
  real_T t147;
  real_T t148;
  real_T t150;
  real_T t151;
  real_T t152;
  real_T t154;
  real_T t155;
  real_T t156;
  real_T t157_tmp;
  real_T t158;
  real_T t159;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t163;
  real_T t164;
  real_T t169_tmp;
  real_T t170_tmp;
  real_T b_t170_tmp;
  real_T c_t170_tmp;
  real_T d_t170_tmp;
  real_T t170;
  real_T t176_tmp;
  real_T b_t176_tmp;
  real_T c_t176_tmp;
  real_T d_t176_tmp;
  real_T t176;
  real_T t182_tmp;
  real_T t183_tmp;
  real_T t185_tmp;
  real_T b_t185_tmp;
  real_T c_t185_tmp;
  real_T d_t185_tmp;
  real_T e_t185_tmp;
  real_T t185;
  real_T t190_tmp;
  real_T t191_tmp;
  real_T b_t191_tmp;
  real_T c_t191_tmp;
  real_T t191;
  real_T t199;
  real_T t203;
  real_T t204;
  real_T t205;
  real_T t206;
  real_T t207;
  real_T t208;
  real_T t209;
  real_T t210;
  real_T t211;
  real_T t212;
  real_T t213;
  real_T t217_tmp;
  real_T t219_tmp;
  real_T b_t219_tmp;
  real_T c_t219_tmp;
  real_T d_t219_tmp;
  real_T t219;
  real_T t224_tmp;
  real_T b_t224_tmp;
  real_T c_t224_tmp;
  real_T t224;
  real_T t230_tmp;
  real_T b_t230_tmp;
  real_T c_t230_tmp;
  real_T d_t230_tmp;
  real_T t230;
  real_T t237_tmp;
  real_T t238_tmp;
  real_T b_t238_tmp;
  real_T c_t238_tmp;
  real_T d_t238_tmp;
  real_T e_t238_tmp;
  real_T t238;
  real_T t245;
  real_T t249;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t253;
  real_T t254;
  real_T t255;
  real_T t256;
  real_T t257;
  real_T t258;
  real_T t259;
  real_T t264_tmp;
  real_T b_t264_tmp;
  real_T c_t264_tmp;
  real_T d_t264_tmp;
  real_T t264;
  real_T t271_tmp;
  real_T b_t271_tmp;
  real_T t271;
  real_T t276;
  real_T t406;
  real_T t282_tmp;
  real_T b_t282_tmp;
  real_T c_t282_tmp;
  real_T t282;
  real_T t289;
  real_T t296;
  real_T t298_tmp;
  real_T t303;
  real_T t304_tmp;
  real_T t310;
  real_T t315_tmp;
  real_T t426;
  real_T t430;
  real_T t319;
  real_T t322_tmp;
  real_T t422;
  real_T t421;
  real_T t324_tmp;
  real_T t324;
  real_T t329_tmp;
  real_T b_t329_tmp;
  real_T t329;
  real_T t330;
  real_T t335_tmp;
  real_T t337_tmp;
  real_T b_t337_tmp;
  real_T t337;
  real_T t340;
  real_T t348;
  real_T t349;
  real_T t353;
  real_T t354;
  real_T t356;
  real_T t357;
  real_T t383_tmp;
  real_T t361;
  real_T t368;
  real_T t374;
  real_T t377;
  real_T t380;
  real_T t381;
  real_T t387;
  int32_T i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* SPRDMPF120 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF120(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 06:47:26 */
  st.site = &emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t2 = in2[94] * in2[94];
  st.site = &b_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t3 = in2[95] * in2[95];
  st.site = &c_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t4 = in2[96] * in2[96];
  st.site = &d_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t5 = in2[97] * in2[97];
  t6 = ((t2 + t3) + t4) + t5;
  t7 = 1.0 / t6;
  t120 = in2[95] * in2[96];
  t8 = t120 * t7 * 2.0;
  t9 = t2 * t7;
  t10 = t3 * t7;
  t58 = in2[94] * in2[96];
  t11 = t58 * t7 * 2.0;
  t102 = in2[95] * in2[97];
  t12 = t102 * t7 * 2.0;
  t13_tmp = in2[96] * in2[97];
  t13 = t13_tmp * t7 * 2.0;
  t14 = t4 * t7;
  st.site = &e_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t15 = in2[66] * in2[66];
  st.site = &f_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t16 = in2[67] * in2[67];
  st.site = &g_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t17 = in2[68] * in2[68];
  st.site = &h_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t18 = in2[69] * in2[69];
  t19 = ((t15 + t16) + t17) + t18;
  st.site = &i_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  if (t19 < 0.0) {
    c_st.site = &x_emlrtRSI;
    error(&c_st);
  }

  t20 = 1.0 / muDoubleScalarPower(t19, 1.5);
  t22 = t6;
  st.site = &j_emlrtRSI;
  b_sqrt(&st, &t22);
  t21 = 1.0 / t22;
  st.site = &k_emlrtRSI;
  b_sqrt(&st, &t19);
  t22 = 1.0 / t19;
  t23 = t22 - t15 * t20;
  t25 = t22 - t16 * t20;
  t27_tmp = in2[66] * in2[67];
  t27 = t27_tmp * in2[97] * t20 * t21 * 2.0;
  t393 = in2[66] * in2[68];
  t28 = t393 * in2[95] * t20 * t21 * 2.0;
  t29 = t22 - t17 * t20;
  t31 = t22 - t18 * t20;
  t32_tmp = in2[66] * in2[69];
  t32 = t32_tmp * in2[96] * t20 * t21 * 2.0;
  t394 = in2[67] * in2[69];
  t34 = t394 * in2[96] * t20 * t21 * 2.0;
  t35 = t5 * t7;
  t15 = in2[94] * in2[97];
  t36_tmp = t15 * t7 * 2.0;
  t19 = in2[94] * in2[95];
  t37_tmp = t19 * t7 * 2.0;
  t38 = in2[63] - in2[91];
  t39 = in2[64] - in2[92];
  st.site = &l_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  if (t6 < 0.0) {
    c_st.site = &x_emlrtRSI;
    error(&c_st);
  }

  t40 = 1.0 / muDoubleScalarPower(t6, 1.5);
  t41 = in2[65] - in2[93];
  t44_tmp = in2[94] * t21;
  b_t44_tmp = in2[97] * t21;
  c_t44_tmp = in2[96] * t21;
  t44 = (t44_tmp * t38 + b_t44_tmp * t39) - c_t44_tmp * t41;
  t47_tmp = in2[95] * t21;
  t47 = (t44_tmp * t39 + t47_tmp * t41) - b_t44_tmp * t38;
  t48 = t21 * t39;
  t49 = t15 * t38 * t40;
  t74_tmp = t19 * t40;
  t16 = t74_tmp * t41;
  t50 = ((t48 + t49) - t2 * t39 * t40) - t16;
  t51 = t21 * t41;
  t17 = t19 * t39 * t40;
  t72 = t58 * t38 * t40;
  t53_tmp = t2 * t40;
  t53 = ((t51 + t17) - t53_tmp * t41) - t72;
  t54 = t21 * t38;
  t402 = t58 * t40;
  t55 = t402 * t41;
  t76 = t15 * t39 * t40;
  t56 = ((t54 + t55) - t2 * t38 * t40) - t76;
  t19 = t19 * t38 * t40;
  t58 = t58 * t39 * t40;
  t59_tmp = t15 * t40;
  t59 = t59_tmp * t41;
  t60 = (t19 + t58) + t59;
  t64 = (c_t44_tmp * t38 + t44_tmp * t41) - t47_tmp * t39;
  t68 = (t47_tmp * t38 + c_t44_tmp * t39) + b_t44_tmp * t41;
  t78 = in2[67] * t22 - t47_tmp;
  t80 = in2[68] * t22 - c_t44_tmp;
  t82 = t21 - t53_tmp;
  st.site = &m_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t83 = 1.0 / (t6 * t6);
  t85 = in2[66] * t22 - t44_tmp;
  t88 = in2[69] * t22 - b_t44_tmp;
  t92 = t21 * t64;
  t18 = t120 * t38 * t40;
  t94 = ((t48 + t16) + t18) - t3 * t39 * t40;
  t15 = t120 * t39 * t40;
  t401 = t102 * t40;
  t6 = t401 * t41;
  t98 = ((-t54 + t3 * t38 * t40) + t15) + t6;
  t99 = t102 * t38 * t40;
  t100_tmp = t3 * t40;
  t100 = ((t51 - t17) + t99) - t100_tmp * t41;
  t22 = t102 * t39 * t40;
  t107_tmp = t120 * t40;
  t16 = t107_tmp * t41;
  t102 = (t19 + t22) - t16;
  t103 = t74_tmp * t47;
  t104 = t21 * t47;
  t108 = t21 * t88 * 2.0;
  t109 = t21 - t100_tmp;
  t110 = t74_tmp * t80 * 2.0;
  t111 = t21 * t80 * 2.0;
  t113 = t21 * t68;
  t55 = ((t54 - t55) + t15) - t4 * t38 * t40;
  t116_tmp = t13_tmp * t40;
  t19 = t116_tmp * t41;
  t117 = ((-t48 + t18) + t4 * t39 * t40) + t19;
  t17 = t13_tmp * t39 * t40;
  t119_tmp = t4 * t40;
  t72 = ((t51 + t72) + t17) - t119_tmp * t41;
  t15 = t13_tmp * t38 * t40;
  t120 = (t58 + t16) - t15;
  t121 = t107_tmp * t64;
  t122 = t21 * t44;
  t126 = t402 * t64;
  t127 = t107_tmp * t85 * 2.0;
  t128 = t21 - t119_tmp;
  t129 = t107_tmp * t88 * 2.0;
  t130 = t21 * t78 * 2.0;
  t132 = t402 * t88 * 2.0;
  t133 = t59_tmp * t44;
  t18 = ((t54 + t76) + t6) - t5 * t38 * t40;
  t16 = ((t48 - t49) + t19) - t5 * t39 * t40;
  t400 = t5 * t40;
  t17 = ((-t51 + t99) + t17) + t400 * t41;
  t15 += t59 - t22;
  t141 = t116_tmp * t44;
  t142 = t401 * t85 * 2.0;
  t6 = t59_tmp * t78 * 2.0;
  t144 = t21 - t400;
  t145 = t116_tmp * t85 * 2.0;
  t147 = t116_tmp * t78 * 2.0;
  t19 = in1[4] / 2.0;
  t148 = muDoubleScalarCos(t19);
  t150 = muDoubleScalarSin(t19);
  st.site = &n_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t151 = t148 * t148;
  st.site = &o_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t152 = t150 * t150;
  t58 = t44_tmp * t56;
  t154 = b_t44_tmp * t50;
  t155 = c_t44_tmp * t94;
  t156 = b_t44_tmp * t100;
  t157_tmp = t401 * t47;
  t158 = t119_tmp * t64;
  t159 = t44_tmp * t16;
  t160 = c_t44_tmp * t15;
  t161 = t116_tmp * t64;
  t162 = t8 + t36_tmp;
  t163 = t11 - t12;
  t164 = ((t9 + t10) - t14) - t35;
  t169_tmp = t59_tmp * t47;
  t170_tmp = c_t44_tmp * t53;
  b_t170_tmp = t47_tmp * t60;
  c_t170_tmp = t53_tmp * t44;
  d_t170_tmp = t74_tmp * t68;
  t170 = (((((((-t122 - t126) - t58) - t154) + t170_tmp) + b_t170_tmp) +
           c_t170_tmp) + d_t170_tmp) + t169_tmp;
  t176_tmp = t47_tmp * t98;
  b_t176_tmp = t44_tmp * t102;
  c_t176_tmp = t100_tmp * t68;
  d_t176_tmp = t74_tmp * t44;
  t176 = (((((((-t113 - t121) - t155) - t156) + t157_tmp) + t176_tmp) +
           b_t176_tmp) + c_t176_tmp) + d_t176_tmp;
  t182_tmp = t402 * t44;
  t183_tmp = t107_tmp * t68;
  t185_tmp = c_t44_tmp * t55;
  b_t185_tmp = t47_tmp * t117;
  c_t185_tmp = t44_tmp * t72;
  d_t185_tmp = b_t44_tmp * t120;
  e_t185_tmp = t116_tmp * t47;
  t185 = (((((((t92 - t158) + t185_tmp) + c_t185_tmp) + b_t185_tmp) + d_t185_tmp)
           + t182_tmp) + t183_tmp) + e_t185_tmp;
  t190_tmp = t401 * t68;
  t191_tmp = b_t44_tmp * t18;
  b_t191_tmp = t47_tmp * t17;
  c_t191_tmp = t400 * t47;
  t191 = (((((((-t104 + t133) - t159) - t160) - t161) + t191_tmp) + b_t191_tmp)
          + c_t191_tmp) + t190_tmp;
  st.site = &p_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t199 = muDoubleScalarPower(muDoubleScalarAbs(((((((((t170 * in2[206] + t176 *
    in2[207]) + t185 * in2[208]) + t191 * in2[209]) + t163 * in2[177]) + t162 *
    in2[204]) + t164 * in2[203]) - t162 * in2[176]) - t163 * in2[205]) - t164 *
    in2[175]), in1[1] - 1.0);
  t203 = t44_tmp * t50;
  t204 = t47_tmp * t53;
  t205 = t44_tmp * t100;
  t206 = b_t44_tmp * t102;
  t207 = t401 * t44;
  t208 = t47_tmp * t55;
  t209 = b_t44_tmp * t72;
  t210 = t400 * t44;
  t211 = -t8 + t36_tmp;
  t212 = t13 + t37_tmp;
  t19 = t9 - t10;
  t213 = (t19 + t14) - t35;
  t217_tmp = t74_tmp * t64;
  t219_tmp = b_t44_tmp * t56;
  b_t219_tmp = c_t44_tmp * t60;
  c_t219_tmp = t53_tmp * t47;
  d_t219_tmp = t402 * t68;
  t219 = (((((((-t104 - t133) - t203) - t204) + t219_tmp) + b_t219_tmp) +
           c_t219_tmp) + t217_tmp) + d_t219_tmp;
  t224_tmp = t47_tmp * t94;
  b_t224_tmp = c_t44_tmp * t98;
  c_t224_tmp = t100_tmp * t64;
  t224 = (((((((-t92 + t103) + t183_tmp) - t205) - t206) - t207) + t224_tmp) +
          b_t224_tmp) + c_t224_tmp;
  t230_tmp = c_t44_tmp * t117;
  b_t230_tmp = t44_tmp * t120;
  c_t230_tmp = t119_tmp * t68;
  d_t230_tmp = t402 * t47;
  t230 = (((((((-t113 + t121) - t141) - t208) - t209) + t230_tmp) + b_t230_tmp)
          + c_t230_tmp) + d_t230_tmp;
  t237_tmp = t116_tmp * t68;
  t238_tmp = t44_tmp * t18;
  b_t238_tmp = b_t44_tmp * t16;
  c_t238_tmp = t47_tmp * t15;
  d_t238_tmp = c_t44_tmp * t17;
  e_t238_tmp = t401 * t64;
  t238 = (((((((t122 + t169_tmp) - t210) + t238_tmp) + b_t238_tmp) + d_t238_tmp)
           + c_t238_tmp) + e_t238_tmp) + t237_tmp;
  st.site = &q_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t245 = muDoubleScalarPower(muDoubleScalarAbs(((((((((t219 * in2[206] + t224 *
    in2[207]) + t230 * in2[208]) + t238 * in2[209]) + t211 * in2[175]) + t212 *
    in2[205]) + t213 * in2[204]) - t212 * in2[177]) - t211 * in2[203]) - t213 *
    in2[176]), in1[1] - 1.0);
  t249 = t44_tmp * t53;
  t250 = c_t44_tmp * t56;
  t251 = t100_tmp * t47;
  t252 = t44_tmp * t55;
  t253 = t47_tmp * t120;
  t254 = t107_tmp * t47;
  t255 = t47_tmp * t18;
  t256 = c_t44_tmp * t16;
  t257 = t11 + t12;
  t258 = -t13 + t37_tmp;
  t259 = (t19 - t14) + t35;
  t264_tmp = t47_tmp * t50;
  b_t264_tmp = b_t44_tmp * t60;
  c_t264_tmp = t53_tmp * t64;
  d_t264_tmp = t59_tmp * t68;
  t264 = (((((((-t92 - t103) + t182_tmp) - t249) - t250) + t264_tmp) +
           b_t264_tmp) + c_t264_tmp) + d_t264_tmp;
  t271_tmp = t44_tmp * t94;
  b_t271_tmp = t47_tmp * t100;
  t50 = b_t44_tmp * t98;
  t94 = c_t44_tmp * t102;
  t100 = t107_tmp * t44;
  t271 = (((((((t104 + t190_tmp) + t217_tmp) - t251) + t271_tmp) + t50) +
           b_t271_tmp) + t94) + t100;
  t102 = b_t44_tmp * t117;
  t120 = c_t44_tmp * t72;
  t60 = t119_tmp * t44;
  t276 = (((((((-t122 + t126) + t237_tmp) - t252) - t253) - t254) + t120) + t102)
    + t60;
  t406 = t44_tmp * t15;
  t282_tmp = b_t44_tmp * t17;
  b_t282_tmp = t400 * t68;
  c_t282_tmp = t59_tmp * t64;
  t282 = (((((((-t113 + t141) - t157_tmp) - t255) - t256) + t282_tmp) + t406) +
          b_t282_tmp) + c_t282_tmp;
  st.site = &r_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t289 = muDoubleScalarPower(muDoubleScalarAbs(((((((((t264 * in2[206] + t271 *
    in2[207]) + t276 * in2[208]) + t282 * in2[209]) + t258 * in2[176]) + t257 *
    in2[203]) + t259 * in2[205]) - t257 * in2[175]) - t258 * in2[204]) - t259 *
    in2[177]), in1[1] - 1.0);
  t13_tmp = t59_tmp * t80 * 2.0;
  t296 = (((((t130 + t132) + t47_tmp * t82 * 2.0) + in2[95] * t2 * t83 * 2.0) +
           t74_tmp * t85 * 2.0) - t53_tmp * t78 * 2.0) - t13_tmp;
  t99 = t100_tmp * t85 * 2.0;
  t298_tmp = t401 * t80 * 2.0;
  t54 = t119_tmp * t88 * 2.0;
  t303 = (((((t111 + t142) - t6) + c_t44_tmp * t144 * 2.0) + in2[96] * t5 * t83 *
           2.0) + t116_tmp * t88 * 2.0) - t400 * t80 * 2.0;
  t304_tmp = t393 * in2[97] * t20 * t21 * 2.0;
  t76 = t44_tmp * t25 * 2.0;
  t48 = t27_tmp * in2[95] * t20 * t21 * 2.0;
  t117 = in2[67] * in2[68];
  t49 = t117 * in2[97] * t20 * t21 * 2.0;
  t59 = t117 * in2[94] * t20 * t21 * 2.0;
  t19 = in2[68] * in2[69];
  t310 = ((t28 + b_t44_tmp * t29 * 2.0) + t19 * in2[96] * t20 * t21 * 2.0) - t59;
  t40 = t32_tmp * in2[95] * t20 * t21 * 2.0;
  t315_tmp = t21 * t85 * 2.0;
  t51 = in2[94] * t3 * t83 * 2.0;
  t426 = t44_tmp * t109 * 2.0;
  t430 = t74_tmp * t78 * 2.0;
  t319 = (((((-t129 - t99) + t298_tmp) + t315_tmp) + t426) + t51) + t430;
  t322_tmp = t402 * t78 * 2.0;
  t422 = in2[97] * t4 * t83 * 2.0;
  t421 = b_t44_tmp * t128 * 2.0;
  t324_tmp = t116_tmp * t80 * 2.0;
  t324 = (((((t108 - t127) - t54) + t421) + t422) + t322_tmp) + t324_tmp;
  t329_tmp = t47_tmp * t23 * 2.0;
  b_t329_tmp = t27_tmp * in2[94] * t20 * t21 * 2.0;
  t329 = ((-t32 + t304_tmp) + t329_tmp) + b_t329_tmp;
  t330 = ((t34 + t76) + t48) - t49;
  t335_tmp = t394 * in2[94] * t20 * t21 * 2.0;
  t337_tmp = c_t44_tmp * t31 * 2.0;
  b_t337_tmp = t19 * in2[97] * t20 * t21 * 2.0;
  t337 = ((-t40 + t337_tmp) + t335_tmp) + b_t337_tmp;
  st.site = &s_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t340 = muDoubleScalarPower(muDoubleScalarAbs(((((((t296 * in2[206] + t303 *
    in2[209]) + t330 * in2[179]) + t310 * in2[180]) - t319 * in2[207]) - t324 *
    in2[208]) - t329 * in2[178]) - t337 * in2[181]), in1[1] - 1.0);
  t98 = t74_tmp * t88 * 2.0;
  t348 = (((((t111 + t6) + c_t44_tmp * t82 * 2.0) + in2[96] * t2 * t83 * 2.0) +
           t402 * t85 * 2.0) - t53_tmp * t80 * 2.0) - t98;
  t349 = t119_tmp * t85 * 2.0;
  t353 = (((((t108 - t110) + t127) + b_t44_tmp * t109 * 2.0) + in2[97] * t3 *
           t83 * 2.0) + t401 * t78 * 2.0) - t100_tmp * t88 * 2.0;
  t354 = t400 * t78 * 2.0;
  t116_tmp = t27_tmp * in2[96] * t20 * t21 * 2.0;
  t356 = t44_tmp * t29 * 2.0;
  t357 = t393 * in2[96] * t20 * t21 * 2.0;
  t6 = t19 * in2[95] * t20 * t21 * 2.0;
  t383_tmp = t19 * in2[94] * t20 * t21 * 2.0;
  t361 = ((t32 + t47_tmp * t31 * 2.0) + t394 * in2[97] * t20 * t21 * 2.0) -
    t383_tmp;
  t74_tmp = in2[94] * t4 * t83 * 2.0;
  t27_tmp = t44_tmp * t128 * 2.0;
  t22 = t402 * t80 * 2.0;
  t368 = (((((t129 - t147) + t315_tmp) - t349) + t27_tmp) + t74_tmp) + t22;
  t55 = in2[95] * t5 * t83 * 2.0;
  t72 = t47_tmp * t144 * 2.0;
  t17 = t401 * t88 * 2.0;
  t374 = (((((t130 - t145) + t13_tmp) - t354) + t72) + t55) + t17;
  t18 = c_t44_tmp * t23 * 2.0;
  t15 = t393 * in2[94] * t20 * t21 * 2.0;
  t377 = ((-t27 + t40) + t18) + t15;
  t16 = b_t44_tmp * t25 * 2.0;
  t19 = t394 * in2[95] * t20 * t21 * 2.0;
  t380 = ((t59 - t116_tmp) + t16) + t19;
  t381 = ((t49 + t356) + t357) - t6;
  st.site = &t_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t387 = muDoubleScalarPower(muDoubleScalarAbs(((((((t348 * in2[206] + t353 *
    in2[207]) + t381 * in2[180]) + t361 * in2[181]) - t368 * in2[208]) - t374 *
    in2[209]) - t377 * in2[178]) - t380 * in2[179]), in1[1] - 1.0);
  t56 = b_t44_tmp * t82 * 2.0;
  t393 = in2[97] * t2 * t83 * 2.0;
  t394 = t59_tmp * t85 * 2.0;
  t53 = t100_tmp * t80 * 2.0;
  t132 = (((((t130 - t132) + t145) + t47_tmp * t128 * 2.0) + in2[95] * t4 * t83 *
           2.0) + t107_tmp * t80 * 2.0) - t119_tmp * t78 * 2.0;
  t400 = t400 * t85 * 2.0;
  t401 = c_t44_tmp * t25 * 2.0;
  t402 = t117 * in2[95] * t20 * t21 * 2.0;
  t128 = ((-t34 + t6) + t44_tmp * t31 * 2.0) + t32_tmp * in2[97] * t20 * t21 *
    2.0;
  memset(&out1[0], 0, 63U * sizeof(real_T));
  out1[63] = ((t9 + t10) - t4 * t7) - t5 * t7;
  out1[64] = t162;
  out1[65] = -t11 + t12;
  memset(&out1[66], 0, 25U * sizeof(real_T));
  out1[91] = ((-t9 - t10) + t14) + t35;
  out1[92] = -t8 - t36_tmp;
  out1[93] = t163;
  out1[94] = (((((((t122 + t126) + t58) + t154) - t170_tmp) - b_t170_tmp) -
               c_t170_tmp) - t169_tmp) - d_t170_tmp;
  out1[95] = (((((((t113 + t121) + t155) + t156) - t176_tmp) - b_t176_tmp) -
               c_t176_tmp) - d_t176_tmp) - t157_tmp;
  out1[96] = (((((((-t92 + t158) - t185_tmp) - b_t185_tmp) - c_t185_tmp) -
                d_t185_tmp) - t182_tmp) - e_t185_tmp) - t183_tmp;
  out1[97] = (((((((t104 - t133) + t159) + t160) + t161) - t191_tmp) -
               b_t191_tmp) - c_t191_tmp) - t190_tmp;
  memset(&out1[98], 0, 71U * sizeof(real_T));
  out1[169] = t8 - t36_tmp;
  out1[170] = ((t9 - t10) + t14) - t5 * t7;
  out1[171] = t212;
  memset(&out1[172], 0, 25U * sizeof(real_T));
  out1[197] = t211;
  t58 = -t9 + t10;
  out1[198] = (t58 - t14) + t35;
  out1[199] = -t13 - t37_tmp;
  out1[200] = (((((((t104 + t133) + t203) + t204) - t219_tmp) - b_t219_tmp) -
                c_t219_tmp) - t217_tmp) - d_t219_tmp;
  out1[201] = (((((((t92 - t103) + t205) + t206) + t207) - t224_tmp) -
                b_t224_tmp) - c_t224_tmp) - t183_tmp;
  out1[202] = (((((((t113 - t121) + t141) + t208) + t209) - t230_tmp) -
                b_t230_tmp) - c_t230_tmp) - d_t230_tmp;
  out1[203] = (((((((-t122 + t210) - t238_tmp) - b_t238_tmp) - c_t238_tmp) -
                 d_t238_tmp) - t169_tmp) - e_t238_tmp) - t237_tmp;
  memset(&out1[204], 0, 71U * sizeof(real_T));
  out1[275] = t257;
  out1[276] = t13 - t37_tmp;
  out1[277] = t259;
  memset(&out1[278], 0, 25U * sizeof(real_T));
  out1[303] = -t11 - t12;
  out1[304] = t258;
  out1[305] = (t58 + t14) - t35;
  out1[306] = (((((((t92 + t103) + t249) + t250) - t264_tmp) - b_t264_tmp) -
                c_t264_tmp) - t182_tmp) - d_t264_tmp;
  out1[307] = (((((((-t104 + t251) - t271_tmp) - b_t271_tmp) - t50) - t94) -
                t100) - t217_tmp) - t190_tmp;
  out1[308] = (((((((t122 - t126) + t252) + t253) + t254) - t102) - t120) - t60)
    - t237_tmp;
  out1[309] = (((((((t113 - t141) + t157_tmp) + t255) + t256) - t406) - t282_tmp)
               - b_t282_tmp) - c_t282_tmp;
  memset(&out1[310], 0, 74U * sizeof(real_T));
  out1[384] = ((t32 - t329_tmp) - b_t329_tmp) - t304_tmp;
  out1[385] = ((t34 + t76) + t48) - in2[67] * in2[68] * in2[97] * t20 * t21 *
    2.0;
  out1[386] = t310;
  out1[387] = ((t40 - t337_tmp) - t335_tmp) - b_t337_tmp;
  memset(&out1[388], 0, 24U * sizeof(real_T));
  out1[412] = t296;
  out1[413] = (((((t129 + t99) - t315_tmp) - t51) - t426) - t430) - t298_tmp;
  out1[414] = (((((-t108 + t127) + t54) - t422) - t421) - t322_tmp) - t324_tmp;
  out1[415] = t303;
  memset(&out1[416], 0, 74U * sizeof(real_T));
  out1[490] = ((t27 - t18) - t15) - t40;
  out1[491] = ((t116_tmp - t16) - t59) - t19;
  out1[492] = ((t49 + t356) + t357) - in2[68] * in2[69] * in2[95] * t20 * t21 *
    2.0;
  out1[493] = t361;
  memset(&out1[494], 0, 24U * sizeof(real_T));
  out1[518] = t348;
  out1[519] = t353;
  out1[520] = (((((-t129 + t147) + t349) - t315_tmp) - t74_tmp) - t27_tmp) - t22;
  out1[521] = (((((-t130 + t145) + t354) - t55) - t72) - t13_tmp) - t17;
  memset(&out1[522], 0, 74U * sizeof(real_T));
  t58 = b_t44_tmp * t23 * 2.0;
  t102 = t32_tmp * in2[94] * t20 * t21 * 2.0;
  out1[596] = ((t28 - t58) - t116_tmp) - t102;
  out1[597] = ((t27 + t401) + t402) - t335_tmp;
  t72 = t47_tmp * t29 * 2.0;
  t55 = t117 * in2[96] * t20 * t21 * 2.0;
  out1[598] = ((t304_tmp - t72) - t55) - t383_tmp;
  out1[599] = t128;
  memset(&out1[600], 0, 24U * sizeof(real_T));
  t120 = t108 + t110;
  t6 = t53_tmp * t88 * 2.0;
  out1[624] = ((((t120 + t56) + t393) + t394) - t6) - t322_tmp;
  t22 = c_t44_tmp * t109 * 2.0;
  t18 = in2[96] * t3 * t83 * 2.0;
  t16 = t107_tmp * t78 * 2.0;
  out1[625] = (((((-t111 + t142) + t53) - t18) - t22) - t16) - t98;
  out1[626] = t132;
  t17 = t44_tmp * t144 * 2.0;
  t15 = in2[94] * t5 * t83 * 2.0;
  t19 = t59_tmp * t88 * 2.0;
  out1[627] = (((((-t147 + t298_tmp) + t400) - t315_tmp) - t15) - t17) - t19;
  memset(&out1[628], 0, sizeof(real_T) << 3);
  t406 = ((((t120 - t322_tmp) + t56) + t393) + t394) - t6;
  t394 = (((((t111 - t142) + t98) - t53) + t22) + t18) + t16;
  t393 = (((((t147 - t298_tmp) + t315_tmp) - t400) + t17) + t15) + t19;
  t421 = ((-t28 + t116_tmp) + t58) + t102;
  t422 = ((t27 - t335_tmp) + t401) + t402;
  t426 = ((-t304_tmp + t383_tmp) + t72) + t55;
  st.site = &u_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t430 = muDoubleScalarPower(muDoubleScalarAbs(((((((t406 * in2[206] + t132 *
    in2[208]) + t422 * in2[179]) + t128 * in2[181]) - t394 * in2[207]) - t393 *
    in2[209]) - t421 * in2[178]) - t426 * in2[180]), in1[1] - 1.0);
  t15 = t148 * t150;
  out2[0] = in1[0] * ((((((t151 * -7.1054273579999992E-18 + t152 *
    7.1054273579999992E-18) - t15 * 0.154) + t44_tmp * t44) + b_t44_tmp * t47) -
                       c_t44_tmp * t64) + t47_tmp * t68) *
    -0.00026666666666666668;
  out2[1] = in1[0] * (((((t151 * 0.010174174174 + t152 * 0.010174174174) -
    t44_tmp * t47) + b_t44_tmp * t44) - t47_tmp * t64) - c_t44_tmp * t68) *
    0.00026666666666666668;
  t19 = t152 * -0.077 + t151 * 0.077;
  t15 *= 1.4210854716E-17;
  out2[2] = in1[0] * (((((t19 - t15) + c_t44_tmp * t44) - t47_tmp * t47) +
                       t44_tmp * t64) + b_t44_tmp * t68) * -0.0008;
  out2[3] = in1[0] * (((t44_tmp * t78 * 2.0 + b_t44_tmp * t80 * 2.0) - t47_tmp *
                       t85 * 2.0) - c_t44_tmp * t88 * 2.0) *
    -4.2666666666666668E-11;
  out2[4] = in1[0] * (((t44_tmp * t80 * 2.0 - b_t44_tmp * t78 * 2.0) - c_t44_tmp
                       * t85 * 2.0) + t47_tmp * t88 * 2.0) *
    -1.421066666666666E-8;
  out2[5] = in1[0] * (((c_t44_tmp * t78 * 2.0 - t47_tmp * t80 * 2.0) + t44_tmp *
                       t88 * 2.0) - b_t44_tmp * t85 * 2.0) *
    -4.75111111111111E-9;
  t120 = in1[2] * t164 * t199;
  t55 = in1[2] * t163 * t199;
  t72 = -in1[2] * t162 * t199;
  t13_tmp = in1[2] * t162 * t199;
  t99 = in1[2] * t170 * t199;
  t54 = in1[2] * t176 * t199;
  t76 = in1[2] * t185 * t199;
  t48 = in1[2] * t191 * t199;
  out3[0] = ((((((((t72 * in2[176] - t120 * in2[175]) + t55 * in2[177]) +
                  t13_tmp * in2[204]) + t120 * in2[203]) - t55 * in2[205]) + t99
               * in2[206]) + t54 * in2[207]) + t76 * in2[208]) + t48 * in2[209];
  t49 = in1[2] * t211 * t245;
  t59 = in1[2] * t212 * t245;
  t40 = in1[2] * t213 * t245;
  t51 = in1[2] * t219 * t245;
  t53 = in1[2] * t224 * t245;
  t56 = in1[2] * t230 * t245;
  t60 = in1[2] * t238 * t245;
  out3[1] = ((((((((t49 * in2[175] - t59 * in2[177]) - t40 * in2[176]) - t49 *
                  in2[203]) + t59 * in2[205]) + t40 * in2[204]) + t51 * in2[206])
              + t53 * in2[207]) + t56 * in2[208]) + t60 * in2[209];
  t117 = in1[2] * t258 * t289;
  t94 = in1[2] * t259 * t289;
  t100 = -in1[2] * t257 * t289;
  t50 = in1[2] * t257 * t289;
  t98 = in1[2] * t264 * t289;
  t116_tmp = in1[2] * t271 * t289;
  t74_tmp = in1[2] * t276 * t289;
  t27_tmp = in1[2] * t282 * t289;
  out3[2] = ((((((((t100 * in2[175] + t117 * in2[176]) - t94 * in2[177]) + t50 *
                  in2[203]) - t117 * in2[204]) + t94 * in2[205]) + t98 * in2[206])
              + t116_tmp * in2[207]) + t74_tmp * in2[208]) + t27_tmp * in2[209];
  t356 = in1[3] * t329 * t340;
  t357 = -in1[3] * t310 * t340;
  t349 = in1[3] * t337 * t340;
  t354 = in1[3] * t319 * t340;
  t400 = in1[3] * t324 * t340;
  out3[3] = ((((((t357 * in2[180] - in1[3] * t296 * t340 * in2[206]) + t356 *
                 in2[178]) - in1[3] * t330 * t340 * in2[179]) - in1[3] * t303 *
               t340 * in2[209]) + t349 * in2[181]) + t354 * in2[207]) + t400 *
    in2[208];
  t401 = in1[3] * t377 * t387;
  t402 = in1[3] * t380 * t387;
  t324_tmp = -in1[3] * t361 * t387;
  t329_tmp = in1[3] * t368 * t387;
  b_t329_tmp = in1[3] * t374 * t387;
  out3[4] = ((((((t324_tmp * in2[181] - in1[3] * t348 * t387 * in2[206]) + t401 *
                 in2[178]) + t402 * in2[179]) - in1[3] * t353 * t387 * in2[207])
              - in1[3] * t381 * t387 * in2[180]) + t329_tmp * in2[208]) +
    b_t329_tmp * in2[209];
  t337_tmp = in1[3] * t421 * t430;
  b_t337_tmp = in1[3] * t426 * t430;
  t282_tmp = -in1[3] * t128 * t430;
  b_t282_tmp = in1[3] * t394 * t430;
  c_t282_tmp = in1[3] * t393 * t430;
  out3[5] = ((((((t282_tmp * in2[181] + t337_tmp * in2[178]) - in1[3] * t422 *
                 t430 * in2[179]) + b_t337_tmp * in2[180]) - in1[3] * t132 *
               t430 * in2[208]) - in1[3] * t406 * t430 * in2[206]) + b_t282_tmp *
             in2[207]) + c_t282_tmp * in2[209];
  for (i = 0; i < 6; i++) {
    out4[i] = 0.0;
  }

  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  st.site = &v_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  t22 = (t38 * t38 + t39 * t39) + t41 * t41;
  st.site = &v_emlrtRSI;
  b_sqrt(&st, &t22);
  *out5 = (t19 + t22) - t15;
  t102 = in1[0] * t164 * 0.00026666666666666668;
  t58 = in1[0] * t162 * 0.00026666666666666668;
  t6 = in1[0] * t213 * 0.00026666666666666668;
  t22 = in1[0] * t212 * 0.00026666666666666668;
  t17 = in1[0] * t257 * 0.0008;
  t18 = in1[0] * t259 * 0.0008;
  memset(&out6[0], 0, 378U * sizeof(real_T));
  out6[378] = t102;
  t16 = in1[0] * t211;
  out6[379] = t16 * -0.00026666666666666668;
  out6[380] = t17;
  out6[381] = 0.0;
  out6[382] = 0.0;
  out6[383] = 0.0;
  out6[384] = t58;
  out6[385] = t6;
  t15 = in1[0] * t258;
  out6[386] = t15 * -0.0008;
  out6[387] = 0.0;
  out6[388] = 0.0;
  out6[389] = 0.0;
  t19 = in1[0] * t163;
  out6[390] = t19 * -0.00026666666666666668;
  out6[391] = t22;
  out6[392] = t18;
  out6[393] = 0.0;
  out6[394] = 0.0;
  out6[395] = 0.0;
  out6[396] = 0.0;
  out6[397] = 0.0;
  out6[398] = 0.0;
  out6[399] = in1[0] * t329 * -4.2666666666666668E-11;
  out6[400] = in1[0] * t377 * -1.421066666666666E-8;
  out6[401] = in1[0] * t421 * -4.75111111111111E-9;
  out6[402] = 0.0;
  out6[403] = 0.0;
  out6[404] = 0.0;
  out6[405] = in1[0] * t330 * 4.2666666666666668E-11;
  out6[406] = in1[0] * t380 * -1.421066666666666E-8;
  out6[407] = in1[0] * t422 * 4.75111111111111E-9;
  out6[408] = 0.0;
  out6[409] = 0.0;
  out6[410] = 0.0;
  out6[411] = in1[0] * t310 * 4.2666666666666668E-11;
  out6[412] = in1[0] * t381 * 1.421066666666666E-8;
  out6[413] = in1[0] * t426 * -4.75111111111111E-9;
  out6[414] = 0.0;
  out6[415] = 0.0;
  out6[416] = 0.0;
  out6[417] = in1[0] * t337 * -4.2666666666666668E-11;
  out6[418] = in1[0] * t361 * 1.421066666666666E-8;
  out6[419] = in1[0] * t128 * 4.75111111111111E-9;
  memset(&out6[420], 0, 126U * sizeof(real_T));
  out6[546] = -t102;
  out6[547] = t16 * 0.00026666666666666668;
  out6[548] = -t17;
  out6[549] = 0.0;
  out6[550] = 0.0;
  out6[551] = 0.0;
  out6[552] = -t58;
  out6[553] = -t6;
  out6[554] = t15 * 0.0008;
  out6[555] = 0.0;
  out6[556] = 0.0;
  out6[557] = 0.0;
  out6[558] = t19 * 0.00026666666666666668;
  out6[559] = -t22;
  out6[560] = -t18;
  out6[561] = 0.0;
  out6[562] = 0.0;
  out6[563] = 0.0;
  out6[564] = in1[0] * t170 * -0.00026666666666666668;
  out6[565] = in1[0] * t219 * -0.00026666666666666668;
  out6[566] = in1[0] * t264 * -0.0008;
  out6[567] = in1[0] * t296 * 4.2666666666666668E-11;
  out6[568] = in1[0] * t348 * 1.421066666666666E-8;
  out6[569] = in1[0] * t406 * 4.75111111111111E-9;
  out6[570] = in1[0] * t176 * -0.00026666666666666668;
  out6[571] = in1[0] * t224 * -0.00026666666666666668;
  out6[572] = in1[0] * t271 * -0.0008;
  out6[573] = in1[0] * t319 * -4.2666666666666668E-11;
  out6[574] = in1[0] * t353 * 1.421066666666666E-8;
  out6[575] = in1[0] * t394 * -4.75111111111111E-9;
  out6[576] = in1[0] * t185 * -0.00026666666666666668;
  out6[577] = in1[0] * t230 * -0.00026666666666666668;
  out6[578] = in1[0] * t276 * -0.0008;
  out6[579] = in1[0] * t324 * -4.2666666666666668E-11;
  out6[580] = in1[0] * t368 * -1.421066666666666E-8;
  out6[581] = in1[0] * t132 * 4.75111111111111E-9;
  out6[582] = in1[0] * t191 * -0.00026666666666666668;
  out6[583] = in1[0] * t238 * -0.00026666666666666668;
  out6[584] = in1[0] * t282 * -0.0008;
  out6[585] = in1[0] * t303 * 4.2666666666666668E-11;
  out6[586] = in1[0] * t374 * -1.421066666666666E-8;
  out6[587] = in1[0] * t393 * -4.75111111111111E-9;
  memset(&out6[588], 0, 48U * sizeof(real_T));
  memset(&out7[0], 0, 378U * sizeof(real_T));
  out7[378] = -in1[2] * t164 * t199;
  out7[379] = t49;
  out7[380] = t100;
  out7[381] = 0.0;
  out7[382] = 0.0;
  out7[383] = 0.0;
  out7[384] = t72;
  out7[385] = -in1[2] * t213 * t245;
  out7[386] = t117;
  out7[387] = 0.0;
  out7[388] = 0.0;
  out7[389] = 0.0;
  out7[390] = t55;
  out7[391] = -in1[2] * t212 * t245;
  out7[392] = -in1[2] * t259 * t289;
  out7[393] = 0.0;
  out7[394] = 0.0;
  out7[395] = 0.0;
  out7[396] = 0.0;
  out7[397] = 0.0;
  out7[398] = 0.0;
  out7[399] = t356;
  out7[400] = t401;
  out7[401] = t337_tmp;
  out7[402] = 0.0;
  out7[403] = 0.0;
  out7[404] = 0.0;
  out7[405] = -in1[3] * t330 * t340;
  out7[406] = t402;
  out7[407] = -in1[3] * t422 * t430;
  out7[408] = 0.0;
  out7[409] = 0.0;
  out7[410] = 0.0;
  out7[411] = t357;
  out7[412] = -in1[3] * t381 * t387;
  out7[413] = b_t337_tmp;
  out7[414] = 0.0;
  out7[415] = 0.0;
  out7[416] = 0.0;
  out7[417] = t349;
  out7[418] = t324_tmp;
  out7[419] = t282_tmp;
  memset(&out7[420], 0, 126U * sizeof(real_T));
  out7[546] = t120;
  out7[547] = -t49;
  out7[548] = t50;
  out7[549] = 0.0;
  out7[550] = 0.0;
  out7[551] = 0.0;
  out7[552] = t13_tmp;
  out7[553] = t40;
  out7[554] = -t117;
  out7[555] = 0.0;
  out7[556] = 0.0;
  out7[557] = 0.0;
  out7[558] = -t55;
  out7[559] = t59;
  out7[560] = t94;
  out7[561] = 0.0;
  out7[562] = 0.0;
  out7[563] = 0.0;
  out7[564] = t99;
  out7[565] = t51;
  out7[566] = t98;
  out7[567] = -in1[3] * t296 * t340;
  out7[568] = -in1[3] * t348 * t387;
  out7[569] = -in1[3] * t406 * t430;
  out7[570] = t54;
  out7[571] = t53;
  out7[572] = t116_tmp;
  out7[573] = t354;
  out7[574] = -in1[3] * t353 * t387;
  out7[575] = b_t282_tmp;
  out7[576] = t76;
  out7[577] = t56;
  out7[578] = t74_tmp;
  out7[579] = t400;
  out7[580] = t329_tmp;
  out7[581] = -in1[3] * t132 * t430;
  out7[582] = t48;
  out7[583] = t60;
  out7[584] = t27_tmp;
  out7[585] = -in1[3] * t303 * t340;
  out7[586] = b_t329_tmp;
  out7[587] = c_t282_tmp;
  memset(&out7[588], 0, 48U * sizeof(real_T));
  *out8 = 1.0;
}

/* End of code generation (sprdmpF120.c) */
