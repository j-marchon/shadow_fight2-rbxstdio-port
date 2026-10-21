// LPGPNBGHDBD$$CFBCMMEBKHN @ RVA 0x322A4EC

void LPGPNBGHDBD__CFBCMMEBKHN(MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04566f93 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566f93 = 1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045660f3 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this != (CHDGOFBHAFI_o *)0x0) {
    CHDGOFBHAFI__OJOMBBENIHM(__this,true,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__Close(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

