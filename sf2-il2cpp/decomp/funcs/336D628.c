// IEHDDOIHPNI$$OCKKDMEHADL @ RVA 0x336D628

HOOAAGABMBL_o * IEHDDOIHPNI__OCKKDMEHADL(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  IEHDDOIHPNI_c *pIVar5;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar6;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *pSVar8;
  ACHLOMELAJE_o *__this;
  System_Collections_Generic_List_string__o *pSVar9;
  System_String_array *pSVar10;
  HOOAAGABMBL_o *pHVar11;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567afa & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16063);
    FUN_01bab630(&StringLiteral_10876);
    DAT_04567afa = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar5 = IEHDDOIHPNI_TypeInfo;
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    pIVar5 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
  }
  pSVar6 = IEHDDOIHPNI__EIJGGJGKJBF((MethodInfo *)pIVar5);
  if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar7 = (HOOAAGABMBL_o *)0x0;
  }
  else {
    pHVar7 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar6,0,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = System_String__op_Inequality
                      ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                       (MethodInfo *)0x0);
    if (bVar4) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      do {
        do {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                              );
            pIVar3 = local_80.fields._current;
            pHVar11 = pHVar7;
            if (!bVar4) goto LAB_0346d8ac;
            if ((HOOAAGABMBL_o *)local_80.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar4 = System_String__op_Equality
                              (((HOOAAGABMBL_Fields *)((long)local_80.fields._current + 0x10))->
                               _GMPAEDFIIHF_k__BackingField,StringLiteral_10876,(MethodInfo *)0x0);
          } while (bVar4);
          a = ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField;
          pSVar8 = System_String__Concat
                             ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_16063,
                              (MethodInfo *)0x0);
          bVar4 = System_String__op_Inequality(a,pSVar8,(MethodInfo *)0x0);
        } while (bVar4);
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
        pHVar11 = (HOOAAGABMBL_o *)pIVar3;
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField ==
            (ACHLOMELAJE_o *)0x0) break;
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
        __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = ACHLOMELAJE__NIEKNLDMABC
                          (__this,((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->
                                  _ILMMODKJGFK_k__BackingField,(MethodInfo *)0x0);
      } while (bVar4);
LAB_0346d8ac:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      pHVar7 = pHVar11;
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                             ), pIVar3 = local_80.fields._current, bVar4) {
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((HOOAAGABMBL_o *)pIVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
      if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)pSVar9,
                         (Il2CppObject *)
                         ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField
                         ,Method_System_Collections_Generic_List<string>_Contains__);
      if (!bVar4) {
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar9 = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
        if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = ((HOOAAGABMBL_Fields *)((long)pIVar3 + 0x10))->_COIPKAKHDFP_k__BackingField;
        pSVar10 = (pSVar9->fields)._items;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar9->fields)._size;
        if (uVar1 < (uint)pSVar10->max_length) {
          (pSVar9->fields)._size = uVar1 + 1;
          pSVar10->m_Items[(int)uVar1] = pSVar8;
          thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar8,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
      if (pSVar6 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar6,pIVar3,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)
                       IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE,
                       Method_DJNBJHPDKDP_OBECCOPBADO<HOOAAGABMBL>__);
    if (bVar4) {
      pIVar5 = IEHDDOIHPNI_TypeInfo;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        pIVar5 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
      }
      IEHDDOIHPNI__NDNPGAKJLHM((MethodInfo *)pIVar5);
    }
  }
  return pHVar7;
}

