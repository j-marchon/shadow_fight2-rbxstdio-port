// AMIINPEKKFB$$BJIHLOHNOGH @ RVA 0x3511034

bool AMIINPEKKFB__BJIHLOHNOGH(HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  IGFGDDANEPE_o *ENHJPOHLMCL;
  HOOAAGABMBL_o *IKKAMAMLIKA_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar1;
  bool bVar2;
  
  if ((DAT_045688ee & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688ee = 1;
    method = extraout_x1;
  }
  bVar2 = false;
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
    if ((pAVar1 == (ACHLOMELAJE_o *)0x0) ||
       (__this = (pAVar1->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ENHJPOHLMCL = GGHCLMEFIGO__JNFIBDBHNOA(__this,IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((ENHJPOHLMCL == (IGFGDDANEPE_o *)0x0) ||
       (IKKAMAMLIKA_00 = (ENHJPOHLMCL->fields).LFPOIAJDMBK, IKKAMAMLIKA_00 == (HOOAAGABMBL_o *)0x0))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      AMIINPEKKFB__GLIKCOKNHDM(IKKAMAMLIKA_00,ENHJPOHLMCL,true,in_x3);
    }
  }
                    /* try { // try from 036110f8 to 0371111f has its CatchHandler @ 03611394 */
  return bVar2;
}

