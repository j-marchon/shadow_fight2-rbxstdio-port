// NGKBNOEJLPH$$FGFKLCPJJJI @ RVA 0x34961E4

int32_t NGKBNOEJLPH__FGFKLCPJJJI
                  (NGKBNOEJLPH_o *__this,System_Collections_Generic_List_OANGEOLKMJG__o *FAFKNGFMFAJ
                  ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  CAAJMGKIPIE_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA;
  NGKBNOEJLPH_LNKLGCHOEBF_o *__this_01;
  System_String_o *item;
  NGKBNOEJLPH_LNKLGCHOEBF_array *pNVar8;
  FHHDFKADHEI_o *pFVar9;
  System_String_array *pSVar10;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568476 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04568476 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._MPABEMCEHCL_k__BackingField;
  if (__this_00 != (CAAJMGKIPIE_o *)0x0) {
    pSVar5 = CAAJMGKIPIE__IHDDNNEMAJE(__this_00,FAFKNGFMFAJ,(MethodInfo *)0x0);
    if ((pSVar5 == (System_Collections_Generic_List_string__o *)0x0) || ((pSVar5->fields)._size < 1)
       ) {
      return 0;
    }
    pSVar6 = (__this->fields).JOMJAAIPNPH;
    if (pSVar6 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
      iVar1 = (pSVar6->fields)._size;
      if (iVar1 < 1) {
LAB_03596390:
        KENFFDHLNDA = (System_Collections_Generic_List_ECENNHNBAME__o *)
                      thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                   Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
        if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LDHBHPILNMA__OMJCGAIOEHB(pSVar5,KENFFDHLNDA,(MethodInfo *)0x0);
        if (KENFFDHLNDA != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,(System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_70,
                                    Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                   ), pIVar7 = local_70.fields._current, bVar4) {
            if ((ECENNHNBAME_o *)local_70.fields._current != (ECENNHNBAME_o *)0x0) {
              pSVar6 = (__this->fields).JOMJAAIPNPH;
              __this_01 = (NGKBNOEJLPH_LNKLGCHOEBF_o *)
                          thunk_FUN_01bda818(NGKBNOEJLPH_LNKLGCHOEBF_TypeInfo);
              System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
              (__this_01->fields).BNGDONJEHMH = (ECENNHNBAME_o *)pIVar7;
              thunk_FUN_01c20e04(&__this_01->fields,pIVar7);
              (__this_01->fields).FFNAHMNEHIM = 0;
              lVar3 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_Add__;
              if (pSVar6 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pNVar8 = (pSVar6->fields)._items;
              (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
              if (pNVar8 == (NGKBNOEJLPH_LNKLGCHOEBF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pNVar8->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                pNVar8->m_Items[(int)uVar2] = __this_01;
                thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar2,__this_01);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = Method_System_Collections_Generic_List<string>_Add__;
              pFVar9 = (__this->fields).LKMDDKFKDHO;
              if (pFVar9 == (FHHDFKADHEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar5 = (pFVar9->fields).FFOFMCPEKFJ;
              if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              item = ((ECENNHNBAME_Fields *)((long)pIVar7 + 0x10))->JIJLBFGKNJK;
              pSVar10 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pSVar10->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pSVar10->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          pSVar6 = (__this->fields).JOMJAAIPNPH;
          if (pSVar6 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
            return (pSVar6->fields)._size;
          }
        }
      }
      else {
        index = 0;
        do {
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,index,
                              Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                             );
          if (pIVar7 != (Il2CppObject *)0x0) {
            pSVar6 = (__this->fields).JOMJAAIPNPH;
            if ((pSVar6 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) ||
               (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                    Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                                   ), pIVar7 == (Il2CppObject *)0x0)) break;
            if (pIVar7[1].klass != (Il2CppClass *)0x0) {
              pSVar6 = (__this->fields).JOMJAAIPNPH;
              if (((pSVar6 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) ||
                  (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                       Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                                      ), pIVar7 == (Il2CppObject *)0x0)) ||
                 (pIVar7[1].klass == (Il2CppClass *)0x0)) break;
              System_Collections_Generic_List<object>__Remove
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         ((pIVar7[1].klass)->_1).typeMetadataHandle,
                         Method_System_Collections_Generic_List<string>_Remove__);
            }
          }
          if (iVar1 + -1 == index) goto LAB_03596390;
          pSVar6 = (__this->fields).JOMJAAIPNPH;
          index = index + 1;
        } while (pSVar6 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

