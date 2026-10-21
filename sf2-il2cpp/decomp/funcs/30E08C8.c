// CINMFAEJJOF$$LKIBNJGCNKE @ RVA 0x30E08C8

void CINMFAEJJOF__LKIBNJGCNKE(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  System_Action_int__o *pSVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  int32_t iVar5;
  int32_t iVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar9;
  
  if ((DAT_0456639a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456639a = 1;
  }
  CVar9 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
  pCVar7 = &(__this->fields).NELAFECPDOE;
  CVar8 = pCVar7->fields;
  (__this->fields).IPMGLPNEBJH.fields = CVar9;
  (__this->fields).CCHIKFOPFCA = 0;
  CVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__CIJLADMHKHJ
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  pCVar7->fields = CVar8;
  iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  iVar6 = MGNPHCAAEIO__BHIHCKDOJKB((MethodInfo *)0x0);
  if (iVar5 < iVar6) {
    return;
  }
  bVar2 = (__this->fields).NELAFECPDOE.fields.fakeValueActive;
  bVar3 = (__this->fields).NELAFECPDOE.fields.inited;
  uVar4 = *(undefined2 *)&(__this->fields).NELAFECPDOE.fields.field_0xe;
  iVar5 = (pCVar7->fields).currentCryptoKey;
  iVar6 = (pCVar7->fields).hiddenValue;
  (__this->fields).HLNIJGJDDEE.fields.fakeValue = (__this->fields).NELAFECPDOE.fields.fakeValue;
  (__this->fields).HLNIJGJDDEE.fields.fakeValueActive = bVar2;
  (__this->fields).HLNIJGJDDEE.fields.inited = bVar3;
  *(undefined2 *)&(__this->fields).HLNIJGJDDEE.fields.field_0xe = uVar4;
  (__this->fields).HLNIJGJDDEE.fields.currentCryptoKey = iVar5;
  (__this->fields).HLNIJGJDDEE.fields.hiddenValue = iVar6;
  bVar2 = (__this->fields).NELAFECPDOE.fields.fakeValueActive;
  bVar3 = (__this->fields).NELAFECPDOE.fields.inited;
  uVar4 = *(undefined2 *)&(__this->fields).NELAFECPDOE.fields.field_0xe;
  iVar5 = (pCVar7->fields).currentCryptoKey;
  iVar6 = (pCVar7->fields).hiddenValue;
  pSVar1 = (__this->fields).JHJBEMDEEHG;
  CVar8 = (__this->fields).HLNIJGJDDEE.fields;
  (__this->fields).KBIOJGFPIBJ.fields.fakeValue = (__this->fields).NELAFECPDOE.fields.fakeValue;
  (__this->fields).KBIOJGFPIBJ.fields.fakeValueActive = bVar2;
  (__this->fields).KBIOJGFPIBJ.fields.inited = bVar3;
  *(undefined2 *)&(__this->fields).KBIOJGFPIBJ.fields.field_0xe = uVar4;
  (__this->fields).KBIOJGFPIBJ.fields.currentCryptoKey = iVar5;
  (__this->fields).KBIOJGFPIBJ.fields.hiddenValue = iVar6;
  iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar8,(MethodInfo *)0x0);
  if (pSVar1 != (System_Action_int__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e09ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,iVar5,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

