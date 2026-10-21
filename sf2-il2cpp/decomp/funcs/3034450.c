// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$OnReconnectPressed @ RVA 0x3034450

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OnReconnectPressed
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  bool bVar1;
  FKDLCJJOGIP_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d25 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565d25 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
      FKDLCJJOGIP__LGBOGFICFPF(__this_00,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__OIPLCHEIFNJ((MethodInfo *)0x0);
  return;
}

