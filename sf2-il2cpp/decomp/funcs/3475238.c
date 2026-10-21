// Nekki.SF2.GUI.Map.BattleButton$$SetAlias @ RVA 0x3475238

void Nekki_SF2_GUI_Map_BattleButton__SetAlias
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,System_String_o *NDGNHGIGAFD,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._NameLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,NDGNHGIGAFD,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

