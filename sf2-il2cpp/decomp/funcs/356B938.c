// Nekki.SF2.GUI.Menu.MainMenu$$UpdateMaterials @ RVA 0x356B938

void Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = *(Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o **)
               &(__this->fields).TopMenuDefaultInteraction;
  if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuMaterialsPanel__Refresh(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

