// CINMFAEJJOF$$JMIDDFHCLDO @ RVA 0x30E0A04

void CINMFAEJJOF__JMIDDFHCLDO(CINMFAEJJOF_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_int__o *pSVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined2 uVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  MethodInfo *method_00;
  
  if ((DAT_0456639b & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456639b = 1;
  }
  bVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).IPMGLPNEBJH.fields,(MethodInfo *)0x0);
  if (bVar6) {
    iVar1 = (__this->fields).CCHIKFOPFCA + 1;
    (__this->fields).CCHIKFOPFCA = iVar1;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar7 = MGNPHCAAEIO__EOJFKNELJMG((MethodInfo *)0x0);
    if (iVar7 < iVar1) {
      bVar3 = (__this->fields).HLNIJGJDDEE.fields.fakeValueActive;
      bVar4 = (__this->fields).HLNIJGJDDEE.fields.inited;
      uVar5 = *(undefined2 *)&(__this->fields).HLNIJGJDDEE.fields.field_0xe;
      iVar7 = (__this->fields).HLNIJGJDDEE.fields.currentCryptoKey;
      iVar8 = (__this->fields).HLNIJGJDDEE.fields.hiddenValue;
      (__this->fields).KBIOJGFPIBJ.fields.fakeValue = (__this->fields).HLNIJGJDDEE.fields.fakeValue;
      (__this->fields).KBIOJGFPIBJ.fields.fakeValueActive = bVar3;
      (__this->fields).KBIOJGFPIBJ.fields.inited = bVar4;
      *(undefined2 *)&(__this->fields).KBIOJGFPIBJ.fields.field_0xe = uVar5;
      (__this->fields).KBIOJGFPIBJ.fields.currentCryptoKey = iVar7;
      (__this->fields).KBIOJGFPIBJ.fields.hiddenValue = iVar8;
      CINMFAEJJOF__DGLJCGNHLIG(__this,method_00);
      iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KBIOJGFPIBJ.fields,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar8 = MGNPHCAAEIO__BHIHCKDOJKB((MethodInfo *)0x0);
      if (iVar8 <= iVar7) {
        pSVar2 = (__this->fields).JHJBEMDEEHG;
        iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields).HLNIJGJDDEE.fields,(MethodInfo *)0x0);
        if (pSVar2 != (System_Action_int__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,iVar7,
                     (pSVar2->fields).super.super.method);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

