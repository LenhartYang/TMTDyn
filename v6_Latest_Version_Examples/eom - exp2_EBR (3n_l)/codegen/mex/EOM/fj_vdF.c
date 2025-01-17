/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fj_vdF.c
 *
 * Code generation for function 'fj_vdF'
 *
 */

/* Include files */
#include "fj_vdF.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Function Definitions */
void fj_vdF(const real_T in1[34], const real_T in2[36], real_T out1[18])
{
  /* FJ_VDF */
  /*     OUT1 = FJ_VDF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     26-Feb-2021 19:42:03 */
  out1[0] = -in1[5] * in2[18] * muDoubleScalarPower(muDoubleScalarAbs(in2[18]),
    in1[11] - 1.0);
  out1[1] = -in1[6] * in2[19] * muDoubleScalarPower(muDoubleScalarAbs(in2[19]),
    in1[11] - 1.0);
  out1[2] = -in1[7] * in2[20] * muDoubleScalarPower(muDoubleScalarAbs(in2[20]),
    in1[11] - 1.0);
  out1[3] = -in1[8] * in2[21];
  out1[4] = -in1[9] * in2[22] * muDoubleScalarPower(muDoubleScalarAbs(in2[22]),
    in1[11] - 1.0);
  out1[5] = -in1[10] * in2[23] * muDoubleScalarPower(muDoubleScalarAbs(in2[23]),
    in1[11] - 1.0);
  out1[6] = -in1[5] * in2[24] * muDoubleScalarPower(muDoubleScalarAbs(in2[24]),
    in1[11] - 1.0);
  out1[7] = -in1[6] * in2[25] * muDoubleScalarPower(muDoubleScalarAbs(in2[25]),
    in1[11] - 1.0);
  out1[8] = -in1[7] * in2[26] * muDoubleScalarPower(muDoubleScalarAbs(in2[26]),
    in1[11] - 1.0);
  out1[9] = -in1[8] * in2[27];
  out1[10] = -in1[9] * in2[28] * muDoubleScalarPower(muDoubleScalarAbs(in2[28]),
    in1[11] - 1.0);
  out1[11] = -in1[10] * in2[29] * muDoubleScalarPower(muDoubleScalarAbs(in2[29]),
    in1[11] - 1.0);
  out1[12] = -in1[5] * in2[30] * muDoubleScalarPower(muDoubleScalarAbs(in2[30]),
    in1[11] - 1.0);
  out1[13] = -in1[6] * in2[31] * muDoubleScalarPower(muDoubleScalarAbs(in2[31]),
    in1[11] - 1.0);
  out1[14] = -in1[7] * in2[32] * muDoubleScalarPower(muDoubleScalarAbs(in2[32]),
    in1[11] - 1.0);
  out1[15] = -in1[8] * in2[33];
  out1[16] = -in1[9] * in2[34] * muDoubleScalarPower(muDoubleScalarAbs(in2[34]),
    in1[11] - 1.0);
  out1[17] = -in1[10] * in2[35] * muDoubleScalarPower(muDoubleScalarAbs(in2[35]),
    in1[11] - 1.0);
}

/* End of code generation (fj_vdF.c) */
