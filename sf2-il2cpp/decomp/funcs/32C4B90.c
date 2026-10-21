// FJFMOEDIMLC$$MAHFCKJGBPP @ RVA 0x32C4B90

void FJFMOEDIMLC__MAHFCKJGBPP(FJFMOEDIMLC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCJCIJHMEJF_o *pKVar6;
  
  if ((DAT_045674e9 & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045674e9 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,method);
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
  pKVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar6 == (KCJCIJHMEJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 4);
        goto LAB_033c4c8c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCJCIJHMEJF_TypeInfo,4);
LAB_033c4c8c:
  (*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,method_00);
  return;
}

