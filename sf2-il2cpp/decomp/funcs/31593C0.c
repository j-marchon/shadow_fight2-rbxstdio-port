// InControl.UnityInputDevice$$Combine @ RVA 0x31593C0

float InControl_UnityInputDevice__Combine
                (InControl_UnityInputDevice_o *__this,System_Nullable_float__o value1,float value2,
                MethodInfo *method)

{
  float fVar1;
  System_Nullable_float__Fields local_28;
  
  local_28 = value1.fields;
  if ((DAT_04566859 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_04566859 = 1;
  }
  if ((((ulong)value1.fields & 0xff) != 0) &&
     (fVar1 = System_Nullable<float>__get_Value
                        ((System_Nullable_float__o)&local_28,
                         Method_System_Nullable<float>_get_Value__), ABS(value2) < ABS(fVar1))) {
    value2 = System_Nullable<float>__get_Value
                       ((System_Nullable_float__o)&local_28,
                        Method_System_Nullable<float>_get_Value__);
  }
  return value2;
}

