// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$FLOCPEALPFB @ RVA 0x311FF1C

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__FLOCPEALPFB
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  bool bVar1;
  PBHDPJBLDLG_o *__this_00;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_02;
  
  if ((DAT_0456661b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4420);
    DAT_0456661b = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((__this->fields).ClansLeaderboardSource != (PBHDPJBLDLG_o *)0x0) {
    pNVar3 = (__this->fields).MAAPMDHDDGL;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      __this_00 = (__this->fields).ClansLeaderboardSource;
      if (__this_00 == (PBHDPJBLDLG_o *)0x0) goto LAB_03220028;
      bVar1 = PBHDPJBLDLG__OIDEAAIMGMA(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = (__this->fields).JCCKLCBGABE != false;
      }
      else {
        bVar1 = false;
      }
      pNVar3 = (__this->fields).MAAPMDHDDGL;
      if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) goto LAB_03220028;
      (pNVar3->fields).HOKHHIBHFBM = bVar1;
    }
  }
  __this_02 = (__this->fields).ILCGLGPADOK;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_4420,(MethodInfo *)0x0);
  if (__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__OnLoadedScrollItems
              (__this_02,pSVar2,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PDHMLFAMNCO;
    if (__this_01 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03220028:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

