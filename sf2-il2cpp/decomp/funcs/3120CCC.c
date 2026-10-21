// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OLKKPOKMJHP @ RVA 0x3120CCC

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *NAKEOECMGIG;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  BANPLPOPIGI_o *__this_00;
  
  if ((DAT_04566627 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_HJJOGMALEOH__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566627 = 1;
  }
  pNVar2 = (__this->fields).JMAFDBBBNEC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).JMAFDBBBNEC;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).HOKHHIBHFBM = true;
  }
  __this_00 = (__this->fields).PlayersLeaderboardSource;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    NAKEOECMGIG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    BANPLPOPIGI__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,NAKEOECMGIG,(MethodInfo *)0x0);
    return;
  }
  return;
}

