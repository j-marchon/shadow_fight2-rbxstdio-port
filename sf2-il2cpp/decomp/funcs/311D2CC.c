// HEINPCIAMNL$$OFPHPMGMCAL @ RVA 0x311D2CC

System_String_o * HEINPCIAMNL__OFPHPMGMCAL(HEINPCIAMNL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  undefined4 local_28;
  
  if ((DAT_04566601 & 1) == 0) {
    FUN_01bab630(&MPAKDCNMLEG_TypeInfo);
    DAT_04566601 = 1;
  }
  local_38.klass = (System_Enum_c *)MPAKDCNMLEG_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = *(undefined4 *)&(__this->fields).super.field_0x54;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  return pSVar1;
}

