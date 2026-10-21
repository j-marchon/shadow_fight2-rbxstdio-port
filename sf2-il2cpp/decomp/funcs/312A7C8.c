// ABMPAOFAAEI$$PABLLPFPKGL @ RVA 0x312A7C8

System_String_o *
ABMPAOFAAEI__PABLLPFPKGL
          (ABMPAOFAAEI_o *__this,System_String_array *MAGODFJLJGG,int32_t DPJIDNBJIBG,
          System_String_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  bool bVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  ABMPAOFAAEI_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_60;
  
                    /* catch() { ... } // from try @ 0322a7b8 with catch @ 0322a7e4 */
                    /* try { // try from 0322a7ec to 0332a7f3 has its CatchHandler @ 0322a808 */
                    /* try { // try from 0322a7f4 to 0332a7ff has its CatchHandler @ 0322a680 */
  if ((DAT_0456668b & 1) == 0) {
                    /* try { // try from 0322a800 to 0332a807 has its CatchHandler @ 0322a808 */
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322a7ec with catch @ 0322a808
                       catch(type#2 @ 00000000) { ... } // from try @ 0322a800 with catch @ 0322a808
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Keys__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ABMPAOFAAEI>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_0456668b = 1;
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._currentKey = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  if (MAGODFJLJGG == (System_String_array *)0x0) goto LAB_0322ad04;
  uVar2 = (uint)MAGODFJLJGG->max_length;
  if (uVar2 == DPJIDNBJIBG) {
    if ((__this->fields).CENHINIIPGD != (GHACLGGJIKK_o *)0x0) {
      return HPACPFLKHPK;
    }
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CFEANGJDHEE__LMDMNPBBNML(HPACPFLKHPK,(MethodInfo *)0x0);
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if ((pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Keys
                           (pSVar5,
                            Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Keys__
                           ),
       pSVar6 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
    goto LAB_0322ad04;
    System_Collections_Generic_Dictionary_KeyCollection<object,_object>__GetEnumerator
              (&local_90,pSVar6,
               Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ABMPAOFAAEI>_GetEnumerator__
              );
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._dictionary = local_90.fields._dictionary;
    local_60.fields._currentKey = local_90.fields._currentKey;
    while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_MoveNext__
                             ), bVar4) {
      pSVar7 = System_String__Concat
                         (HPACPFLKHPK,StringLiteral_167,
                          (System_String_o *)local_60.fields._currentKey,(MethodInfo *)0x0);
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CFEANGJDHEE__DHAAGKPHJLA(pSVar7,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_Dispose__
              );
    pSVar7 = StringLiteral_167;
LAB_0322acd8:
    pSVar7 = System_String__Concat(HPACPFLKHPK,pSVar7,(MethodInfo *)0x0);
  }
  else {
    if (uVar2 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0322ad04;
    pSVar7 = MAGODFJLJGG->m_Items[DPJIDNBJIBG];
    bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar5,(Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__
                      );
    if (DPJIDNBJIBG + 1U == uVar2) {
      if (!bVar4) {
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<string>__ctor__);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).OKGFMGOALJF;
        if ((pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pSVar6 = System_Collections_Generic_Dictionary<object,_object>__get_Keys
                               (pSVar5,
                                Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Keys__
                               ),
           pSVar6 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
        goto LAB_0322ad04;
        System_Collections_Generic_Dictionary_KeyCollection<object,_object>__GetEnumerator
                  (&local_90,pSVar6,
                   Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ABMPAOFAAEI>_GetEnumerator__
                  );
        local_60.fields._index = local_90.fields._index;
        local_60.fields._version = local_90.fields._version;
        local_60.fields._dictionary = local_90.fields._dictionary;
        local_60.fields._currentKey = local_90.fields._currentKey;
        while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_MoveNext__
                                 ), item = local_60.fields._currentKey, bVar4) {
          if ((System_String_o *)local_60.fields._currentKey == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = System_String__StartsWith
                            ((System_String_o *)local_60.fields._currentKey,pSVar7,(MethodInfo *)0x0
                            );
          lVar3 = Method_System_Collections_Generic_List<string>_Add__;
          if (bVar4) {
            if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar9->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar9->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_01,item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_Dispose__
                  );
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0322ad04;
        iVar1 = (__this_01->fields)._size;
        if (iVar1 == 1) {
          pSVar7 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             (__this_01,0,Method_System_Collections_Generic_List<string>_get_Item__)
          ;
          pSVar7 = System_String__Concat(HPACPFLKHPK,pSVar7,StringLiteral_167,(MethodInfo *)0x0);
          return pSVar7;
        }
        if (1 < iVar1) {
          pSVar8 = System_String__Concat(HPACPFLKHPK,pSVar7,(MethodInfo *)0x0);
          if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
          }
          CFEANGJDHEE__LMDMNPBBNML(pSVar8,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_78,__this_01,
                     Method_System_Collections_Generic_List<string>_GetEnumerator__);
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_78,
                                    Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                   ), bVar4) {
            pSVar8 = System_String__Concat
                               (HPACPFLKHPK,(System_String_o *)local_78.fields._current,
                                (MethodInfo *)0x0);
            if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            CFEANGJDHEE__DHAAGKPHJLA(pSVar8,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_78,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
        }
        goto LAB_0322acd8;
      }
      pSVar8 = System_String__Concat(HPACPFLKHPK,pSVar7,(MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).OKGFMGOALJF;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_0322ad04;
      __this_00 = (ABMPAOFAAEI_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (pSVar5,(Il2CppObject *)pSVar7,
                             Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                            );
    }
    else {
      if (!bVar4) {
        return HPACPFLKHPK;
      }
      pSVar8 = System_String__Concat(HPACPFLKHPK,pSVar7,StringLiteral_167,(MethodInfo *)0x0);
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).OKGFMGOALJF;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_0322ad04;
      __this_00 = (ABMPAOFAAEI_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (pSVar5,(Il2CppObject *)pSVar7,
                             Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                            );
      uVar2 = DPJIDNBJIBG + 1U;
    }
    if (__this_00 == (ABMPAOFAAEI_o *)0x0) {
LAB_0322ad04:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar7 = ABMPAOFAAEI__PABLLPFPKGL(__this_00,MAGODFJLJGG,uVar2,pSVar8,method);
  }
  return pSVar7;
}

