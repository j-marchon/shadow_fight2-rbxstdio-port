// GKLDDAPBAGG$$MAHFCKJGBPP @ RVA 0x313B93C

void GKLDDAPBAGG__MAHFCKJGBPP(GKLDDAPBAGG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  System_String_o *pSVar6;
  KCJCIJHMEJF_o *pKVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_0456672f & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456672f = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).OJEDDJHFLOG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar6,(MethodInfo *)0x0);
  GKLDDAPBAGG__DOGMNNFIJLC(__this,method_00);
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
  if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
    pKVar3 = pKVar7->klass;
    uVar1._0_1_ = (pKVar3->_2).rank;
    uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
          pVVar2 = pKVar3->vtable + *piVar5;
          goto LAB_0323ba8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,0);
LAB_0323ba8c:
    auVar8 = (*pVVar2->methodPtr)(pKVar7,pSVar6,pVVar2->method);
    if ((auVar8._0_8_ & 1) != 0) {
      return;
    }
    GKLDDAPBAGG__DEILJOGCJJK(__this,auVar8._8_8_);
    __this_00 = (__this->fields).MJMJIDBBMON;
    if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

