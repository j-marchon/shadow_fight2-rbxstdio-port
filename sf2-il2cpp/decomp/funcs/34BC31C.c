// IONAICHLBOO$$FLLFECJDJHD @ RVA 0x34BC31C

bool IONAICHLBOO__FLLFECJDJHD(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  int iVar2;
  
  if ((DAT_045685e2 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_045685e2 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    iVar2 = (DIHAKADKIKM->fields)._stringLength;
    if (2 < iVar2) {
      if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        iVar2 = (DIHAKADKIKM->fields)._stringLength;
        method = extraout_x1_01;
      }
      if (iVar2 < 0xb) {
        if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method = extraout_x1_02;
        }
        bVar1 = IONAICHLBOO__FCBNILJFGIH(DIHAKADKIKM,method);
        return bVar1;
      }
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

