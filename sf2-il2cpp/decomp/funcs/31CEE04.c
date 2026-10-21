// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$OnDestroy @ RVA 0x31CEE04

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,MethodInfo *method)

{
  if ((DAT_04566c91 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo);
    DAT_04566c91 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields->CBDMFFMCJBK =
       (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_TypeInfo->static_fields,0);
  return;
}

