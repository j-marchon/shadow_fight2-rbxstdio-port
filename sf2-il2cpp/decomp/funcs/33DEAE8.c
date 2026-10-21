// NPLIJHGBGCB$$MPDLFPNJNED @ RVA 0x33DEAE8

Nekki_Yaml_YamlDocumentNekki_o *
NPLIJHGBGCB__MPDLFPNJNED(UnityEngine_TextAsset_o *AJGCEEJIMEM,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AFFECAIGLCG;
  Nekki_Yaml_YamlDocumentNekki_o *pNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e89 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e89 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)AJGCEEJIMEM,(MethodInfo *)0x0);
  AFFECAIGLCG = StringLiteral_1;
  if (bVar1) {
    if (AJGCEEJIMEM == (UnityEngine_TextAsset_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    AFFECAIGLCG = UnityEngine_TextAsset__get_text(AJGCEEJIMEM,(MethodInfo *)0x0);
  }
  pNVar2 = Nekki_Yaml_YamlDocumentNekki__OACALLIJLDC(AFFECAIGLCG,(MethodInfo *)0x0);
  return pNVar2;
}

