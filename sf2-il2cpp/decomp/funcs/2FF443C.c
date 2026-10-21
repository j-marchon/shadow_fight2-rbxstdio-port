// Nekki.SF2.GUI.Scenes.LoaderScreen$$FKOAMAIPLOL @ RVA 0x2FF443C

void Nekki_SF2_GUI_Scenes_LoaderScreen__FKOAMAIPLOL
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a88 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a88 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  ppNVar1 = &Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
  ;
  *ppNVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar1,CJNHFNHJHPE);
  return;
}

