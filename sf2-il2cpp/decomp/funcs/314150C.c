// IPPEHAJADOO$$ECFJIHEHELO @ RVA 0x314150C

bool IPPEHAJADOO__ECFJIHEHELO
               (ECENNHNBAME_o *NLEBDPHNIDI,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD,
               MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566757 & 1) == 0) {
                    /* try { // try from 03241534 to 0334153f has its CatchHandler @ 032415d4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                );
                    /* try { // try from 03241550 to 03341557 has its CatchHandler @ 032415e8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    DAT_04566757 = 1;
  }
                    /* try { // try from 03241568 to 0334156f has its CatchHandler @ 032415d4 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03241570 to 033415b7 has its CatchHandler @ 03241244 */
  if (ELAGKBMJCOD == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                      );
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_032415d0;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032415b8 to 033415bb has its CatchHandler @ 032415ec */
                    /* try { // try from 032415bc to 033415c3 has its CatchHandler @ 032415f4 */
  } while ((Il2CppClass *)NLEBDPHNIDI != local_48.fields._current[1].klass);
                    /* try { // try from 032415c4 to 033415c7 has its CatchHandler @ 03241244 */
  iVar2 = 4;
                    /* try { // try from 032415c8 to 033415cf has its CatchHandler @ 032415dc */
LAB_032415d0:
                    /* catch() { ... } // from try @ 032414cc with catch @ 032415d0
                       try { // try from 032415d0 to 0334160b has its CatchHandler @ 03241244 */
                    /* catch() { ... } // from try @ 03241534 with catch @ 032415d4
                       catch() { ... } // from try @ 03241568 with catch @ 032415d4 */
                    /* catch() { ... } // from try @ 032414e0 with catch @ 032415d8 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__);
                    /* catch() { ... } // from try @ 032415c8 with catch @ 032415dc */
                    /* catch() { ... } // from try @ 032414d0 with catch @ 032415e0 */
                    /* catch() { ... } // from try @ 032414b4 with catch @ 032415e4 */
                    /* catch() { ... } // from try @ 0324149c with catch @ 032415e8
                       catch() { ... } // from try @ 03241550 with catch @ 032415e8 */
                    /* catch() { ... } // from try @ 032415b8 with catch @ 032415ec */
                    /* catch() { ... } // from try @ 03241440 with catch @ 032415f0 */
                    /* catch() { ... } // from try @ 032415bc with catch @ 032415f4 */
  return bVar1 && iVar2 == 4;
}

