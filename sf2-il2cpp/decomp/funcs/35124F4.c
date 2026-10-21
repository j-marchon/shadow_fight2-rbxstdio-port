// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$KMGNKMDLKDL @ RVA 0x35124F4

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KMGNKMDLKDL
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_LootCell__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 036124f4 to 03712547 has its CatchHandler @ 03612174 */
  if ((DAT_04568900 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_Clear__);
                    /* try { // try from 03612548 to 03712563 has its CatchHandler @ 03612624 */
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_get_Count__);
                    /* try { // try from 03612564 to 03712567 has its CatchHandler @ 036125b0 */
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<LootCell>__);
                    /* try { // try from 03612568 to 0371256b has its CatchHandler @ 036125ac */
                    /* try { // try from 0361256c to 0371256f has its CatchHandler @ 036125a8 */
    DAT_04568900 = 1;
  }
                    /* try { // try from 03612570 to 03712577 has its CatchHandler @ 03612598 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03612578 to 0371257b has its CatchHandler @ 03612590 */
  pSVar2 = (__this->fields).ONENMEPPGMD;
                    /* try { // try from 0361257c to 037125c7 has its CatchHandler @ 03612174 */
  if (pSVar2 != (System_Collections_Generic_List_LootCell__o *)0x0) {
                    /* catch() { ... } // from try @ 036124f0 with catch @ 03612580 */
    if ((pSVar2->fields)._size != 0) {
                    /* catch() { ... } // from try @ 03612318 with catch @ 0361258c */
                    /* catch() { ... } // from try @ 03612578 with catch @ 03612590 */
                    /* catch() { ... } // from try @ 036123b4 with catch @ 03612594 */
                    /* catch() { ... } // from try @ 03612570 with catch @ 03612598 */
                    /* catch() { ... } // from try @ 036124a4 with catch @ 0361259c */
                    /* catch() { ... } // from try @ 03612350 with catch @ 036125a0 */
                    /* catch() { ... } // from try @ 03612388 with catch @ 036125a4 */
                    /* catch() { ... } // from try @ 0361256c with catch @ 036125a8 */
                    /* catch() { ... } // from try @ 03612568 with catch @ 036125ac */
                    /* catch() { ... } // from try @ 03612564 with catch @ 036125b0 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<LootCell>_GetEnumerator__);
                    /* catch() { ... } // from try @ 036122fc with catch @ 036125b4 */
                    /* catch() { ... } // from try @ 0361232c with catch @ 036125b8 */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<LootCell>_MoveNext__
                               ), ALMGONACBKC = local_48.fields._current, bVar1) {
                    /* try { // try from 036125c8 to 037125cb has its CatchHandler @ 036125f8 */
                    /* try { // try from 036125cc to 03712607 has its CatchHandler @ 03612174 */
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<LootCell>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<LootCell>_Dispose__);
      pSVar2 = (__this->fields).ONENMEPPGMD;
      if (pSVar2 == (System_Collections_Generic_List_LootCell__o *)0x0) goto LAB_03612634;
                    /* catch() { ... } // from try @ 036125c8 with catch @ 036125f8 */
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 03612608 to 0371260f has its CatchHandler @ 03612624 */
      if (0 < length) {
                    /* try { // try from 03612610 to 0371261b has its CatchHandler @ 03612174 */
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
                    /* try { // try from 0361261c to 03712623 has its CatchHandler @ 03612624 */
                    /* catch() { ... } // from try @ 03612548 with catch @ 03612624
                       catch() { ... } // from try @ 03612608 with catch @ 03612624
                       catch() { ... } // from try @ 0361261c with catch @ 03612624 */
    return;
  }
LAB_03612634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

