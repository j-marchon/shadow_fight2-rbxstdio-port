// Nekki.SF2.GUI.Menu.MainMenu$$HLMADGFFIND @ RVA 0x356D638

void Nekki_SF2_GUI_Menu_MainMenu__HLMADGFFIND
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
                    /* try { // try from 0366d658 to 0376d663 has its CatchHandler @ 03673810 */
    Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCurrencyValues(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

