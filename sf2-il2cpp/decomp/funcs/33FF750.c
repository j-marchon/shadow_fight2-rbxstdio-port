// MGNPHCAAEIO$$EBMJDCJOLDM @ RVA 0x33FF750

void MGNPHCAAEIO__EBMJDCJOLDM(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MGNPHCAAEIO_c *pMVar1;
  System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CVar4;
  
  if ((DAT_04567fdc & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567fdc = 1;
  }
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo;
  (MGNPHCAAEIO_TypeInfo->static_fields->JICOFPIIMHJ).fields = CVar3;
  pSVar2 = pMVar1->static_fields->FBNNBIBKJCG;
  if (pSVar2 != (System_Action_MGNPHCAAEIO_LGLCMNNLHMI__ObscuredInt__o *)0x0) {
    CVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      (CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034ff7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,0,CVar4.fields._0_8_,CVar4.fields._8_8_,
               (pSVar2->fields).super.super.method);
    return;
  }
  return;
}

