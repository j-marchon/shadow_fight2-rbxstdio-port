// OCOEAJMJEOP$$GAKBKBOMKHP @ RVA 0x32AA610

void OCOEAJMJEOP__GAKBKBOMKHP
               (OCOEAJMJEOP_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  int32_t local_24;
  
  if ((DAT_0456742c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (OCOEAJMJEOP_o *)FUN_01bab630(&StringLiteral_8409);
    DAT_0456742c = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = (OCOEAJMJEOP_o *)0x0;
    if (__this_00 != (System_String_o *)0x0) {
      bVar1 = System_String__Equals(__this_00,StringLiteral_8409,(MethodInfo *)0x0);
      if (!bVar1) {
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
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (OCOEAJMJEOP_o *)0x0;
      if (__this_01 != (ACHLOMELAJE_o *)0x0) {
        local_24 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
        __this = (OCOEAJMJEOP_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

