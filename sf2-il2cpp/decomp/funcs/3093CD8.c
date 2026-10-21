// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$SetAlias @ RVA 0x3093CD8

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__SetAlias
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._label;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,EHNFGMGKCHO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

