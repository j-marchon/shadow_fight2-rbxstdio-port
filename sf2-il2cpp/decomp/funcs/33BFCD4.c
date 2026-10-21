// CUDLR.Server$$Awake @ RVA 0x33BFCD4

void CUDLR_Server__Awake(CUDLR_Server_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *path2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567dc1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_181);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_182);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    DAT_04567dc1 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_181,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_182,(MethodInfo *)0x0);
  path2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,path2,(MethodInfo *)0x0);
  (__this->fields).OJJELBNHHKF = pSVar1;
  thunk_FUN_01c20e04();
  CUDLR_Server__EIIFMOANHHA(__this,method_00);
  return;
}

