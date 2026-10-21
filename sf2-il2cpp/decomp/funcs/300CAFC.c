// Nekki.SF2.GUI.Common.MenuControls$$get_Current @ RVA 0x300CAFC

Nekki_SF2_GUI_Common_MenuControls_o *
Nekki_SF2_GUI_Common_MenuControls__get_Current(MethodInfo *method)

{
  if ((DAT_04565b8a & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_04565b8a = 1;
  }
  Nekki_SF2_GUI_Common_MenuControls__GIENGNEGHPJ(method);
  return Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->CNMHHKAMGPI;
}

