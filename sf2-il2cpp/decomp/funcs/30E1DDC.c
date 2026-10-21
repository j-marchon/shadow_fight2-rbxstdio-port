// Nekki.SF2.GUI.Dialogs.Raids.RaidViewContainer$$JBJJOIHNIDF @ RVA 0x30E1DDC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__JBJJOIHNIDF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_045663b8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045663b8 = 1;
  }
                    /* try { // try from 031e1e14 to 032e1e3b has its CatchHandler @ 031e1e50 */
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH = CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields,
                     CJNHFNHJHPE);
  return;
}

