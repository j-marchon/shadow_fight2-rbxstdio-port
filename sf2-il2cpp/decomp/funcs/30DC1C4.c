// NCIDPNGDKEC$$MAHFCKJGBPP @ RVA 0x30DC1C4

void NCIDPNGDKEC__MAHFCKJGBPP(NCIDPNGDKEC_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  MEJIKMPNBNL_o *BHHBEIACGPB;
  MKIBNAAANPO_o *pMVar1;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  System_String_o *pSVar2;
  
  if ((DAT_0456635e & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456635e = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
  if (*(int *)&(__this->fields).super.field_0x54 == 1) {
    pSVar2 = *(System_String_o **)&(__this->fields).HBJOMJOOBMH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(OKBIKHHKOEN,pSVar2,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    BHHBEIACGPB = NLPJLHOEAOE__KHHBHBLIANB(pSVar2,(MethodInfo *)0x0);
    if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045663a7 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045663a7 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
      if (pMVar1 == (MKIBNAAANPO_o *)0x0) goto LAB_031dc360;
      MKIBNAAANPO__LEDDOEKOGHA
                (pMVar1,BHHBEIACGPB,*(int32_t *)&(__this->fields).super.field_0x54,
                 *(bool *)&(__this->fields).IAJBEJGMIMM,in_x4);
    }
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045663a7 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045663a7 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
    if (pMVar1 == (MKIBNAAANPO_o *)0x0) {
LAB_031dc360:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    MKIBNAAANPO__CMHINFFLEDJ
              (pMVar1,*(int32_t *)&(__this->fields).super.field_0x54,
               *(bool *)&(__this->fields).IAJBEJGMIMM,in_x3);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

