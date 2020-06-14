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
#include "rt_nonfinite.h"
#include "loadsF1.h"

/* Function Definitions */
void loadsF1(const real_T in1[34], const real_T in2[12], real_T s, real_T out1
             [36], real_T out2[6])
{
  real_T t2;
  real_T t3;
  real_T out1_tmp;
  real_T b_out1_tmp;
  real_T t12;
  real_T t13_tmp;
  real_T b_t13_tmp;
  real_T t13;
  (void)s;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     05-Jan-2019 22:47:11 */
  t2 = in1[16] * in2[5] / 2.0;
  t3 = in2[4] / 2.0;
  out1[0] = 1.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = t2;
  out1[4] = in1[16];
  out1_tmp = in1[16] * in2[3];
  out1[5] = out1_tmp / 2.0;
  out1[6] = 0.0;
  out1[7] = 1.0;
  out1[8] = 0.0;
  out1[9] = -in1[16];
  out1[10] = t2;
  b_out1_tmp = in1[16] * in2[4];
  out1[11] = b_out1_tmp / 2.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = 1.0;
  out1[15] = out1_tmp * -0.5;
  out1[16] = b_out1_tmp * -0.5;
  out1[17] = t2;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = 1.0;
  out1[22] = in2[5] / 2.0;
  out1[23] = -t3;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = in2[5] * -0.5;
  out1[28] = 1.0;
  out1[29] = in2[3] / 2.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = t3;
  out1[34] = in2[3] * -0.5;
  out1[35] = 1.0;
  t2 = (in2[4] * in1[30] / 2.0 - in2[3] * in1[31] / 2.0) + in1[32];
  t3 = (in2[3] * in1[30] / 2.0 + in2[4] * in1[31] / 2.0) + in2[5] * in1[32] /
    2.0;
  out1_tmp = in2[3] * in1[32] / 2.0 + in1[31];
  b_out1_tmp = in2[5] * in1[30] / 2.0;
  t12 = out1_tmp - b_out1_tmp;
  t13_tmp = in2[5] * in1[31] / 2.0 + in1[30];
  b_t13_tmp = in2[4] * in1[32] / 2.0;
  t13 = t13_tmp - b_t13_tmp;
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = (((t13_tmp - in2[4] * t2 / 2.0) + in2[3] * t3 / 2.0) + in2[5] * t12 /
             2.0) - b_t13_tmp;
  out2[4] = (((out1_tmp + in2[3] * t2 / 2.0) + in2[4] * t3 / 2.0) - in2[5] * t13
             / 2.0) - b_out1_tmp;
  out2[5] = ((t2 - in2[3] * t12 / 2.0) + in2[5] * t3 / 2.0) + in2[4] * t13 / 2.0;
}

/* End of code generation (loadsF1.c) */