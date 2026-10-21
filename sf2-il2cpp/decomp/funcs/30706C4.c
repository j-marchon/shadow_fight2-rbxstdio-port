// EEGDOGKBLNG$$LLNLBFAEJNC @ RVA 0x30706C4

void EEGDOGKBLNG__LLNLBFAEJNC(EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *OAOLCGAIILM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  EEGDOGKBLNG_o *pEVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04565f67 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11980);
    FUN_01bab630(&StringLiteral_8234);
    DAT_04565f67 = 1;
  }
  if (OAOLCGAIILM != (PIADCKMDDAK_o *)0x0) {
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      pSVar2 = (OAOLCGAIILM->fields).GJNOEAKNMOG;
      if (pSVar2 == (System_String_o *)0x0) {
LAB_03170824:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__Contains(pSVar2,StringLiteral_8234,(MethodInfo *)0x0);
      if (bVar1) {
        pEVar3 = (EEGDOGKBLNG_o *)EEGDOGKBLNG__BJJOPEEAGGD(__this,method_00);
        bVar1 = EEGDOGKBLNG__GNPEGNJDJJO
                          (pEVar3,OAOLCGAIILM,
                           (System_Collections_Generic_Dictionary_string__int__o *)pEVar3,in_x3);
        if (bVar1) {
          ACHLOMELAJE__IOMGPHOEKGJ(__this_00,true,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar2 = (OAOLCGAIILM->fields).GJNOEAKNMOG;
        if (pSVar2 == (System_String_o *)0x0) goto LAB_03170824;
        bVar1 = System_String__Contains(pSVar2,StringLiteral_11980,(MethodInfo *)0x0);
        if (bVar1) {
          pEVar3 = (EEGDOGKBLNG_o *)EEGDOGKBLNG__NDKMLPFGFAI(__this,method_01);
          bVar1 = EEGDOGKBLNG__GNPEGNJDJJO
                            (pEVar3,OAOLCGAIILM,
                             (System_Collections_Generic_Dictionary_string__int__o *)pEVar3,in_x3);
          if (bVar1) {
            ACHLOMELAJE__JFGHGKCDHMA(__this_00,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}

