// Nekki.SF2.GUI.Scenes.LoaderScreen$$set_PrevScene @ RVA 0x2FF5434

void Nekki_SF2_GUI_Scenes_LoaderScreen__set_PrevScene(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a9b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a9b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC = CJNHFNHJHPE;
  return;
}

