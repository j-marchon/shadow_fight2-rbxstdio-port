// Nekki.SF2.GUI.Menu.MainMenu$$UpdateBarEnergy @ RVA 0x356DB14

void Nekki_SF2_GUI_Menu_MainMenu__UpdateBarEnergy
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this_00;
  
                    /* try { // try from 0366db1c to 0376db23 has its CatchHandler @ 03672e9c */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._experience;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) {
                    /* try { // try from 0366db34 to 0376db3b has its CatchHandler @ 03672e98 */
    Nekki_SF2_GUI_Menu_MenuEnergyPanel__UpdateBar
              ((Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

