// Nekki.SF2.GUI.LabelAliasTMP$$HBHAKJAFIDP @ RVA 0x314EEF8

void Nekki_SF2_GUI_LabelAliasTMP__HBHAKJAFIDP
               (Nekki_SF2_GUI_LabelAliasTMP_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float local_24;
  
  if ((DAT_045667f7 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_045667f7 = 1;
    method = extraout_x1;
  }
  local_24 = 0.0;
  if (*(char *)&(__this->fields).super.m_EnvMapMatrix.fields.m21 != '\0') {
    fVar1 = (__this->fields).super.m_EnvMapMatrix.fields.m31;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo,method);
    }
    bVar2 = KGFBAIBBNNH__MAJPEEKDPJJ((int32_t)fVar1,&local_24,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 0324ef8c to 0334f193 has its CatchHandler @ 0324ef8c
                       catch() { ... } // from try @ 0324ef8c with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f284 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f380 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f3c0 with catch @ 0324ef8c
                       catch() { ... } // from try @ 0324f400 with catch @ 0324ef8c */
      fVar1 = -2.1474836e+09;
      if (local_24 != INFINITY) {
        fVar1 = (float)(int)local_24;
      }
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <=
          ABS(*(float *)((long)&(__this->fields).super.super.m_StyleSheet + 4) - fVar1)) {
        TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this,fVar1,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMax((TMPro_TMP_Text_o *)__this,fVar1,(MethodInfo *)0x0);
      }
    }
  }
  return;
}

