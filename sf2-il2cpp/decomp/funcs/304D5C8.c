// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$ShowTopGroupSeparator @ RVA 0x304D5C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ShowTopGroupSeparator
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_Vector2_o UVar1;
  
  __this_00 = (__this->fields)._linePic;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
    __this_02 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    __this_03 = Nekki_SF2_GUI_BaseScrollItem__get_RectTransform
                          ((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
        UVar1.fields.y = (__this->fields)._heightWithLine;
        UnityEngine_RectTransform__set_sizeDelta(__this_02,UVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

