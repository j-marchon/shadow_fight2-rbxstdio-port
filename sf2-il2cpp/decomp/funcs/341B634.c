// HEFOANCOHDC$$FAEPEDPFHBA @ RVA 0x341B634

void HEFOANCOHDC__FAEPEDPFHBA
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  FPLCEOJCPOD_o *__this_00;
  PJKHAJKEHEL_o *pPVar1;
  int32_t local_14;
  
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (pPVar1 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar1 != (PJKHAJKEHEL_o *)0x0)) {
    local_14 = 0;
    if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
      __this_00 = (pPVar1->fields).ACHJNNOKEDK;
      __this = (HEFOANCOHDC_o *)0x0;
      if (__this_00 != (FPLCEOJCPOD_o *)0x0) {
        FPLCEOJCPOD__KNMENIBLFGF
                  (__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,&local_14,true,false,
                   (MethodInfo *)0x0);
        __this = (HEFOANCOHDC_o *)System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
        if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
          (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&HPACPFLKHPK->fields,__this);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  return;
}

