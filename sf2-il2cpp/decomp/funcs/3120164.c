// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$OHJHOPAHPCM @ RVA 0x3120164

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OHJHOPAHPCM
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *NAKEOECMGIG;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  PBHDPJBLDLG_o *__this_00;
  
  if ((DAT_0456661f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_FLOCPEALPFB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456661f = 1;
  }
  pNVar2 = (__this->fields).MAAPMDHDDGL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).MAAPMDHDDGL;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar2->fields).HOKHHIBHFBM = true;
  }
  __this_00 = (__this->fields).ClansLeaderboardSource;
  if (__this_00 != (PBHDPJBLDLG_o *)0x0) {
    NAKEOECMGIG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    PBHDPJBLDLG__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,NAKEOECMGIG,(MethodInfo *)0x0);
    return;
  }
  return;
}

