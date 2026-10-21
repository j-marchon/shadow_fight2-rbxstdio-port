// Nekki.SF2.GUI.Common.Hints.HintCache$$get_Current @ RVA 0x32B8E20

Nekki_SF2_GUI_Common_Hints_HintCache_o *
Nekki_SF2_GUI_Common_Hints_HintCache__get_Current(MethodInfo *method)

{
  if ((DAT_0456746f & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    DAT_0456746f = 1;
  }
  Nekki_SF2_GUI_Common_Hints_HintCache__Init(method);
  return Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
}

