// Nekki.SF2.GUI.Menu.MainMenu$$get_CanShowRaidModeInShopScene @ RVA 0x356BAC0

bool Nekki_SF2_GUI_Menu_MainMenu__get_CanShowRaidModeInShopScene(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04568c2c & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04568c2c = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    return (bool)*(undefined1 *)&pIVar1[8].klass;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

