// CFMDGLMCNIL$$BKBHKFCCKDO @ RVA 0x30783F4

void CFMDGLMCNIL__BKBHKFCCKDO(CFMDGLMCNIL_o *__this,int32_t BCFACBMOMKI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_OHPOFOPJIMB__o *pSVar4;
  ulong uVar5;
  MethodInfo *method_00;
  OHPOFOPJIMB_array *pOVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565fbf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo);
    DAT_04565fbf = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
  pSVar4 = (__this->fields).HHMMOAAKGCB;
  if (pSVar4 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)pSVar4,
               Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar3) break;
      if ((OHPOFOPJIMB_o *)local_70.fields._current == (OHPOFOPJIMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((OHPOFOPJIMB_Fields *)((long)local_70.fields._current + 0x10))->
          _GEMCDLIDIBB_k__BackingField == BCFACBMOMKI) {
        uVar5 = (*(((OHPOFOPJIMB_c *)(local_70.fields._current)->klass)->vtable)._5_unknown.
                  methodPtr)(local_70.fields._current,
                             (((OHPOFOPJIMB_c *)(local_70.fields._current)->klass)->vtable).
                             _5_unknown.method);
        lVar2 = Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__;
        if ((uVar5 & 1) != 0) {
          pSVar4 = (__this->fields).MPMNLJJLADE;
          if (pSVar4 == (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar6 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pOVar6 == (OHPOFOPJIMB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pOVar6->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pOVar6->m_Items[(int)uVar1] = (OHPOFOPJIMB_o *)item;
            thunk_FUN_01c20e04(pOVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          lVar2 = Method_System_Collections_Generic_List<OHPOFOPJIMB>_Add__;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<OHPOFOPJIMB>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<OHPOFOPJIMB>_Dispose__);
          CFMDGLMCNIL__POAHJIJOHKG(__this,method_00);
          return;
        }
        pSVar4 = (__this->fields).HHMMOAAKGCB;
        if (pSVar4 == (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) break;
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar4,local_70.fields._current,
                   Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

