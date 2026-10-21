// InControl.InputControl$$get_Obverse @ RVA 0x3440D5C

System_Nullable_InputControlType__o
InControl_InputControl__get_Obverse(InControl_InputControl_o *__this,MethodInfo *method)

{
  System_Nullable_InputControlType__Fields SVar1;
  int32_t value;
  System_Nullable_InputControlType__Fields local_18;
  
  if ((DAT_0456821d & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<InputControlType>__ctor__);
    DAT_0456821d = 1;
  }
  switch((__this->fields)._Target_k__BackingField) {
  case 1:
    value = 2;
    break;
  case 2:
    value = 1;
    break;
  default:
    SVar1.hasValue = false;
    SVar1._1_3_ = 0;
    SVar1.value = 0;
    return (System_Nullable_InputControlType__o)SVar1;
  case 4:
    value = 5;
    break;
  case 5:
    value = 4;
  }
  local_18.hasValue = false;
  local_18._1_3_ = 0;
  local_18.value = 0;
  System_Nullable<Int32Enum>___ctor
            ((System_Nullable_Int32Enum__o)&local_18,value,
             Method_System_Nullable<InputControlType>__ctor__);
  return (System_Nullable_InputControlType__o)local_18;
}

