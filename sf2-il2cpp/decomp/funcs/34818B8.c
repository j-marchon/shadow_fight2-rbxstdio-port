// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$OnRaidExpire @ RVA 0x34818B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__OnRaidExpire
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568383 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    DAT_04568383 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JECONAHEKIN;
  if ((__this_00 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581930 to 03681957 has its CatchHandler @ 03582cf8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)((long)&local_48.fields._current[1].monitor + 4) = 3;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
    pNVar2 = (__this->fields).OMFKAKGPCCM;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03581994 to 036819bb has its CatchHandler @ 03582cf4 */
      (pNVar2->fields).PDFPPFKDPOD = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

