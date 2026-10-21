// CUDLR.Server$$Init @ RVA 0x33BEA58

void CUDLR_Server__Init(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  UnityEngine_Object_o *target;
  Il2CppObject *pIVar1;
  
  if ((DAT_04567dba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_161);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_162);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Server>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&CUDLR_Server_TypeInfo);
    DAT_04567dba = 1;
  }
  if (CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK != (OJPIGIGLPNC_o *)0x0) {
    return;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_161,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_162,(MethodInfo *)0x0);
  name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,name,(MethodInfo *)0x0);
  if (target != (UnityEngine_Object_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)target,
                        Method_UnityEngine_GameObject_AddComponent<Server>__);
    CUDLR_Server_TypeInfo->static_fields->CBDMFFMCJBK = (OJPIGIGLPNC_o *)pIVar1;
    thunk_FUN_01c20e04(CUDLR_Server_TypeInfo->static_fields,pIVar1);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

