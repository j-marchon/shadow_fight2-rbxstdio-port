// LPAPAMPGDFN$$HCMCKCNCLPH @ RVA 0x347B480

void LPAPAMPGDFN__HCMCKCNCLPH
               (LPAPAMPGDFN_o *__this,int32_t CJNHFNHJHPE,bool OIJDDKPKJIO,MethodInfo *method)

{
  System_String_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar2;
  
  if ((DAT_04568348 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568348 = 1;
  }
  pSVar2 = (__this->fields).PGPKOCNNKKJ;
  (__this->fields).AMIMEMOELHE = CJNHFNHJHPE;
  pSVar1 = CONLFJJLALA__GKMAFGODLLG(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._10_set_Value.method);
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
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__POPAIDFJPEB(__this_01,OIJDDKPKJIO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

