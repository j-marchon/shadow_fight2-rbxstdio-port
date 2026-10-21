// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$CELLNGLMJGA @ RVA 0x3477A00

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__CELLNGLMJGA
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_00;
  Il2CppObject *pIVar1;
  int index;
  
  if ((DAT_04568332 & 1) == 0) {
                    /* try { // try from 03577a18 to 03677a1f has its CatchHandler @ 03577a70 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
                    /* try { // try from 03577a34 to 03677a43 has its CatchHandler @ 03577a74 */
    DAT_04568332 = 1;
  }
  __this_00 = (__this->fields).JKBONEFMACI;
  if (__this_00 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
    index = 0;
    do {
                    /* try { // try from 03577a54 to 03677a5b has its CatchHandler @ 03577b3c */
      if ((__this_00->fields)._size <= index) {
                    /* try { // try from 03577a88 to 03677a8b has its CatchHandler @ 03577b10 */
                    /* try { // try from 03577a8c to 03677abf has its CatchHandler @ 03577498 */
        return -1;
      }
                    /* try { // try from 03577a5c to 03677a87 has its CatchHandler @ 03577498 */
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                         );
      if ((pIVar1 != (Il2CppObject *)0x0) && (*(char *)((long)&pIVar1[2].klass + 4) != '\0')) {
        return index;
      }
                    /* catch() { ... } // from try @ 03577a18 with catch @ 03577a70 */
      __this_00 = (__this->fields).JKBONEFMACI;
                    /* catch() { ... } // from try @ 03577a34 with catch @ 03577a74 */
      index = index + 1;
    } while (__this_00 !=
             (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

