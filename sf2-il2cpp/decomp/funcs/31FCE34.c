// NLPJLHOEAOE$$EGLPDODBICJ @ RVA 0x31FCE34

void NLPJLHOEAOE__EGLPDODBICJ(MethodInfo *method)

{
  ushort uVar1;
  NCNJEIBHGBH_o *pNVar2;
  VirtualInvokeData *pVVar3;
  KCJCIJHMEJF_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KCJCIJHMEJF_o *pKVar7;
  ACHLOMELAJE_o *pAVar8;
  DOPEEDABNEK_o *pDVar9;
  
  if ((DAT_04566df5 & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566df5 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  pNVar2 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pKVar7 == (KCJCIJHMEJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar4 = pKVar7->klass;
  uVar1._0_1_ = (pKVar4->_2).rank;
  uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar3 = pKVar4->vtable + (*piVar6 + 6);
        goto LAB_032fcf98;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,6);
LAB_032fcf98:
                    /* WARNING: Could not recover jumptable at 0x032fcfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pKVar7,pDVar9,pAVar8,pNVar2,pVVar3->method);
  return;
}

