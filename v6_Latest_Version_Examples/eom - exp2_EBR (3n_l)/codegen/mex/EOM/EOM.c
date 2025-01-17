/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * EOM.c
 *
 * Code generation for function 'EOM'
 *
 */

/* Include files */
#include "EOM.h"
#include "EOM_types.h"
#include "fj_kF.h"
#include "fj_vdF.h"
#include "loadsF1.h"
#include "massF2.h"
#include "massF3.h"
#include "massF4.h"
#include "mtimes.h"
#include "pinv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 6,     /* lineNo */
  "EOM",                               /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\EOM.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 50,  /* lineNo */
  "EOM",                               /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\EOM.m"/* pathName */
};

static emlrtDCInfo emlrtDCI = { 10,    /* lineNo */
  34,                                  /* colNo */
  "dyn_mid_step",                      /* fName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\dyn_mid_step.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  1094,                                /* iLast */
  10,                                  /* lineNo */
  34,                                  /* colNo */
  "par_mex.user_pars.f_ex",            /* aName */
  "dyn_mid_step",                      /* fName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\dyn_mid_step.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void EOM(const emlrtStack *sp, real_T t, const real_T z[36], const struct0_T
         *par_mex, real_T dz[36], real_T *flag)
{
  static const int8_T iv[6] = { 0, 0, 1, 1, 2, 2 };

  emlrtStack st;
  real_T b_y[324];
  real_T d_y[324];
  real_T f_y[324];
  real_T h_y[324];
  real_T Dd[108];
  real_T T[108];
  real_T Tt[108];
  real_T b_Dd[108];
  real_T c_Dd[108];
  real_T c_y[108];
  real_T e_y[108];
  real_T g_y[108];
  real_T y[108];
  real_T M[36];
  real_T par_mex_var[34];
  real_T dv1[18];
  real_T dv2[18];
  real_T dv3[18];
  real_T fj_k[18];
  real_T fj_vd[18];
  real_T i_y[18];
  real_T b_fg[6];
  real_T b_par_mex_var[6];
  real_T c_fg[6];
  real_T d_Dd[6];
  real_T dv[6];
  real_T fg[6];
  real_T ftau_ex[6];
  real_T b_t13;
  real_T b_t33;
  real_T step;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t30;
  real_T t32;
  real_T t32_tmp;
  real_T t33;
  real_T t5;
  real_T t5_tmp;
  real_T t6;
  int32_T i;
  int32_T i1;
  int32_T i2;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  memcpy(&par_mex_var[0], &par_mex->var[0], 34U * sizeof(real_T));

  /*  parameters */
  /*  inputs: internal pressure & external forces/torques */
  /*  temp = interp1( par.f_ex(:,1) , [ par.f_ex(:,2:7) par.p(:,2:4) ] , t , 'nearest' ) ; */
  step = muDoubleScalarFloor(t / 0.05);
  if (step == 0.0) {
    step = 1.0;
  }

  if (step != (int32_T)step) {
    emlrtIntegerCheckR2012b(step, &emlrtDCI, &st);
  }

  if (((int32_T)step < 1) || ((int32_T)step > 1094)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)step, 1, 1094, &emlrtBCI, &st);
  }

  /*  cross-section deformation */
  /*  In this case it causes numerical instability, so commented */
  /*  axial stretch */
  /*  l = 0 ; */
  /*  for i = 0 : par_mex.user_pars.n_l - 2 */
  /*      l = l + z(i*6+3) ; */
  /*  end */
  /*  lambda = 1 + l / par_mex.var(5) ; */
  /*  update simulation parameters */
  for (i = 0; i < 6; i++) {
    par_mex_var[i + 21] = par_mex->user_pars.p[((int32_T)step + 1094 * (iv[i] +
      1)) - 1];
    par_mex_var[i + 27] = par_mex->user_pars.f_ex[((int32_T)step + 1094 * (i + 1))
      - 1];
  }

  par_mex_var[33] = 1.0;
  fj_kF(par_mex_var, z, fj_k);
  fj_vdF(par_mex_var, z, fj_vd);

  /* FJ_INF */
  /*     OUT1 = FJ_INF(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     26-Feb-2021 19:42:03 */
  t33 = muDoubleScalarCos(par_mex_var[20]);
  step = muDoubleScalarSin(par_mex_var[20]);
  t5_tmp = par_mex_var[18] * par_mex_var[18];
  step = 1.0 / (step * step);
  t33 *= t33;
  t13 = t5_tmp * step * (((((par_mex_var[21] + par_mex_var[22]) + par_mex_var[23])
    + par_mex_var[24]) + par_mex_var[25]) + par_mex_var[26]) * (t33 - 1.0) *
    3.1415926535897931;
  t32_tmp = par_mex_var[22] * par_mex_var[19] * t5_tmp * step;
  t30 = par_mex_var[21] * par_mex_var[19] * t5_tmp * step;
  t5 = par_mex_var[23] * par_mex_var[19] * t5_tmp * step * (t33 - 1.0) *
    3.1415926535897931;
  t6 = par_mex_var[24] * par_mex_var[19] * t5_tmp * step * (t33 - 1.0) *
    3.1415926535897931;
  t11 = par_mex_var[26] * par_mex_var[19] * t5_tmp * step * (t33 - 1.0) *
    3.1415926535897931;
  step = par_mex_var[25] * par_mex_var[19] * t5_tmp * step * (t33 - 1.0) *
    3.1415926535897931;
  t32 = ((((-(t30 * (t33 - 1.0) * 3.1415926535897931 * 0.93771626297577859) +
            -(t32_tmp * (t33 - 1.0) * 3.1415926535897931 * 0.93771626297577859))
           + step * 0.76971716428074932) + t6 * 0.76971716428074954) + t11 *
         0.16799909869502891) + t5 * 0.167999098695029;
  b_t33 = ((((t32_tmp * 8.3666002653407556 * (t33 - 1.0) * 3.1415926535897931 *
              0.041522491349480967 + -(t30 * 8.3666002653407556 * (t33 - 1.0) *
    3.1415926535897931 * 0.041522491349480967)) + t5 * 0.9857871488499218) + t6 *
            0.63838506170774523) + -(t11 * 0.9857871488499218)) + -(step *
    0.63838506170774545);

  /* MASSF1 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     26-Feb-2021 19:39:57 */
  t5 = par_mex_var[2] * par_mex_var[2];
  t6 = par_mex_var[3] * par_mex_var[3];
  t11 = par_mex_var[4] / 6.0;
  t12 = z[3] / 2.0;
  b_t13 = z[4] / 2.0;
  t14 = z[5] / 2.0;
  t15 = z[21] / 2.0;
  t16 = z[22] / 2.0;
  t17 = z[23] / 2.0;
  t19 = par_mex_var[4] * z[3] / 12.0;
  t20 = par_mex_var[4] * z[4] / 12.0;
  t21 = par_mex_var[4] * z[5] / 12.0;
  t22 = par_mex_var[4] * z[21] / 12.0;
  t23 = par_mex_var[4] * z[22] / 12.0;
  t24 = par_mex_var[4] * z[23] / 12.0;
  step = t5 + -t6;
  t32_tmp = par_mex_var[4] * par_mex_var[0];
  t30 = t32_tmp * (t5_tmp * 6.0 + step) * 3.1415926535897931 / 3.0;
  step *= t32_tmp;
  t33 = step * (par_mex_var[4] * par_mex_var[4] / 108.0 + (t5 * 3.0 + t6 * 3.0) /
                12.0) * 3.1415926535897931 / 3.0;
  M[0] = -t30;
  M[1] = 0.0;
  M[2] = 0.0;
  M[3] = 0.0;
  M[4] = 0.0;
  M[5] = 0.0;
  M[6] = 0.0;
  M[7] = -t30;
  M[8] = 0.0;
  M[9] = 0.0;
  M[10] = 0.0;
  M[11] = 0.0;
  M[12] = 0.0;
  M[13] = 0.0;
  M[14] = -t30;
  M[15] = 0.0;
  M[16] = 0.0;
  M[17] = 0.0;
  M[18] = 0.0;
  M[19] = 0.0;
  M[20] = 0.0;
  M[21] = -t33;
  M[22] = 0.0;
  M[23] = 0.0;
  M[24] = 0.0;
  M[25] = 0.0;
  M[26] = 0.0;
  M[27] = 0.0;
  M[28] = -t33;
  M[29] = 0.0;
  M[30] = 0.0;
  M[31] = 0.0;
  M[32] = 0.0;
  M[33] = 0.0;
  M[34] = 0.0;
  M[35] = step * 3.1415926535897931 * (t5 / 2.0 + t6 / 2.0) *
    -0.33333333333333331;
  T[0] = 1.0;
  T[1] = 0.0;
  T[2] = 0.0;
  T[3] = 0.0;
  T[4] = 0.0;
  T[5] = 0.0;
  T[6] = 0.0;
  T[7] = 1.0;
  T[8] = 0.0;
  T[9] = 0.0;
  T[10] = 0.0;
  T[11] = 0.0;
  T[12] = 0.0;
  T[13] = 0.0;
  T[14] = 1.0;
  T[15] = 0.0;
  T[16] = 0.0;
  T[17] = 0.0;
  T[18] = t21;
  T[19] = -t11;
  T[20] = -t19;
  T[21] = 1.0;
  T[22] = -t14;
  T[23] = b_t13;
  T[24] = t11;
  T[25] = t21;
  T[26] = -t20;
  T[27] = t14;
  T[28] = 1.0;
  T[29] = -t12;
  T[30] = t19;
  T[31] = t20;
  T[32] = t21;
  T[33] = -b_t13;
  T[34] = t12;
  T[35] = 1.0;
  memset(&T[36], 0, 72U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      Tt[i1 + 18 * i] = T[i + 6 * i1];
    }
  }

  mtimes(Tt, M, y);
  b_mtimes(y, T, b_y);
  mtimes(Tt, M, y);
  massF2(par_mex_var, z, M, T, Dd, fg);
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      Tt[i1 + 18 * i] = T[i + 6 * i1];
    }
  }

  mtimes(Tt, M, c_y);
  b_mtimes(c_y, T, d_y);
  mtimes(Tt, M, c_y);
  massF3(par_mex_var, z, M, T, b_Dd, b_fg);
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      Tt[i1 + 18 * i] = T[i + 6 * i1];
    }
  }

  mtimes(Tt, M, e_y);
  b_mtimes(e_y, T, f_y);
  mtimes(Tt, M, e_y);
  massF4(par_mex_var, z, M, T, c_Dd, c_fg);
  for (i = 0; i < 6; i++) {
    for (i1 = 0; i1 < 18; i1++) {
      Tt[i1 + 18 * i] = T[i + 6 * i1];
    }
  }

  mtimes(Tt, M, g_y);
  b_mtimes(g_y, T, h_y);
  mtimes(Tt, M, g_y);
  loadsF1(par_mex_var, z, T, ftau_ex);

  /*  EOM */
  for (i = 0; i < 324; i++) {
    d_y[i] = ((b_y[i] + d_y[i]) + f_y[i]) + h_y[i];
  }

  st.site = &r_emlrtRSI;
  pinv(&st, d_y, b_y);
  memset(&Tt[0], 0, 18U * sizeof(real_T));
  Tt[18] = -t24;
  Tt[19] = -0.0;
  Tt[20] = t22;
  Tt[21] = -0.0;
  Tt[22] = -t17;
  Tt[23] = t16;
  Tt[24] = -0.0;
  Tt[25] = -t24;
  Tt[26] = t23;
  Tt[27] = t17;
  Tt[28] = -0.0;
  Tt[29] = -t15;
  Tt[30] = -t22;
  Tt[31] = -t23;
  Tt[32] = -t24;
  Tt[33] = -t16;
  Tt[34] = t15;
  memset(&Tt[35], 0, 73U * sizeof(real_T));
  b_par_mex_var[0] = par_mex_var[12];
  b_par_mex_var[1] = par_mex_var[13];
  b_par_mex_var[2] = par_mex_var[14];
  b_par_mex_var[3] = 0.0;
  b_par_mex_var[4] = 0.0;
  b_par_mex_var[5] = 0.0;
  for (i = 0; i < 6; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      step += Tt[i + 6 * i1] * z[i1 + 18];
    }

    dv[i] = step + b_par_mex_var[i];
  }

  for (i = 0; i < 108; i++) {
    Dd[i] = -Dd[i];
  }

  for (i = 0; i < 6; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      step += Dd[i + 6 * i1] * z[i1 + 18];
    }

    d_Dd[i] = step + fg[i];
  }

  for (i = 0; i < 18; i++) {
    step = 0.0;
    t33 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 18 * i1;
      step += y[i2] * dv[i1];
      t33 += c_y[i2] * d_Dd[i1];
    }

    i_y[i] = t33;
    dv1[i] = step;
  }

  for (i = 0; i < 108; i++) {
    b_Dd[i] = -b_Dd[i];
  }

  for (i = 0; i < 6; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      step += b_Dd[i + 6 * i1] * z[i1 + 18];
    }

    d_Dd[i] = step + b_fg[i];
  }

  for (i = 0; i < 108; i++) {
    c_Dd[i] = -c_Dd[i];
  }

  for (i = 0; i < 6; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      step += c_Dd[i + 6 * i1] * z[i1 + 18];
    }

    b_par_mex_var[i] = step + c_fg[i];
  }

  for (i = 0; i < 18; i++) {
    step = 0.0;
    t33 = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      i2 = i + 18 * i1;
      step += e_y[i2] * d_Dd[i1];
      t33 += g_y[i2] * b_par_mex_var[i1];
    }

    dv2[i] = (dv1[i] + i_y[i]) + step;
    i_y[i] = t33;
  }

  dv1[0] = 0.0;
  dv1[1] = 0.0;
  dv1[2] = -t13;
  dv1[3] = t32;
  dv1[4] = b_t33;
  dv1[5] = 0.0;
  dv1[6] = 0.0;
  dv1[7] = 0.0;
  dv1[8] = -t13;
  dv1[9] = t32;
  dv1[10] = b_t33;
  dv1[11] = 0.0;
  dv1[12] = 0.0;
  dv1[13] = 0.0;
  dv1[14] = -t13;
  dv1[15] = t32;
  dv1[16] = b_t33;
  dv1[17] = 0.0;
  for (i = 0; i < 18; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 6; i1++) {
      step += T[i + 18 * i1] * ftau_ex[i1];
    }

    dv3[i] = ((((dv2[i] + i_y[i]) + fj_k[i]) + fj_vd[i]) + dv1[i]) + step;
  }

  for (i = 0; i < 18; i++) {
    step = 0.0;
    for (i1 = 0; i1 < 18; i1++) {
      step += b_y[i + 18 * i1] * dv3[i1];
    }

    dz[i] = z[i + 18];
    dz[i + 18] = step;
  }

  *flag = 0.0;
}

/* End of code generation (EOM.c) */
