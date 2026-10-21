// LHOMEBJDFLD$$CFGBGFEIMEK @ RVA 0x3023810

PGICCMFLDPI_o * LHOMEBJDFLD__CFGBGFEIMEK(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  long lVar1;
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  PGICCMFLDPI_o *pPVar2;
  float fVar3;
  
  if ((DAT_04565c74 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04565c74 = 1;
    method = extraout_x1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
  pPVar2 = (__this->fields).LCHIIFDNJMA;
  if ((pPVar2 != (PGICCMFLDPI_o *)0x0) && (__this_00 != (PGICCMFLDPI_o *)0x0)) {
    fVar3 = (__this->fields).BKDNBMKPODL * 1000.0;
    lVar1 = -0x8000000000000000;
    if (fVar3 != INFINITY) {
      lVar1 = (long)fVar3;
    }
    (__this_00->fields).GDKPGIBMFPA = lVar1 + (pPVar2->fields).GDKPGIBMFPA;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

