// Nekki.SF2.GUI.ModuleHolder$$GetModuleByName @ RVA 0x314DDD0

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_ModuleHolder__GetModuleByName
          (Nekki_SF2_GUI_ModuleHolder_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule_o *pNVar1;
  
  if ((DAT_045667e0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045667e0 = 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_SF2_GUI_UIModule__GetModuleByName(AFKICLAFDKC,(MethodInfo *)0x0);
  return pNVar1;
}

