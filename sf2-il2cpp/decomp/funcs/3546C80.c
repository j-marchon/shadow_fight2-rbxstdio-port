// LEGDPJHPEOB$$CJAINBKPAHF @ RVA 0x3546C80

void LEGDPJHPEOB__CJAINBKPAHF
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *KGLJICLJHEL;
  FOKJBDHLIMG_o *__this_00;
  HEFOANCOHDC_o *pHVar2;
  
  if ((DAT_04568b15 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_7289);
    DAT_04568b15 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    __this = (LEGDPJHPEOB_o *)0x0;
    if (__this_00 != (FOKJBDHLIMG_o *)0x0) {
      pHVar2 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar2 != (HEFOANCOHDC_o *)0x0) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = System_String__op_Equality
                          ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_7289,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (LEGDPJHPEOB_o *)0x1;
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
            (JDGILABGBGH->fields).HPACPFLKHPK = (pHVar2->fields).KPDPJONADPJ;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
          goto LAB_03646db4;
        }
      }
      return;
    }
  }
LAB_03646db4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

