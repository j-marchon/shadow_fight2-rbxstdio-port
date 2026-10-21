// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_Instance @ RVA 0x2FF3CA4

Nekki_SF2_GUI_Scenes_LoaderScreen_o *
Nekki_SF2_GUI_Scenes_LoaderScreen__get_Instance(MethodInfo *method)

{
  if ((DAT_04565a84 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a84 = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}

