// JLAHCMDABIM$$JKNEODPGLPM @ RVA 0x33C4E80

System_Type_o * JLAHCMDABIM__JKNEODPGLPM(MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  
  if ((DAT_04567def & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567def = 1;
  }
  handle = Google_Protobuf_WellKnownTypes_Empty_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  return pSVar1;
}

