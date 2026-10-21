// OPNFCOGALLI$$IBIGMDGJOAL @ RVA 0x310751C

void OPNFCOGALLI__IBIGMDGJOAL(OPNFCOGALLI_o *__this,JADGCGOJLJB_o *LEAMIBIAIIN,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint16_t uVar5;
  uint16_t uVar6;
  System_String_o *pSVar7;
  GBJGJEGPHKD_o *__this_00;
  GEBHIBIEAJE_o *item;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  GEBHIBIEAJE_array *pGVar8;
  JADGCGOJLJB_c *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566520 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    FUN_01bab630(&StringLiteral_1943);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04566520 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (LEAMIBIAIIN != (JADGCGOJLJB_o *)0x0) {
    pJVar9 = LEAMIBIAIIN->klass;
    bVar1 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pJVar9->_2).naturalAligment) &&
       ((pJVar9->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
      if ((pJVar9->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)MDAPDLLMOMF_TypeInfo) {
        LEAMIBIAIIN = (JADGCGOJLJB_o *)0x0;
      }
      if (LEAMIBIAIIN[3].klass != (JADGCGOJLJB_c *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)LEAMIBIAIIN[3].klass,
                   Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__)
            ;
            pSVar7 = (System_String_o *)local_70.fields._current;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              return;
            }
            if ((__this->fields).IOGCGDKKILK != false) {
              if ((System_String_o *)local_70.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar5 = System_String__get_Chars
                                ((System_String_o *)local_70.fields._current,
                                 ((System_String_Fields *)((long)local_70.fields._current + 0x10))->
                                 _stringLength + -2,(MethodInfo *)0x0);
              uVar6 = System_String__get_Chars
                                (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                        _stringLength + -1,(MethodInfo *)0x0);
              if (uVar5 == 0x5f) {
                if (uVar6 == 0x32) {
                  pSVar7 = System_String__Remove
                                     (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                             _stringLength + -1,1,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1606,(MethodInfo *)0x0);
                }
                else if (uVar6 == 0x31) {
                  pSVar7 = System_String__Remove
                                     (pSVar7,((System_String_Fields *)((long)pSVar7 + 0x10))->
                                             _stringLength + -1,1,(MethodInfo *)0x0);
                  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1943,(MethodInfo *)0x0);
                }
              }
            }
            __this_00 = (__this->fields).KOHECBJAFKG;
            if (__this_00 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            item = GBJGJEGPHKD__MOEFLHJOFIC(__this_00,pSVar7,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<GEBHIBIEAJE>_Add__;
          } while (item == (GEBHIBIEAJE_o *)0x0);
          __this_01 = (__this->fields).HALIJPAEEBE;
          if (__this_01 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pGVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pGVar8 == (GEBHIBIEAJE_array *)0x0) break;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pGVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pGVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pGVar8->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
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

