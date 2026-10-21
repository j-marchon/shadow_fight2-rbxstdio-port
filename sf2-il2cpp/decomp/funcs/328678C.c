// OOMHDDBCBJP$$FAFFJKFGMAL @ RVA 0x328678C

void OOMHDDBCBJP__FAFFJKFGMAL(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03386794 to 03486797 has its CatchHandler @ 033868b4 */
                    /* try { // try from 03386798 to 0348685b has its CatchHandler @ 033852c4 */
                    /* catch() { ... } // from try @ 033866f0 with catch @ 033867a0 */
                    /* catch() { ... } // from try @ 033866e4 with catch @ 033867a4 */
                    /* catch() { ... } // from try @ 033864d8 with catch @ 033867a8 */
  if ((DAT_045672be & 1) == 0) {
                    /* catch() { ... } // from try @ 033864b4 with catch @ 033867ac */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
                    /* catch() { ... } // from try @ 033866cc with catch @ 033867c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
                    /* catch() { ... } // from try @ 033866c0 with catch @ 033867c4 */
                    /* catch() { ... } // from try @ 033866d8 with catch @ 033867c8
                       catch() { ... } // from try @ 03386724 with catch @ 033867c8 */
                    /* catch() { ... } // from try @ 033863a4 with catch @ 033867cc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
                    /* catch() { ... } // from try @ 033866b0 with catch @ 033867d0 */
                    /* catch() { ... } // from try @ 033866a4 with catch @ 033867d4 */
                    /* catch() { ... } // from try @ 03386698 with catch @ 033867d8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033862c8 with catch @ 033867dc */
                    /* catch() { ... } // from try @ 033862a4 with catch @ 033867e0 */
                    /* catch() { ... } // from try @ 0338668c with catch @ 033867e4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
                    /* catch() { ... } // from try @ 03386368 with catch @ 033867e8 */
                    /* catch() { ... } // from try @ 03386350 with catch @ 033867ec */
                    /* catch() { ... } // from try @ 0338638c with catch @ 033867f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* catch() { ... } // from try @ 03386388 with catch @ 033867f4 */
                    /* catch() { ... } // from try @ 03386668 with catch @ 033867f8 */
    DAT_045672be = 1;
  }
                    /* catch() { ... } // from try @ 0338665c with catch @ 033867fc */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* catch() { ... } // from try @ 033862e0 with catch @ 03386800 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 03386308 with catch @ 03386804 */
                    /* catch() { ... } // from try @ 03386650 with catch @ 03386808 */
  if ((__this->fields).KANKFCNHDPA == false) {
                    /* catch() { ... } // from try @ 03386314 with catch @ 0338680c */
                    /* catch() { ... } // from try @ 03386278 with catch @ 03386810 */
                    /* catch() { ... } // from try @ 03386674 with catch @ 03386814 */
                    /* catch() { ... } // from try @ 03386644 with catch @ 03386818 */
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
                    /* catch() { ... } // from try @ 03386638 with catch @ 0338681c */
  pSVar2 = (__this->fields).HDDNEKLMLMF;
                    /* catch() { ... } // from try @ 0338662c with catch @ 03386820 */
  if (pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* catch() { ... } // from try @ 03386284 with catch @ 0338682c */
                    /* catch() { ... } // from try @ 03386264 with catch @ 03386830 */
                    /* catch() { ... } // from try @ 033861e0 with catch @ 03386834 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
                    /* try { // try from 0338685c to 0348685f has its CatchHandler @ 03386888 */
    local_50.fields._current = local_68.fields._current;
    do {
                    /* try { // try from 03386860 to 03486897 has its CatchHandler @ 033852c4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) goto LAB_033868b8;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (*(int *)((long)&local_50.fields._current[6].klass + 4) != 2);
                    /* catch() { ... } // from try @ 0338685c with catch @ 03386888 */
    if (*(int *)&local_50.fields._current[5].klass < 1) {
LAB_033868b8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
    }
    else {
      pSVar2 = (__this->fields).HDDNEKLMLMF;
      if (pSVar2 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03386898 to 0348689f has its CatchHandler @ 033868b4 */
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,
                          *(int *)&local_50.fields._current[5].klass + -1,
                          Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
                    /* try { // try from 033868a0 to 034868ab has its CatchHandler @ 033852c4 */
                    /* try { // try from 033868ac to 034868b3 has its CatchHandler @ 033868b4 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
      if (pIVar3 != (Il2CppObject *)0x0) goto LAB_033868e4;
    }
    pSVar2 = (__this->fields).HDDNEKLMLMF;
    if ((pSVar2 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,
                            (pSVar2->fields)._size + -1,
                            Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__),
       pIVar3 != (Il2CppObject *)0x0)) {
LAB_033868e4:
      __this_00 = pIVar3[2].klass;
      if (__this_00 != (Il2CppClass *)0x0) {
        PAMEPBLOLPB__DNNBHOPPCPL((PAMEPBLOLPB_o *)__this_00,0,(MethodInfo *)0x0);
        PAMEPBLOLPB__HOONFLPHAIL((PAMEPBLOLPB_o *)__this_00,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

