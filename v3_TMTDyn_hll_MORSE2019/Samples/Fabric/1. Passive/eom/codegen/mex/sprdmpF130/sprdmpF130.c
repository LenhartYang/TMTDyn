/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF130.c
 *
 * Code generation for function 'sprdmpF130'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "sprdmpF130.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 69,  /* lineNo */
  "sprdmpF130",                        /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF130.m"/* pathName */
};

/* Function Definitions */
void sprdmpF130(const emlrtStack *sp, const real_T in1[6], const real_T in2[224],
                real_T s, real_T out1[318], real_T out2[3], real_T out3[3],
                real_T out4[3], real_T *out5, real_T out6[318], real_T out7[318],
                real_T *out8)
{
  real_T t3;
  real_T t2;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t11;
  real_T t14;
  real_T t17;
  real_T t20;
  real_T t23_tmp;
  real_T t23;
  real_T t25;
  real_T t30;
  emlrtStack st;
  (void)in1;
  (void)s;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF130 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF130(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 08:43:45 */
  t3 = in2[105] / 2.0;
  t2 = muDoubleScalarCos(t3);
  t4 = muDoubleScalarSin(t3);
  t5 = t2 * t2;
  t6 = t4 * t4;
  t7 = t2 * t4 * 2.0;
  t8 = t5 - t6;
  t11 = t2 * 0.03 + t4 * 0.038;
  t14 = t2 * 0.038 - t4 * 0.03;
  t17 = t2 * 0.019 - t4 * 0.015;
  t20 = t2 * 0.015 + t4 * 0.019;
  t3 = t4 * t11;
  t23_tmp = t2 * t14;
  t23 = ((t3 / 2.0 + t4 * t20) - t23_tmp / 2.0) - t2 * t17;
  t25 = (in2[98] + t3) - t23_tmp;
  t23_tmp = t2 * t11;
  t3 = t4 * t14;
  t30 = ((t23_tmp / 2.0 + t2 * t20) + t3 / 2.0) + t4 * t17;
  t17 = (in2[100] + t23_tmp) + t3;
  t3 = t2 * t25;
  t23_tmp = t4 * t17;
  t20 = ((t2 * t23 + t23_tmp / 2.0) - t3 / 2.0) - t4 * t30;
  t11 = t3 - t23_tmp;
  t3 = t4 * t25;
  t23_tmp = t2 * t17;
  t14 = t23_tmp + t3;
  memset(&out1[0], 0, 98U * sizeof(real_T));
  out1[98] = t8;
  out1[99] = 0.0;
  out1[100] = -t7;
  out1[101] = 0.0;
  out1[102] = 0.0;
  out1[103] = 0.0;
  out1[104] = 0.0;
  t3 = ((t2 * t30 + t4 * t23) - t3 / 2.0) - t23_tmp / 2.0;
  out1[105] = ((t4 * t20 - t4 * t11 / 2.0) - t2 * t14 / 2.0) + t2 * t3;
  memset(&out1[106], 0, 99U * sizeof(real_T));
  out1[205] = t5 + t6;
  memset(&out1[206], 0, 104U * sizeof(real_T));
  out1[310] = t7;
  out1[311] = 0.0;
  out1[312] = t8;
  out1[313] = 0.0;
  out1[314] = 0.0;
  out1[315] = 0.0;
  out1[316] = 0.0;
  out1[317] = ((-t2 * t20 + t2 * t11 / 2.0) - t4 * t14 / 2.0) + t4 * t3;
  out2[0] = 0.0;
  out3[0] = 0.0;
  out4[0] = 0.0;
  out2[1] = 0.0;
  out3[1] = 0.0;
  out4[1] = 0.0;
  out2[2] = 0.0;
  out3[2] = 0.0;
  out4[2] = 0.0;
  *out5 = (in2[99] * in2[99] + t25 * t25) + t17 * t17;
  st.site = &c_emlrtRSI;
  b_sqrt(&st, out5);
  memset(&out6[0], 0, 318U * sizeof(real_T));
  memset(&out7[0], 0, 318U * sizeof(real_T));
  *out8 = 1.0;
}

/* End of code generation (sprdmpF130.c) */
