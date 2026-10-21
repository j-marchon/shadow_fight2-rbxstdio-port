// RaidInfoPrize$$UpdateInfo @ RVA 0x316FBE0

void RaidInfoPrize__UpdateInfo
               (RaidInfoPrize_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  long *plVar4;
  System_Collections_Generic_IEnumerable_T__o *collection;
  long lVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int index;
  System_Collections_Generic_IEnumerable_T__c *pSVar10;
  RaidInfoPrize_Prize_o *pRVar11;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566915 & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ElementAt<JKDFEBLBMOF>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Last<JKDFEBLBMOF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidInfoPrize_Prize>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidInfoPrize_Prize>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidInfoPrize_Prize>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidInfoPrize_Prize>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<RaidInfoPrize_Prize>_TypeInfo);
    FUN_01bab630(&RaidInfoPrize_Prize___TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_get_Count__
                );
    DAT_04566915 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    plVar4 = (long *)(*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                               (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (plVar4 == (long *)0x0) {
      return;
    }
    bVar1 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(CNLGMNIEGFG_c **)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        CNLGMNIEGFG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar4);
    }
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 FUN_01bab718(RaidInfoPrize_Prize___TypeInfo,3);
    if (collection != (System_Collections_Generic_IEnumerable_T__o *)0x0) {
      pSVar10 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._gold;
      if ((pSVar10 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pSVar10,(collection->klass->_1).element_class), lVar5 == 0)) {
LAB_0326ffd4:
        uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar9,0);
      }
      if (*(int *)&collection[1].monitor != 0) {
        collection[2].klass = pSVar10;
        thunk_FUN_01c20e04(collection + 2,pSVar10);
        pRVar11 = (__this->fields)._silver;
        if ((pRVar11 != (RaidInfoPrize_Prize_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pRVar11,(collection->klass->_1).element_class), lVar5 == 0))
        goto LAB_0326ffd4;
        if (1 < *(uint *)&collection[1].monitor) {
          collection[2].monitor = pRVar11;
          thunk_FUN_01c20e04(&collection[2].monitor,pRVar11);
          pSVar10 = (System_Collections_Generic_IEnumerable_T__c *)(__this->fields)._bronze;
          if ((pSVar10 != (System_Collections_Generic_IEnumerable_T__c *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pSVar10,(collection->klass->_1).element_class), lVar5 == 0)
             ) goto LAB_0326ffd4;
          if (2 < *(uint *)&collection[1].monitor) {
            collection[3].klass = pSVar10;
            thunk_FUN_01c20e04(collection + 3,pSVar10);
            __this_00 = (System_Collections_Generic_List_object__o *)
                        thunk_FUN_01bda818(
                                          System_Collections_Generic_List<RaidInfoPrize_Prize>_TypeInfo
                                          );
            System_Collections_Generic_List<object>___ctor
                      (__this_00,collection,
                       Method_System_Collections_Generic_List<RaidInfoPrize_Prize>__ctor__);
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_88,__this_00,
                         Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_GetEnumerator__
                        );
              local_70.fields._index = local_88.fields._index;
              local_70.fields._version = local_88.fields._version;
              local_70.fields._list = local_88.fields._list;
              local_70.fields._current = local_88.fields._current;
              while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_70,
                                        Method_System_Collections_Generic_List_Enumerator<RaidInfoPrize_Prize>_MoveNext__
                                       ), bVar2) {
                lVar5 = plVar4[0x33];
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                if ((RaidInfoPrize_Prize_o *)local_70.fields._current ==
                    (RaidInfoPrize_Prize_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                RaidInfoPrize_Prize__GIENGNEGHPJ
                          ((RaidInfoPrize_Prize_o *)local_70.fields._current,
                           *(float *)(lVar5 + 0x2c),*(float *)(lVar5 + 0x30),method_00);
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<RaidInfoPrize_Prize>_Dispose__
                        );
              if ((System_Collections_Generic_Dictionary_int__object__o *)plVar4[0x32] !=
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                __this_01 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                                      ((System_Collections_Generic_Dictionary_int__object__o *)
                                       plVar4[0x32],
                                       Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__
                                      );
                pIVar6 = System_Linq_Enumerable__Last<object>
                                   ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,
                                    Method_System_Linq_Enumerable_Last<JKDFEBLBMOF>__);
                if (0 < (__this_00->fields)._size) {
                  if (__this_01 ==
                      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                  goto LAB_0326ffbc;
                  index = 0;
                  do {
                    iVar3 = System_Collections_Generic_Dictionary_ValueCollection<int,_object>__get_Count
                                      (__this_01,
                                       Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_get_Count__
                                      );
                    pIVar7 = System_Collections_Generic_List<object>__get_Item
                                       (__this_00,index,
                                        Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Item__
                                       );
                    if (index < iVar3) {
                      pIVar8 = (Il2CppClass *)
                               System_Linq_Enumerable__ElementAt<object>
                                         ((System_Collections_Generic_IEnumerable_TSource__o *)
                                          __this_01,index,
                                          Method_System_Linq_Enumerable_ElementAt<JKDFEBLBMOF>__);
                      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0326ffbc;
                      pIVar7[3].klass = pIVar8;
                    }
                    else {
                      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0326ffbc;
                      pIVar7[3].klass = (Il2CppClass *)0x0;
                      pIVar8 = (Il2CppClass *)0x0;
                    }
                    thunk_FUN_01c20e04(pIVar7 + 3,pIVar8);
                    pIVar7 = System_Collections_Generic_List<object>__get_Item
                                       (__this_00,index,
                                        Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Item__
                                       );
                    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0326ffbc;
                    pIVar7[3].monitor = pIVar6;
                    thunk_FUN_01c20e04(&pIVar7[3].monitor,pIVar6);
                    pIVar7 = System_Collections_Generic_List<object>__get_Item
                                       (__this_00,index,
                                        Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Item__
                                       );
                    iVar3 = OHDDKGHEEPA__NLMMJCACKPC(BANHBMINMMP,(MethodInfo *)0x0);
                    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0326ffbc;
                    *(int32_t *)&pIVar7[4].klass = iVar3;
                    pRVar11 = (RaidInfoPrize_Prize_o *)
                              System_Collections_Generic_List<object>__get_Item
                                        (__this_00,index,
                                         Method_System_Collections_Generic_List<RaidInfoPrize_Prize>_get_Item__
                                        );
                    if (pRVar11 == (RaidInfoPrize_Prize_o *)0x0) goto LAB_0326ffbc;
                    RaidInfoPrize_Prize__LLCONNGHGKD(pRVar11,method_01);
                    index = index + 1;
                  } while (index < (__this_00->fields)._size);
                }
                return;
              }
            }
            goto LAB_0326ffbc;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0326ffbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

