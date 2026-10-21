// Nekki.SF2.GUI.SimpleScroll$$RebuildLayout @ RVA 0x3029C08

void Nekki_SF2_GUI_SimpleScroll__RebuildLayout
               (Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *layoutRoot;
  
  if ((DAT_04565cb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04565cb1 = 1;
    method = extraout_x1;
  }
  if (*(char *)&(__this->fields).LNAPCDLIOOE != '\0') {
    return;
  }
  layoutRoot = (__this->fields).super.m_Content;
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo,method);
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
  return;
}

