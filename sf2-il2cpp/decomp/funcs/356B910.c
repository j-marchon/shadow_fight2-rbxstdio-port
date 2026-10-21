// Nekki.SF2.GUI.Menu.MainMenu$$UpdateScrollMenu @ RVA 0x356B910

void Nekki_SF2_GUI_Menu_MainMenu__UpdateScrollMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this,method);
  Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks(__this,method_00);
  return;
}

