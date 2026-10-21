// BJFCCEEPHOF$$NHECJOHFFBI @ RVA 0x3234C10

System_String_o * BJFCCEEPHOF__NHECJOHFFBI(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Globalization_NumberFormatInfo_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  local_14 = CJNHFNHJHPE;
  if ((DAT_04567016 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_2274);
    FUN_01bab630(&StringLiteral_674);
    DAT_04567016 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
  pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
  if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (pSVar1,StringLiteral_2274,(MethodInfo *)0x0);
    pSVar2 = System_Int32__ToString
                       ((int32_t)&local_14,StringLiteral_674,
                        (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD
                        ,(MethodInfo *)0x0);
    pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
    if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (pSVar1,StringLiteral_167,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

