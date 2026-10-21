// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$ADMKHKNFDHC @ RVA 0x33F9654

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__ADMKHKNFDHC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar1;
  
  if ((DAT_04567fa7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567fa7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  ppIVar1 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar1 == (IDGOGBNEGAM_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((*ppIVar1 != (IDGOGBNEGAM_o *)0x0) && (__this_00 != (EEOMEMBBGNA_o *)0x0)) {
    EEOMEMBBGNA__EHKLFIEEDFN
              (__this_00,((*ppIVar1)->fields).HLFBMBHOPMI,(System_Action_KEFHDOHHHML__o *)0x0,
               (MethodInfo *)0x0);
    *ppIVar1 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

