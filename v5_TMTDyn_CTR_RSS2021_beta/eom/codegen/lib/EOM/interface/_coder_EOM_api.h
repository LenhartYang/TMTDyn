/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_EOM_api.h
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 10-Mar-2021 22:46:32
 */

#ifndef _CODER_EOM_API_H
#define _CODER_EOM_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Type Definitions */
#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  real_T pos[2618];
  real_T vel[2618];
  real_T acc[2618];
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct3_T
#define typedef_struct3_T

typedef struct {
  real_T tube1[16024];
  real_T tube2[15832];
} struct3_T;

#endif                                 /*typedef_struct3_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T n_t;
  struct2_T motor_in;
  struct3_T tip_pos;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  struct1_T user_pars;
  real_T var[60];
  real_T t_equil_i;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus

extern "C" {

#endif

  /* Function Declarations */
  void EOM(real_T t, real_T z[48], struct0_T *par_mex, real_T dz[48], real_T
           *flag);
  void EOM_api(const mxArray * const prhs[3], int32_T nlhs, const mxArray *plhs
               [3]);
  void EOM_atexit(void);
  void EOM_initialize(void);
  void EOM_input(real_T tspan[3], real_T *nz, real_T z0[48], struct0_T *par_mex);
  void EOM_input_api(int32_T nlhs, const mxArray *plhs[4]);
  void EOM_terminate(void);
  void EOM_xil_shutdown(void);
  void EOM_xil_terminate(void);

#ifdef __cplusplus

}
#endif
#endif

/*
 * File trailer for _coder_EOM_api.h
 *
 * [EOF]
 */
