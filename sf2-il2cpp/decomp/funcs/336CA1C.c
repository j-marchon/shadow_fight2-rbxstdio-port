// IEHDDOIHPNI$$MJIINBIHIEF @ RVA 0x336CA1C

System_String_o * IEHDDOIHPNI__MJIINBIHIEF(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  DDMHMABAHHD_o *pDVar2;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar3;
  System_String_o *str0;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04567af9 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_8328);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567af9 = 1;
  }
  str0 = StringLiteral_8328;
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    str0 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    pSVar4 = StringLiteral_1;
    if (bVar1) {
      local_24 = 0;
      pDVar2 = HCAICJLDDJO__PEENAMDLAKO(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (pDVar2 != (DDMHMABAHHD_o *)0x0) {
        local_24 = (pDVar2->fields)._HFPMLGFDOKC_k__BackingField;
        pSVar4 = (pDVar2->fields)._COIPKAKHDFP_k__BackingField;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pJVar3 = JMDPBFOCHHP__FPPDGOEOJCH(__this,pSVar4,(MethodInfo *)0x0);
      if ((pJVar3 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) &&
         (bVar1 = System_String__op_Equality
                            ((pJVar3->fields).BGHFADDGPAD,StringLiteral_8722,(MethodInfo *)0x0),
         bVar1)) {
        pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        str0 = System_String__Concat
                         (str0,StringLiteral_22230,pSVar4,StringLiteral_22500,(MethodInfo *)0x0);
      }
    }
  }
  return str0;
}

