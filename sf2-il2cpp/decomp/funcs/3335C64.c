// IOBFFNAMHPO$$MAHFCKJGBPP @ RVA 0x3335C64

void IOBFFNAMHPO__MAHFCKJGBPP(IOBFFNAMHPO_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456794b & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_10380);
    FUN_01bab630(&StringLiteral_6534);
    DAT_0456794b = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).JBNGADJBDHB;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_6534,(MethodInfo *)0x0);
  if (bVar1) {
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EOOEOHKLOFJ__HJEPIFKKJEP((MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_10380,(MethodInfo *)0x0);
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
    }
    if (bVar1) {
      if (DAT_045679be == '\0') {
        FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
        DAT_045679be = '\x01';
      }
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOOEOHKLOFJ_TypeInfo->static_fields->_FEFAAHBCPED_k__BackingField = true;
    }
    else {
      EOOEOHKLOFJ__CEMNLGBNNDO((MethodInfo *)0x0);
    }
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

