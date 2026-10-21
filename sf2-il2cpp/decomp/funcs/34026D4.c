// MGNPHCAAEIO$$DJFLAFKJOAJ @ RVA 0x34026D4

void MGNPHCAAEIO__DJFLAFKJOAJ(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04567fff & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fff = 1;
  }
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (MGNPHCAAEIO_TypeInfo->static_fields->OLEFLGBBOFK).fields = CVar1;
  return;
}

