// Nekki.SF2.GUI.Fight.IconAndText$$GetFontSize @ RVA 0x3519D40

int32_t Nekki_SF2_GUI_Fight_IconAndText__GetFontSize
                  (Nekki_SF2_GUI_Fight_IconAndText_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    iVar1 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

