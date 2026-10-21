// LEGDPJHPEOB$$FGHECLAEAMP @ RVA 0x35447B4

void LEGDPJHPEOB__FGHECLAEAMP
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *KGLJICLJHEL;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04568b0d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b0d = 1;
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
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      bVar2 = ACHLOMELAJE__EMGAHKCAAAN(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      puVar1 = &StringLiteral_1606;
      if (!bVar2) {
        puVar1 = &StringLiteral_1567;
      }
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
        (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

