// Nekki.SF2.GUI.Map.MapButton$$set_RealWidth @ RVA 0x34A0F04

void Nekki_SF2_GUI_Map_MapButton__set_RealWidth
               (Nekki_SF2_GUI_Map_MapButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageLE_o *__this_00;
  UnityEngine_RectTransform_o *t;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._Image;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) {
    t = UnityEngine_UI_Graphic__get_rectTransform
                  ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetSizeDeltaX
                (t,CJNHFNHJHPE / UVar1.fields.x,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

