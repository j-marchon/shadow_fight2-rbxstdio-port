// Nekki.SF2.GUI.BaseScrollItem$$get_Size @ RVA 0x34CB0F4

UnityEngine_Vector2_o
Nekki_SF2_GUI_BaseScrollItem__get_Size(Nekki_SF2_GUI_BaseScrollItem_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

