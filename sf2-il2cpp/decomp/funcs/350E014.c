// AMIINPEKKFB$$NKGDNFCCFCD @ RVA 0x350E014

void AMIINPEKKFB__NKGDNFCCFCD
               (System_String_o *CNIELFLIKJB,
               System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,MethodInfo *method)

{
  DOPEEDABNEK_o *__this;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *method_00;
  
  if ((DAT_045688e0 & 1) == 0) {
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6859);
    FUN_01bab630(&StringLiteral_853);
    DAT_045688e0 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this != (DOPEEDABNEK_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this,CNIELFLIKJB,(MethodInfo *)0x0);
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      AMIINPEKKFB__NKGDNFCCFCD(IKKAMAMLIKA,LDAIPGBJEOG,method_00);
      return;
    }
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_6859,CNIELFLIKJB,StringLiteral_853,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM<object>(JLNPKGGFFDD,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

