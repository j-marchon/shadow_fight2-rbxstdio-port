// Nekki.SF2.GUI.Dialogs.ExitDialog$$get_IsOpened @ RVA 0x3110368

bool Nekki_SF2_GUI_Dialogs_ExitDialog__get_IsOpened(MethodInfo *method)

{
  if ((DAT_0456657a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    DAT_0456657a = 1;
  }
  return Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN;
}

