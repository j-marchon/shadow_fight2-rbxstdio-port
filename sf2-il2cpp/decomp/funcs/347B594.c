// LPAPAMPGDFN$$DHALEEECIOA @ RVA 0x347B594

void LPAPAMPGDFN__DHALEEECIOA(LPAPAMPGDFN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04568349 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568349 = 1;
  }
  if ((__this->fields).LMGCAJEGBGI == CJNHFNHJHPE) {
    return;
  }
  pSVar2 = (__this->fields).AFMFLLCLLMM;
  (__this->fields).LMGCAJEGBGI = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0357b618 to 0367b63f has its CatchHandler @ 0357b97c */
    puVar1 = &StringLiteral_1606;
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_1567;
    }
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,*puVar1,(pSVar2->klass->vtable)._10_set_Value.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0357b67c to 0367b6a3 has its CatchHandler @ 0357b978 */
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

