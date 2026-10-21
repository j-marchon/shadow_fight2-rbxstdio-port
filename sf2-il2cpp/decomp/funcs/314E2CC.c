// Nekki.SF2.GUI.ModuleHolder$$get_CurrentModuleHolder @ RVA 0x314E2CC

Nekki_SF2_GUI_ModuleHolder_o *
Nekki_SF2_GUI_ModuleHolder__get_CurrentModuleHolder(MethodInfo *method)

{
  if ((DAT_045667e6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667e6 = 1;
  }
  return Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
}

