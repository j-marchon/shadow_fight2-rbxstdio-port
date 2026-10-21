// Nekki.SF2.GUI.Dialogs.DialogCanvasController$$OnDestroy @ RVA 0x34DAAD4

void Nekki_SF2_GUI_Dialogs_DialogCanvasController__OnDestroy
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this,MethodInfo *method)

{
  if ((DAT_04568707 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo);
    DAT_04568707 = 1;
  }
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_DialogCanvasController_TypeInfo->static_fields,0);
  return;
}

