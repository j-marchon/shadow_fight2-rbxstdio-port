// CUDLR.Server$$PHGLPIDPNLG @ RVA 0x33BE6A8

void CUDLR_Server__PHGLPIDPNLG
               (CUDLR_Server_o *__this,System_String_o *IMCONGDFJME,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  System_String_o *extraout_x1;
  MethodInfo *method_00;
  
  pSVar1 = IMCONGDFJME;
  if ((DAT_04567db9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_155);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_156);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567db9 = 1;
    pSVar1 = extraout_x1;
  }
  if ((__this->fields).PDALMPAOAFM != (System_Net_HttpListener_o *)0x0) {
    CUDLR_Server__FKKLAHANDLH(__this,pSVar1,method);
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_155,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_156,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = System_String__Concat(IMCONGDFJME,pSVar1,(MethodInfo *)0x0);
  CUDLR_Server__LJCILLMKCPE(__this,pSVar1,method_00);
  return;
}

