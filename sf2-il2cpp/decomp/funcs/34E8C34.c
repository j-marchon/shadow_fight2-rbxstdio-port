// OLKKAIFGGAK$$GHJLGMJLODG @ RVA 0x34E8C34

int32_t OLKKAIFGGAK__GHJLGMJLODG(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  FCJBEKHDLAF_o *pFVar2;
  
  if ((DAT_04568778 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04568778 = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
    iVar1 = -1;
  }
  else {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar2 == (FCJBEKHDLAF_o *)0x0) {
LAB_035e8d80:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pFVar2->fields).LAMENNMGPBN == __this) {
      iVar1 = 0;
    }
    else {
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
      pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (pFVar2 == (FCJBEKHDLAF_o *)0x0) goto LAB_035e8d80;
      iVar1 = -1;
      if ((pFVar2->fields).CLEKIBBCAOJ == __this) {
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}

