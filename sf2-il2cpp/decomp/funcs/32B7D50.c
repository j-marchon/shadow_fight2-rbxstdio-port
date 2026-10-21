// Nekki.SF2.GUI.Map.IRaidKeysView$$AMOJAGCNKAB @ RVA 0x32B7D50

void Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB
               (UnityEngine_GameObject_o *CMMIJCJOBBF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *layoutRoot;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = CMMIJCJOBBF;
  if ((DAT_04567466 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    auVar1 = FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567466 = 1;
  }
  if (CMMIJCJOBBF == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
  }
  UnityEngine_GameObject__SetActive(CMMIJCJOBBF,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__SetActive(CMMIJCJOBBF,true,(MethodInfo *)0x0);
  layoutRoot = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
  }
  if (layoutRoot == (UnityEngine_RectTransform_o *)0x0) {
    layoutRoot = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (layoutRoot->klass != UnityEngine_RectTransform_TypeInfo) {
    layoutRoot = (UnityEngine_RectTransform_o *)0x0;
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
  return;
}

