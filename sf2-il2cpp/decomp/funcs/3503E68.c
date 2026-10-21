// PNEKMHMACLG$$AFBEEALKOPE @ RVA 0x3503E68

void PNEKMHMACLG__AFBEEALKOPE(PNEKMHMACLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* catch() { ... } // from try @ 03603cc0 with catch @ 03603e78
                       try { // try from 03603e78 to 03703e8f has its CatchHandler @ 03603b78 */
  if ((DAT_0456887c & 1) == 0) {
                    /* try { // try from 03603e90 to 03703e93 has its CatchHandler @ 03603eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
                    /* try { // try from 03603e94 to 03703ebb has its CatchHandler @ 03603b78 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
                    /* catch() { ... } // from try @ 03603e90 with catch @ 03603eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
                    /* try { // try from 03603ebc to 03703ec3 has its CatchHandler @ 03603ed8 */
    DAT_0456887c = 1;
  }
                    /* try { // try from 03603ec4 to 03703ecf has its CatchHandler @ 03603b78 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 03603ed0 to 03703ed7 has its CatchHandler @ 03603ed8 */
  local_38.fields._current = (Il2CppObject *)0x0;
  AJNNHGGLGIF__AFBEEALKOPE((AJNNHGGLGIF_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03603e64 with catch @ 03603ed8
                       catch() { ... } // from try @ 03603ebc with catch @ 03603ed8
                       catch() { ... } // from try @ 03603ed0 with catch @ 03603ed8 */
  __this_00 = (__this->fields).LJNCACBBIBD;
                    /* try { // try from 03603edc to 0370402f has its CatchHandler @ 03603edc
                       catch() { ... } // from try @ 03603edc with catch @ 03603edc
                       catch() { ... } // from try @ 03604110 with catch @ 03603edc
                       catch() { ... } // from try @ 03604138 with catch @ 03603edc
                       catch() { ... } // from try @ 036041ac with catch @ 03603edc
                       catch() { ... } // from try @ 036041e8 with catch @ 03603edc
                       catch() { ... } // from try @ 03604224 with catch @ 03603edc */
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[9].methodPtr)
                (local_38.fields._current,(ulong)CJNHFNHJHPE,
                 (local_38.fields._current)->klass->vtable[9].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

