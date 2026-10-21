// TypeDefIndex 1089
// Namespace: 
// public static class GIOAJABNGCG
// Fields:
//   public const int PEKGJKIHHKJ = 0;
//   public const int GLDHJGFLPAN = 1;

// ===== public static string IBBMFNFIKPE(int DEEHPBCLFHC)  [RVA 0x30E0F18]
// GIOAJABNGCG$$IBBMFNFIKPE @ RVA 0x30E0F18

/* WARNING: Type propagation algorithm not settling */

System_String_o * GIOAJABNGCG__IBBMFNFIKPE(int32_t DEEHPBCLFHC,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_RuntimeFieldHandle_Fields *pSVar2;
  System_RuntimeFieldHandle_Fields *pSVar3;
  
  if ((DAT_045663a0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3592);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3593);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3594);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3595);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3596);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3597);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045663a0 = 1;
  }
  if (DEEHPBCLFHC == 0) {
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3593;
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3592;
  }
  else if (DEEHPBCLFHC == 1) {
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3595;
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3594;
  }
  else {
    pSVar3 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3597;
    pSVar2 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3596;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,(System_RuntimeFieldHandle_o)pSVar2->value,
             (MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,(System_RuntimeFieldHandle_o)pSVar3->value,
             (MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

