// InControl.InputDevice$$ProcessAnalogControlValue @ RVA 0x348BA80

/* WARNING: Removing unreachable block (ram,0x0358bb8c) */

float InControl_InputDevice__ProcessAnalogControlValue
                (InControl_InputDevice_o *__this,InControl_InputControl_o *control,float deltaTime,
                MethodInfo *method)

{
  int32_t inputControlType;
  InControl_InputControl_o *pIVar1;
  System_Nullable_float__o *__this_00;
  InControl_InputDevice_o *__this_01;
  InControl_InputDevice_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  System_Nullable_InputControlType__Fields local_38;
  
  if ((DAT_045683e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<InputControlType>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<InputControlType>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045683e1 = 1;
  }
  if (control == (InControl_InputControl_o *)0x0) {
LAB_0358bbd0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar2 = System_Nullable<float>__get_Value
                    ((System_Nullable_float__o)&(control->fields).PreValue,
                     Method_System_Nullable<float>_get_Value__);
  local_38 = (System_Nullable_InputControlType__Fields)
             InControl_InputControl__get_Obverse(control,(MethodInfo *)0x0);
  if (((ulong)local_38 & 0xff) != 0) {
    inputControlType =
         System_Nullable<Int32Enum>__get_Value
                   ((System_Nullable_Int32Enum__o)&local_38,
                    Method_System_Nullable<InputControlType>_get_Value__);
    pIVar1 = InControl_InputDevice__GetControl(__this,inputControlType,method);
    if (pIVar1 == (InControl_InputControl_o *)0x0) goto LAB_0358bbd0;
    __this_00 = &(pIVar1->fields).PreValue;
    if ((__this_00->fields).hasValue != false) {
      fVar3 = System_Nullable<float>__get_Value
                        ((System_Nullable_float__o)__this_00,
                         Method_System_Nullable<float>_get_Value__);
      fVar3 = InControl_InputDevice__ApplyCircularDeadZone
                        (__this_01,fVar2,fVar3,(control->fields).LowerDeadZone,
                         (control->fields).UpperDeadZone,method_00);
      goto LAB_0358bb9c;
    }
  }
  fVar4 = (control->fields).LowerDeadZone;
  fVar5 = (control->fields).UpperDeadZone;
  fVar3 = 0.0;
  if ((fVar4 != fVar5) &&
     (fVar4 = (ABS(fVar2) - fVar4) / (fVar5 - fVar4), fVar3 = 0.0, 0.0 <= fVar4)) {
    fVar3 = fVar4;
  }
  if (fVar2 < 0.0) {
    fVar3 = -fVar3;
  }
LAB_0358bb9c:
  fVar2 = InControl_InputControl__get_LastValue(control,(MethodInfo *)0x0);
  fVar2 = InControl_InputDevice__ApplySmoothing
                    (__this_02,fVar3,fVar2,deltaTime,(control->fields).Sensitivity,method_01);
  return fVar2;
}

