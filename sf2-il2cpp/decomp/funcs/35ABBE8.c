// PMFNDKKBEKN$$CMLIMFKNANP @ RVA 0x35ABBE8

void PMFNDKKBEKN__CMLIMFKNANP(PMFNDKKBEKN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OLKPEJMEBPJ_o *pOVar2;
  
  if ((DAT_04568e55 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e55 = 1;
  }
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar2 == (OLKPEJMEBPJ_o *)0x0) {
    return;
  }
  iVar1 = OLKPEJMEBPJ__LIIDJOLDBBF(pOVar2,(MethodInfo *)0x0);
  OLKPEJMEBPJ__MJDAFBEALIP(pOVar2,iVar1 + 1,(MethodInfo *)0x0);
  pOVar2 = (__this->fields).super.LFJPDELEIHG;
  if (pOVar2 != (OLKPEJMEBPJ_o *)0x0) {
    if ((pOVar2->fields).IAMLNMJMPIJ != false) {
      PMFNDKKBEKN__EBOMDHHOBDA(__this,method_00);
      PMFNDKKBEKN__HIGLGIECEJA(__this,method_01);
    }
    if ((__this->fields).super.KANKFCNHDPA == false) {
      (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
                (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
    }
    (*(__this->klass->vtable)._19_JDGBDDAIJNK.methodPtr)
              (__this,2,(__this->klass->vtable)._19_JDGBDDAIJNK.method);
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
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

