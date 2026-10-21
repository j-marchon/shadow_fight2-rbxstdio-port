// NLPJLHOEAOE$$LMOKIDFLKFF @ RVA 0x31F7300

void NLPJLHOEAOE__LMOKIDFLKFF(HOOAAGABMBL_o *ANMFBABEMFD,MethodInfo *method)

{
  System_String_o *DIHAKADKIKM;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_04566dcf & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dcf = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar1 != (ACHLOMELAJE_o *)0x0) && (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0)) {
    fVar3 = (pAVar1->fields).super.ECAPNIBOPKP;
    DIHAKADKIKM = HOOAAGABMBL__GFMPCIOBMBJ(ANMFBABEMFD,(MethodInfo *)0x0);
    fVar2 = PCOEHCPGBBG__OFFODGKLGOP(DIHAKADKIKM,0.0,(MethodInfo *)0x0);
    KIHIPAJGNBF__EIDOHIPCDDD((KIHIPAJGNBF_o *)pAVar1,fVar3 + fVar2,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
      KIHIPAJGNBF__KMLGNCEKHGN
                ((KIHIPAJGNBF_o *)pAVar1,(pAVar1->fields).super.BJGOCKADFEB + 1,(MethodInfo *)0x0);
      AMIINPEKKFB__PJOFJOOGIBF(ANMFBABEMFD,1,0,false,true,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

