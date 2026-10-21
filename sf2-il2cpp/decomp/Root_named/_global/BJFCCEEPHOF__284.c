// TypeDefIndex 284
// Namespace: 
// [Extension]
// public static class BJFCCEEPHOF
// Fields:
//   public const string JDMDGKNLEBK = " ";
//   public const string HLDDENLFENH = "<color=#00000000>0</color>";
//   private static NumberFormatInfo OGELKBJMHBD; // 0x0

// ===== public static string NMABDFPBIHH(string CJNHFNHJHPE)  [RVA 0x32349E0]
// BJFCCEEPHOF$$NMABDFPBIHH @ RVA 0x32349E0

System_String_o * BJFCCEEPHOF__NMABDFPBIHH(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int64_t CJNHFNHJHPE_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04567013 & 1) == 0) {
                    /* try { // try from 033349f8 to 034349ff has its CatchHandler @ 03334a44 */
                    /* try { // try from 03334a00 to 03434a03 has its CatchHandler @ 03334a30 */
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
                    /* try { // try from 03334a04 to 03434a07 has its CatchHandler @ 03334a2c */
                    /* try { // try from 03334a08 to 03434a0b has its CatchHandler @ 03334a20 */
                    /* try { // try from 03334a0c to 03434a0f has its CatchHandler @ 03334788 */
    FUN_01bab630(&StringLiteral_5598/*"ERROR_SALg"*/);
                    /* try { // try from 03334a10 to 03434a13 has its CatchHandler @ 03334a1c */
                    /* try { // try from 03334a14 to 03434a5b has its CatchHandler @ 03334788 */
    DAT_04567013 = 1;
  }
                    /* catch() { ... } // from try @ 03334a10 with catch @ 03334a1c */
                    /* catch() { ... } // from try @ 03334a08 with catch @ 03334a20 */
                    /* catch() { ... } // from try @ 0333493c with catch @ 03334a24 */
                    /* catch() { ... } // from try @ 03334948 with catch @ 03334a28 */
  CJNHFNHJHPE_00 = PCOEHCPGBBG__NEDKJCKICNF(CJNHFNHJHPE,0x7fffffffffffffff,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03334a04 with catch @ 03334a2c */
                    /* catch() { ... } // from try @ 03334a00 with catch @ 03334a30 */
  if (CJNHFNHJHPE_00 == 0x7fffffffffffffff) {
                    /* catch() { ... } // from try @ 03334918 with catch @ 03334a34 */
                    /* catch() { ... } // from try @ 03334924 with catch @ 03334a38 */
                    /* catch() { ... } // from try @ 033348b0 with catch @ 03334a3c */
                    /* catch() { ... } // from try @ 03334854 with catch @ 03334a40 */
                    /* catch() { ... } // from try @ 033349f8 with catch @ 03334a44 */
    return StringLiteral_5598/*"ERROR_SALg"*/;
  }
                    /* try { // try from 03334a5c to 03434a5f has its CatchHandler @ 03334a6c */
  method_00 = extraout_x1;
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
                    /* catch() { ... } // from try @ 03334a5c with catch @ 03334a6c */
                    /* try { // try from 03334a74 to 03434adb has its CatchHandler @ 03334af0 */
  pSVar1 = BJFCCEEPHOF__NHECJOHFFBI(CJNHFNHJHPE_00,method_00);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3234B68]
// BJFCCEEPHOF$$.cctor @ RVA 0x3234B68

void BJFCCEEPHOF___cctor(MethodInfo *method)

{
  System_Globalization_NumberFormatInfo_o *__this;
  
  if ((DAT_04567014 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04567014 = 1;
  }
  __this = (System_Globalization_NumberFormatInfo_o *)
           thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (__this,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
    BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD = __this;
    thunk_FUN_01c20e04(BJFCCEEPHOF_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string NHECJOHFFBI(long CJNHFNHJHPE)  [RVA 0x3234A78]
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
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_2274/*"<color=#00000000>0</color>"*/);
    FUN_01bab630(&StringLiteral_674/*"#,###0"*/);
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
              (pSVar1,StringLiteral_2274/*"<color=#00000000>0</color>"*/,(MethodInfo *)0x0);
    pSVar2 = System_Int64__ToString
                       ((int64_t)&local_18,StringLiteral_674/*"#,###0"*/,
                        (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD
                        ,(MethodInfo *)0x0);
    pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
    if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (pSVar1,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string NHECJOHFFBI(int CJNHFNHJHPE)  [RVA 0x3234C10]
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
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_2274/*"<color=#00000000>0</color>"*/);
    FUN_01bab630(&StringLiteral_674/*"#,###0"*/);
    DAT_04567016 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
  pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
  if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (pSVar1,StringLiteral_2274/*"<color=#00000000>0</color>"*/,(MethodInfo *)0x0);
    pSVar2 = System_Int32__ToString
                       ((int32_t)&local_14,StringLiteral_674/*"#,###0"*/,
                        (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD
                        ,(MethodInfo *)0x0);
    pSVar1 = BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD;
    if (pSVar1 != (System_Globalization_NumberFormatInfo_o *)0x0) {
      System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
                (pSVar1,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string POMAAOILGAL(long CJNHFNHJHPE)  [RVA 0x3234D00]
// BJFCCEEPHOF$$POMAAOILGAL @ RVA 0x3234D00

System_String_o * BJFCCEEPHOF__POMAAOILGAL(int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int64_t local_18;
  
  local_18 = CJNHFNHJHPE;
  if ((DAT_04567017 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_674/*"#,###0"*/);
    DAT_04567017 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
  pSVar1 = System_Int64__ToString
                     ((int64_t)&local_18,StringLiteral_674/*"#,###0"*/,
                      (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static string POMAAOILGAL(int CJNHFNHJHPE)  [RVA 0x322A46C]
// BJFCCEEPHOF$$POMAAOILGAL @ RVA 0x322A46C

System_String_o * BJFCCEEPHOF__POMAAOILGAL(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  local_14 = CJNHFNHJHPE;
  if ((DAT_04567018 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&StringLiteral_674/*"#,###0"*/);
    DAT_04567018 = 1;
    method = extraout_x1;
  }
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo,method);
  }
  pSVar1 = System_Int32__ToString
                     ((int32_t)&local_14,StringLiteral_674/*"#,###0"*/,
                      (System_IFormatProvider_o *)BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD,
                      (MethodInfo *)0x0);
  return pSVar1;
}

