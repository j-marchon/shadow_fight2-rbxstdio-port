// Nekki.SF2.GUI.Scenes.GameLoaderScene$$.cctor @ RVA 0x31D28CC

void Nekki_SF2_GUI_Scenes_GameLoaderScene___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566cb9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    FUN_01bab630(&StringLiteral_17610);
    DAT_04566cb9 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_IO_Path_TypeInfo);
  }
  pSVar1 = System_IO_Path__Combine(pSVar1,StringLiteral_17610,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields->ILJEEJCKIHM = pSVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_GameLoaderScene_TypeInfo->static_fields,pSVar1);
  return;
}

