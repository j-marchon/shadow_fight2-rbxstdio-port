// LEGDPJHPEOB$$PHCMABDBLJH @ RVA 0x354D99C

void LEGDPJHPEOB__PHCMABDBLJH
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  System_String_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04568b30 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b30 = 1;
  }
  local_28 = (Il2CppMethodPointer)0x0;
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
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
     __this_00 != (ACHLOMELAJE_o *)0x0)) {
    bVar1 = ACHLOMELAJE__JGGHLGELFDJ(__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,(MethodInfo *)0x0);
    if (bVar1) {
      CJNHFNHJHPE = ACHLOMELAJE__NOILDCIGGJB
                              (__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_1567;
      if (!bVar1) {
        local_28 = (Il2CppMethodPointer)BKOHHDBBJML__HNIHOIAMDPC(CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar2 = System_Double__ToString((double)local_28,(MethodInfo *)&stack0xffffffffffffffd8);
      }
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364dac0;
      (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
      thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    }
    return;
  }
LAB_0364dac0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

