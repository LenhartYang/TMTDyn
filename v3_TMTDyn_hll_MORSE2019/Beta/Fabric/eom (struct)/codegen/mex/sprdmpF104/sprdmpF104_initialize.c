/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF104_initialize.c
 *
 * Code generation for function 'sprdmpF104_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF104.h"
#include "sprdmpF104_initialize.h"
#include "_coder_sprdmpF104_mex.h"
#include "sprdmpF104_data.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

/* Function Definitions */
void sprdmpF104_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (sprdmpF104_initialize.c) */
