// BJFCCEEPHOF$$POMAAOILGAL @ RVA 0x322A46C

System_String_o * BJFCCEEPHOF__POMAAOILGAL(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  local_14 = CJNHFNHJHPE;
  if ((DAT_04567018 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_674);
    DAT_04567018 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
  pSVar1 = System_Int32__ToString
                     ((int32_t)&local_14,StringLiteral_674,
                      (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD,
                      (MethodInfo *)0x0);
  return pSVar1;
}

