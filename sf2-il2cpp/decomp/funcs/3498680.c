// NGKBNOEJLPH$$BNNAFGOHDJN @ RVA 0x3498680

int32_t NGKBNOEJLPH__BNNAFGOHDJN(NGKBNOEJLPH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *__this_00;
  Il2CppClass *item;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  ECENNHNBAME_array *pEVar8;
  System_Int32_array *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568456 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
    DAT_04568456 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields).FENGBMAPOMK;
  if (pSVar6 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    iVar1 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields).LANHGMOGONB;
    if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      __this_00 = (__this->fields).JOMJAAIPNPH;
      if (__this_00 != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_MoveNext__
                            );
          pIVar4 = local_60.fields._current;
          lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
          if (!bVar5) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<NGKBNOEJLPH_LNKLGCHOEBF>_Dispose__
                      );
            return 0;
          }
          if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this->fields).FENGBMAPOMK;
          if (pSVar6 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          item = local_60.fields._current[1].klass;
          pEVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pEVar8 == (ECENNHNBAME_array *)0x0) break;
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pEVar8->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pEVar8->m_Items[(int)uVar2] = (ECENNHNBAME_o *)item;
            thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          lVar3 = Method_System_Collections_Generic_List<int>_Add__;
          pSVar7 = (__this->fields).LANHGMOGONB;
          if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar1 = *(int32_t *)&pIVar4[1].monitor;
          pSVar9 = (pSVar7->fields)._items;
          (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
          if (pSVar9 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar9->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar9->m_Items[(int)uVar2] = iVar1;
          }
          else {
            System_Collections_Generic_List<int>__AddWithResize
                      (pSVar7,iVar1,
                       *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

