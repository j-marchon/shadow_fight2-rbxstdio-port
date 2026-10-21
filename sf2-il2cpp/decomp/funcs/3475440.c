// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$JHNEFIAMGEE @ RVA 0x3475440

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__JHNEFIAMGEE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *JCGMKBFBANJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *pNVar3;
  
  if ((DAT_04568326 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__);
    DAT_04568326 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_Add__;
  __this_00 = (__this->fields).JKBONEFMACI;
  if (__this_00 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    pNVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = JCGMKBFBANJ;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,JCGMKBFBANJ);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)JCGMKBFBANJ,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

