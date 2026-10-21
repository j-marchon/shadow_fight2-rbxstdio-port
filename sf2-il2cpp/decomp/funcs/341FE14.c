// HEFOANCOHDC$$FNDCCCJMHMI @ RVA 0x341FE14

void HEFOANCOHDC__FNDCCCJMHMI
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool FOFCAILEKJD;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  FCJBEKHDLAF_o *pFVar2;
  BMMAPANJCEC_o *__this_02;
  float local_34;
  
  if ((DAT_045680db & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1567);
    DAT_045680db = 1;
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
  pSVar1 = StringLiteral_1567;
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
    if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
        (__this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
        __this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)) ||
       (__this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,0,
                               Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                              ), __this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351ffb8;
    pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
    }
    if (DAT_04565b7f == '\0') {
                    /* try { // try from 0351ff10 to 0361ffb3 has its CatchHandler @ 0351ff10
                       catch() { ... } // from try @ 0351ff10 with catch @ 0351ff10
                       catch() { ... } // from try @ 0351ffe0 with catch @ 0351ff10
                       catch() { ... } // from try @ 03520070 with catch @ 0351ff10
                       catch() { ... } // from try @ 03520098 with catch @ 0351ff10
                       catch() { ... } // from try @ 035200d8 with catch @ 0351ff10 */
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if ((pFVar2 == (FCJBEKHDLAF_o *)0x0) || (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0))
    goto LAB_0351ffb8;
    __this_02 = (pFVar2->fields).HBMCNPFFCHJ;
    FOFCAILEKJD = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (__this_02 == (BMMAPANJCEC_o *)0x0) goto LAB_0351ffb8;
    local_34 = BMMAPANJCEC__KNMENIBLFGF(__this_02,FOFCAILEKJD,pSVar1,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar1;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
                    /* try { // try from 0351ffb4 to 0361ffbb has its CatchHandler @ 0352007c */
    return;
  }
LAB_0351ffb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

