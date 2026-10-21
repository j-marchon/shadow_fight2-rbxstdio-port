// Nekki.SF2.GUI.Menu.MainMenu$$get_Instance @ RVA 0x356EBC0

Nekki_SF2_GUI_Menu_MainMenu_o * Nekki_SF2_GUI_Menu_MainMenu__get_Instance(MethodInfo *method)

{
  if ((DAT_04568c48 & 1) == 0) {
                    /* try { // try from 0366ebdc to 0376ebe3 has its CatchHandler @ 03672d1c */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04568c48 = 1;
  }
                    /* try { // try from 0366ebf4 to 0376ebfb has its CatchHandler @ 03672d18 */
  return Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}

