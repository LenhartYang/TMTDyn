/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loadsF1.c
 *
 * Code generation for function 'loadsF1'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "loadsF1.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 19,  /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 21,  /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 22,  /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 12,  /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void loadsF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[12],
             real_T s, real_T out1[36], real_T out2[6])
{
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5;
  real_T t6_tmp;
  real_T t6;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12_tmp;
  real_T t12;
  real_T t22;
  real_T t13;
  real_T t26;
  emlrtStack st;
  emlrtStack b_st;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     15-May-2019 14:15:56 */
  st.site = &emlrtRSI;
  t2 = in2[3] * in2[3];
  st.site = &b_emlrtRSI;
  t3 = in2[4] * in2[4];
  st.site = &c_emlrtRSI;
  t4 = in2[5] * in2[5];
  t5 = ((-t2 - t3) - t4) + 1.0;
  st.site = &d_emlrtRSI;
  if (t5 < 0.0) {
    b_st.site = &g_emlrtRSI;
    error(&b_st);
  }

  t6_tmp = muDoubleScalarSqrt(t5);
  t6 = 1.0 / t6_tmp;
  st.site = &e_emlrtRSI;
  t8 = in2[5] * 0.029;
  t5 = in2[3] * in2[4] * t6;
  t9 = t5 * 2.0;
  t10 = t6_tmp * 2.0;
  t11 = in2[4] * 2.0;
  t12_tmp = in2[3] * in2[5] * t6;
  t12 = t12_tmp * 2.0;
  t22 = in2[4] * in2[5] * t6;
  t13 = t22 * 2.0;
  out1[0] = 1.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  t26 = t5 * 0.029;
  out1[3] = t8 - t26;
  t3 *= t6;
  out1[4] = t6_tmp * 0.029 - t3 * 0.029;
  out1[5] = in2[3] * 0.029 - t22 * 0.029;
  out1[6] = 0.0;
  out1[7] = 1.0;
  out1[8] = 0.0;
  t5 = t2 * t6;
  out1[9] = t6_tmp * -0.029 + t5 * 0.029;
  out1[10] = t8 + t26;
  out1[11] = in2[4] * 0.029 + t12_tmp * 0.029;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = 1.0;
  out1[15] = in2[3] * -0.058;
  out1[16] = in2[4] * -0.058;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t10 + t5 * 2.0;
  out1[22] = in2[5] * 2.0 + t9;
  out1[23] = -t11 + t12;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = in2[5] * -2.0 + t9;
  out1[28] = t10 + t3 * 2.0;
  out1[29] = in2[3] * 2.0 + t13;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = t11 + t12;
  out1[34] = in2[3] * -2.0 + t13;
  out1[35] = t10 + t4 * t6 * 2.0;
  t5 = (t6_tmp * in1[31] + in2[3] * in1[32]) - in2[5] * in1[30];
  t3 = (t6_tmp * in1[32] + in2[4] * in1[30]) - in2[3] * in1[31];
  t22 = (t6_tmp * in1[30] + in2[5] * in1[31]) - in2[4] * in1[32];
  t26 = (in2[3] * in1[30] + in2[4] * in1[31]) + in2[5] * in1[32];
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((in2[5] * t5 - in2[4] * t3) + in2[3] * t26) + t6_tmp * t22;
  out2[4] = ((in2[3] * t3 - in2[5] * t22) + in2[4] * t26) + t6_tmp * t5;
  out2[5] = ((-in2[3] * t5 + in2[4] * t22) + in2[5] * t26) + t6_tmp * t3;
}

/* End of code generation (loadsF1.c) */
