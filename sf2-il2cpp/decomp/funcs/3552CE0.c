// APOIPFMPGEP.<>c$$NICCDBKOBKP @ RVA 0x3552CE0

void APOIPFMPGEP_<>c__NICCDBKOBKP(APOIPFMPGEP___c_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568b4b & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04568b4b = 1;
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
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__IILEMANDADN(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

