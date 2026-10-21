// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$SetTextFontSize @ RVA 0x30E2CEC

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextFontSize
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,int32_t PGFAIJMMOHJ,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).super._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._IndexSlotAlias;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

