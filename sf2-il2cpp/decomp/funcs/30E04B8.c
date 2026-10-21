// UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$Get @ RVA 0x30E04B8

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__Get
               (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData_o
                *__return_storage_ptr__,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *local_50;
  System_Byte_array *pSStack_48;
  undefined8 local_40;
  ulong local_38;
  
  if ((DAT_04566395 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_49EC6316B9031829640B7EA5ECA11C55E78B171B51D4C641C1D409A2006FBD12
                );
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_BD67B6F604C8364E97ABCCD1A283041799F224EC9F04E08277EE2D91070CE20F
                );
    DAT_04566395 = 1;
  }
  pSStack_48 = (System_Byte_array *)0x0;
  local_40 = 0;
  local_38 = 0;
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x1ce4b);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_BD67B6F604C8364E97ABCCD1A283041799F224EC9F04E08277EE2D91070CE20F
             ,(MethodInfo *)0x0);
  local_50 = pSVar1;
  thunk_FUN_01c20e04(&local_50,pSVar1);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x1b562);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_<PrivateImplementationDetails>_49EC6316B9031829640B7EA5ECA11C55E78B171B51D4C641C1D409A2006FBD12
             ,(MethodInfo *)0x0);
  pSStack_48 = pSVar1;
  thunk_FUN_01c20e04(&pSStack_48,pSVar1);
  local_38 = local_38 & 0xffffffffffffff00;
  (__return_storage_ptr__->fields).TypesData = pSStack_48;
  (__return_storage_ptr__->fields).FilePathsData = local_50;
  *(ulong *)&(__return_storage_ptr__->fields).IsEditorOnly = local_38;
  (__return_storage_ptr__->fields).TotalTypes = 0x95f;
  (__return_storage_ptr__->fields).TotalFiles = 0x710;
  return;
}

