// Nekki.SF2.GUI.SFScrollRect$$OnRectTransformDimensionsChange @ RVA 0x323D9A0

void Nekki_SF2_GUI_SFScrollRect__OnRectTransformDimensionsChange
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *rect;
  undefined1 auVar1 [16];
  
  if ((DAT_04567068 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567068 = 1;
  }
  auVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                     (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((auVar1._0_8_ & 1) != 0) {
    rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,auVar1._8_8_);
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    return;
  }
  return;
}

