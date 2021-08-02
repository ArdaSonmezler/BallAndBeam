/*
 * index_dt.h
 *
 * Code generation for model "index".
 *
 * Model version              : 1.2
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Thu Mar 12 15:01:15 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(soHCSR04Sonar_index_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "soHCSR04Sonar_index_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&index_B.Switch3), 0, 0, 4 },

  { (char_T *)(&index_B.sensr1), 6, 0, 1 }
  ,

  { (char_T *)(&index_DW.obj), 14, 0, 1 },

  { (char_T *)(&index_DW.Integrator_DSTATE), 0, 0, 2 },

  { (char_T *)(&index_DW.Scope_PWORK.LoggedData), 11, 0, 3 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&index_P.PIDController2_D), 0, 0, 6 },

  { (char_T *)(&index_P.ServoWrite_pinNumber), 7, 0, 1 },

  { (char_T *)(&index_P.Constant5_Value), 0, 0, 9 },

  { (char_T *)(&index_P.Switch2_Threshold), 6, 0, 1 },

  { (char_T *)(&index_P.UD_DelayLength), 5, 0, 1 },

  { (char_T *)(&index_P.Constant_Value), 3, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  6U,
  rtPTransitions
};

/* [EOF] index_dt.h */
