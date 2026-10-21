// OLKKAIFGGAK$$MOMNBGCPBDP @ RVA 0x34EB74C

void OLKKAIFGGAK__MOMNBGCPBDP(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  PFOFJCIOLOG_o *pPVar2;
  
  if ((DAT_04568792 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568792 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).KECCIJBNKLL < 0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    pPVar2 = MGNPHCAAEIO_TypeInfo->static_fields->NLFJFKCJEAC;
    if (pPVar2 == (PFOFJCIOLOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).NHODKNHNCCJ.fields,(MethodInfo *)0x0);
    (__this->fields).KECCIJBNKLL = iVar1;
  }
  return;
}

