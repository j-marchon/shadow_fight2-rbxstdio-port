// AMLGCIBIOLF$$OFPHPMGMCAL @ RVA 0x331BCE8

System_String_o * AMLGCIBIOLF__OFPHPMGMCAL(AMLGCIBIOLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04567819 & 1) == 0) {
    FUN_01bab630(&HPPDIEDAKEC_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_04567819 = 1;
  }
  local_48.klass = (System_Enum_c *)HPPDIEDAKEC_TypeInfo;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_38 = (__this->fields).LKGMCFDHLPK;
  pSVar1 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat
                     (pSVar1,StringLiteral_167,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
  return pSVar1;
}

