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
#include "loadsF1.h"
#include "EOM_eq_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = { 95, /* lineNo */
  "loadsF1",                           /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\loadsF1.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 104,/* lineNo */
  "loadsF1",                           /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\loadsF1.m"/* pathName */
};

/* Function Definitions */
void loadsF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[18],
             real_T out1[54], real_T out2[6])
{
  emlrtStack st;
  real_T b_t145_tmp;
  real_T b_t146_tmp;
  real_T b_t162_tmp;
  real_T b_t163_tmp;
  real_T b_t205_tmp;
  real_T b_t209_tmp;
  real_T t100;
  real_T t100_tmp;
  real_T t101_tmp;
  real_T t103;
  real_T t104;
  real_T t106;
  real_T t13;
  real_T t139;
  real_T t140;
  real_T t145;
  real_T t145_tmp;
  real_T t146;
  real_T t146_tmp;
  real_T t152;
  real_T t153;
  real_T t162;
  real_T t162_tmp;
  real_T t163;
  real_T t163_tmp;
  real_T t165;
  real_T t166;
  real_T t169;
  real_T t170;
  real_T t183;
  real_T t184;
  real_T t185;
  real_T t186;
  real_T t190;
  real_T t194;
  real_T t197;
  real_T t198;
  real_T t2;
  real_T t205;
  real_T t205_tmp;
  real_T t206;
  real_T t207;
  real_T t208;
  real_T t209;
  real_T t209_tmp;
  real_T t210;
  real_T t212;
  real_T t212_tmp;
  real_T t213;
  real_T t213_tmp;
  real_T t215;
  real_T t215_tmp;
  real_T t3;
  real_T t33;
  real_T t4;
  real_T t40;
  real_T t46;
  real_T t47;
  real_T t49;
  real_T t50;
  real_T t56;
  real_T t57;
  real_T t59;
  real_T t60;
  real_T t61;
  real_T t66;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t71;
  real_T t73;
  real_T t77_tmp;
  real_T t78;
  real_T t79;
  real_T t80;
  real_T t86_tmp;
  real_T t88_tmp;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98_tmp;
  real_T t99;
  real_T t99_tmp;
  st.prev = sp;
  st.tls = sp->tls;

  /* LOADSF1 */
  /*     [OUT1,OUT2,OUT3] = LOADSF1(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     27-Feb-2021 16:49:38 */
  t2 = in1[4] * in2[6];
  t3 = in1[4] * 2.0;
  t4 = in1[4] * in1[4];
  t13 = in2[7] * t4;
  t33 = (in1[4] - 0.025) * (in1[4] - 0.025);
  t40 = 1.0 / (muDoubleScalarExp(-(in1[4] * 200.0) + 5.0) + 1.0);
  t46 = (t3 - 0.05) * t40;
  t47 = t33 * t40;
  t50 = t40 * ((t4 + -(in1[4] / 20.0)) + 0.000625);
  t56 = in2[0] * t3 + t40 * ((in1[4] * in2[0] * -2.0 + in2[0] / 20.0) + in2[1] *
    (t3 - 0.05));
  t57 = in2[2] * t3 + t40 * ((in1[4] * in2[2] * -2.0 + in2[2] / 20.0) + in2[3] *
    (t3 - 0.05));
  t59 = (in2[4] * t3 + t40 * ((in1[4] * in2[4] * -2.0 + in2[4] / 20.0) + in2[5] *
          (t3 - 0.05))) + 1.0;
  t2 = (t2 / 2.0 + t13 / 2.0) + t40 * (((((-t2 + in2[6] / 40.0) + -t13) + in2[7]
    / 1600.0) + in2[8] * t33) + (in1[4] - 0.025) * (in2[6] + in2[7] / 20.0)) /
    2.0;
  t49 = t3 + -t46;
  t60 = t56 * t56;
  t61 = t57 * t57;
  t13 = t59 * t59;
  t66 = muDoubleScalarCos(t2);
  t67 = muDoubleScalarSin(t2);
  t68 = t66 * t66;
  t69 = t67 * t67;
  t2 = (t60 + t61) + t13;
  t71 = 1.0 / (t2 * t2);
  st.site = &yc_emlrtRSI;
  if (t2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t40 = 1.0 / muDoubleScalarSqrt(t2);
  t73 = muDoubleScalarPower(t40, 3.0);
  t2 = t46 * t40;
  t33 = t49 * t40;
  t77_tmp = t59 * t40 + 1.0;
  st.site = &bd_emlrtRSI;
  if (t77_tmp < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t78 = muDoubleScalarSqrt(t77_tmp);
  t92 = t2 + -t46 * t13 * t73;
  t79 = 1.0 / t78;
  t86_tmp = 1.4142135623730951 * t66 * t78;
  t88_tmp = 1.4142135623730951 * t67 * t78;
  t93 = t33 + -(t49 * t13 * t73);
  t80 = muDoubleScalarPower(t79, 3.0);
  t94 = 1.4142135623730951 * t66 * t2 * t79 / 2.0;
  t95 = 1.4142135623730951 * t67 * t2 * t79 / 2.0;
  t96 = 1.4142135623730951 * t66 * t33 * t79 / 2.0;
  t97 = 1.4142135623730951 * t67 * t33 * t79 / 2.0;
  t98_tmp = 1.4142135623730951 * t56 * t66 * t40;
  t3 = t98_tmp * t79;
  t99_tmp = 1.4142135623730951 * t57 * t66 * t40;
  t99 = t99_tmp * t79;
  t100_tmp = 1.4142135623730951 * t56 * t67 * t40;
  t100 = t100_tmp * t79;
  t101_tmp = 1.4142135623730951 * t57 * t67 * t40;
  t40 = t101_tmp * t79;
  t2 = 1.4142135623730951 * t46 * t56;
  t13 = t2 * t57;
  t139 = t13 * t66 * t73 * t79 / 2.0;
  t140 = t13 * t67 * t73 * t79 / 2.0;
  t145_tmp = t2 * t59;
  b_t145_tmp = t145_tmp * t67 * t73 * t79;
  t145 = b_t145_tmp / 2.0;
  t146_tmp = 1.4142135623730951 * t46 * t57 * t59;
  b_t146_tmp = t146_tmp * t67 * t73 * t79;
  t146 = b_t146_tmp / 2.0;
  t2 = 1.4142135623730951 * t49 * t56;
  t33 = t2 * t57;
  t152 = t33 * t66 * t73 * t79 / 2.0;
  t153 = t33 * t67 * t73 * t79 / 2.0;
  t162_tmp = t2 * t59;
  b_t162_tmp = t162_tmp * t67 * t73 * t79;
  t162 = b_t162_tmp / 2.0;
  t163_tmp = 1.4142135623730951 * t49 * t57 * t59;
  b_t163_tmp = t163_tmp * t67 * t73 * t79;
  t163 = b_t163_tmp / 2.0;
  t103 = t3 / 2.0;
  t104 = t99 / 2.0;
  t106 = t40 / 2.0;
  t2 = t13 * t59;
  t165 = t2 * t66 * t71 * t80 / 4.0;
  t166 = t2 * t67 * t71 * t80 / 4.0;
  t2 = t33 * t59;
  t169 = t2 * t66 * t71 * t80 / 4.0;
  t170 = t2 * t67 * t71 * t80 / 4.0;
  t183 = t3 + t40;
  t184 = t99 + -t100;
  t185 = t103 + t106;
  t190 = in1[4] * t3 / 4.0 + in1[4] * t40 / 4.0;
  t197 = t47 * t3 / 4.0 + t47 * t40 / 4.0;
  t2 = 1.4142135623730951 * t46 * t59;
  t205_tmp = 1.4142135623730951 * t46 * t60;
  b_t205_tmp = t2 * t60;
  t205 = (((t94 + -(t205_tmp * t66 * t73 * t79 / 2.0)) + -t140) + b_t205_tmp *
          t66 * t71 * t80 / 4.0) + t166;
  t3 = 1.4142135623730951 * t46 * t61;
  t40 = t2 * t61;
  t208 = (((t95 + -(t3 * t67 * t73 * t79 / 2.0)) + -t139) + t40 * t67 * t71 *
          t80 / 4.0) + t165;
  t2 = 1.4142135623730951 * t49 * t59;
  t209_tmp = 1.4142135623730951 * t49 * t60;
  b_t209_tmp = t2 * t60;
  t209 = (((t96 + -(t209_tmp * t66 * t73 * t79 / 2.0)) + b_t209_tmp * t66 * t71 *
           t80 / 4.0) + -t153) + t170;
  t212_tmp = 1.4142135623730951 * t49 * t61;
  t33 = t2 * t61;
  t212 = (((t97 + -(t212_tmp * t67 * t73 * t79 / 2.0)) + t33 * t67 * t71 * t80 /
           4.0) + -t152) + t169;
  t13 = t98_tmp * t80;
  t2 = t101_tmp * t80;
  t213_tmp = t145_tmp * t66 * t73 * t79;
  t213 = ((t213_tmp / 2.0 + t146) + t13 * t92 / 4.0) + t2 * t92 / 4.0;
  t215_tmp = t162_tmp * t66 * t73 * t79;
  t215 = ((t215_tmp / 2.0 + t163) + t13 * t93 / 4.0) + t2 * t93 / 4.0;
  t186 = t104 + -(t100 / 2.0);
  t194 = in1[4] * t99 / 4.0 + -(in1[4] * t100 / 4.0);
  t198 = t47 * t99 / 4.0 + -(t47 * t100 / 4.0);
  t206 = (((t94 + -(t3 * t66 * t73 * t79 / 2.0)) + t140) + t40 * t66 * t71 * t80
          / 4.0) + -t166;
  t207 = (((t95 + -(t205_tmp * t67 * t73 * t79 / 2.0)) + t139) + b_t205_tmp *
          t67 * t71 * t80 / 4.0) + -t165;
  t210 = (((t96 + -(t212_tmp * t66 * t73 * t79 / 2.0)) + t153) + t33 * t66 * t71
          * t80 / 4.0) + -t170;
  t96 = (((t97 + -(t209_tmp * t67 * t73 * t79 / 2.0)) + t152) + b_t209_tmp * t67
         * t71 * t80 / 4.0) + -t169;
  t13 = t99_tmp * t80;
  t2 = t100_tmp * t80;
  t94 = t146_tmp * t66 * t73 * t79;
  t95 = ((t94 / 2.0 + -t145) + t13 * t92 / 4.0) + -(t2 * t92 / 4.0);
  t152 = t163_tmp * t66 * t73 * t79;
  t170 = ((t152 / 2.0 + -t162) + t13 * t93 / 4.0) + -(t2 * t93 / 4.0);
  t2 = in1[16] * 1.4142135623730951 * t66;
  t165 = t2 * t78;
  t13 = in1[16] * 1.4142135623730951 * t67;
  t169 = t13 * t78;
  t99 = in1[16] * 1.4142135623730951 * t49;
  t140 = t99 * t56 * t59;
  t139 = t140 * t66 * t73 * t79;
  t153 = t4 + -t50;
  out1[0] = (((t153 + in1[16] * t162 * t186) + t165 * t209) + t169 * t96) - t139
    * t185 / 2.0;
  t209_tmp = in1[16] * 1.4142135623730951 * t46;
  t61 = t209_tmp * t56 * t59;
  t166 = t61 * t66 * t73 * t79;
  out1[1] = (((t47 + in1[16] * t145 * t186) + t165 * t205) + t169 * t207) - t166
    * t185 / 2.0;
  b_t209_tmp = t99 * t57 * t59;
  t99 = b_t209_tmp * t66 * t73 * t79;
  out1[2] = ((in1[16] * t163 * t186 - t169 * t210) + t165 * t212) - t99 * t185 /
    2.0;
  b_t205_tmp = t209_tmp * t57 * t59;
  t209_tmp = b_t205_tmp * t66 * t73 * t79;
  out1[3] = ((in1[16] * t146 * t186 - t169 * t206) + t165 * t208) - t209_tmp *
    t185 / 2.0;
  t205_tmp = -in1[16] * 1.4142135623730951 * t66 * t78;
  t162_tmp = t2 * t79;
  t3 = t13 * t79;
  t60 = t162_tmp * t93;
  t98_tmp = t3 * t93;
  out1[4] = ((t205_tmp * t215 + t169 * t170) + t60 * t185 / 2.0) - t98_tmp *
    t186 / 2.0;
  t162_tmp *= t92;
  t3 *= t92;
  out1[5] = ((t205_tmp * t213 + t169 * t95) + t162_tmp * t185 / 2.0) - t3 * t186
    / 2.0;
  t101_tmp = in1[16] * in1[4] * 1.4142135623730951;
  t145_tmp = t101_tmp * t66 * t78;
  t101_tmp = t101_tmp * t67 * t78;
  out1[6] = ((t169 * t190 + t165 * t194) - t145_tmp * t186 / 2.0) - t101_tmp *
    t185 / 2.0;
  t212_tmp = t4 / 2.0 - t50 / 2.0;
  t40 = t103 * t212_tmp + t106 * t212_tmp;
  t33 = t104 * t212_tmp + -(t100 / 2.0) * t212_tmp;
  out1[7] = ((t169 * t40 + t165 * t33) - t165 * t186 * t212_tmp) - t169 * t185 *
    t212_tmp;
  t2 = in1[16] * 1.4142135623730951 * t47;
  t13 = t2 * t66 * t78;
  t2 = t2 * t67 * t78;
  out1[8] = ((t165 * t198 + t169 * t197) - t13 * t186 / 2.0) - t2 * t185 / 2.0;
  out1[9] = ((t169 * t209 - t165 * t96) - t139 * t186 / 2.0) - t140 * t67 * t73 *
    t79 * t185 / 2.0;
  out1[10] = ((t169 * t205 - t165 * t207) - t166 * t186 / 2.0) - t61 * t67 * t73
    * t79 * t185 / 2.0;
  out1[11] = (((t153 + t165 * t210) + t169 * t212) - t99 * t186 / 2.0) -
    b_t209_tmp * t67 * t73 * t79 * t185 / 2.0;
  out1[12] = (((t47 + t165 * t206) + t169 * t208) - t209_tmp * t186 / 2.0) -
    b_t205_tmp * t67 * t73 * t79 * t185 / 2.0;
  out1[13] = ((t205_tmp * t170 - t169 * t215) + t60 * t186 / 2.0) + t98_tmp *
    t185 / 2.0;
  out1[14] = ((t205_tmp * t95 - t169 * t213) + t162_tmp * t186 / 2.0) + t3 *
    t185 / 2.0;
  out1[15] = ((t205_tmp * t190 + t169 * t194) + t145_tmp * t185 / 2.0) -
    t101_tmp * t186 / 2.0;
  out1[16] = ((t205_tmp * t40 + t169 * t33) + t165 * t185 * t212_tmp) - t169 *
    t186 * t212_tmp;
  out1[17] = ((t205_tmp * t197 + t169 * t198) + t13 * t185 / 2.0) - t2 * t186 /
    2.0;
  t2 = in1[16] * t49;
  t165 = t2 * t56 * t59;
  t169 = in1[16] * t185;
  t99 = in1[16] * t186;
  out1[18] = ((t169 * t209 * -2.0 + t99 * t96 * 2.0) - t165 * t68 * t73 / 2.0) -
    t165 * t69 * t73 / 2.0;
  t13 = in1[16] * t46;
  t165 = t13 * t56 * t59;
  out1[19] = ((t169 * t205 * -2.0 + t99 * t207 * 2.0) - t165 * t68 * t73 / 2.0)
    - t165 * t69 * t73 / 2.0;
  t165 = t2 * t57 * t59;
  out1[20] = ((t99 * t210 * -2.0 - t169 * t212 * 2.0) - t165 * t68 * t73 / 2.0)
    - t165 * t69 * t73 / 2.0;
  t165 = t13 * t57 * t59;
  out1[21] = ((t99 * t206 * -2.0 - t169 * t208 * 2.0) - t165 * t68 * t73 / 2.0)
    - t165 * t69 * t73 / 2.0;
  t165 = in1[16] * t68;
  t139 = in1[16] * t69;
  out1[22] = (((t153 + t165 * t93 / 2.0) + t139 * t93 / 2.0) + t169 * t215 * 2.0)
    + t99 * t170 * 2.0;
  out1[23] = (((t47 + t165 * t92 / 2.0) + t139 * t92 / 2.0) + t169 * t213 * 2.0)
    + t99 * t95 * 2.0;
  out1[24] = t99 * t190 * 2.0 - t169 * t194 * 2.0;
  out1[25] = t99 * t40 * 2.0 - t169 * t33 * 2.0;
  out1[26] = t169 * t198 * -2.0 + t99 * t197 * 2.0;
  out1[27] = ((t88_tmp * t209 + t86_tmp * t96) - t215_tmp * t184 / 4.0) +
    b_t162_tmp * t183 / 4.0;
  out1[28] = ((t88_tmp * t205 + t86_tmp * t207) - t213_tmp * t184 / 4.0) +
    b_t145_tmp * t183 / 4.0;
  t165 = -1.4142135623730951 * t66 * t78;
  out1[29] = ((t165 * t210 + t88_tmp * t212) - t152 * t184 / 4.0) + b_t163_tmp *
    t183 / 4.0;
  out1[30] = ((t165 * t206 + t88_tmp * t208) - t94 * t184 / 4.0) + b_t146_tmp *
    t183 / 4.0;
  t169 = 1.4142135623730951 * t66 * t79;
  t99 = 1.4142135623730951 * t67 * t79;
  t139 = t169 * t93;
  t153 = t99 * t93;
  out1[31] = ((t86_tmp * t170 - t88_tmp * t215) + t139 * t184 / 4.0) - t153 *
    t183 / 4.0;
  t169 *= t92;
  t99 *= t92;
  out1[32] = ((t86_tmp * t95 - t88_tmp * t213) + t169 * t184 / 4.0) - t99 * t183
    / 4.0;
  t209_tmp = in1[4] * 1.4142135623730951 * t66 * t78;
  t166 = in1[4] * 1.4142135623730951 * t67 * t78;
  out1[33] = ((t86_tmp * t190 + t88_tmp * t194) - t209_tmp * t183 / 4.0) - t166 *
    t184 / 4.0;
  out1[34] = ((t86_tmp * t40 + t88_tmp * t33) - t86_tmp * t183 * t212_tmp / 2.0)
    - t88_tmp * t184 * t212_tmp / 2.0;
  t205_tmp = 1.4142135623730951 * t47 * t66 * t78;
  t162_tmp = 1.4142135623730951 * t47 * t67 * t78;
  out1[35] = ((t86_tmp * t197 + t88_tmp * t198) - t205_tmp * t183 / 4.0) -
    t162_tmp * t184 / 4.0;
  out1[36] = ((t86_tmp * t209 - t88_tmp * t96) + t215_tmp * t183 / 4.0) +
    b_t162_tmp * t184 / 4.0;
  out1[37] = ((t86_tmp * t205 - t88_tmp * t207) + t213_tmp * t183 / 4.0) +
    b_t145_tmp * t184 / 4.0;
  out1[38] = ((t88_tmp * t210 + t86_tmp * t212) + t152 * t183 / 4.0) +
    b_t163_tmp * t184 / 4.0;
  out1[39] = ((t88_tmp * t206 + t86_tmp * t208) + t94 * t183 / 4.0) + b_t146_tmp
    * t184 / 4.0;
  out1[40] = ((t165 * t215 - t88_tmp * t170) - t139 * t183 / 4.0) - t153 * t184 /
    4.0;
  out1[41] = ((t165 * t213 - t88_tmp * t95) - t169 * t183 / 4.0) - t99 * t184 /
    4.0;
  t165 = -1.4142135623730951 * t67 * t78;
  out1[42] = ((t165 * t190 + t86_tmp * t194) - t209_tmp * t184 / 4.0) + t166 *
    t183 / 4.0;
  out1[43] = ((t165 * t40 + t86_tmp * t33) - t86_tmp * t184 * t212_tmp / 2.0) +
    t88_tmp * t183 * t212_tmp / 2.0;
  out1[44] = ((t86_tmp * t198 - t88_tmp * t197) - t205_tmp * t184 / 4.0) +
    t162_tmp * t183 / 4.0;
  out1[45] = t184 * t209 + t183 * t96;
  out1[46] = t184 * t205 + t183 * t207;
  out1[47] = -t183 * t210 + t184 * t212;
  out1[48] = -t183 * t206 + t184 * t208;
  out1[49] = t183 * t170 - t184 * t215;
  out1[50] = t183 * t95 - t184 * t213;
  out1[51] = ((t183 * t190 + t184 * t194) + in1[4] * t68 * t77_tmp / 2.0) + in1
    [4] * t69 * t77_tmp / 2.0;
  out1[52] = ((t183 * t40 + t184 * t33) + t68 * t77_tmp * t212_tmp) + t69 *
    t77_tmp * t212_tmp;
  out1[53] = ((t183 * t197 + t184 * t198) + t47 * t68 * t77_tmp / 2.0) + t47 *
    t69 * t77_tmp / 2.0;
  t2 = (t86_tmp * in1[30] / 2.0 + t88_tmp * in1[31] / 2.0) + -(t185 * in1[32]);
  t13 = (t86_tmp * in1[32] / 2.0 + t185 * in1[30]) + t186 * in1[31];
  t33 = (t88_tmp * in1[32] / 2.0 + t185 * in1[31]) + -(t186 * in1[30]);
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  t40 = (-(t86_tmp * in1[31] / 2.0) + t88_tmp * in1[30] / 2.0) + t186 * in1[32];
  out2[3] = ((-t185 * t13 - t186 * t33) + t86_tmp * t2 / 2.0) - t88_tmp * t40 /
    2.0;
  out2[4] = ((t185 * t33 - t186 * t13) - t88_tmp * t2 / 2.0) - t86_tmp * t40 /
    2.0;
  out2[5] = ((t185 * t2 - t186 * t40) + t86_tmp * t13 / 2.0) + t88_tmp * t33 /
    2.0;
}

/* End of code generation (loadsF1.c) */
