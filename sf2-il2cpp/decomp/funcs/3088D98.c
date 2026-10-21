// KPBOJBLLKPJ$$DCLLOBOHLME @ RVA 0x3088D98

void KPBOJBLLKPJ__DCLLOBOHLME
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,KOPGBBHMPDP_o *PDALMPAOAFM,
               MethodInfo *method)

{
  int32_t key;
  uint uVar1;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o item;
  long lVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *pSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Func_TSource__bool__o *predicate;
  MethodInfo_2639328 *in_x4;
  System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__array *pSVar5;
  KOPGBBHMPDP_o **ppKVar6;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *pSVar7;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o __this_02;
  undefined8 local_40;
  Il2CppObject *pIStack_38;
  
  if ((DAT_04566036 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Add__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    FUN_01bab630(&Method_KPBOJBLLKPJ_OELHACHMOOH_LJCAIHKOGBL__);
    FUN_01bab630(&KPBOJBLLKPJ_OELHACHMOOH_TypeInfo);
    FUN_01bab630(&StringLiteral_9617);
    DAT_04566036 = 1;
  }
  local_40 = 0;
  pIStack_38 = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPBOJBLLKPJ_OELHACHMOOH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = PDALMPAOAFM;
    *(int32_t *)&__this_00[1].klass = BOFAKAEIMME;
    thunk_FUN_01c20e04(&__this_00[1].monitor,PDALMPAOAFM);
    bVar3 = ODKDFMHHLIP__NOBCLMOONLJ(*(int32_t *)&__this_00[1].klass,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9617,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields).NGKLIODAFAG;
    if (pSVar4 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                         *(int32_t *)&__this_00[1].klass,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                        );
      if (!bVar3) {
        pSVar4 = (__this->fields).NGKLIODAFAG;
        key = *(int32_t *)&__this_00[1].klass;
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
        if (pSVar4 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0
           ) goto LAB_0318902c;
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,key,
                   (Il2CppObject *)__this_01,
                   Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                  );
      }
      pSVar7 = (__this->fields).LOBBELCAMJC;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(
                                    System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo
                                    );
      System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
      bVar3 = System_Linq_Enumerable__Any<KeyValuePair<Int32Enum,_object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,predicate,
                         Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__
                        );
      if (bVar3) {
        return;
      }
      __this_02.fields.value._0_4_ = *(undefined4 *)&__this_00[1].klass;
      __this_02.fields._0_8_ = &local_40;
      __this_02.fields.value._4_4_ = 0;
      System_Collections_Generic_KeyValuePair<Int32Enum,_object>___ctor
                (__this_02,(int32_t)__this_00[1].monitor,
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>__ctor__,
                 in_x4);
      lVar2 = Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Add__;
      pSVar7 = (__this->fields).LOBBELCAMJC;
      if (pSVar7 != (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0
         ) {
        item.fields.value = pIStack_38;
        item.fields._0_8_ = local_40;
        pSVar5 = (pSVar7->fields)._items;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (pSVar5 != (System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__array *)0x0
           ) {
          uVar1 = (pSVar7->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (pSVar7->fields)._size = uVar1 + 1;
            ppKVar6 = &pSVar5->m_Items[(int)uVar1].fields.value;
            *ppKVar6 = (KOPGBBHMPDP_o *)pIStack_38;
            *(undefined8 *)&pSVar5->m_Items[(int)uVar1].fields = local_40;
            thunk_FUN_01c20e04(ppKVar6,0);
            return;
          }
          System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)pSVar7,item,
                     *(MethodInfo_2662950 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_0318902c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

