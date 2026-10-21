// Nekki.SF2.GUI.ModuleHolder$$OnDestroy @ RVA 0x314DBB0

void Nekki_SF2_GUI_ModuleHolder__OnDestroy(Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  if ((DAT_045667de & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_045667de = 1;
  }
  Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ =
       (Nekki_SF2_GUI_ModuleHolder_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields,0);
  return;
}

