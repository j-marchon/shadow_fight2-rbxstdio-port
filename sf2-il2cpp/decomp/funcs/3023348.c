// LHOMEBJDFLD$$DGLJCGNHLIG @ RVA 0x3023348

void LHOMEBJDFLD__DGLJCGNHLIG(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PGICCMFLDPI_o *pPVar2;
  
  if ((DAT_04565c6d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565c6d = 1;
    method = extraout_x1;
  }
  LHOMEBJDFLD__COJANGIEAKE(__this,method);
  pPVar2 = (__this->fields).LCHIIFDNJMA;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
  if (pPVar2 != (PGICCMFLDPI_o *)0x0) {
    (pPVar2->fields).GDKPGIBMFPA = iVar1 * 1000;
    (__this->fields).BKDNBMKPODL = 0.0;
    LHOMEBJDFLD__AHFNACKMNAH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

