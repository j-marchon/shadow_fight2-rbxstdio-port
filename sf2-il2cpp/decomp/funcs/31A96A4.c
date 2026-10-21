// Nekki.SF2.GUI.Map.ShardsButtonView$$Init @ RVA 0x31A96A4

void Nekki_SF2_GUI_Map_ShardsButtonView__Init
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04566b26 & 1) == 0) {
    FUN_01bab630(&StringLiteral_19580);
    FUN_01bab630(&StringLiteral_10912);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04566b26 = 1;
  }
  __this_00 = (__this->fields).super._hintButton;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    method_00 = StringLiteral_10912;
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (__this_00,StringLiteral_14092,(System_String_o *)StringLiteral_10912,
               (MethodInfo *)0x0);
    __this_01 = (__this->fields).super._hintTitle;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,StringLiteral_19580,method_00);
      Nekki_SF2_GUI_Map_MapButtonViewBase__Init
                ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

