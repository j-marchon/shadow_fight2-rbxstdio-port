// IPCACEBFONO$$NKMKIGOGMPK @ RVA 0x34E1C7C

void IPCACEBFONO__NKMKIGOGMPK(IPCACEBFONO_o *__this,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  undefined8 uVar4;
  NKOIBKNPICN_o *pNVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Int32_array *pSVar7;
  undefined1 auVar8 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456873c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    auVar8 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__
                         );
    DAT_0456873c = 1;
  }
  uVar4 = auVar8._0_8_;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).MAABMIGPEIL;
  if ((pNVar5 != (NKOIBKNPICN_o *)0x0) &&
     (pSVar6 = (pNVar5->fields).KJNPENJKBKD, pSVar6 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    __this_00 = (__this->fields).KCKCIPHKEEP;
    uVar4 = 0;
    if (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                            );
          lVar2 = Method_System_Collections_Generic_List<int>_Add__;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                      );
            return;
          }
          if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(char *)&local_50.fields._current[1].monitor == '\0');
        pNVar5 = (__this->fields).MAABMIGPEIL;
        if (pNVar5 == (NKOIBKNPICN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (pNVar5->fields).KJNPENJKBKD;
        if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
        item = *(int32_t *)((long)&local_50.fields._current[1].klass + 4);
        pSVar7 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (pSVar6,item,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,auVar8._8_8_);
}

