// TypeDefIndex 1683
// Namespace: 
// public static class HFNDCHDFFKO
// Fields:

// ===== public static MJAIOOLPAMI LLJLCLHCDDO()  [RVA 0x31CECF4]
// HFNDCHDFFKO$$LLJLCLHCDDO @ RVA 0x31CECF4

uint8_t HFNDCHDFFKO__LLJLCLHCDDO(MethodInfo *method)

{
  if (DAT_04566d68 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
    DAT_04566d68 = '\x01';
  }
  return MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField;
}


// ===== public static void HOEAAIJMFEC(MJAIOOLPAMI CJNHFNHJHPE)  [RVA 0x31CED34]
// HFNDCHDFFKO$$HOEAAIJMFEC @ RVA 0x31CED34

void HFNDCHDFFKO__HOEAAIJMFEC(uint8_t CJNHFNHJHPE,MethodInfo *method)

{
  FGKGKDEJCOG_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566c90 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566c90 = 1;
    method = extraout_x1;
  }
  if (DAT_04566d69 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo,method);
    DAT_04566d69 = '\x01';
    method = extraout_x1_00;
  }
  MEFNOMDAJBF_TypeInfo->static_fields->_HDOIGBAGNNK_k__BackingField = CJNHFNHJHPE;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_01;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,method);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (__this != (FGKGKDEJCOG_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

