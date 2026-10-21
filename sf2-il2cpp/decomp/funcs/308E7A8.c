// AKOMJPINHEN$$GMDGMGDNHHP @ RVA 0x308E7A8

void AKOMJPINHEN__GMDGMGDNHHP(AKOMJPINHEN_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar6;
  NLFLMJPNOLF_o *IMMNELPBGIF;
  MethodInfo *method_00;
  System_Int32_array *pSVar7;
  int index;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  undefined1 local_b0 [16];
  Il2CppObject *local_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04566088 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_get_Current__
                );
                    /* try { // try from 0318e838 to 0328ed47 has its CatchHandler @ 0318e838
                       catch() { ... } // from try @ 0318e838 with catch @ 0318e838
                       catch() { ... } // from try @ 0318edcc with catch @ 0318e838
                       catch() { ... } // from try @ 0318efc8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f1c8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f288 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f2a4 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f354 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f3f8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f490 with catch @ 0318e838 */
    FUN_01bab630(&System_Func<NLFLMJPNOLF,_bool>_TypeInfo);
    FUN_01bab630(&Method_AKOMJPINHEN_KNOFIPGKEPL_HEMCLEPCEHJ__);
    FUN_01bab630(&AKOMJPINHEN_KNOFIPGKEPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_ADOCEKEFHJN>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_ADOCEKEFHJN>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04566088 = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0._8_4_ = 0;
  local_b0._12_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_d8,pSVar5,
               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__);
    local_90.fields._version = local_d8.fields._version;
    local_90.fields._index = local_d8.fields._index;
    local_90.fields._dictionary = local_d8.fields._dictionary;
    local_90.fields._current.fields.value = local_d8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d8.fields._36_4_;
    while (bVar4 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                             ), bVar4) {
      uVar3 = local_90.fields._current.fields.key._0_4_;
      __this_01 = (Il2CppObject *)thunk_FUN_01bda818(AKOMJPINHEN_KNOFIPGKEPL_TypeInfo);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)&__this_01[1].klass = uVar3;
      pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<NLFLMJPNOLF,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      method = Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__;
      pIVar6 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar8,predicate,
                          (MethodInfo_1EA1A5C *)
                          Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__);
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      if (pIVar6 == (Il2CppObject *)0x0) {
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = *(int32_t *)&__this_01[1].klass;
        pSVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
        }
        else {
          method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item,(MethodInfo_26C766C *)method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,__this_00,
                 Method_System_Collections_Generic_List<int>_GetEnumerator__);
      local_b0._8_4_ = local_d8.fields._version;
      local_b0._12_4_ = local_d8.fields._index;
      local_b0._0_8_ = local_d8.fields._dictionary;
      local_a0 = local_d8.fields._current.fields.key;
      while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)local_b0,
                                Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
            bVar4) {
        AKOMJPINHEN__NBFGBBFJFNP(__this,(int32_t)local_a0,method);
      }
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_b0,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
      pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
      if (pGVar8 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        index = 0;
        do {
          if ((pGVar8->fields).count <= index) {
            return;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__;
          IMMNELPBGIF = (NLFLMJPNOLF_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,index,
                                   (MethodInfo_295F6AC *)
                                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                  );
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).CCDJIIOOAML;
          if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
          System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
                    (&local_d8,pSVar5,
                     Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__)
          ;
          local_90.fields._version = local_d8.fields._version;
          local_90.fields._index = local_d8.fields._index;
          local_90.fields._dictionary = local_d8.fields._dictionary;
          local_90.fields._current.fields.value = local_d8.fields._current.fields.value;
          local_90.fields._current.fields.key = local_d8.fields._current.fields.key;
          local_90.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
          local_90.fields._36_4_ = local_d8.fields._36_4_;
          do {
            bVar4 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                              (&local_90,
                               Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                              );
            if (!bVar4) {
              System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                        );
              AKOMJPINHEN__HEJHGFDOMMG(__this,IMMNELPBGIF,method_00);
              goto LAB_0318eb60;
            }
            if (local_90.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (IMMNELPBGIF == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while ((IMMNELPBGIF->fields).OHMDCKEDOGH !=
                   (long)*(int *)&local_90.fields._current.fields.value[5].klass);
          System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                    );
          AKOMJPINHEN__FJIFDGEPKBH(__this,IMMNELPBGIF,method_00);
LAB_0318eb60:
          pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
          index = index + 1;
        } while (pGVar8 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

