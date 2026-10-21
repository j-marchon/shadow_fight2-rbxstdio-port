// InControl.InputControlMapping$$get_Handle @ RVA 0x35032F4

System_String_o *
InControl_InputControlMapping__get_Handle
          (InControl_InputControlMapping_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04568872 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlType_TypeInfo);
    DAT_04568872 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).handle,(MethodInfo *)0x0);
  if (bVar1) {
    local_38.klass = (System_Enum_c *)InControl_InputControlType_TypeInfo;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = (__this->fields).Target;
    pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (__this->fields).handle;
  }
  return pSVar2;
}

