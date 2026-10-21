// LCNCCGOAJBL$$GPAIEPMDALL @ RVA 0x34D5A40

/* WARNING: Removing unreachable block (ram,0x035d605c) */
/* WARNING: Removing unreachable block (ram,0x035d5d3c) */
/* WARNING: Removing unreachable block (ram,0x035d5d40) */
/* WARNING: Removing unreachable block (ram,0x035d5f04) */

System_Collections_Generic_List_string__o * LCNCCGOAJBL__GPAIEPMDALL(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_string__o **ppSVar6;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar7;
  Il2CppClass *pIVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045686d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686d6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG !=
      (System_Collections_Generic_List_string__o *)0x0) {
LAB_035d5fac:
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
  }
  pSVar5 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar6 = &LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (pSVar7 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar7,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,
                 (System_Collections_Generic_List_object__o *)local_80.fields._current[3].klass,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar3 = local_a0.fields._current, bVar4) {
        if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)pIVar3[7].klass,
                           Method_System_Collections_Generic_List<string>_Contains__);
        if (!bVar4) {
          if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
          if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar8 = pIVar3[7].klass;
          pSVar9 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = (System_String_o *)pIVar8;
            thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pIVar8,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
    if (pSVar7 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar7,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                               ), bVar4) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,
                   (System_Collections_Generic_List_object__o *)local_80.fields._current[3].klass,
                   Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                 ), pIVar3 = local_a0.fields._current, bVar4) {
          if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
          if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = System_Collections_Generic_List<object>__Contains
                            ((System_Collections_Generic_List_object__o *)pSVar5,
                             (Il2CppObject *)pIVar3[7].klass,
                             Method_System_Collections_Generic_List<string>_Contains__);
          if (!bVar4) {
            if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
            if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar8 = pIVar3[7].klass;
            pSVar9 = (pSVar5->fields)._items;
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar5->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (pSVar5->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = (System_String_o *)pIVar8;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pIVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__)
      ;
      if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
      if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__Sort
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<string>_Sort__);
        goto LAB_035d5fac;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

