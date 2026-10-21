// HEFOANCOHDC$$LGNDBPMCEGP @ RVA 0x342215C

void HEFOANCOHDC__LGNDBPMCEGP
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *__this_00;
  OLKKAIFGGAK_o *extraout_x1;
  OLKKAIFGGAK_o *extraout_x1_00;
  OLKKAIFGGAK_o *extraout_x1_01;
  FCJBEKHDLAF_o *pFVar3;
  AFFHKININGD_o *pAVar4;
  
  if ((DAT_045680e9 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_19142);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_045680e9 = 1;
    BCKBBGCOMJD = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,BCKBBGCOMJD);
    BCKBBGCOMJD = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    BCKBBGCOMJD = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,BCKBBGCOMJD);
  }
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this_00 = (ACCIJLGMHOO->fields).KCPPJGKAILM, __this_00 != (System_String_o *)0x0)) {
    bVar2 = System_String__Equals(__this_00,StringLiteral_19142,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar3 != (FCJBEKHDLAF_o *)0x0) &&
       (pAVar4 = (pFVar3->fields).FBFPLEFCDOK, pAVar4 != (AFFHKININGD_o *)0x0)) {
      puVar1 = &StringLiteral_1606;
      if ((pAVar4->fields).JDNKKGPNHPB != 0x14) {
        puVar1 = &StringLiteral_1567;
      }
      if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
        (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

