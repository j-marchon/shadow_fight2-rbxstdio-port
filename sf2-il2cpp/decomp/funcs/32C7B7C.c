// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$PCJNNJKEJJE @ RVA 0x32C7B7C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCJNNJKEJJE
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  OJEHKJHEBID_o *PBNPKBJKFHE;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_045674fa & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    DAT_045674fa = 1;
  }
  if (IMMNELPBGIF != (KEFHDOHHHML_o *)0x0) {
    PBNPKBJKFHE = (OJEHKJHEBID_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IMMNELPBGIF,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
                (__this,PBNPKBJKFHE,(PBNPKBJKFHE->fields).GJNOEAKNMOG,in_x3);
      return;
    }
    Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__PCFDKMIEHNG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

