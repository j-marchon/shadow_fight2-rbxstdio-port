// CUDLR.Server$$GDEPBDACFJL @ RVA 0x33BFAD4

void CUDLR_Server__GDEPBDACFJL(CUDLR_Server_o *__this,bool KDNHFKPLJIC,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  
  if ((DAT_04567dbf & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_177);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_178);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_179);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_180);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567dbf = 1;
  }
  if ((__this->fields).CIBJEFICNOC == KDNHFKPLJIC) {
    return;
  }
  (__this->fields).CIBJEFICNOC = KDNHFKPLJIC;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  if (KDNHFKPLJIC) {
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_177,(MethodInfo *)0x0);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_178,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)0x0;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar1,(MethodInfo *)0x0);
    CUDLR_Server__BOENGJINKNH(__this,pSVar2,pMVar3);
    return;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_179,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_180,(MethodInfo *)0x0);
  pMVar3 = (MethodInfo *)0x0;
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,pSVar1,(MethodInfo *)0x0);
  CUDLR_Server__PHGLPIDPNLG(__this,pSVar2,pMVar3);
  return;
}

