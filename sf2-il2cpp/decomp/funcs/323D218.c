// Nekki.SF2.GUI.SFScrollRect$$CAOCACEJCIP @ RVA 0x323D218

void Nekki_SF2_GUI_SFScrollRect__CAOCACEJCIP
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  ulong uVar1;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  
  if ((DAT_04567066 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    DAT_04567066 = 1;
  }
  uVar1 = (*(__this->klass->vtable)._9_IsActive.methodPtr)
                    (__this,(__this->klass->vtable)._9_IsActive.method);
  if ((uVar1 & 1) != 0) {
    if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_UI_CanvasUpdateRegistry__RegisterCanvasElementForLayoutRebuild
              ((UnityEngine_UI_ICanvasElement_o *)__this,(MethodInfo *)0x0);
    rect = Nekki_SF2_GUI_SFScrollRect__INLENKAOOPD(__this,method_00);
    if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
    }
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
    return;
  }
  return;
}

