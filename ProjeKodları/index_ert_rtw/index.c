/*
 * File: index.c
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
#include "index_dt.h"
#define index_EchoPin                  (6.0)
#define index_Sonar                    (1.0)
#define index_TrigPin                  (7.0)

/* Block signals (default storage) */
B_index_T index_B;

/* Block states (default storage) */
DW_index_T index_DW;

/* Real-time model */
RT_MODEL_index_T index_M_;
RT_MODEL_index_T *const index_M = &index_M_;

/* Forward declaration for local functions */
static void SystemProp_matlabCodegenSetAnyP(soHCSR04Sonar_index_T *obj,
  boolean_T value);
static void matlabCodegenHandle_matlabCodeg(soHCSR04Sonar_index_T *obj);
static void SystemProp_matlabCodegenSetAnyP(soHCSR04Sonar_index_T *obj,
  boolean_T value)
{
  /* Start for MATLABSystem: '<Root>/sensör1' */
  obj->matlabCodegenIsDeleted = value;
}

static void matlabCodegenHandle_matlabCodeg(soHCSR04Sonar_index_T *obj)
{
  /* Start for MATLABSystem: '<Root>/sensör1' */
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }

  /* End of Start for MATLABSystem: '<Root>/sensör1' */
}

/* Model step function */
void index_step(void)
{
  real_T rtb_Sum;
  real_T rtb_TSamp;
  real_T tmp;
  int8_T tmp_0;

  /* MATLABSystem: '<Root>/sensör1' */
  index_B.sensr1 = HCSR04Sonar_Read(index_Sonar);

  /* Switch: '<Root>/Switch2' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  if (index_B.sensr1 > index_P.Switch2_Threshold) {
    index_B.Switch3 = index_B.sensr1;
  } else {
    index_B.Switch3 = index_P.Constant3_Value;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* Switch: '<Root>/Switch3' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  if (index_B.Switch3 > index_P.Switch3_Threshold) {
    index_B.Switch3 = index_P.Constant5_Value;
  }

  /* End of Switch: '<Root>/Switch3' */

  /* Sum: '<Root>/Add3' incorporates:
   *  Constant: '<Root>/istediðimiz mesafe2'
   */
  index_B.Add3 = index_B.Switch3 - index_P.istediimizmesafe2_Value;

  /* SampleTimeMath: '<S3>/TSamp' incorporates:
   *  Gain: '<S2>/Derivative Gain'
   *
   * About '<S3>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = index_P.PIDController2_D * index_B.Add3 * index_P.TSamp_WtEt;

  /* Sum: '<S2>/Sum' incorporates:
   *  Delay: '<S3>/UD'
   *  DiscreteIntegrator: '<S2>/Integrator'
   *  Gain: '<S2>/Proportional Gain'
   *  Sum: '<S3>/Diff'
   */
  rtb_Sum = (index_P.PIDController2_P * index_B.Add3 +
             index_DW.Integrator_DSTATE) + (rtb_TSamp - index_DW.UD_DSTATE);

  /* Saturate: '<S2>/Saturate' */
  if (rtb_Sum > index_P.PIDController2_UpperSaturationL) {
    index_B.Saturate = index_P.PIDController2_UpperSaturationL;
  } else if (rtb_Sum < index_P.PIDController2_LowerSaturationL) {
    index_B.Saturate = index_P.PIDController2_LowerSaturationL;
  } else {
    index_B.Saturate = rtb_Sum;
  }

  /* End of Saturate: '<S2>/Saturate' */
  /* Sum: '<Root>/Add4' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  index_B.Add4 = index_B.Saturate + index_P.Constant7_Value;

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  tmp = floor(index_B.Add4);
  if (tmp < 128.0) {
    if (tmp >= -128.0) {
      tmp_0 = (int8_T)tmp;
    } else {
      tmp_0 = MIN_int8_T;
    }
  } else {
    tmp_0 = MAX_int8_T;
  }

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* S-Function (arduinoservowrite_sfcn): '<S1>/Servo Write' incorporates:
   *  Constant: '<S1>/Constant'
   *  Sum: '<S1>/Add'
   */
  MW_servoWrite(index_P.ServoWrite_p1, (uint8_T)((uint16_T)(uint8_T)tmp_0 +
    index_P.Constant_Value));

  /* Update for DiscreteIntegrator: '<S2>/Integrator' incorporates:
   *  Gain: '<S2>/Integral Gain'
   *  Gain: '<S2>/Kb'
   *  Sum: '<S2>/SumI1'
   *  Sum: '<S2>/SumI2'
   */
  index_DW.Integrator_DSTATE += ((index_B.Saturate - rtb_Sum) *
    index_P.PIDController2_Kb + index_P.PIDController2_I * index_B.Add3) *
    index_P.Integrator_gainval;

  /* Update for Delay: '<S3>/UD' */
  index_DW.UD_DSTATE = rtb_TSamp;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, index_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(index_M)!=-1) &&
        !((rtmGetTFinal(index_M)-index_M->Timing.taskTime0) >
          index_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(index_M, "Simulation finished");
    }

    if (rtmGetStopRequested(index_M)) {
      rtmSetErrorStatus(index_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  index_M->Timing.taskTime0 =
    (++index_M->Timing.clockTick0) * index_M->Timing.stepSize0;
}

/* Model initialize function */
void index_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)index_M, 0,
                sizeof(RT_MODEL_index_T));
  rtmSetTFinal(index_M, -1);
  index_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  index_M->Sizes.checksums[0] = (1842643378U);
  index_M->Sizes.checksums[1] = (98683707U);
  index_M->Sizes.checksums[2] = (1652729857U);
  index_M->Sizes.checksums[3] = (854209956U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    index_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(index_M->extModeInfo,
      &index_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(index_M->extModeInfo, index_M->Sizes.checksums);
    rteiSetTPtr(index_M->extModeInfo, rtmGetTPtr(index_M));
  }

  /* block I/O */
  (void) memset(((void *) &index_B), 0,
                sizeof(B_index_T));

  /* states (dwork) */
  (void) memset((void *)&index_DW, 0,
                sizeof(DW_index_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    index_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for MATLABSystem: '<Root>/sensör1' */
  index_DW.obj.matlabCodegenIsDeleted = true;
  index_DW.obj.isInitialized = 0L;
  index_DW.obj.matlabCodegenIsDeleted = false;
  index_DW.obj.isSetupComplete = false;
  index_DW.obj.isInitialized = 1L;
  HCSR04Sonar_Init(index_TrigPin, index_EchoPin, index_Sonar);
  index_DW.obj.isSetupComplete = true;

  /* Start for S-Function (arduinoservowrite_sfcn): '<S1>/Servo Write' */
  MW_servoAttach(index_P.ServoWrite_p1, index_P.ServoWrite_pinNumber);

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Integrator' */
  index_DW.Integrator_DSTATE = index_P.Integrator_IC;

  /* InitializeConditions for Delay: '<S3>/UD' */
  index_DW.UD_DSTATE = index_P.UD_InitialCondition;
}

/* Model terminate function */
void index_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/sensör1' */
  matlabCodegenHandle_matlabCodeg(&index_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
