// Nekki.SF2.GUI.Scenes.LoaderScreen$$get_IsLoadingLevel @ RVA 0x2FF3BB0

bool Nekki_SF2_GUI_Scenes_LoaderScreen__get_IsLoadingLevel(MethodInfo *method)

{
  if ((DAT_04565a82 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a82 = 1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG !=
         (UnityEngine_Coroutine_o *)0x0;
}

