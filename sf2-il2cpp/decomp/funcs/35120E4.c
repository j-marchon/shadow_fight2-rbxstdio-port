// AMIINPEKKFB$$CNDGBHMOMJB @ RVA 0x35120E4

bool AMIINPEKKFB__CNDGBHMOMJB(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  int64_t iVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *method_01;
  
  if ((DAT_045688fd & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688fd = 1;
    method = extraout_x1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 03612318 to 0371231b has its CatchHandler @ 0361258c */
    return false;
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
                    /* try { // try from 03612174 to 037122fb has its CatchHandler @ 03612174
                       catch() { ... } // from try @ 03612174 with catch @ 03612174
                       catch() { ... } // from try @ 036124c8 with catch @ 03612174
                       catch() { ... } // from try @ 036124f4 with catch @ 03612174
                       catch() { ... } // from try @ 0361257c with catch @ 03612174
                       catch() { ... } // from try @ 036125cc with catch @ 03612174
                       catch() { ... } // from try @ 03612610 with catch @ 03612174 */
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0);
    iVar4 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
    if (iVar3 < iVar4) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__EHEMFMCGKKK(IKKAMAMLIKA,3,(MethodInfo *)0x0);
      return false;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0);
      iVar4 = HOOAAGABMBL__MNKCHHFDEGH(IKKAMAMLIKA,(MethodInfo *)0x0);
      bVar1 = AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,true,true,in_x3);
      if (!bVar1) {
        return false;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        ACHLOMELAJE__OGPHHGFFKHD(pAVar2,iVar3 - iVar4,10,false,(MethodInfo *)0x0);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
                    /* try { // try from 036122fc to 03712303 has its CatchHandler @ 036125b4 */
          AMIINPEKKFB__BDMBCINIFFB(IKKAMAMLIKA,1,false,method_01);
          AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,method_00);
          return true;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

