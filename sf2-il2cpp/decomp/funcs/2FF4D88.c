// Nekki.SF2.GUI.Scenes.LoaderScreen$$IIDHABFCKGG @ RVA 0x2FF4D88

void Nekki_SF2_GUI_Scenes_LoaderScreen__IIDHABFCKGG
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KMBNFNCDDBP_o *pKVar2;
  
  if ((DAT_04565a93 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04565a93 = 1;
  }
  iVar1 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar2 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (pKVar2 != (KMBNFNCDDBP_o *)0x0) {
    if (iVar1 < (pKVar2->fields).JJIGNBIMLCC) {
      UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
      UnityEngine_ResourcesAndBundles__GCCollectImmediately((MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

