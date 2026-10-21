// MNLIBPAOCLG$$AGFGNAOHOJF @ RVA 0x31E76D8

float MNLIBPAOCLG__AGFGNAOHOJF
                (MNLIBPAOCLG_o *__this,float CGNJKLAIPBB,float GBLKICMLIHH,float MCFPOCKJGBM,
                MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MGNPHCAAEIO_CEMCIPLHMKD_o *pMVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_04566d81 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566d81 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04566ab3 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566ab3 = '\x01';
    method = extraout_x1_01;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->EBNPOGPNMGH;
  if (pMVar1 != (MGNPHCAAEIO_CEMCIPLHMKD_o *)0x0) {
    fVar3 = (pMVar1->fields).LMJDLCKDFLD;
    fVar2 = 0.0;
    if (CGNJKLAIPBB < ABS(GBLKICMLIHH) + fVar3) {
      fVar3 = (ABS(GBLKICMLIHH) - CGNJKLAIPBB) + fVar3;
      fVar2 = -fVar3;
      if (GBLKICMLIHH <= 0.0) {
        fVar2 = fVar3;
      }
      fVar2 = fVar2 * MCFPOCKJGBM;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

