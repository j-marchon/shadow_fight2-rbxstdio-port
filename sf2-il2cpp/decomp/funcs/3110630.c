// Nekki.SF2.GUI.Dialogs.ExitDialog$$OnDestroy @ RVA 0x3110630

void Nekki_SF2_GUI_Dialogs_ExitDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ExitDialog_o *__this,MethodInfo *method)

{
  if ((DAT_0456657d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo);
    DAT_0456657d = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_ExitDialog_TypeInfo->static_fields->JFAEKJELFFN = false;
  return;
}

