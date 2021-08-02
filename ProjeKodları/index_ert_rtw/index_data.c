/*
 * File: index_data.c
 *
 * Code generated for Simulink model 'index'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu Mar 12 15:01:15 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "index.h"
#include "index_private.h"

/* Block parameters (default storage) */
P_index_T index_P = {
  /* Mask Parameter: PIDController2_D
   * Referenced by: '<S2>/Derivative Gain'
   */
  0.4,

  /* Mask Parameter: PIDController2_I
   * Referenced by: '<S2>/Integral Gain'
   */
  0.5,

  /* Mask Parameter: PIDController2_Kb
   * Referenced by: '<S2>/Kb'
   */
  1.0,

  /* Mask Parameter: PIDController2_LowerSaturationL
   * Referenced by: '<S2>/Saturate'
   */
  -90.0,

  /* Mask Parameter: PIDController2_P
   * Referenced by: '<S2>/Proportional Gain'
   */
  0.8,

  /* Mask Parameter: PIDController2_UpperSaturationL
   * Referenced by: '<S2>/Saturate'
   */
  -23.0,

  /* Mask Parameter: ServoWrite_pinNumber
   * Referenced by: '<S1>/Servo Write'
   */
  9U,

  /* Expression: 0
   * Referenced by: '<Root>/Constant5'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/Constant3'
   */
  2.0,

  /* Expression: 23
   * Referenced by: '<Root>/Switch3'
   */
  23.0,

  /* Expression: 10
   * Referenced by: '<Root>/istediðimiz mesafe2'
   */
  10.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S2>/Integrator'
   */
  0.2,

  /* Expression: InitialConditionForIntegrator
   * Referenced by: '<S2>/Integrator'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S3>/TSamp'
   */
  5.0,

  /* Expression: DifferentiatorICPrevScaledInput
   * Referenced by: '<S3>/UD'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<Root>/Constant7'
   */
  10.0,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<Root>/Switch2'
   */
  0,

  /* Computed Parameter: UD_DelayLength
   * Referenced by: '<S3>/UD'
   */
  1U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  90U,

  /* Computed Parameter: ServoWrite_p1
   * Referenced by: '<S1>/Servo Write'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
