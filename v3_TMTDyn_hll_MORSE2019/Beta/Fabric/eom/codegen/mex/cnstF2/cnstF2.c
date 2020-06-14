/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF2.c
 *
 * Code generation for function 'cnstF2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "cnstF2.h"

/* Function Definitions */
void cnstF2(const real_T in1[6], const real_T in2[224], real_T s, real_T out1
            [106], real_T out2[106], real_T *out3)
{
  int32_T i0;
  static const int8_T iv0[106] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  (void)in1;
  (void)in2;
  (void)s;

  /* CNSTF2 */
  /*     [OUT1,OUT2,OUT3] = CNSTF2(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 09:16:41 */
  for (i0 = 0; i0 < 106; i0++) {
    out1[i0] = iv0[i0];
    out2[i0] = 0.0;
  }

  *out3 = 0.0;
}

/* End of code generation (cnstF2.c) */
