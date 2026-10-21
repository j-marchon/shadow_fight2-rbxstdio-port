// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$IsViewAvailable @ RVA 0x35226C8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__IsViewAvailable
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EEOMEMBBGNA_o *pEVar6;
  CJFBGEEIPBA_o *__this_00;
  KKLJIDJBFEI_o *pKVar7;
  CHDGOFBHAFI_o *__this_01;
  MethodInfo *extraout_x1;
  bool bVar8;
  
  if ((DAT_045689da & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045689da = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if ((pEVar6 != (EEOMEMBBGNA_o *)0x0) &&
     (__this_00 = (pEVar6->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
    bVar2 = CJFBGEEIPBA__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
    bVar3 = KFCFGKEHPNK__PIOIEAEGHCP((MethodInfo *)0x0);
    bVar4 = KFCFGKEHPNK__OEMIEJCOCDI((MethodInfo *)0x0);
    pKVar7 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar7 != (KKLJIDJBFEI_o *)0x0) {
      bVar1 = (pKVar7->fields).super._MGGBEPKMPCF_k__BackingField;
      __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_01 != (CHDGOFBHAFI_o *)0x0) {
        bVar5 = CHDGOFBHAFI__PGFAHOMKNBL(__this_01,(MethodInfo *)0x0);
        bVar8 = false;
        if ((bVar1 != false) && (!bVar2)) {
          bVar8 = (bVar3 || bVar4) || !bVar5;
        }
        return bVar8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

