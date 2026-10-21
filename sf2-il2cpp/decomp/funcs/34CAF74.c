// Nekki.SF2.GUI.BaseScrollItem$$set_Size @ RVA 0x34CAF74

void Nekki_SF2_GUI_BaseScrollItem__set_Size
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,UnityEngine_Vector2_o CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o value;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform(__this,method);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    value.fields.x = CJNHFNHJHPE.fields.x;
    value.fields.y = (float)((ulong)CJNHFNHJHPE.fields >> 0x20);
    UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

