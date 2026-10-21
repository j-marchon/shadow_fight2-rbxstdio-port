// EEGDOGKBLNG$$JFFOFHJAFGH @ RVA 0x3071534

void EEGDOGKBLNG__JFFOFHJAFGH
               (EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,bool PKGIGLFCIBK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar1;
  
  if ((DAT_04565f71 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f71 = 1;
  }
  ppSVar1 = &(__this->fields).IHLHMKHJPCC;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  if (!PKGIGLFCIBK) {
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__HNKJELFDFAJ(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

