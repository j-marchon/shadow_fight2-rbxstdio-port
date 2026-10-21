// CUDLR.Server$$OnApplicationQuit @ RVA 0x33BFE18

void CUDLR_Server__OnApplicationQuit(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *IMCONGDFJME;
  MethodInfo *method_00;
  
  if ((DAT_04567dc2 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_183);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_184);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dc2 = 1;
  }
  (__this->fields).JHCFODPKGCK = true;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_183,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_184,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  CUDLR_Server__OHDFFFNDEFC(__this,IMCONGDFJME,method_00);
  return;
}

