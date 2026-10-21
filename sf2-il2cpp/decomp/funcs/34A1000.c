// Nekki.SF2.GUI.Map.MapButton$$get_RealWidth @ RVA 0x34A1000

float Nekki_SF2_GUI_Map_MapButton__get_RealWidth
                (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageLE_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector3_o UVar3;
  
  __this_00 = (__this->fields)._Image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) &&
     (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
      return UVar2.fields.x * UVar3.fields.x;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

