// Nekki.SF2.GUI.Scenes.GameLoaderScene$$OnSupportButtonClicked @ RVA 0x31D22B0

void Nekki_SF2_GUI_Scenes_GameLoaderScene__OnSupportButtonClicked
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb4 & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04566cb4 = 1;
    method = extraout_x1;
  }
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFDCJGIIPLB_TypeInfo,method);
  }
  PFDCJGIIPLB__BKGENOHNNKM
            ((System_Collections_Generic_ICollection_string__o *)0x0,(MethodInfo *)0x0);
  return;
}

