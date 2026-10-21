// FPMAFHGLPOB$$GAHNKHLAPGP @ RVA 0x3210BBC

int32_t FPMAFHGLPOB__GAHNKHLAPGP(IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t iVar1;
  HOOAAGABMBL_o *pHVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = IKKAMAMLIKA;
                    /* try { // try from 03310bbc to 03410bc3 has its CatchHandler @ 03310bc4 */
                    /* catch() { ... } // from try @ 03310b08 with catch @ 03310bc4
                       catch() { ... } // from try @ 03310ba8 with catch @ 03310bc4
                       catch() { ... } // from try @ 03310bbc with catch @ 03310bc4 */
  if ((DAT_04566e89 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3551);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3552);
    FUN_01bab630(&byte___TypeInfo);
    auVar3 = FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_04566e89 = 1;
  }
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    pHVar2 = IGFGDDANEPE__JGBDIHJDIHD(IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((pHVar2 == (HOOAAGABMBL_o *)0x0) &&
       (pHVar2 = (IKKAMAMLIKA->fields).PCBECBEFJOI, pHVar2 == (HOOAAGABMBL_o *)0x0)) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3551,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3552,
                 (MethodInfo *)0x0);
      message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      iVar1 = 0;
    }
    else {
      iVar1 = (pHVar2->fields)._JDEHPJEIOCI_k__BackingField;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

