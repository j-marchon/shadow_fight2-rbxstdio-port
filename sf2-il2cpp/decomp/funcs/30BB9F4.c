// Nekki.SF2.GUI.Common.SceneMenuScroll$$get_Current @ RVA 0x30BB9F4

Nekki_SF2_GUI_Common_SceneMenuScroll_o *
Nekki_SF2_GUI_Common_SceneMenuScroll__get_Current(MethodInfo *method)

{
  if ((DAT_04566242 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566242 = 1;
  }
  return Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
}

