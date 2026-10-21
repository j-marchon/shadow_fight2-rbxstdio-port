// Nekki.SF2.GUI.Menu.MainMenu$$OnBackKeyClicked @ RVA 0x356B990

void Nekki_SF2_GUI_Menu_MainMenu__OnBackKeyClicked
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    Nekki_SF2_GUI_Menu_MainMenu__CloseMenu
              (__this,*(float *)&(__this->fields).Scroll,(MethodInfo *)IMMNELPBGIF);
  }
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

