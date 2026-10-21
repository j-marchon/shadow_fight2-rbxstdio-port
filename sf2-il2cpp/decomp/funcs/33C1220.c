// CUDLR.Server$$set_ColorLogs @ RVA 0x33C1220

void CUDLR_Server__set_ColorLogs
               (CUDLR_Server_o *__this,UnityEngine_Color32_o CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567dca & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dca = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba = CJNHFNHJHPE.fields.rgba;
  return;
}

