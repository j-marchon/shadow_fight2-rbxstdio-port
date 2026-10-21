// Nekki.SF2.Core.Quests.QuestsManager$$AddQuest @ RVA 0x33079EC

void Nekki_SF2_Core_Quests_QuestsManager__AddQuest
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,
               MethodInfo *method)

{
  int iVar1;
  int key;
  uint uVar2;
  long lVar3;
  bool bVar4;
  System_Collections_Generic_List_KFKFNDEJLKK__o *__this_00;
  Il2CppObject *pIVar5;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *pSVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  CNOGDCKPLMJ_o *__this_01;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_02;
  System_Object_array *pSVar8;
  FPPKHNNABAD_array *pFVar9;
  int index;
  
  if ((DAT_0456776c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_0456776c = 1;
  }
  if ((JOBNGBCPEGO != (FPPKHNNABAD_o *)0x0) &&
     (__this_00 = (JOBNGBCPEGO->fields).AFFIHBMACFF,
     __this_00 != (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<KFKFNDEJLKK>_get_Item__);
        if ((pIVar5 == (Il2CppObject *)0x0) ||
           (pSVar6 = (__this->fields).LEJLGCMCPLG,
           pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                      *)0x0)) goto LAB_03407c6c;
        key = *(int *)&pIVar5[1].klass;
        bVar4 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                           Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_ContainsKey__
                          );
        if (!bVar4) {
          pSVar6 = (__this->fields).LEJLGCMCPLG;
          pSVar7 = (System_Collections_Generic_List_object__o *)
                   thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
          System_Collections_Generic_List<object>___ctor
                    (pSVar7,Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
          if (pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                         *)0x0) goto LAB_03407c6c;
          System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                     (Il2CppObject *)pSVar7,
                     Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_Add__
                    );
        }
        pSVar6 = (__this->fields).LEJLGCMCPLG;
        if ((pSVar6 == (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o
                        *)0x0) ||
           (pSVar7 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,key,
                                Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_get_Item__
                               ), lVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__,
           pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03407c6c;
        pSVar8 = (pSVar7->fields)._items;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (pSVar8 == (System_Object_array *)0x0) goto LAB_03407c6c;
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar8->m_Items[(int)uVar2] = (Il2CppObject *)JOBNGBCPEGO;
          thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar2,JOBNGBCPEGO);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar7,(Il2CppObject *)JOBNGBCPEGO,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if (key == 10) {
          __this_01 = (__this->fields).LJMFDFGELCO;
          if (__this_01 == (CNOGDCKPLMJ_o *)0x0) goto LAB_03407c6c;
          CNOGDCKPLMJ__BLJJKMIEHFG(__this_01,JOBNGBCPEGO,(MethodInfo *)0x0);
        }
        index = index + 1;
        if (iVar1 == index) break;
        __this_00 = (JOBNGBCPEGO->fields).AFFIHBMACFF;
        if (__this_00 == (System_Collections_Generic_List_KFKFNDEJLKK__o *)0x0) goto LAB_03407c6c;
      } while( true );
    }
    lVar3 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    __this_02 = (__this->fields).QuestsAll;
    if (__this_02 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      pFVar9 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pFVar9 != (FPPKHNNABAD_array *)0x0) {
        uVar2 = (__this_02->fields)._size;
        if ((uint)pFVar9->max_length <= uVar2) {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)JOBNGBCPEGO,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          return;
        }
        (__this_02->fields)._size = uVar2 + 1;
        pFVar9->m_Items[(int)uVar2] = JOBNGBCPEGO;
        thunk_FUN_01c20e04(pFVar9->m_Items + (int)uVar2,JOBNGBCPEGO);
        return;
      }
    }
  }
LAB_03407c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

