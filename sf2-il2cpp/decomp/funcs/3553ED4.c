// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$OriginateHeight @ RVA 0x3553ED4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__OriginateHeight
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  __this_01 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                        ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1.fields.y = (__this->fields)._originHeight;
      UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

