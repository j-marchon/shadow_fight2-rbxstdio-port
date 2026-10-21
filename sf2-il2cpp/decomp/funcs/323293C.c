// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$KGNBJLLJHOC @ RVA 0x323293C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__KGNBJLLJHOC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *__this_00;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar1;
  
  if ((DAT_04566fe8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566fe8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pCVar1 = (__this->fields).MFONGMAPLFG;
  if ((pCVar1 != (CBPENMDOJDB_o *)0x0) && (__this_00 != (EEOMEMBBGNA_o *)0x0)) {
    EEOMEMBBGNA__ILINPANMKLF(__this_00,(pCVar1->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

