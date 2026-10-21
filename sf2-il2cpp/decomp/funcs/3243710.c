// CHDGOFBHAFI$$IFKJIIINHIO @ RVA 0x3243710

/* WARNING: Removing unreachable block (ram,0x03343c54) */

int32_t CHDGOFBHAFI__IFKJIIINHIO
                  (CHDGOFBHAFI_o *__this,
                  System_Collections_Generic_IList_NODLJPNGNBG__o *KIFIMBGOPFG,int64_t FKIGDGJPIAC,
                  MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  AJOGJBFNELI_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Comparison_NODLJPNGNBG__o **ppSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_long__o *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  void *item;
  System_Int64_array *pSVar8;
  int32_t iVar9;
  System_Comparison_NODLJPNGNBG__o *comparison;
  int iVar10;
  int iVar11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045670a5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<long>>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_List<long>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_CHDGOFBHAFI_<>c_PNIMLKNKFFM__);
    FUN_01bab630(&CHDGOFBHAFI_<>c_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<long>>_GetEnumerator__
                );
    DAT_045670a5 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
  if (__this_00 != (AJOGJBFNELI_o *)0x0) {
    iVar4 = AJOGJBFNELI__BBOPDEOHOAI(__this_00,(MethodInfo *)0x0);
    if (0 < iVar4) {
      return iVar4;
    }
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NODLJPNGNBG>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)KIFIMBGOPFG,
               Method_System_Collections_Generic_List<NODLJPNGNBG>__ctor__);
    if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__35_0;
    if (comparison == (System_Comparison_NODLJPNGNBG__o *)0x0) {
      if ((CHDGOFBHAFI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_NODLJPNGNBG__o *)
                   thunk_FUN_01bda818(System_Comparison<NODLJPNGNBG>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar5 = &CHDGOFBHAFI_<>c_TypeInfo->static_fields->__9__35_0;
      *ppSVar5 = comparison;
      thunk_FUN_01c20e04(ppSVar5,comparison);
    }
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                (__this_01,(System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<NODLJPNGNBG>_Sort__);
      __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_List<long>>_TypeInfo
                                    );
      System_Collections_Generic_Dictionary<int,_object>___ctor
                (__this_02,Method_System_Collections_Generic_Dictionary<int,_List<long>>__ctor__);
      if ((__this_01->fields)._size < 1) {
        if (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
        goto LAB_03343c4c;
      }
      else {
        iVar10 = 0;
        do {
          pIVar6 = System_Collections_Generic_List<object>__get_Item
                             (__this_01,iVar10,
                              Method_System_Collections_Generic_List<NODLJPNGNBG>_get_Item__);
          if ((pIVar6 == (Il2CppObject *)0x0) ||
             (__this_02 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
          goto LAB_03343c4c;
          bVar3 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (__this_02,*(int32_t *)&pIVar6[2].klass,
                             Method_System_Collections_Generic_Dictionary<int,_List<long>>_ContainsKey__
                            );
          if (!bVar3) {
            iVar4 = *(int32_t *)&pIVar6[2].klass;
            pSVar7 = (System_Collections_Generic_List_long__o *)
                     thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
            System_Collections_Generic_List<long>___ctor
                      (pSVar7,Method_System_Collections_Generic_List<long>__ctor__);
            System_Collections_Generic_Dictionary<int,_object>__set_Item
                      (__this_02,iVar4,(Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<int,_List<long>>_set_Item__);
          }
          pSVar7 = (System_Collections_Generic_List_long__o *)
                   System_Collections_Generic_Dictionary<int,_object>__get_Item
                             (__this_02,*(int32_t *)&pIVar6[2].klass,
                              Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Item__
                             );
          lVar2 = Method_System_Collections_Generic_List<long>_Add__;
          if (pSVar7 == (System_Collections_Generic_List_long__o *)0x0) goto LAB_03343c4c;
          item = pIVar6[1].monitor;
          pSVar8 = (pSVar7->fields)._items;
          (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
          if (pSVar8 == (System_Int64_array *)0x0) goto LAB_03343c4c;
          uVar1 = (pSVar7->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (pSVar7->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = (int64_t)item;
          }
          else {
            System_Collections_Generic_List<long>__AddWithResize
                      (pSVar7,(int64_t)item,
                       *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (__this_01->fields)._size);
      }
      __this_03 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            (__this_02,
                             Method_System_Collections_Generic_Dictionary<int,_List<long>>_get_Values__
                            );
      if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                  (&local_b8,__this_03,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<int,_List<long>>_GetEnumerator__
                  );
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._dictionary = local_b8.fields._dictionary;
        local_80.fields._currentValue = local_b8.fields._currentValue;
        iVar4 = 1;
        do {
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                      );
            return -1;
          }
          if ((System_Collections_Generic_List_long__o *)local_80.fields._currentValue ==
              (System_Collections_Generic_List_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<long>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                     (System_Collections_Generic_List_long__o *)local_80.fields._currentValue,
                     Method_System_Collections_Generic_List<long>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list =
               (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
          local_a0.fields._current = local_b8.fields._currentValue;
          iVar10 = iVar4;
          while (bVar3 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__
                                   ), bVar3) {
            if (local_a0.fields._current == (Il2CppObject *)FKIGDGJPIAC) {
              iVar11 = 0xc;
              iVar9 = iVar4;
              goto LAB_03343ba8;
            }
            iVar10 = iVar10 + 1;
          }
          iVar11 = 0xd;
          iVar9 = -1;
LAB_03343ba8:
          System_Collections_Generic_List_Enumerator<long>__Dispose
                    (&local_a0,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
          iVar4 = iVar10;
          if ((iVar11 != 0xd) && (iVar11 != 0)) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_List<long>>_Dispose__
                      );
            return iVar9;
          }
        } while( true );
      }
    }
  }
LAB_03343c4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

