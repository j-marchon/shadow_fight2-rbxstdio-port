// Nekki.SF2.GUI.Menu.MainMenu$$UpdateEnergyView @ RVA 0x356B964

void Nekki_SF2_GUI_Menu_MainMenu__UpdateEnergyView
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._experience;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateView
              ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

