// Nekki.SF2.GUI.Map.RaidKeysButtonView$$Init @ RVA 0x32DEA58

void Nekki_SF2_GUI_Map_RaidKeysButtonView__Init
               (Nekki_SF2_GUI_Map_RaidKeysButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  
  if ((DAT_045675e0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10911);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_21523);
    DAT_045675e0 = 1;
  }
  __this_00 = (__this->fields).super._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (__this_00,StringLiteral_14092,StringLiteral_10911,(MethodInfo *)0x0);
    __this_01 = (__this->fields).super._hintTitle;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,StringLiteral_21523,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_MapButtonViewBase__Init
                ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

