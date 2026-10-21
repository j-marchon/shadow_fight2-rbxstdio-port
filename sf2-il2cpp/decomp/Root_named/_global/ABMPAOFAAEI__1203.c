// TypeDefIndex 1203
// Namespace: 
// internal class ABMPAOFAAEI
// Fields:
//   private Dictionary<string, ABMPAOFAAEI> OKGFMGOALJF; // 0x10
//   private GHACLGGJIKK CENHINIIPGD; // 0x18
//   private static string[] DHCFDOAFFFO; // 0x0

// ===== private void DOLDFGHODHL(string[] BPMHJKJEALH, int DPJIDNBJIBG)  [RVA 0x312A5A8]
// ABMPAOFAAEI$$DOLDFGHODHL @ RVA 0x312A5A8

void ABMPAOFAAEI__DOLDFGHODHL
               (ABMPAOFAAEI_o *__this,System_String_array *BPMHJKJEALH,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *key;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *OPAEPDIIOEB;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  uint count;
  MethodInfo *pMVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  pMVar4 = method_00;
  while( true ) {
    if ((DAT_0456668a & 1) == 0) {
      FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__);
      FUN_01bab630(&Method_System_Linq_Enumerable_Skip<string>__);
      FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
      DAT_0456668a = 1;
    }
    if (BPMHJKJEALH == (System_String_array *)0x0) break;
    uVar1 = (uint)BPMHJKJEALH->max_length;
    count = (uint)pMVar4;
    if (count == uVar1) {
      if ((ABMPAOFAAEI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OPAEPDIIOEB = ABMPAOFAAEI_TypeInfo->static_fields->DHCFDOAFFFO;
LAB_0322a6d8:
      ABMPAOFAAEI__MGHELJOMNIG(__this,OPAEPDIIOEB,method_00);
      return;
    }
    if (uVar1 <= count) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (BPMHJKJEALH->m_Items[(int)count] == (System_String_o *)0x0) break;
    key = System_String__ToLower(BPMHJKJEALH->m_Items[(int)count],(MethodInfo *)0x0);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__
                      );
    if (!bVar2) {
      method_00 = Method_System_Linq_Enumerable_Skip<string>__;
      source = System_Linq_Enumerable__Skip<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)BPMHJKJEALH,count,
                          (MethodInfo_1EACC9C *)Method_System_Linq_Enumerable_Skip<string>__);
      OPAEPDIIOEB = (System_String_array *)
                    System_Linq_Enumerable__ToArray<object>
                              (source,Method_System_Linq_Enumerable_ToArray<string>__);
      goto LAB_0322a6d8;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    method_00 = Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__;
                    /* try { // try from 0322a680 to 0332a733 has its CatchHandler @ 0322a680
                       catch() { ... } // from try @ 0322a680 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a754 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a794 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a7bc with catch @ 0322a680
                       catch() { ... } // from try @ 0322a7f4 with catch @ 0322a680 */
    __this = (ABMPAOFAAEI_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,(Il2CppObject *)key,
                        (MethodInfo_2332EA4 *)
                        Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                       );
    if (__this == (ABMPAOFAAEI_o *)0x0) break;
    pMVar4 = (MethodInfo *)(ulong)(count + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string PABLLPFPKGL(string[] MAGODFJLJGG, int DPJIDNBJIBG, string HPACPFLKHPK)  [RVA 0x312A7C8]
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
    FUN_01bab630(&Console_TypeInfo);
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
    FUN_01bab630(&StringLiteral_167/*" "*/);
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
    if ((Console_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Console__LMDMNPBBNML(HPACPFLKHPK,(MethodInfo *)0x0);
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
                         (HPACPFLKHPK,StringLiteral_167/*" "*/,
                          (System_String_o *)local_60.fields._currentKey,(MethodInfo *)0x0);
      if ((Console_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Console__DHAAGKPHJLA(pSVar7,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ABMPAOFAAEI>_Dispose__
              );
    pSVar7 = StringLiteral_167/*" "*/;
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
          pSVar7 = System_String__Concat(HPACPFLKHPK,pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
          return pSVar7;
        }
        if (1 < iVar1) {
          pSVar8 = System_String__Concat(HPACPFLKHPK,pSVar7,(MethodInfo *)0x0);
          if ((Console_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Console_TypeInfo);
          }
          Console__LMDMNPBBNML(pSVar8,(MethodInfo *)0x0);
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
            if ((Console_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            Console__DHAAGKPHJLA(pSVar8,(MethodInfo *)0x0);
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
      pSVar8 = System_String__Concat(HPACPFLKHPK,pSVar7,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x312AE70]
// ABMPAOFAAEI$$.cctor @ RVA 0x312AE70

void ABMPAOFAAEI___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456668c & 1) == 0) {
    FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_0456668c = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0);
  ABMPAOFAAEI_TypeInfo->static_fields->DHCFDOAFFFO = pSVar1;
  thunk_FUN_01c20e04(ABMPAOFAAEI_TypeInfo->static_fields,pSVar1);
  return;
}


// ===== public void NKLGCNHLBAF(string FILIAGHPABA)  [RVA 0x312AEE4]
// ABMPAOFAAEI$$NKLGCNHLBAF @ RVA 0x312AEE4

void ABMPAOFAAEI__NKLGCNHLBAF(ABMPAOFAAEI_o *__this,System_String_o *FILIAGHPABA,MethodInfo *method)

{
  int32_t iVar1;
  System_Text_RegularExpressions_Regex_o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_String_array *BPMHJKJEALH;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar2;
  MethodInfo *in_x3;
  ulong uVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456668d & 1) == 0) {
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1073/*"([^\<\>\s]+)(?=[^\<\>]+\<)|(\<[\w\W]+)\Z|(\S+)"*/);
    DAT_0456668d = 1;
  }
  __this_00 = (System_Text_RegularExpressions_Regex_o *)
              thunk_FUN_01bda818(System_Text_RegularExpressions_Regex_TypeInfo);
  System_Text_RegularExpressions_Regex___ctor(__this_00,StringLiteral_1073/*"([^\<\>\s]+)(?=[^\<\>]+\<)|(\<[\w\W]+)\Z|(\S+)"*/,(MethodInfo *)0x0);
  if ((__this_00 != (System_Text_RegularExpressions_Regex_o *)0x0) &&
     (__this_01 = System_Text_RegularExpressions_Regex__Matches
                            (__this_00,FILIAGHPABA,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
    iVar1 = System_Text_RegularExpressions_MatchCollection__get_Count(__this_01,(MethodInfo *)0x0);
    BPMHJKJEALH = (System_String_array *)FUN_01bab718(string___TypeInfo,iVar1);
    if (BPMHJKJEALH != (System_String_array *)0x0) {
      if (0 < (int)BPMHJKJEALH->max_length) {
        uVar3 = 0;
        ppSVar4 = BPMHJKJEALH->m_Items;
        do {
          __this_02 = (System_Text_RegularExpressions_Capture_o *)
                      (*(__this_01->klass->vtable)._35_get_Item.methodPtr)
                                (__this_01,uVar3 & 0xffffffff,
                                 (__this_01->klass->vtable)._35_get_Item.method);
          if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) goto LAB_0322b02c;
          pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          if ((uint)BPMHJKJEALH->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *ppSVar4 = pSVar2;
          thunk_FUN_01c20e04(ppSVar4,pSVar2);
          uVar3 = uVar3 + 1;
          ppSVar4 = ppSVar4 + 1;
        } while ((long)uVar3 < (long)(int)BPMHJKJEALH->max_length);
      }
      ABMPAOFAAEI__DOLDFGHODHL(__this,BPMHJKJEALH,0,in_x3);
      return;
    }
  }
LAB_0322b02c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MGHELJOMNIG(string[] OPAEPDIIOEB)  [RVA 0x312A700]
// ABMPAOFAAEI$$MGHELJOMNIG @ RVA 0x312A700

void ABMPAOFAAEI__MGHELJOMNIG
               (ABMPAOFAAEI_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  GHACLGGJIKK_o *__this_00;
  
  if ((DAT_0456668e & 1) == 0) {
    FUN_01bab630(&Console_TypeInfo);
    FUN_01bab630(&StringLiteral_17284/*"command not found"*/);
                    /* try { // try from 0322a734 to 0332a73b has its CatchHandler @ 0322a7a0 */
    DAT_0456668e = 1;
  }
  __this_00 = (__this->fields).CENHINIIPGD;
  if (__this_00 != (GHACLGGJIKK_o *)0x0) {
    if ((__this_00->fields).IOFAJLKACBI != false) {
                    /* try { // try from 0322a74c to 0332a753 has its CatchHandler @ 0322a798 */
                    /* try { // try from 0322a754 to 0332a78f has its CatchHandler @ 0322a680 */
      if ((Console_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Console__PFLDNJFAJPK(__this_00,OPAEPDIIOEB,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 0322a7b8 to 0332a7bb has its CatchHandler @ 0322a7e4 */
                    /* try { // try from 0322a7bc to 0332a7eb has its CatchHandler @ 0322a680 */
    GHACLGGJIKK__NKLGCNHLBAF(__this_00,OPAEPDIIOEB,(MethodInfo *)0x0);
    return;
  }
  if ((Console_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0322a790 to 0332a793 has its CatchHandler @ 0322a79c */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0322a794 to 0332a7b7 has its CatchHandler @ 0322a680 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322a74c with catch @ 0322a798
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322a790 with catch @ 0322a79c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322a734 with catch @ 0322a7a0
                        */
  Console__DHAAGKPHJLA(StringLiteral_17284/*"command not found"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void NDOEHMMEFGI(string[] BPMHJKJEALH, int EOANFCGBALI, GHACLGGJIKK CELOLGNMKCG)  [RVA 0x312B034]
// ABMPAOFAAEI$$NDOEHMMEFGI @ RVA 0x312B034

void ABMPAOFAAEI__NDOEHMMEFGI
               (ABMPAOFAAEI_o *__this,System_String_array *BPMHJKJEALH,int32_t EOANFCGBALI,
               GHACLGGJIKK_o *CELOLGNMKCG,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  GHACLGGJIKK_o **ppGVar4;
  System_String_o *key;
  undefined1 auVar5 [16];
  
  while( true ) {
    if ((DAT_0456668f & 1) == 0) {
      FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_set_Item__);
      DAT_0456668f = 1;
    }
    if (BPMHJKJEALH == (System_String_array *)0x0) break;
    uVar1 = (uint)BPMHJKJEALH->max_length;
    if (EOANFCGBALI == uVar1) {
      ppGVar4 = &(__this->fields).CENHINIIPGD;
      *ppGVar4 = CELOLGNMKCG;
      thunk_FUN_01c20e04(ppGVar4);
      return;
    }
    if (uVar1 <= (uint)EOANFCGBALI) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    key = BPMHJKJEALH->m_Items[EOANFCGBALI];
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__
                      );
    if (!bVar2) {
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).OKGFMGOALJF;
      auVar5 = thunk_FUN_01bda818(ABMPAOFAAEI_TypeInfo);
      ABMPAOFAAEI___ctor(auVar5._0_8_,auVar5._8_8_);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)key,(Il2CppObject *)auVar5._0_8_,
                 Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_set_Item__);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this = (ABMPAOFAAEI_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar3,(Il2CppObject *)key,
                            Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                           ), __this == (ABMPAOFAAEI_o *)0x0)) break;
    EOANFCGBALI = EOANFCGBALI + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LFENGGKOJDO(GHACLGGJIKK CELOLGNMKCG)  [RVA 0x312B1F4]
// ABMPAOFAAEI$$LFENGGKOJDO @ RVA 0x312B1F4

void ABMPAOFAAEI__LFENGGKOJDO(ABMPAOFAAEI_o *__this,GHACLGGJIKK_o *CELOLGNMKCG,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *BPMHJKJEALH;
  MethodInfo *in_x4;
  
  if (((CELOLGNMKCG != (GHACLGGJIKK_o *)0x0) &&
      (pSVar1 = (CELOLGNMKCG->fields).CENHINIIPGD, pSVar1 != (System_String_o *)0x0)) &&
     (pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0), pSVar1 != (System_String_o *)0x0))
  {
    BPMHJKJEALH = System_String__Split(pSVar1,0x20,0,(MethodInfo *)0x0);
    ABMPAOFAAEI__NDOEHMMEFGI(__this,BPMHJKJEALH,0,CELOLGNMKCG,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FHEDJOBDEPF(string MAGODFJLJGG)  [RVA 0x312B24C]
// ABMPAOFAAEI$$FHEDJOBDEPF @ RVA 0x312B24C

System_String_o *
ABMPAOFAAEI__FHEDJOBDEPF(ABMPAOFAAEI_o *__this,System_String_o *MAGODFJLJGG,MethodInfo *method)

{
  System_String_array *MAGODFJLJGG_00;
  System_String_o *pSVar1;
  MethodInfo *in_x4;
  
  if ((DAT_04566690 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566690 = 1;
  }
  if (MAGODFJLJGG != (System_String_o *)0x0) {
    MAGODFJLJGG_00 = System_String__Split(MAGODFJLJGG,0x20,0,(MethodInfo *)0x0);
    pSVar1 = ABMPAOFAAEI__PABLLPFPKGL(__this,MAGODFJLJGG_00,0,StringLiteral_1/*""*/,in_x4);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x312B16C]
// ABMPAOFAAEI$$.ctor @ RVA 0x312B16C

void ABMPAOFAAEI___ctor(ABMPAOFAAEI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04566691 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_TypeInfo);
    DAT_04566691 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>__ctor__);
  (__this->fields).OKGFMGOALJF =
       (System_Collections_Generic_Dictionary_string__ABMPAOFAAEI__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

