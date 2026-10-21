// Nekki.SF2.GUI.Scenes.LoaderScreen$$.cctor @ RVA 0x2FF528C

void Nekki_SF2_GUI_Scenes_LoaderScreen___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_c *pNVar1;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar2;
  Nekki_SF2_GUI_Scenes_LoaderScreen_StaticFields *pNVar3;
  
  if ((DAT_04565a97 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565a97 = 1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG =
       (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,0);
  pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  pNVar3 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields;
  pNVar3->BGDMCNDAIDC = 0xb;
  pNVar3->BJFGHDKLEKH = 0xb;
  if (DAT_04565b81 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565b81 = '\x01';
    pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  }
  if ((pNVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pNVar1 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
  }
  ppNVar2 = &pNVar1->static_fields->_JPDNDPEAJAL_k__BackingField;
  *ppNVar2 = (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  return;
}

