// Nekki.SF2.GUI.Map.MoveableMapPanel$$KHMMOAJLBKI @ RVA 0x32572D0

float Nekki_SF2_GUI_Map_MoveableMapPanel__KHMMOAJLBKI
                (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields).KFADFKDCDGM;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_anchoredPosition3D(__this_00,(MethodInfo *)0x0);
    return UVar1.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

