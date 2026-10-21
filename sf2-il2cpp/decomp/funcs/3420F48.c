// HEFOANCOHDC$$HJCJPFFHFAD @ RVA 0x3420F48

void HEFOANCOHDC__HJCJPFFHFAD
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o *pSVar1;
  OLKKAIFGGAK_o *extraout_x1;
  float local_24;
  
  if ((DAT_045680e4 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_045680e4 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,BCKBBGCOMJD);
  }
  local_24 = LIIFLGALGNK__GFHNCCOMPAJ(1.0,(MethodInfo *)0x0);
  pSVar1 = System_Single__ToString(local_24,(MethodInfo *)&local_24);
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields,pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

