// TypeDefIndex 159
// Namespace: 
// public static class POHNPIMJDOI
// Fields:
//   private static readonly byte[] EDCHCICLDBD; // 0x0
//   private static readonly byte[] PDMLGKMLOKP; // 0x8

// ===== public static string CLACEPEKAIM(string AILODCHECLA)  [RVA 0x3023D1C]
// POHNPIMJDOI$$CLACEPEKAIM @ RVA 0x3023D1C

System_String_o * POHNPIMJDOI__CLACEPEKAIM(System_String_o *AILODCHECLA,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c78 & 1) == 0) {
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    DAT_04565c78 = 1;
    method = extraout_x1;
  }
  if ((POHNPIMJDOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(POHNPIMJDOI_TypeInfo,method);
  }
  pSVar1 = IBMPAMLCCHF__EOJPLECOGAD
                     (AILODCHECLA,POHNPIMJDOI_TypeInfo->static_fields->EDCHCICLDBD,
                      POHNPIMJDOI_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3023D80]
// POHNPIMJDOI$$.cctor @ RVA 0x3023D80

void POHNPIMJDOI___cctor(MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array **ppSVar2;
  
  if ((DAT_04565c79 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_5C29EBE1EB236FA277F30993D986F1F3C5BA14248ADDC290962A7AE60CF2A3A1
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_BF78AFFF7EA8CA43185A9BD129F97A458325D93CD63D86A8FDC9F98EC00FECAA
                );
    DAT_04565c79 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x20);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_5C29EBE1EB236FA277F30993D986F1F3C5BA14248ADDC290962A7AE60CF2A3A1
             ,(MethodInfo *)0x0);
  POHNPIMJDOI_TypeInfo->static_fields->EDCHCICLDBD = pSVar1;
  thunk_FUN_01c20e04(POHNPIMJDOI_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x10);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_BF78AFFF7EA8CA43185A9BD129F97A458325D93CD63D86A8FDC9F98EC00FECAA
             ,(MethodInfo *)0x0);
  ppSVar2 = &POHNPIMJDOI_TypeInfo->static_fields->PDMLGKMLOKP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public static string GACDIGONPCC(string AILODCHECLA)  [RVA 0x3023E64]
// POHNPIMJDOI$$GACDIGONPCC @ RVA 0x3023E64

System_String_o * POHNPIMJDOI__GACDIGONPCC(System_String_o *AILODCHECLA,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c7a & 1) == 0) {
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    DAT_04565c7a = 1;
    method = extraout_x1;
  }
  if ((POHNPIMJDOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(POHNPIMJDOI_TypeInfo,method);
  }
  pSVar1 = IBMPAMLCCHF__JILEJCOCHIB
                     (AILODCHECLA,POHNPIMJDOI_TypeInfo->static_fields->EDCHCICLDBD,
                      POHNPIMJDOI_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
  return pSVar1;
}

