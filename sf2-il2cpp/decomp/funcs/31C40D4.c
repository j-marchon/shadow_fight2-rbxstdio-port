// Nekki.SF2.GUI.Fight.ActivePerkModel$$RemoveActivePerkItem @ RVA 0x31C40D4

void Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveActivePerkItem
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB
               ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* catch() { ... } // from try @ 032c4070 with catch @ 032c40d4 */
                    /* catch() { ... } // from try @ 032c3d84 with catch @ 032c40d8 */
                    /* catch() { ... } // from try @ 032c4064 with catch @ 032c40dc */
                    /* catch() { ... } // from try @ 032c3dc0 with catch @ 032c40e0 */
                    /* catch() { ... } // from try @ 032c3dd4 with catch @ 032c40e4 */
                    /* catch() { ... } // from try @ 032c3d74 with catch @ 032c40e8 */
                    /* catch() { ... } // from try @ 032c3d90 with catch @ 032c40ec */
                    /* catch() { ... } // from try @ 032c3e14 with catch @ 032c40f0
                       catch() { ... } // from try @ 032c3f94 with catch @ 032c40f0 */
  if ((DAT_04566c25 & 1) == 0) {
                    /* catch() { ... } // from try @ 032c3cf4 with catch @ 032c40f4 */
                    /* catch() { ... } // from try @ 032c3c98 with catch @ 032c40f8 */
                    /* catch() { ... } // from try @ 032c405c with catch @ 032c40fc
                       catch() { ... } // from try @ 032c4068 with catch @ 032c40fc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
                    /* try { // try from 032c411c to 033c411f has its CatchHandler @ 032c412c */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    DAT_04566c25 = 1;
  }
                    /* catch() { ... } // from try @ 032c411c with catch @ 032c412c */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
    __this_00 = (__this->fields).DOKOOFIPJGJ;
                    /* try { // try from 032c413c to 033c41ab has its CatchHandler @ 032c41c0 */
    if (__this_00 == (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032c41b8 to 033c41bf has its CatchHandler @ 032c41c0 */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                        );
      if (!bVar1) goto LAB_032c4198;
      if ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((Nekki_SF2_GUI_Fight_ActivePerkItem_Fields *)((long)local_38.fields._current + 0x10))
             ->_EKIGEJEMNNN_k__BackingField != CPECAEHDDDB);
    Nekki_SF2_GUI_Fight_ActivePerkItem__set_Show
              ((Nekki_SF2_GUI_Fight_ActivePerkItem_o *)local_38.fields._current,false,
               (MethodInfo *)0x0);
LAB_032c4198:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
              );
  }
                    /* try { // try from 032c41ac to 033c41b7 has its CatchHandler @ 032c3b18 */
  return;
}

