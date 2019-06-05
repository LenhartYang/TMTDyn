/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rjtipF.c
 *
 * Code generation for function 'rjtipF'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rjtipF.h"

/* Function Definitions */
void rjtipF(const emlrtStack *sp, const real_T in1[34], const real_T in2[24],
            real_T s, real_T r_jtip[18])
{
  real_T t2;
  real_T t3;
  real_T t7;
  real_T t8;
  real_T t9;
  real_T t10;
  real_T t12;
  real_T t11;
  real_T t17;
  real_T t13;
  real_T t16;
  real_T t14;
  real_T t15;
  real_T t18;
  real_T t19;
  real_T t20;
  real_T t24;
  real_T t28;
  real_T t32;
  real_T t36;
  real_T t38;
  real_T t44;
  real_T t42;
  real_T t43;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T b_in2[18];
  int32_T i0;
  int32_T i1;
  (void)sp;
  (void)s;

  /* RJTIPF */
  /*     R_JTIP = RJTIPF(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.0. */
  /*     30-Jan-2019 17:32:06 */
  t2 = in1[4] * 0.5;
  t3 = in2[8] + t2;
  t7 = (in2[3] * in2[6] * 0.5 + in2[4] * in2[7] * 0.5) + in2[5] * t3 * 0.5;
  t8 = in2[5] * in2[6] * 0.5;
  t9 = in2[4] * t3 * 0.5;
  t10 = in2[3] * in2[7] * 0.5;
  t12 = in2[4] * in2[6] * 0.5;
  t11 = ((in2[8] + t2) + t10) - t12;
  t17 = in2[3] * t3 * 0.5;
  t13 = (in2[7] + t8) - t17;
  t16 = in2[5] * in2[7] * 0.5;
  t14 = (in2[6] + t9) - t16;
  t15 = in2[3] * t7 * 0.5;
  t18 = in2[4] * t11 * 0.5;
  t19 = in2[4] * t7 * 0.5;
  t20 = in2[5] * t14 * 0.5;
  t24 = ((in2[3] * in2[9] * 0.25 + in2[4] * in2[10] * 0.25) + in2[5] * in2[11] *
         0.25) - 1.0;
  t28 = ((in2[3] * 0.5 + in2[9] * 0.5) + in2[4] * in2[11] * 0.25) - in2[5] *
    in2[10] * 0.25;
  t32 = ((in2[4] * 0.5 + in2[10] * 0.5) + in2[5] * in2[9] * 0.25) - in2[3] *
    in2[11] * 0.25;
  t36 = ((in2[5] * 0.5 + in2[11] * 0.5) + in2[3] * in2[10] * 0.25) - in2[4] *
    in2[9] * 0.25;
  t7 = in2[5] * t7 * 0.5;
  t38 = in2[3] * t13 * 0.5;
  t44 = in2[4] * t14 * 0.5;
  t42 = ((((((in1[4] + in2[2]) + in2[8]) + t10) - t12) + t7) + t38) - t44;
  t43 = t24 * t24;
  t45 = t28 * t28;
  t46 = t32 * t32;
  t47 = t36 * t36;
  b_in2[0] = in2[0];
  b_in2[1] = (((((in2[0] + in2[6]) + t9) + t15) + t18) - in2[5] * in2[7] * 0.5)
    - in2[5] * t13 * 0.5;
  b_in2[2] = (((((in2[0] + in2[6]) + t9) + t15) - t16) + t18) - in2[5] * t13 *
    0.5;
  b_in2[3] = in2[1];
  b_in2[4] = (((((in2[1] + in2[7]) + t8) + t19) + t20) - in2[3] * t3 * 0.5) -
    in2[3] * t11 * 0.5;
  b_in2[5] = (((((in2[1] + in2[7]) + t8) - t17) + t19) + t20) - in2[3] * t11 *
    0.5;
  b_in2[6] = in2[2] + t2;
  b_in2[7] = t42;
  b_in2[8] = t42;
  b_in2[9] = (in2[0] + in1[4] * in2[4] * 0.5) + in1[4] * in2[3] * in2[5] * 0.25;
  b_in2[10] = (((((((in2[0] + in2[6]) + t9) + t15) - t16) + t18) - in2[5] * t13 *
                0.5) - in1[4] * t24 * t32) + in1[4] * t28 * t36;
  b_in2[11] = (((((((in2[0] + in2[6]) + t9) + t15) - t16) + t18) - in2[5] * t13 *
                0.5) - in1[16] * t24 * t32 * 2.0) + in1[16] * t28 * t36 * 2.0;
  b_in2[12] = (in2[1] - in1[4] * in2[3] * 0.5) + in1[4] * in2[4] * in2[5] * 0.25;
  b_in2[13] = (((((((in2[1] + in2[7]) + t8) - t17) + t19) + t20) - in2[3] * t11 *
                0.5) + in1[4] * t24 * t28) + in1[4] * t32 * t36;
  b_in2[14] = (((((((in2[1] + in2[7]) + t8) - t17) + t19) + t20) - in2[3] * t11 *
                0.5) + in1[16] * t24 * t28 * 2.0) + in1[16] * t32 * t36 * 2.0;
  b_in2[15] = (((in1[4] + in2[2]) - in1[4] * (in2[3] * in2[3]) * 0.125) - in1[4]
               * (in2[4] * in2[4]) * 0.125) + in1[4] * (in2[5] * in2[5]) * 0.125;
  b_in2[16] = ((((((((((in1[4] + in2[2]) + in2[8]) + t10) - t12) + t7) + t38) +
                  in1[4] * t43 * 0.5) - in1[4] * t45 * 0.5) - in1[4] * t46 * 0.5)
               + in1[4] * t47 * 0.5) - in2[4] * t14 * 0.5;
  b_in2[17] = ((((((((((in1[4] + in2[2]) + in2[8]) + t10) - t12) + t7) + t38) -
                  t44) + in1[16] * t43) - in1[16] * t45) - in1[16] * t46) + in1
    [16] * t47;
  for (i0 = 0; i0 < 6; i0++) {
    for (i1 = 0; i1 < 3; i1++) {
      r_jtip[i1 + 3 * i0] = b_in2[i1 + 3 * i0];
    }
  }
}

/* End of code generation (rjtipF.c) */
