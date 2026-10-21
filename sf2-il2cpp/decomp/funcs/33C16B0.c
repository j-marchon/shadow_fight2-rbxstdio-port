// CUDLR.Server$$set_ColorWarning @ RVA 0x33C16B0

void CUDLR_Server__set_ColorWarning
               (CUDLR_Server_o *__this,UnityEngine_Color32_o CJNHFNHJHPE,MethodInfo *method)

{
  CFEANGJDHEE_StaticFields *pCVar1;
  int32_t iVar2;
  
  if ((DAT_04567dd2 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_04567dd2 = 1;
  }
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = CFEANGJDHEE_TypeInfo->static_fields;
  iVar2 = CJNHFNHJHPE.fields.rgba;
  (pCVar1->OCPJOMGAAKD).fields.r = (char)iVar2;
  (pCVar1->OCPJOMGAAKD).fields.g = (char)((uint)iVar2 >> 8);
  (pCVar1->OCPJOMGAAKD).fields.b = (char)((uint)iVar2 >> 0x10);
  (pCVar1->OCPJOMGAAKD).fields.a = (char)((uint)iVar2 >> 0x18);
  return;
}

