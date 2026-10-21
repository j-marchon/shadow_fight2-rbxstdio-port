// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$BADMDODBKLB @ RVA 0x3114E7C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__BADMDODBKLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  GKLPDMLELJF_o *HEHMPFLAEGE;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 03214e98 to 03314e9f has its CatchHandler @ 03214fd8 */
  if ((DAT_045665a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
                    /* try { // try from 03214eb0 to 03314ebb has its CatchHandler @ 03214fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
                    /* try { // try from 03214ed0 to 03314ed7 has its CatchHandler @ 03214f2c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
                    /* try { // try from 03214ee0 to 03314eeb has its CatchHandler @ 03214f28 */
    DAT_045665a4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    HEHMPFLAEGE = (GKLPDMLELJF_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GKLPDMLELJF>__);
    __this_00 = (__this->fields).NMNKHAIGHDG;
    if (__this_00 != (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* try { // try from 03214f0c to 03314f13 has its CatchHandler @ 03214fc0 */
                    /* try { // try from 03214f14 to 03314f3b has its CatchHandler @ 03214de4 */
                    /* catch() { ... } // from try @ 03214ee0 with catch @ 03214f28 */
                    /* catch() { ... } // from try @ 03214ed0 with catch @ 03214f2c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
      do {
                    /* try { // try from 03214f3c to 03314f3f has its CatchHandler @ 03214fb4 */
                    /* try { // try from 03214f40 to 03314f7b has its CatchHandler @ 03214de4 */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__
                          );
        if (!bVar1) {
                    /* try { // try from 03214f98 to 03314faf has its CatchHandler @ 03215040 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
          return;
        }
        if ((IDGOGBNEGAM_o *)local_48.fields._current == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03214fb0 to 03314fef has its CatchHandler @ 03214de4 */
          FUN_01bab8c8();
        }
        if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03214f3c with catch @ 03214fb4 */
          FUN_01bab8c8();
        }
      } while (((IDGOGBNEGAM_Fields *)((long)local_48.fields._current + 0x10))->HLFBMBHOPMI !=
               (HEHMPFLAEGE->fields).ANAJGHJEEOC);
      bVar1 = Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
                        ((Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)(ulong)bVar1,
                         (IDGOGBNEGAM_o *)local_48.fields._current,HEHMPFLAEGE,in_x3);
                    /* try { // try from 03214f7c to 03314f7f has its CatchHandler @ 03214fcc */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__)
      ;
                    /* try { // try from 03214f80 to 03314f87 has its CatchHandler @ 03214fc4 */
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__JLKJMLBAHAG(__this,method_00);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

