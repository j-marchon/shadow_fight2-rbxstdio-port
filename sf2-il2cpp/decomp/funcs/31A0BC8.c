// LDHBHPILNMA$$JMEMNAFMMKF @ RVA 0x31A0BC8

/* WARNING: Removing unreachable block (ram,0x032a0e9c) */

void LDHBHPILNMA__JMEMNAFMMKF
               (System_Collections_Generic_List_string__o *PFDNCKLLMBL,
               System_Collections_Generic_List_ECENNHNBAME__o *NKDIGHIIOGN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Il2CppClass *pIVar5;
  System_String_array *pSVar6;
  System_String_o *value;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566add & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_04566add = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (NKDIGHIIOGN == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NKDIGHIIOGN = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
    if (NKDIGHIIOGN == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)NKDIGHIIOGN,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          return;
        }
        if ((System_String_o *)local_80.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((System_String_o *)((long)local_80.fields._current + 0x78))->klass ==
            (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar5 = (((System_String_o *)((long)local_80.fields._current + 0x78))->klass->_1).
                 declaringType;
        if (pIVar5 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((*(int *)&(pIVar5->_1).name != 1) ||
               (*(int *)((long)&(pIVar5->_1).castClass + 4) != 1)) ||
              (*(int *)((long)&(pIVar5->_1).name + 4) != 4));
      value = (pIVar5->_1).this_arg.data;
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    } while (bVar3);
    if (PFDNCKLLMBL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)PFDNCKLLMBL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar3) break;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)local_a0.fields._current,value,(MethodInfo *)0x0);
    } while (!bVar4);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (!bVar3) {
      pSVar6 = (PFDNCKLLMBL->fields)._items;
      (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
      if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (PFDNCKLLMBL->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (PFDNCKLLMBL->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = value;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,value);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,(Il2CppObject *)value,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
}

