// PJKHAJKEHEL$$PBNHNHLEPEJ @ RVA 0x303EFC8

void PJKHAJKEHEL__PBNHNHLEPEJ
               (PJKHAJKEHEL_o *__this,System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int index;
  Il2CppObject *CJNHFNHJHPE;
  bool bVar1;
  HEFOANCOHDC_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313efb4 with catch @ 0313efc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313eee0 with catch @ 0313efcc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313ef58 with catch @ 0313efd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313eecc with catch @ 0313efd4
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0313efa4 with catch @ 0313efd4
                        */
                    /* try { // try from 0313efec to 0323efef has its CatchHandler @ 0313f000 */
  if ((DAT_04565dcf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* catch() { ... } // from try @ 0313efec with catch @ 0313f000 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* try { // try from 0313f010 to 0323f01f has its CatchHandler @ 0313f034 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
                    /* try { // try from 0313f020 to 0323f02b has its CatchHandler @ 0313ee74 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_RemoveAt__);
                    /* try { // try from 0313f02c to 0323f033 has its CatchHandler @ 0313f034 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313f010 with catch @ 0313f034
                       catch(type#2 @ 00000000) { ... } // from try @ 0313f02c with catch @ 0313f034
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    __this = (PJKHAJKEHEL_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    DAT_04565dcf = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    CJNHFNHJHPE = local_60.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      return;
    }
    if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) break;
    index = (GJBLBEALOBO->fields)._size;
    while (index = index + -1, -1 < index) {
      __this_00 = (HEFOANCOHDC_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,index,
                             Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
      if ((__this_00 != (HEFOANCOHDC_o *)0x0) &&
         (bVar1 = HEFOANCOHDC__EGAHACPKIAG
                            (__this_00,(System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0), bVar1)) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,index,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_RemoveAt__);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

