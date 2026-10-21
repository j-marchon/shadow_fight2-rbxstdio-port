// GGHCLMEFIGO$$NFDLCAPILII @ RVA 0x33B789C

void GGHCLMEFIGO__NFDLCAPILII
               (GGHCLMEFIGO_o *__this,System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *CJNHFNHJHPE;
  bool bVar3;
  IGFGDDANEPE_o *__this_00;
  System_String_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_array *pHVar6;
  PJKHAJKEHEL_o *pPVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567d7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5235);
    DAT_04567d7d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    pPVar7 = (pAVar4->fields).MFLNIMCFPDK;
    if (pPVar7 == (PJKHAJKEHEL_o *)0x0) {
      return;
    }
    pSVar5 = (pPVar7->fields).IIBBDKMIPOF;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      uVar1 = (pSVar5->fields)._size;
      method_01 = (MethodInfo *)(ulong)uVar1;
      (pSVar5->fields)._size = 0;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (0 < (int)uVar1) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,uVar1,(MethodInfo *)0x0);
      }
      if (GHAAKPDHIJJ != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        while( true ) {
          do {
            do {
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_70,
                                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                                  );
                CJNHFNHJHPE = local_70.fields._current;
                if (!bVar3) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__
                            );
                  GGHCLMEFIGO__MJGMEEKMAOE(__this,method_00);
                  return;
                }
              } while (((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) ||
                      (__this_00 = GGHCLMEFIGO__JNFIBDBHNOA
                                             (__this,((HOOAAGABMBL_Fields *)
                                                     ((long)local_70.fields._current + 0x10))->
                                                     _COIPKAKHDFP_k__BackingField,method_01),
                      __this_00 == (IGFGDDANEPE_o *)0x0));
              method_01 = (MethodInfo *)0x0;
              IGFGDDANEPE__CLIDHHJIGOC(__this_00,(HOOAAGABMBL_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            } while ((__this_00->fields).OFIKEBGDMBE == false);
            __this_01 = ((HOOAAGABMBL_Fields *)((long)CJNHFNHJHPE + 0x10))->
                        _GMPAEDFIIHF_k__BackingField;
            if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_01 = (MethodInfo *)0x0;
            bVar3 = System_String__Equals(__this_01,StringLiteral_5235,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
          } while (!bVar3);
          pSVar5 = (pPVar7->fields).IIBBDKMIPOF;
          if (pSVar5 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pHVar6 == (HOOAAGABMBL_array *)0x0) break;
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pHVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)CJNHFNHJHPE;
            thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,CJNHFNHJHPE);
          }
          else {
            method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,CJNHFNHJHPE,
                       (MethodInfo_26E4DAC *)method_01);
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

