// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$OnDestroy @ RVA 0x32DC354

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_Sequence__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Sequence>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sequence>_GetEnumerator__);
    DAT_045675c4 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HHEDCPBLJHD;
  if (pSVar2 != (System_Collections_Generic_List_Sequence__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Sequence>_GetEnumerator__);
                    /* try { // try from 033dc3ec to 034dc3ef has its CatchHandler @ 033dc414 */
                    /* try { // try from 033dc3f0 to 034dc3f7 has its CatchHandler @ 033dc420 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<Sequence>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 033dc3f8 to 034dc3fb has its CatchHandler @ 033dc0b4 */
                    /* try { // try from 033dc3fc to 034dc3ff has its CatchHandler @ 033dc408 */
                    /* try { // try from 033dc400 to 034dc42f has its CatchHandler @ 033dc0b4 */
      DG_Tweening_TweenExtensions__Kill
                ((DG_Tweening_Tween_o *)local_38.fields._current,false,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3fc with catch @ 033dc408
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc2d8 with catch @ 033dc40c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc31c with catch @ 033dc410
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3ec with catch @ 033dc414
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<Sequence>_Dispose__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc27c with catch @ 033dc418
                        */
    pSVar2 = (__this->fields).HHEDCPBLJHD;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc220 with catch @ 033dc41c
                        */
    if (pSVar2 != (System_Collections_Generic_List_Sequence__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033dc3f0 with catch @ 033dc420
                        */
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 033dc430 to 034dc433 has its CatchHandler @ 033dc444 */
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 033dc430 with catch @ 033dc444 */
                    /* try { // try from 033dc44c to 034dc4b3 has its CatchHandler @ 033dc4c8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

