// DEKKGJNMFEB$$NCFEMNMDBMJ @ RVA 0x322D3CC

BFBONKPKBNL_o *
DEKKGJNMFEB__NCFEMNMDBMJ
          (DEKKGJNMFEB_o *__this,System_String_o *JEPIGCLHAMI,System_String_o *JNCMFLKJJMP,
          MethodInfo *method)

{
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *NKCMBEFHFII;
  GGLKHCAIGDI_o *__this_02;
  BFBONKPKBNL_o *pBVar1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_04566fb9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566fb9 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (DOPEEDABNEK_o *)0x0) {
    IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this_00,JEPIGCLHAMI,(MethodInfo *)0x0);
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
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
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (__this_01 = (pAVar2->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
      goto LAB_0332d518;
      method_00 = (MethodInfo *)0x0;
      NKCMBEFHFII = GGHCLMEFIGO__JNFIBDBHNOA(__this_01,IKKAMAMLIKA,(MethodInfo *)0x0);
      if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
         (__this_02 = DEKKGJNMFEB__LDGJEEGACHJ(__this,JNCMFLKJJMP,method_00),
         __this_02 != (GGLKHCAIGDI_o *)0x0)) {
        pBVar1 = GGLKHCAIGDI__GPGGNMAFOJD(__this_02,NKCMBEFHFII,(MethodInfo *)0x0);
        return pBVar1;
      }
    }
    return (BFBONKPKBNL_o *)0x0;
  }
LAB_0332d518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

