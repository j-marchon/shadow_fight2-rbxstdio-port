// LEGDPJHPEOB$$JMGEGLJJDNB @ RVA 0x354C764

void LEGDPJHPEOB__JMGEGLJJDNB
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *__this_00;
  int64_t iVar3;
  LAMJOHEKJNJ_o *__this_01;
  LPEBBHNDFCG_o *pLVar4;
  System_String_o *__this_02;
  ACHLOMELAJE_o *pAVar5;
  int64_t local_38;
  
  if ((DAT_04568b29 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_5773);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_12382);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_5492);
    DAT_04568b29 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = (LEGDPJHPEOB_o *)NLPJLHOEAOE_TypeInfo;
    if (__this_02 == (System_String_o *)0x0) goto LAB_0364c9fc;
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    bVar2 = System_String__Equals(__this_02,StringLiteral_14694,(MethodInfo *)0x0);
    __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
    if (!bVar2) {
      return;
    }
    if (__this_00 == (System_String_o *)0x0) goto LAB_0364c9fc;
    bVar2 = System_String__Equals(__this_00,StringLiteral_5773,(MethodInfo *)0x0);
    __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
    if (bVar2) {
      if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0364c9fc;
      local_38 = (pAVar5->fields).CGLPKJKAOAI;
    }
    else {
      bVar2 = System_String__Equals(__this_00,StringLiteral_5492,(MethodInfo *)0x0);
      if (bVar2) {
        if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = AGILEPNENOH__IMAKPJNJIJF((MethodInfo *)0x0);
        if (iVar3 < 1) {
          return;
        }
        if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = AGILEPNENOH__HCIGNMBPBOP((MethodInfo *)0x0);
        local_38 = AGILEPNENOH__IMAKPJNJIJF((MethodInfo *)0x0);
        local_38 = iVar3 - local_38;
      }
      else {
        bVar2 = System_String__Equals(__this_00,StringLiteral_12382,(MethodInfo *)0x0);
        __this = (LEGDPJHPEOB_o *)(ulong)bVar2;
        if (pAVar5 == (ACHLOMELAJE_o *)0x0) goto LAB_0364c9fc;
        if (bVar2) {
          iVar3 = (pAVar5->fields).AGNKMPBFLEP;
          uVar1 = (MGNPHCAAEIO_TypeInfo->_2).cctor_finished;
        }
        else {
          __this_01 = (pAVar5->fields)._DDGPMHMNKNA_k__BackingField;
          __this = (LEGDPJHPEOB_o *)0x0;
          if (__this_01 == (LAMJOHEKJNJ_o *)0x0) goto LAB_0364c9fc;
          pLVar4 = LAMJOHEKJNJ__FENHANFAIND(__this_01,__this_00,(MethodInfo *)0x0);
          if (pLVar4 == (LPEBBHNDFCG_o *)0x0) {
            __this = (LEGDPJHPEOB_o *)0x0;
            if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364c9fc;
            __this = (LEGDPJHPEOB_o *)string_TypeInfo->static_fields->Empty;
            goto LAB_0364c9c0;
          }
          iVar3 = (pLVar4->fields)._PGKPHJLHJCO_k__BackingField;
          uVar1 = (MGNPHCAAEIO_TypeInfo->_2).cctor_finished;
        }
        if (uVar1 == 0) {
          thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        }
        local_38 = MGNPHCAAEIO__HCDHCLBPBHN(iVar3,(MethodInfo *)0x0);
      }
    }
    __this = (LEGDPJHPEOB_o *)System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
    if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_0364c9c0:
      (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
      thunk_FUN_01c20e04(&JDGILABGBGH->fields);
      return;
    }
  }
LAB_0364c9fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

