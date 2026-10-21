// TypeDefIndex 2877
// Namespace: 
// public class EJDKNOPLIBB
// Fields:

// ===== public static bool INOIIEOAMKP(byte[] OFMEIMDFOFJ, byte[] GAODLOAEKJN)  [RVA 0x343DC4C]
// EJDKNOPLIBB$$INOIIEOAMKP @ RVA 0x343DC4C

bool EJDKNOPLIBB__INOIIEOAMKP
               (System_Byte_array *OFMEIMDFOFJ,System_Byte_array *GAODLOAEKJN,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Security_Cryptography_HashAlgorithm_o *__this;
  MethodInfo *method_00;
  
  pSVar2 = OFMEIMDFOFJ;
  if ((DAT_045681f7 & 1) == 0) {
    pSVar2 = (System_Byte_array *)FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_045681f7 = 1;
  }
  pSVar3 = EJDKNOPLIBB__GOCGGDOHKPH((MethodInfo *)pSVar2);
  pSVar3 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar3,method_00);
  __this = (System_Security_Cryptography_HashAlgorithm_o *)
           System_Security_Cryptography_SHA1__Create((MethodInfo *)0x0);
  if (__this != (System_Security_Cryptography_HashAlgorithm_o *)0x0) {
    pSVar2 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                       (__this,OFMEIMDFOFJ,(MethodInfo *)0x0);
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
    }
    bVar1 = EGFFLEKJFGN__DHFJMIIFDJC(pSVar2,GAODLOAEKJN,pSVar3,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string DACNMPHGEJD()  [RVA 0x343DDF4]
// EJDKNOPLIBB$$DACNMPHGEJD @ RVA 0x343DDF4

System_String_o * EJDKNOPLIBB__DACNMPHGEJD(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045681f8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3896);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3897);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045681f8 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3896,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3897,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string NJIJBJDHOIB(string CJNHFNHJHPE)  [RVA 0x343DD98]
// EJDKNOPLIBB$$NJIJBJDHOIB @ RVA 0x343DD98

System_String_o * EJDKNOPLIBB__NJIJBJDHOIB(System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681f9 & 1) == 0) {
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_045681f9 = 1;
    method = extraout_x1;
  }
  if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo,method);
  }
  pSVar1 = EGFFLEKJFGN__DAOKHJOHFJG(CJNHFNHJHPE,(System_String_o *)0x0,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x343DEA4]
// EJDKNOPLIBB$$.ctor @ RVA 0x343DEA4

void EJDKNOPLIBB___ctor(EJDKNOPLIBB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static string LPPMBCGPCKF()  [RVA 0x343DEAC]
// EJDKNOPLIBB$$LPPMBCGPCKF @ RVA 0x343DEAC

System_String_o * EJDKNOPLIBB__LPPMBCGPCKF(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045681fa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3898);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3899);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045681fa = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3898,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3899,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string GOCGGDOHKPH()  [RVA 0x343DCE8]
// EJDKNOPLIBB$$GOCGGDOHKPH @ RVA 0x343DCE8

System_String_o * EJDKNOPLIBB__GOCGGDOHKPH(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045681fb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_0);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3900);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045681fb = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3900,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x140);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy320___field_0,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static byte[] IKCICIMJLJJ(byte[] HLHKHPHMGLP)  [RVA 0x343DF5C]
// EJDKNOPLIBB$$IKCICIMJLJJ @ RVA 0x343DF5C

System_Byte_array * EJDKNOPLIBB__IKCICIMJLJJ(System_Byte_array *HLHKHPHMGLP,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  System_Byte_array *MLLHENCNAMI;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pSVar1 = HLHKHPHMGLP;
  if ((DAT_045681fc & 1) == 0) {
    pSVar1 = (System_Byte_array *)FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045681fc = 1;
  }
  pSVar2 = EJDKNOPLIBB__DACNMPHGEJD((MethodInfo *)pSVar1);
  pSVar2 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar2,method_00);
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Convert_TypeInfo);
  }
  pSVar1 = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
  pSVar2 = EJDKNOPLIBB__LPPMBCGPCKF((MethodInfo *)pSVar1);
  pSVar2 = EJDKNOPLIBB__NJIJBJDHOIB(pSVar2,method_01);
  MLLHENCNAMI = System_Convert__FromBase64String(pSVar2,(MethodInfo *)0x0);
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(HLHKHPHMGLP,pSVar1,MLLHENCNAMI,(MethodInfo *)0x0);
  return pSVar1;
}

