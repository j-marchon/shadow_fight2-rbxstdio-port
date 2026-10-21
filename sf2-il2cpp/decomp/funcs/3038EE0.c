// LJNJDFEAIOH$$KBAHEGDFCBI @ RVA 0x3038EE0

void LJNJDFEAIOH__KBAHEGDFCBI(LJNJDFEAIOH_o *__this,NODLJPNGNBG_o *OGFALADNBHC,MethodInfo *method)

{
  HCKCBFOGMMJ_o *__this_00;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar1;
  
  if ((DAT_04565d6f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565d6f = 1;
  }
  pNVar1 = (__this->fields).PDEAGAFHDFI;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
    if ((pNVar1->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    if ((OGFALADNBHC != (NODLJPNGNBG_o *)0x0) && (__this_00 != (HCKCBFOGMMJ_o *)0x0)) {
      HEHMPFLAEGE = HCKCBFOGMMJ__LLEJFHJIBHC
                              (__this_00,(OGFALADNBHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
      if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
        return;
      }
      pNVar1 = (__this->fields).PDEAGAFHDFI;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__InsertPlayer
                  (pNVar1,OGFALADNBHC,HEHMPFLAEGE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

