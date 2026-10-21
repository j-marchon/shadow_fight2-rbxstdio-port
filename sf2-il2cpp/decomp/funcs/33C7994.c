// BANPLPOPIGI$$OKNCMCGGAMJ @ RVA 0x33C7994

void BANPLPOPIGI__OKNCMCGGAMJ
               (BANPLPOPIGI_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *JCGMKBFBANJ,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *pNVar4;
  
  if ((DAT_04567dfe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    DAT_04567dfe = 1;
  }
  lVar3 = Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
  iVar1 = (__this->fields).FFLNLBEPNNH;
  __this_00 = (__this->fields).JKBONEFMACI;
  if (iVar1 < 1) {
    if (__this_00 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    goto LAB_034c7a70;
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
    goto LAB_034c7a70;
    if (iVar1 <= (__this_00->fields)._size) {
      return;
    }
  }
  pNVar4 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *)0x0) {
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pNVar4->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pNVar4->m_Items[(int)uVar2] = JCGMKBFBANJ;
      thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar2,JCGMKBFBANJ);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)JCGMKBFBANJ,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_034c7a70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

