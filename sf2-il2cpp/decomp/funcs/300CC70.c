// Nekki.SF2.GUI.Common.MenuControls$$Awake @ RVA 0x300CC70

void Nekki_SF2_GUI_Common_MenuControls__Awake
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  if ((DAT_04565b8b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8b = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = 0;
  return;
}

