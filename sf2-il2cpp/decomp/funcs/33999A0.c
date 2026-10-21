// Nekki.SF2.GUI.Common.SceneSelector$$.ctor @ RVA 0x33999A0

void Nekki_SF2_GUI_Common_SceneSelector___ctor
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields)._TargetScene = 3;
  (__this->fields)._SelectedTitleColor.fields.b = (float)(int)auVar1._8_8_;
  (__this->fields)._SelectedTitleColor.fields.a = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  (__this->fields)._SelectedTitleColor.fields.r = (float)(int)auVar1._0_8_;
  (__this->fields)._SelectedTitleColor.fields.g = (float)(int)((ulong)auVar1._0_8_ >> 0x20);
  (__this->fields)._UnselectedTitleColor.fields.b = 0.0;
  (__this->fields)._UnselectedTitleColor.fields.a = 1.0;
  (__this->fields)._UnselectedTitleColor.fields.r = 0.0;
  (__this->fields)._UnselectedTitleColor.fields.g = 0.0;
  (__this->fields)._SelectionAnimationBaseAlpha = 0.2;
  (__this->fields)._SelectionAnimationDuration = 0.6;
  (__this->fields)._SelectionAnimationEase = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

