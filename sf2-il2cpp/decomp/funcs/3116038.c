// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$MJLGFNFIHFJ @ RVA 0x3116038

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MJLGFNFIHFJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               LFELBGMCDHD_o *IMMNELPBGIF,MethodInfo *method)

{
  Il2CppObject *DKMMBMBMJBO;
  bool bVar1;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  HCKCBFOGMMJ_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  byte bVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045665b5 & 1) == 0) {
                    /* try { // try from 03216058 to 03316133 has its CatchHandler @ 03216058
                       catch() { ... } // from try @ 03216058 with catch @ 03216058
                       catch() { ... } // from try @ 03216158 with catch @ 03216058
                       catch() { ... } // from try @ 03216194 with catch @ 03216058
                       catch() { ... } // from try @ 032161bc with catch @ 03216058
                       catch() { ... } // from try @ 032161f4 with catch @ 03216058 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    DAT_045665b5 = 1;
    IMMNELPBGIF = (LFELBGMCDHD_o *)extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__MMPLIGDLCJF
                    (__this,(MethodInfo *)IMMNELPBGIF);
  if (!bVar1) {
    __this_00 = (__this->fields).NMNKHAIGHDG;
    (__this->fields).FGDPLJNBMIN = -1;
    if (__this_00 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    bVar2 = 0;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__
                             ), DKMMBMBMJBO = local_50.fields._current, bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if ((IDGOGBNEGAM_o *)DKMMBMBMJBO == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (__this_01 == (HCKCBFOGMMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03216134 to 0331613b has its CatchHandler @ 032161a0 */
      __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)
                  HCKCBFOGMMJ__LLEJFHJIBHC
                            (__this_01,
                             ((IDGOGBNEGAM_Fields *)((long)DKMMBMBMJBO + 0x10))->HLFBMBHOPMI,
                             (MethodInfo *)0x0);
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
                        (__this_02,(IDGOGBNEGAM_o *)DKMMBMBMJBO,(GKLPDMLELJF_o *)__this_02,in_x3);
      bVar2 = bVar2 | bVar1;
    }
                    /* try { // try from 03216150 to 03316157 has its CatchHandler @ 03216198 */
                    /* try { // try from 03216158 to 0331618f has its CatchHandler @ 03216058 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    if (bVar2 != 0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG(__this,method_00);
    }
  }
  return;
}

