/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: EOM_input.c
 *
 * MATLAB Coder version            : 4.2
 * C/C++ source code generated on  : 14-Oct-2020 16:42:47
 */

/* Include Files */
#include <string.h>
#include "EOM.h"
#include "EOM_input.h"

/* Function Definitions */

/*
 * Arguments    : double tspan[3]
 *                double *nz
 *                double z0[64]
 *                struct0_T *par_mex
 * Return Type  : void
 */
void EOM_input(double tspan[3], double *nz, double z0[64], struct0_T *par_mex)
{
  static const double dv0[64] = { 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6,
    2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 2.0E-6, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static const double t0_pos[259] = { 0.0, 0.27, 1.27, 2.02, 2.27,
    3.0199999999999996, 3.5199999999999996, 4.27, 4.77, 5.52, 6.02, 6.27,
    6.7700000000000005, 7.46, 7.96, 8.71, 9.46, 9.96, 10.96, 12.21, 13.46, 13.96,
    14.71, 15.46, 15.96, 16.46, 17.21, 18.96, 19.96, 20.43, 21.1, 21.85, 23.1,
    24.26, 24.76, 24.46, 25.01, 0.004, 0.001, 0.007, 0.004, 0.014, 0.01, 0.019,
    0.015, 0.024, 0.02, 0.025, 0.03, 0.025, 0.034, 0.031, 0.039, 0.037, 0.044,
    0.041, 0.041, 0.045, 0.044, 0.05, 0.049, 0.055, 0.054, 0.062, 0.061, 0.061,
    0.052000000000000005, 0.056, 0.049, 0.044, 0.041, 0.043000000000000003,
    0.036000000000000004, 0.04, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.004, 0.004,
    0.008, 0.008, 0.015, 0.013000000000000001, 0.02, 0.018000000000000002, 0.025,
    0.023, 0.026000000000000002, 0.031, 0.028, 0.035, 0.032, 0.04, 0.038, 0.045,
    0.042, 0.042, 0.046, 0.045, 0.052000000000000005, 0.05, 0.056, 0.055, 0.063,
    0.062, 0.062, 0.054, 0.057, 0.05, 0.045, 0.044, 0.044, 0.041, 0.041, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.045, 0.045, 0.045, 0.045, 0.045, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static const double t1_tube2[148] = { 0.0, 0.27, 1.27, 2.02, 2.27,
    3.0199999999999996, 3.5199999999999996, 4.27, 4.77, 5.52, 6.02, 6.27,
    6.7700000000000005, 7.46, 7.96, 8.71, 9.46, 9.96, 10.96, 12.21, 13.46, 13.96,
    14.71, 15.46, 15.96, 16.46, 17.21, 18.96, 19.96, 20.43, 21.1, 21.85, 23.1,
    24.26, 24.76, 24.46, 25.01, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.0066, 0.0066,
    0.009300000000000001, 0.0075, 0.0116, 0.009300000000000001, 0.0105, 0.0087,
    0.003, 0.0027, 0.0023, 0.0016, 0.0011, 0.001, 0.001, 0.001, 0.001, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.004, 0.004, 0.008, 0.008, 0.015,
    0.013000000000000001, 0.02, 0.018000000000000002, 0.025, 0.023,
    0.026000000000000002, 0.031, 0.028, 0.035, 0.032, 0.04, 0.038, 0.045, 0.042,
    0.037, 0.048, 0.044, 0.053, 0.048, 0.058, 0.054, 0.059000000000000004, 0.06,
    0.063, 0.057, 0.055, 0.05, 0.046, 0.044, 0.044, 0.041, 0.041 };

  static const double dv1[58] = { 6450.0, 1000.0, 7.6E+10, 1.0E+9, 2.1E+11,
    2.533E+10, 3.3E+8, 7.0E+10, 0.00025, 0.00047, 0.001565, 0.0016, 0.0, 0.0,
    2.533E+9, 2.533E+9, 7.6E+9, 7.6E+9, 7.6E+9, 2.533E+9, 3.3E+7, 3.3E+7, 1.0E+8,
    1.0E+8, 1.0E+8, 3.3E+7, 7.0E+9, 7.0E+9, 2.1E+10, 2.1E+10, 2.1E+10, 7.0E+9,
    1.0, -9.81, 0.0, 0.0, 0.0, 0.0, 0.0, 0.01, 0.015, 0.03, 0.0, 25.0, 0.3, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  tspan[0] = 0.0;
  tspan[1] = 0.01;
  tspan[2] = 25.0;
  memcpy(&z0[0], &dv0[0], sizeof(double) << 6);
  *nz = 64.0;
  par_mex->user_pars.n_t = 3.0;
  memcpy(&par_mex->user_pars.motor_in.pos[0], &t0_pos[0], 259U * sizeof(double));
  memcpy(&par_mex->user_pars.tip_pos.tube2[0], &t1_tube2[0], 148U * sizeof
         (double));
  memcpy(&par_mex->var[0], &dv1[0], 58U * sizeof(double));
  par_mex->t_equil_i = 0.0;
}

/*
 * File trailer for EOM_input.c
 *
 * [EOF]
 */