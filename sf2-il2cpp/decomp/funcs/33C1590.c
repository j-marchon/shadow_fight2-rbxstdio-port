// CUDLR.Server$$OnDestroy @ RVA 0x33C1590

void CUDLR_Server__OnDestroy(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dd0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_245);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_246);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dd0 = 1;
  }
  if ((__this->fields).JHCFODPKGCK != false) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_245,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_246,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method_00);
  return;
}

