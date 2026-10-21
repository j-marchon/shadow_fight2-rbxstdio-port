// GJAEIBMAFGE$$NFLBPOKLKBK @ RVA 0x3188730

void GJAEIBMAFGE__NFLBPOKLKBK
               (int32_t MFMKPNIGADN,System_Collections_Generic_List_MIBHAJBEMIK__o *ILDIDIMINOJ,
               System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  bool bVar2;
  int32_t key;
  uint uVar3;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MIBHAJBEMIK_array *pMVar4;
  long lVar5;
  int index;
  uint local_5c;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  
                    /* try { // try from 03288738 to 0338873f has its CatchHandler @ 03288740 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288724 with catch @ 03288740
                       catch(type#2 @ 00000000) { ... } // from try @ 03288738 with catch @ 03288740
                        */
  if ((DAT_045669ee & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    DAT_045669ee = 1;
  }
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_5c = 0;
  if (LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
    (LKFALEIFDIO->fields)._size = 0;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = GJAEIBMAFGE_TypeInfo->static_fields->CFGHLIFIAKK;
    if (__this_00 !=
        (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         MFMKPNIGADN,(Il2CppObject **)&local_58,
                         Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                        );
      if (bVar2) {
        if (ILDIDIMINOJ == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) goto LAB_03288968;
        iVar1 = (ILDIDIMINOJ->fields)._size;
        method_00 = extraout_x1;
        if (0 < iVar1) {
          index = 0;
          do {
            __this = local_58;
            key = System_Collections_Generic_List<Int32Enum>__get_Item
                            ((System_Collections_Generic_List_T__o *)ILDIDIMINOJ,index,
                             Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
            if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
            goto LAB_03288968;
            bVar2 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                              (__this,key,(int32_t *)&local_5c,
                               Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                              );
            lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
            if (bVar2) {
              method_00 = (MethodInfo *)(ulong)local_5c;
              if (local_5c != 0xffffffff) {
                pMVar4 = (LKFALEIFDIO->fields)._items;
                (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
                if (pMVar4 != (MIBHAJBEMIK_array *)0x0) goto LAB_032888d4;
                goto LAB_03288968;
              }
            }
            else {
              uVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                                ((System_Collections_Generic_List_T__o *)ILDIDIMINOJ,index,
                                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
              lVar5 = Method_System_Collections_Generic_List<MIBHAJBEMIK>_Add__;
              method_00 = (MethodInfo *)(ulong)uVar3;
              pMVar4 = (LKFALEIFDIO->fields)._items;
              (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
              if (pMVar4 == (MIBHAJBEMIK_array *)0x0) goto LAB_03288968;
LAB_032888d4:
              uVar3 = (LKFALEIFDIO->fields)._size;
              if (uVar3 < (uint)pMVar4->max_length) {
                (LKFALEIFDIO->fields)._size = uVar3 + 1;
                pMVar4->m_Items[(int)uVar3] = (int32_t)method_00;
              }
              else {
                System_Collections_Generic_List<Int32Enum>__AddWithResize
                          ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,(int32_t)method_00,
                           *(MethodInfo_26C9F28 **)
                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                method_00 = extraout_x1_00;
              }
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        GJAEIBMAFGE__CEBKDKHDGFA(LKFALEIFDIO,method_00);
      }
      else {
        System_Collections_Generic_List<Int32Enum>__AddRange
                  ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,
                   (System_Collections_Generic_IEnumerable_T__o *)ILDIDIMINOJ,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
      }
      return;
    }
  }
LAB_03288968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

