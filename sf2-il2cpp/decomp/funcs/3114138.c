// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$UpdatePlayersInfo @ RVA 0x3114138

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdatePlayersInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IBMLPPNMDCI_o *__this_00;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  HCKCBFOGMMJ_o *pHVar3;
  System_Action_T__o *BLMFLPJJMPF;
  System_Action_LFELBGMCDHD__o *BLMFLPJJMPF_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045665a5 & 1) == 0) {
    FUN_01bab630(&System_Action<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_MJLGFNFIHFJ__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_045665a5 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).NMNKHAIGHDG;
  if (__this_01 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
      if (!bVar1) break;
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_02,(int64_t)local_70.fields._current[3].monitor,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pHVar3 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
    System_Action<object>___ctor();
    if (pHVar3 != (HCKCBFOGMMJ_o *)0x0) {
      iVar2 = JICOLGELJGE<object>__OPCNBJOLDNG
                        ((JICOLGELJGE_T__o *)pHVar3,BLMFLPJJMPF,
                         Method_JICOLGELJGE<LFELBGMCDHD>_OPCNBJOLDNG__);
      (__this->fields).FGDPLJNBMIN = iVar2;
      pHVar3 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      BLMFLPJJMPF_00 =
           (System_Action_LFELBGMCDHD__o *)thunk_FUN_01bda818(System_Action<LFELBGMCDHD>_TypeInfo);
      System_Action<object>___ctor();
      if (pHVar3 != (HCKCBFOGMMJ_o *)0x0) {
        HCKCBFOGMMJ__EFCMPBGIEGJ(pHVar3,__this_00,BLMFLPJJMPF_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

