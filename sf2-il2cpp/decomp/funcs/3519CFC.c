// Nekki.SF2.GUI.Fight.IconAndText$$SetFontSize @ RVA 0x3519CFC

void Nekki_SF2_GUI_Fight_IconAndText__SetFontSize
               (Nekki_SF2_GUI_Fight_IconAndText_o *__this,int32_t NJBICBHLOMO,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAliasLE_o *__this_00;
  
  __this_00 = (__this->fields).text;
  if (__this_00 != (Nekki_SF2_GUI_LabelAliasLE_o *)0x0) {
    UnityEngine_UI_Text__set_fontSize
              ((UnityEngine_UI_Text_o *)__this_00,NJBICBHLOMO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

