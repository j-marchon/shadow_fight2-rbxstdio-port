// HLPBEPCFOPH$$HFBAJKCHKNP @ RVA 0x31A6B28

void HLPBEPCFOPH__HFBAJKCHKNP(HLPBEPCFOPH_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  ACHLOMELAJE_o *pAVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566b14 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b14 = 1;
  }
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
  pSVar2 = (__this->fields).DEKCPPOJFEH;
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(OKBIKHHKOEN,pSVar2,(MethodInfo *)0x0);
  CJNHFNHJHPE = MFBNFJGBPBB__HAKLDDOPIAF(OKBIKHHKOEN,(__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0)
  ;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__LMJFPPDAPBF
              (pAVar1,pSVar2,CJNHFNHJHPE,(__this->fields).AHMIFFKECHF,(MethodInfo *)0x0);
    if ((__this->fields).AHMIFFKECHF != 0) {
      return;
    }
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
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

