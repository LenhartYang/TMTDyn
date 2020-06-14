/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF7.c
 *
 * Code generation for function 'massF7'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "massF7.h"
#include "error.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 18,    /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 20,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 21,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 23,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 24,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 25,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 37,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 38,  /* lineNo */
  "massF7",                            /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/massF7.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 61,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

/* Function Definitions */
void massF7(const emlrtStack *sp, const real_T in1[6], const real_T in2[224],
            real_T s, real_T out1[36], real_T out2[636], real_T out3[636],
            real_T out4[6])
{
  static const real_T dv0[36] = { 0.0024, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0024,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0024, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    4.2759999999999987E-8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 8.5263999999999975E-8,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 4.2759999999999987E-8 };

  int32_T i;
  static const real_T dv1[6] = { 0.0, 0.0, -9.81, 0.0, 0.0, 0.0 };

  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T out2_tmp;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10_tmp;
  real_T t10;
  real_T t11_tmp;
  real_T t11;
  real_T t12_tmp;
  real_T t12;
  real_T t13_tmp;
  real_T t13;
  real_T b_out2_tmp;
  real_T c_out2_tmp;
  real_T d_out2_tmp;
  real_T e_out2_tmp;
  real_T f_out2_tmp;
  real_T g_out2_tmp;
  real_T h_out2_tmp;
  real_T t32;
  real_T i_out2_tmp;
  real_T j_out2_tmp;
  real_T k_out2_tmp;
  real_T t82;
  real_T l_out2_tmp;
  real_T m_out2_tmp;
  real_T n_out2_tmp;
  real_T t18;
  real_T t19;
  real_T t21;
  real_T t22_tmp;
  real_T t23_tmp;
  real_T t24;
  real_T t25_tmp;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30_tmp;
  real_T t31_tmp;
  real_T t34;
  real_T t35;
  real_T t36;
  real_T t37_tmp;
  real_T t38_tmp;
  real_T t39;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t49;
  real_T t50;
  real_T t51;
  real_T t52;
  real_T t53;
  real_T t59_tmp;
  real_T t60_tmp;
  real_T t67_tmp;
  real_T t68_tmp;
  real_T t73;
  real_T t76_tmp;
  real_T out3_tmp;
  real_T b_out3_tmp;
  real_T c_out3_tmp;
  real_T d_out3_tmp;
  real_T e_out3_tmp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (void)in1;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&out1[0], &dv0[0], 36U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    out4[i] = dv1[i];
  }

  /* MASSF7 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF7(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 05:27:48 */
  st.site = &emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t2 = in2[38] * in2[38];
  st.site = &b_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t3 = in2[39] * in2[39];
  st.site = &c_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t4 = in2[40] * in2[40];
  st.site = &d_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t5 = in2[41] * in2[41];
  t6 = ((t2 + t3) + t4) + t5;
  out2_tmp = t6;
  st.site = &e_emlrtRSI;
  b_sqrt(&st, &out2_tmp);
  t7 = 1.0 / out2_tmp;
  st.site = &f_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  if (t6 < 0.0) {
    c_st.site = &k_emlrtRSI;
    error(&c_st);
  }

  t8 = 1.0 / muDoubleScalarPower(t6, 1.5);
  st.site = &g_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t9 = 1.0 / (t6 * t6);
  t10_tmp = t2 * t8;
  t10 = t7 - t10_tmp;
  t11_tmp = t3 * t8;
  t11 = t7 - t11_tmp;
  t12_tmp = t4 * t8;
  t12 = t7 - t12_tmp;
  t13_tmp = t5 * t8;
  t13 = t7 - t13_tmp;
  memset(&out2[0], 0, 210U * sizeof(real_T));
  out2[210] = 1.0;
  out2[211] = 0.0;
  out2[212] = 0.0;
  out2[213] = 0.0;
  out2[214] = 0.0;
  out2[215] = 0.0;
  out2[216] = 0.0;
  out2[217] = 1.0;
  out2[218] = 0.0;
  out2[219] = 0.0;
  out2[220] = 0.0;
  out2[221] = 0.0;
  out2[222] = 0.0;
  out2[223] = 0.0;
  out2[224] = 1.0;
  out2[225] = 0.0;
  out2[226] = 0.0;
  out2[227] = 0.0;
  out2[228] = 0.0;
  out2[229] = 0.0;
  out2[230] = 0.0;
  b_out2_tmp = in2[39] * t7;
  c_out2_tmp = in2[39] * t2;
  out2[231] = c_out2_tmp * t9 * -2.0 - b_out2_tmp * t10 * 2.0;
  d_out2_tmp = in2[40] * t7;
  e_out2_tmp = in2[40] * t2;
  out2[232] = e_out2_tmp * t9 * -2.0 - d_out2_tmp * t10 * 2.0;
  f_out2_tmp = in2[41] * t7;
  g_out2_tmp = in2[41] * t2;
  out2[233] = g_out2_tmp * t9 * -2.0 - f_out2_tmp * t10 * 2.0;
  out2[234] = 0.0;
  out2[235] = 0.0;
  out2[236] = 0.0;
  h_out2_tmp = in2[38] * t7;
  t32 = in2[38] * t3;
  out2[237] = t32 * t9 * 2.0 + h_out2_tmp * t11 * 2.0;
  i_out2_tmp = in2[41] * t3;
  out2[238] = i_out2_tmp * t9 * -2.0 - f_out2_tmp * t11 * 2.0;
  j_out2_tmp = in2[40] * t3;
  out2[239] = j_out2_tmp * t9 * 2.0 + d_out2_tmp * t11 * 2.0;
  out2[240] = 0.0;
  out2[241] = 0.0;
  out2[242] = 0.0;
  k_out2_tmp = in2[41] * t4;
  out2[243] = k_out2_tmp * t9 * 2.0 + f_out2_tmp * t12 * 2.0;
  out2_tmp = in2[38] * t4;
  out2[244] = out2_tmp * t9 * 2.0 + h_out2_tmp * t12 * 2.0;
  t82 = in2[39] * t4;
  out2[245] = t82 * t9 * -2.0 - b_out2_tmp * t12 * 2.0;
  out2[246] = 0.0;
  out2[247] = 0.0;
  out2[248] = 0.0;
  l_out2_tmp = in2[40] * t5;
  out2[249] = l_out2_tmp * t9 * -2.0 - d_out2_tmp * t13 * 2.0;
  m_out2_tmp = in2[39] * t5;
  out2[250] = m_out2_tmp * t9 * 2.0 + b_out2_tmp * t13 * 2.0;
  n_out2_tmp = in2[38] * t5;
  out2[251] = n_out2_tmp * t9 * 2.0 + h_out2_tmp * t13 * 2.0;
  memset(&out2[252], 0, 384U * sizeof(real_T));
  st.site = &h_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t18 = 1.0 / muDoubleScalarPower(t6, 3.0);
  st.site = &i_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  t19 = 1.0 / muDoubleScalarPower(t6, 2.5);
  t6 = in2[38] * t8;
  t21 = t2 * t3 * t18 * 8.0;
  t22_tmp = in2[39] * t8;
  t23_tmp = in2[40] * t8;
  t24 = t4 * t5 * t18 * 8.0;
  t25_tmp = in2[41] * t8;
  t27 = t6 * 3.0 - in2[38] * t2 * t19 * 3.0;
  t28 = t6 - out2_tmp * t19 * 3.0;
  t29 = t6 - t32 * t19 * 3.0;
  t30_tmp = in2[38] * in2[41];
  t31_tmp = t30_tmp * t8;
  t32 = t6 - n_out2_tmp * t19 * 3.0;
  t34 = t22_tmp * 3.0 - in2[39] * t3 * t19 * 3.0;
  t35 = t22_tmp - m_out2_tmp * t19 * 3.0;
  t36 = t22_tmp - c_out2_tmp * t19 * 3.0;
  t37_tmp = in2[39] * in2[40];
  t38_tmp = t37_tmp * t8;
  t39 = t22_tmp - t82 * t19 * 3.0;
  t41 = t23_tmp * 3.0 - in2[40] * t4 * t19 * 3.0;
  t42 = t2 * t4 * t18 * 8.0;
  t43 = t23_tmp - e_out2_tmp * t19 * 3.0;
  t44 = t23_tmp - j_out2_tmp * t19 * 3.0;
  t45 = t23_tmp - l_out2_tmp * t19 * 3.0;
  t49 = t25_tmp * 3.0 - in2[41] * t5 * t19 * 3.0;
  t50 = t3 * t5 * t18 * 8.0;
  t51 = t25_tmp - i_out2_tmp * t19 * 3.0;
  t52 = t25_tmp - g_out2_tmp * t19 * 3.0;
  t53 = t25_tmp - k_out2_tmp * t19 * 3.0;
  t59_tmp = in2[38] * in2[40];
  t60_tmp = t59_tmp * t8;
  t6 = in2[38] * in2[39];
  out2_tmp = t6 * t8;
  t67_tmp = in2[39] * in2[41];
  t68_tmp = t67_tmp * t8;
  t73 = t3 * t4 * t18 * 8.0;
  t76_tmp = in2[40] * in2[41];
  t22_tmp = t76_tmp * t8;
  t82 = t2 * t5 * t18 * 8.0;
  memset(&out3[0], 0, 231U * sizeof(real_T));
  e_out2_tmp = t6 * t9 * -4.0;
  j_out2_tmp = t3 * t9 * 2.0;
  t23_tmp = t7 * t11 * 2.0;
  l_out2_tmp = t59_tmp * t5 * t18 * 8.0 + t60_tmp * t13 * 2.0;
  i_out2_tmp = t30_tmp * t4 * t18 * 8.0 + t31_tmp * t12 * 2.0;
  out3[231] = ((-in2[151] * ((((t21 - j_out2_tmp) - t23_tmp) + h_out2_tmp * t29 *
    2.0) + t10_tmp * t11 * 2.0) - in2[152] * (i_out2_tmp + f_out2_tmp * t28 *
    2.0)) + in2[153] * (l_out2_tmp + d_out2_tmp * t32 * 2.0)) + in2[150] *
    (((e_out2_tmp + b_out2_tmp * t27 * 2.0) + out2_tmp * t10 * 2.0) + t6 * t2 *
     t18 * 8.0);
  g_out2_tmp = t4 * t9 * 2.0;
  t19 = t7 * t12 * 2.0;
  t25_tmp = t6 * t5 * t18 * 8.0 + out2_tmp * t13 * 2.0;
  k_out2_tmp = t59_tmp * t9 * -4.0;
  t8 = t30_tmp * t3 * t18 * 8.0 + t31_tmp * t11 * 2.0;
  out3[232] = ((-in2[152] * ((((t42 - g_out2_tmp) - t19) + h_out2_tmp * t28 *
    2.0) + t10_tmp * t12 * 2.0) + in2[151] * (t8 + f_out2_tmp * t29 * 2.0)) -
               in2[153] * (t25_tmp + b_out2_tmp * t32 * 2.0)) + in2[150] *
    (((k_out2_tmp + d_out2_tmp * t27 * 2.0) + t60_tmp * t10 * 2.0) + t59_tmp *
     t2 * t18 * 8.0);
  out3_tmp = t5 * t9 * 2.0;
  b_out3_tmp = t7 * t13 * 2.0;
  c_out3_tmp = t6 * t4 * t18 * 8.0 + out2_tmp * t12 * 2.0;
  d_out3_tmp = t59_tmp * t3 * t18 * 8.0 + t60_tmp * t11 * 2.0;
  e_out3_tmp = t30_tmp * t9 * -4.0;
  out3[233] = ((-in2[153] * ((((t82 - out3_tmp) - b_out3_tmp) + h_out2_tmp * t32
    * 2.0) + t10_tmp * t13 * 2.0) - in2[151] * (d_out3_tmp + d_out2_tmp * t29 *
    2.0)) + in2[152] * (c_out3_tmp + b_out2_tmp * t28 * 2.0)) + in2[150] *
    (((e_out3_tmp + f_out2_tmp * t27 * 2.0) + t31_tmp * t10 * 2.0) + t30_tmp *
     t2 * t18 * 8.0);
  out3[234] = 0.0;
  out3[235] = 0.0;
  out3[236] = 0.0;
  c_out2_tmp = t2 * t9 * 2.0;
  t32 = t7 * t10 * 2.0;
  n_out2_tmp = t37_tmp * t5 * t18 * 8.0 + t38_tmp * t13 * 2.0;
  m_out2_tmp = t67_tmp * t4 * t18 * 8.0 + t68_tmp * t12 * 2.0;
  out3[237] = ((in2[150] * ((((t21 - c_out2_tmp) - t32) + b_out2_tmp * t36 * 2.0)
    + t11_tmp * t10 * 2.0) + in2[153] * (n_out2_tmp + d_out2_tmp * t35 * 2.0)) -
               in2[152] * (m_out2_tmp + f_out2_tmp * t39 * 2.0)) - in2[151] *
    (((e_out2_tmp + h_out2_tmp * t34 * 2.0) + out2_tmp * t11 * 2.0) + t6 * t3 *
     t18 * 8.0);
  e_out2_tmp = t37_tmp * t2 * t18 * 8.0 + t38_tmp * t10 * 2.0;
  t6 = t67_tmp * t9 * -4.0;
  out3[238] = ((-in2[153] * ((((t50 - out3_tmp) - b_out3_tmp) + b_out2_tmp * t35
    * 2.0) + t11_tmp * t13 * 2.0) + in2[150] * (e_out2_tmp + d_out2_tmp * t36 *
    2.0)) - in2[152] * (c_out3_tmp + h_out2_tmp * t39 * 2.0)) + in2[151] * (((t6
    + f_out2_tmp * t34 * 2.0) + t68_tmp * t11 * 2.0) + t67_tmp * t3 * t18 * 8.0);
  c_out3_tmp = t37_tmp * t9 * -4.0;
  out2_tmp = t67_tmp * t2 * t18 * 8.0 + t68_tmp * t10 * 2.0;
  out3[239] = ((in2[152] * ((((t73 - g_out2_tmp) - t19) + b_out2_tmp * t39 * 2.0)
    + t11_tmp * t12 * 2.0) + in2[150] * (out2_tmp + f_out2_tmp * t36 * 2.0)) -
               in2[153] * (t25_tmp + h_out2_tmp * t35 * 2.0)) - in2[151] *
    (((c_out3_tmp + d_out2_tmp * t34 * 2.0) + t38_tmp * t11 * 2.0) + t37_tmp *
     t3 * t18 * 8.0);
  out3[240] = 0.0;
  out3[241] = 0.0;
  out3[242] = 0.0;
  t25_tmp = t76_tmp * t9 * -4.0;
  out3[243] = ((in2[153] * ((((t24 - out3_tmp) - b_out3_tmp) + d_out2_tmp * t45 *
    2.0) + t12_tmp * t13 * 2.0) + in2[150] * (e_out2_tmp + b_out2_tmp * t43 *
    2.0)) - in2[151] * (d_out3_tmp + h_out2_tmp * t44 * 2.0)) - in2[152] *
    (((t25_tmp + f_out2_tmp * t41 * 2.0) + t22_tmp * t12 * 2.0) + t76_tmp * t4 *
     t18 * 8.0);
  e_out2_tmp = t76_tmp * t3 * t18 * 8.0 + t22_tmp * t11 * 2.0;
  out3[244] = ((in2[150] * ((((t42 - c_out2_tmp) - t32) + d_out2_tmp * t43 * 2.0)
    + t12_tmp * t10 * 2.0) - in2[153] * (n_out2_tmp + b_out2_tmp * t45 * 2.0)) +
               in2[151] * (e_out2_tmp + f_out2_tmp * t44 * 2.0)) - in2[152] *
    (((k_out2_tmp + h_out2_tmp * t41 * 2.0) + t60_tmp * t12 * 2.0) + t59_tmp *
     t4 * t18 * 8.0);
  k_out2_tmp = t76_tmp * t2 * t18 * 8.0 + t22_tmp * t10 * 2.0;
  out3[245] = ((-in2[151] * ((((t73 - j_out2_tmp) - t23_tmp) + d_out2_tmp * t44 *
    2.0) + t12_tmp * t11 * 2.0) + in2[150] * (k_out2_tmp + f_out2_tmp * t43 *
    2.0)) - in2[153] * (l_out2_tmp + h_out2_tmp * t45 * 2.0)) + in2[152] *
    (((c_out3_tmp + b_out2_tmp * t41 * 2.0) + t38_tmp * t12 * 2.0) + t37_tmp *
     t4 * t18 * 8.0);
  out3[246] = 0.0;
  out3[247] = 0.0;
  out3[248] = 0.0;
  out3[249] = ((-in2[152] * ((((t24 - g_out2_tmp) - t19) + f_out2_tmp * t53 *
    2.0) + t13_tmp * t12 * 2.0) - in2[151] * (t8 + h_out2_tmp * t51 * 2.0)) +
               in2[150] * (out2_tmp + b_out2_tmp * t52 * 2.0)) + in2[153] *
    (((t25_tmp + d_out2_tmp * t49 * 2.0) + t22_tmp * t13 * 2.0) + t76_tmp * t5 *
     t18 * 8.0);
  out3[250] = ((in2[151] * ((((t50 - j_out2_tmp) - t23_tmp) + f_out2_tmp * t51 *
    2.0) + t13_tmp * t11 * 2.0) - in2[152] * (i_out2_tmp + h_out2_tmp * t53 *
    2.0)) + in2[150] * (k_out2_tmp + d_out2_tmp * t52 * 2.0)) - in2[153] * (((t6
    + b_out2_tmp * t49 * 2.0) + t68_tmp * t13 * 2.0) + t67_tmp * t5 * t18 * 8.0);
  out3[251] = ((in2[150] * ((((t82 - c_out2_tmp) - t32) + f_out2_tmp * t52 * 2.0)
    + t13_tmp * t10 * 2.0) - in2[151] * (e_out2_tmp + d_out2_tmp * t51 * 2.0)) +
               in2[152] * (m_out2_tmp + b_out2_tmp * t53 * 2.0)) - in2[153] *
    (((e_out3_tmp + h_out2_tmp * t49 * 2.0) + t31_tmp * t13 * 2.0) + t30_tmp *
     t5 * t18 * 8.0);
  memset(&out3[252], 0, 384U * sizeof(real_T));
}

/* End of code generation (massF7.c) */
