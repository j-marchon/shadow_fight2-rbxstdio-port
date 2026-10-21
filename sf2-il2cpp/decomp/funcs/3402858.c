// MGNPHCAAEIO$$PCJHAMFGJLP @ RVA 0x3402858

int32_t MGNPHCAAEIO__PCJHAMFGJLP(MethodInfo *method)

{
  int32_t iVar1;
  
  if ((DAT_04568001 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568001 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (MGNPHCAAEIO_TypeInfo->static_fields->JICOFPIIMHJ).fields,(MethodInfo *)0x0);
  return iVar1;
}

