/*
 * File: index.h
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

#ifndef RTW_HEADER_index_h_
#define RTW_HEADER_index_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef index_COMMON_INCLUDES_
# define index_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "HCSR04wrapper.h"
#include "arduino_servowrite_lct.h"
#endif                                 /* index_COMMON_INCLUDES_ */

#include "index_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Switch3;                      /* '<Root>/Switch3' */
  real_T Add3;                         /* '<Root>/Add3' */
  real_T Saturate;                     /* '<S2>/Saturate' */
  real_T Add4;                         /* '<Root>/Add4' */
  int32_T sensr1;                      /* '<Root>/sensör1' */
} B_index_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  soHCSR04Sonar_index_T obj;           /* '<Root>/sensör1' */
  real_T Integrator_DSTATE;            /* '<S2>/Integrator' */
  real_T UD_DSTATE;                    /* '<S3>/UD' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */
} DW_index_T;

/* Parameters (default storage) */
struct P_index_T_ {
  real_T PIDController2_D;             /* Mask Parameter: PIDController2_D
                                        * Referenced by: '<S2>/Derivative Gain'
                                        */
  real_T PIDController2_I;             /* Mask Parameter: PIDController2_I
                                        * Referenced by: '<S2>/Integral Gain'
                                        */
  real_T PIDController2_Kb;            /* Mask Parameter: PIDController2_Kb
                                        * Referenced by: '<S2>/Kb'
                                        */
  real_T PIDController2_LowerSaturationL;/* Mask Parameter: PIDController2_LowerSaturationL
                                          * Referenced by: '<S2>/Saturate'
                                          */
  real_T PIDController2_P;             /* Mask Parameter: PIDController2_P
                                        * Referenced by: '<S2>/Proportional Gain'
                                        */
  real_T PIDController2_UpperSaturationL;/* Mask Parameter: PIDController2_UpperSaturationL
                                          * Referenced by: '<S2>/Saturate'
                                          */
  uint32_T ServoWrite_pinNumber;       /* Mask Parameter: ServoWrite_pinNumber
                                        * Referenced by: '<S1>/Servo Write'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant3_Value;              /* Expression: 2
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Switch3_Threshold;            /* Expression: 23
                                        * Referenced by: '<Root>/Switch3'
                                        */
  real_T istediimizmesafe2_Value;      /* Expression: 10
                                        * Referenced by: '<Root>/istediðimiz mesafe2'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S2>/Integrator'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S3>/TSamp'
                                        */
  real_T UD_InitialCondition;          /* Expression: DifferentiatorICPrevScaledInput
                                        * Referenced by: '<S3>/UD'
                                        */
  real_T Constant7_Value;              /* Expression: 10
                                        * Referenced by: '<Root>/Constant7'
                                        */
  int32_T Switch2_Threshold;           /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<Root>/Switch2'
                                        */
  uint16_T UD_DelayLength;             /* Computed Parameter: UD_DelayLength
                                        * Referenced by: '<S3>/UD'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint8_T ServoWrite_p1;               /* Computed Parameter: ServoWrite_p1
                                        * Referenced by: '<S1>/Servo Write'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_index_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_index_T index_P;

/* Block signals (default storage) */
extern B_index_T index_B;

/* Block states (default storage) */
extern DW_index_T index_DW;

/* Model entry point functions */
extern void index_initialize(void);
extern void index_step(void);
extern void index_terminate(void);

/* Real-time Model object */
extern RT_MODEL_index_T *const index_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/DTDup' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'index'
 * '<S1>'   : 'index/Continuous Servo Write1'
 * '<S2>'   : 'index/PID Controller2'
 * '<S3>'   : 'index/PID Controller2/Differentiator'
 */
#endif                                 /* RTW_HEADER_index_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
