// MGNPHCAAEIO$$FHKMIFJBPEN @ RVA 0x34017E4

void MGNPHCAAEIO__FHKMIFJBPEN
               (System_Collections_Generic_List_HOOAAGABMBL__o *JGHIJMJNJLE,
               System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this;
  bool bVar3;
  int32_t iVar4;
  ulong uVar5;
  ACHLOMELAJE_o *__this_00;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567ff6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_TrimExcess__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Capacity__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_set_Capacity__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ff6 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (HPACPFLKHPK != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar4 = System_Collections_Generic_List<object>__get_Capacity
                      ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                       Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Capacity__);
    if (JGHIJMJNJLE != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                 (JGHIJMJNJLE->fields)._size + iVar4,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_set_Capacity__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)JGHIJMJNJLE,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        __this = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          System_Collections_Generic_List<object>__TrimExcess
                    ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,
                     Method_System_Collections_Generic_List<HOOAAGABMBL>_TrimExcess__);
          return;
        }
        if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) break;
        if (((HOOAAGABMBL_Fields *)((long)local_70.fields._current + 0x10))->
            _ILHGDFFOGHP_k__BackingField != false) {
          uVar5 = (*(((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable)._5_EFLKILFFJKH.
                    methodPtr)(local_70.fields._current,
                               (((HOOAAGABMBL_c *)(local_70.fields._current)->klass)->vtable).
                               _5_EFLKILFFJKH.method);
          if ((uVar5 & 1) == 0) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = ACHLOMELAJE__NIEKNLDMABC
                              (__this_00,
                               ((HOOAAGABMBL_Fields *)((long)__this + 0x10))->
                               _ILMMODKJGFK_k__BackingField,(MethodInfo *)0x0);
            if (!bVar3) {
              bVar3 = HOOAAGABMBL__JKGFLFGMALB((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
              if (!bVar3) {
                pHVar6 = (HPACPFLKHPK->fields)._items;
                (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
                if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (HPACPFLKHPK->fields)._size;
                if (uVar1 < (uint)pHVar6->max_length) {
                  (HPACPFLKHPK->fields)._size = uVar1 + 1;
                  pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)__this;
                  thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,__this);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,__this,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

