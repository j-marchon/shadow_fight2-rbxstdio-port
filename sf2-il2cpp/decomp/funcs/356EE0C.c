// Nekki.SF2.GUI.Menu.MainMenu$$UpdateRubySale @ RVA 0x356EE0C

void Nekki_SF2_GUI_Menu_MainMenu__UpdateRubySale
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  
                    /* try { // try from 0366ee14 to 0376ee1b has its CatchHandler @ 03672d00 */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    /* try { // try from 0366ee28 to 0376ee2f has its CatchHandler @ 03672cfc */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

