// Nekki.SF2.GUI.LabelAliasTMP$$GOLOBCMKJFJ @ RVA 0x314F010

void Nekki_SF2_GUI_LabelAliasTMP__GOLOBCMKJFJ
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  float BMLIMNBPGIJ;
  bool bVar1;
  MethodInfo *extraout_x1;
  TMPro_TMP_FontAsset_o *local_18;
  
  if ((DAT_045667fc & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_045667fc = 1;
    method = extraout_x1;
  }
  local_18 = (TMPro_TMP_FontAsset_o *)0x0;
  if (*(char *)((long)&(__this->fields).super.m_EnvMapMatrix.fields.m01 + 1) != '\0') {
    BMLIMNBPGIJ = (__this->fields).super.m_EnvMapMatrix.fields.m11;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar1 = KGFBAIBBNNH__HLFAHBDLOHL((int32_t)BMLIMNBPGIJ,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this,local_18,(MethodInfo *)0x0);
    }
  }
  return;
}

