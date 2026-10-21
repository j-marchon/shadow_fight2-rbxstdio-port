// LLKDCCJMFLE$$KOCIBNGKCIG @ RVA 0x3522DCC

void LLKDCCJMFLE__KOCIBNGKCIG(MethodInfo *method)

{
  int iVar1;
  FGKGKDEJCOG_o *pFVar2;
  
  if ((DAT_045689e3 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045689e3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    iVar1 = (pFVar2->fields).ILACIHPOGDC;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e59 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565e59 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
    if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
      FGKGKDEJCOG__MJCNICLHEKC(pFVar2,(uint)(iVar1 == 0),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

