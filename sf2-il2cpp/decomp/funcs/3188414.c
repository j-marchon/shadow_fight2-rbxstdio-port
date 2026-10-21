// GJAEIBMAFGE$$BADHFKAJGAD @ RVA 0x3188414

void GJAEIBMAFGE__BADHFKAJGAD
               (System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t key;
  uint uVar3;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_02;
  MIBHAJBEMIK_array *pMVar4;
  long lVar5;
  uint index;
  GJAEIBMAFGE_IOGOIMAHPBA_o *__this_00;
  uint local_54;
  
  if ((DAT_045669ed & 1) == 0) {
                    /* try { // try from 0328844c to 03388453 has its CatchHandler @ 032884fc */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
                    /* try { // try from 0328849c to 033884c7 has its CatchHandler @ 032884f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    DAT_045669ed = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  __this = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
                    /* try { // try from 032884c8 to 033884eb has its CatchHandler @ 0328838c */
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this,(System_Collections_Generic_IEnumerable_T__o *)LKFALEIFDIO,
             Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  if (LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if (__this != (System_Collections_Generic_List_T__o *)0x0) {
                    /* try { // try from 032884ec to 033884ef has its CatchHandler @ 032884f4 */
      uVar1 = (__this->fields)._size;
                    /* try { // try from 032884f0 to 03388513 has its CatchHandler @ 0328838c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032884ec with catch @ 032884f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328849c with catch @ 032884f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328844c with catch @ 032884fc
                        */
      index = 0;
      method_00 = extraout_x1_00;
      do {
                    /* try { // try from 03288514 to 03388517 has its CatchHandler @ 03288538 */
                    /* try { // try from 03288518 to 0338853f has its CatchHandler @ 0328838c */
        if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == index) {
          GJAEIBMAFGE__CEBKDKHDGFA(LKFALEIFDIO,method_00);
          return;
        }
                    /* catch() { ... } // from try @ 03288514 with catch @ 03288538 */
        __this_00 = GJAEIBMAFGE_TypeInfo->static_fields->JKBIGHKGGKB;
                    /* try { // try from 03288540 to 03388547 has its CatchHandler @ 0328855c */
        key = System_Collections_Generic_List<Int32Enum>__get_Item
                        (__this,index,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__
                        );
        if (__this_00 == (GJAEIBMAFGE_IOGOIMAHPBA_o *)0x0) break;
                    /* try { // try from 03288548 to 03388553 has its CatchHandler @ 0328838c */
                    /* try { // try from 03288554 to 0338855b has its CatchHandler @ 0328855c */
        bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                           (int32_t *)&local_54,
                           Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                          );
        lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288540 with catch @ 0328855c
                       catch(type#2 @ 00000000) { ... } // from try @ 03288554 with catch @ 0328855c
                        */
        if (bVar2) {
                    /* try { // try from 03288560 to 03388627 has its CatchHandler @ 03288560
                       catch() { ... } // from try @ 03288560 with catch @ 03288560
                       catch() { ... } // from try @ 032886a8 with catch @ 03288560
                       catch() { ... } // from try @ 032886d4 with catch @ 03288560
                       catch() { ... } // from try @ 032886fc with catch @ 03288560
                       catch() { ... } // from try @ 0328872c with catch @ 03288560 */
          method_00 = (MethodInfo *)(ulong)local_54;
          if (local_54 != 0xffffffff) {
            pMVar4 = (LKFALEIFDIO->fields)._items;
            (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
            if (pMVar4 != (MIBHAJBEMIK_array *)0x0) goto LAB_032885b4;
            break;
          }
        }
        else {
          uVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                            (__this,index,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
          lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
          pMVar4 = (LKFALEIFDIO->fields)._items;
          (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
          if (pMVar4 == (MIBHAJBEMIK_array *)0x0) break;
          method_00 = (MethodInfo *)(ulong)uVar3;
LAB_032885b4:
          uVar3 = (LKFALEIFDIO->fields)._size;
          if (uVar3 < (uint)pMVar4->max_length) {
            (LKFALEIFDIO->fields)._size = uVar3 + 1;
            pMVar4->m_Items[(int)uVar3] = (int32_t)method_00;
          }
          else {
            System_Collections_Generic_List<Int32Enum>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,(int32_t)method_00,
                       *(MethodInfo_26C9F28 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            method_00 = extraout_x1_02;
          }
        }
        index = index + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

