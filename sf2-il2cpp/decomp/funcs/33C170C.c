// CUDLR.Server$$get_ColorLogs @ RVA 0x33C170C

UnityEngine_Color32_o CUDLR_Server__get_ColorLogs(CUDLR_Server_o *__this,MethodInfo *method)

{
  UnityEngine_Color32_o UVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dd3 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dd3 = 1;
    method = extraout_x1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo,method);
  }
  UVar1.fields.r = 0;
  UVar1.fields.g = 0;
  UVar1.fields.b = 0;
  UVar1.fields.a = 0;
  UVar1.fields.rgba = (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba;
  return (UnityEngine_Color32_o)UVar1.fields;
}

