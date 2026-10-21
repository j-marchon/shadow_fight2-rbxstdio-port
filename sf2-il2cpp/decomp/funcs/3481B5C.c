// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GetPlayersInBattleCount @ RVA 0x3481B5C

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersInBattleCount
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03581b5c to 03681b63 has its CatchHandler @ 03582c80 */
                    /* try { // try from 03581b68 to 03681b6f has its CatchHandler @ 03582cac */
  if ((DAT_04568386 & 1) == 0) {
                    /* try { // try from 03581b80 to 03681b87 has its CatchHandler @ 03582c9c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
                    /* try { // try from 03581b88 to 03681b9b has its CatchHandler @ 03582cb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_get_Current__);
                    /* try { // try from 03581ba0 to 03681bab has its CatchHandler @ 03582c78 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
                    /* try { // try from 03581bac to 03681bc7 has its CatchHandler @ 03582d20 */
    DAT_04568386 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JECONAHEKIN;
  if ((__this_00 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581bd4 to 03681bdb has its CatchHandler @ 03582cc0 */
                    /* try { // try from 03581be4 to 03681beb has its CatchHandler @ 03582cb0 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    iVar2 = 0;
    while( true ) {
                    /* try { // try from 03581bfc to 03681c03 has its CatchHandler @ 03582c70 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
      if (!bVar1) {
                    /* try { // try from 03581c20 to 03681c27 has its CatchHandler @ 03582c6c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
                    /* try { // try from 03581c28 to 03681c3b has its CatchHandler @ 03582c90 */
        return iVar2;
      }
                    /* try { // try from 03581c08 to 03681c0f has its CatchHandler @ 03582ca4 */
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      if (*(int *)((long)&local_38.fields._current[1].monitor + 4) == 2) {
        iVar2 = iVar2 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03581c40 to 03681c4b has its CatchHandler @ 03582c84 */
  FUN_01bab8c8();
}

