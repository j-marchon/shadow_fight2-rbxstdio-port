// OLKKAIFGGAK$$KPOBPALNOLD @ RVA 0x34EE370

void OLKKAIFGGAK__KPOBPALNOLD
               (OLKKAIFGGAK_o *__this,System_Collections_Generic_List_IIMNGGHGKOD__o *DLOFGOGAGAA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 035ee384 to 036ee387 has its CatchHandler @ 035ee3a8 */
                    /* try { // try from 035ee388 to 036ee3af has its CatchHandler @ 035ee08c */
  if ((DAT_045687d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
                    /* catch() { ... } // from try @ 035ee384 with catch @ 035ee3a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
                    /* try { // try from 035ee3b0 to 036ee3b7 has its CatchHandler @ 035ee3cc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
                    /* try { // try from 035ee3b8 to 036ee3c3 has its CatchHandler @ 035ee08c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
                    /* try { // try from 035ee3c4 to 036ee3cb has its CatchHandler @ 035ee3cc */
    DAT_045687d6 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ee358 with catch @ 035ee3cc
                       catch(type#2 @ 00000000) { ... } // from try @ 035ee3b0 with catch @ 035ee3cc
                       catch(type#2 @ 00000000) { ... } // from try @ 035ee3c4 with catch @ 035ee3cc
                        */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (DLOFGOGAGAA != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
               Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                (local_48.fields._current,__this,(local_48.fields._current)->klass->vtable[6].method
                );
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

