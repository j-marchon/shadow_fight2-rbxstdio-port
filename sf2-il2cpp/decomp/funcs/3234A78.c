// BJFCCEEPHOF$$NHECJOHFFBI @ RVA 0x3234A78

System_String_o * BJFCCEEPHOF__NHECJOHFFBI(int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Globalization_NumberFormatInfo_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  int64_t local_18;
  
  local_18 = CJNHFNHJHPE;
  if ((DAT_04567015 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_2274);
    FUN_01bab630(&StringLiteral_674);
    DAT_04567015 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03334adc to 03434ae7 has its CatchHandler @ 03334788 */
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
                    /* try { // try from 03334ae8 to 03434aef has its CatchHandler @ 03334af0 */
  pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
  if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
                    /* catch() { ... } // from try @ 03334a74 with catch @ 03334af0
                       catch() { ... } // from try @ 03334ae8 with catch @ 03334af0 */
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (pSVar1,StringLiteral_2274,(MethodInfo *)0x0);
    pSVar2 = System_Int64__ToString
                       ((int64_t)&local_18,StringLiteral_674,
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

