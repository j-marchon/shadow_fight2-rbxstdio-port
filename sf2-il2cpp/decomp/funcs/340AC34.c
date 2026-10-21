// MGNPHCAAEIO$$OKJKIOKPKEJ @ RVA 0x340AC34

System_Collections_Generic_List_HOOAAGABMBL__o * MGNPHCAAEIO__OKJKIOKPKEJ(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this;
  System_Comparison_HOOAAGABMBL__o **ppSVar4;
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  DOPEEDABNEK_o *pDVar5;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar7;
  System_Comparison_HOOAAGABMBL__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568032 & 1) == 0) {
    FUN_01bab630(&System_Comparison<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_<>c_IEMLCHEGNKN__);
    FUN_01bab630(&MGNPHCAAEIO_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_6868);
    DAT_04568032 = 1;
    in_x1 = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    in_x1 = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    in_x1 = extraout_x1_02;
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar5 != (DOPEEDABNEK_o *)0x0) {
    pSVar7 = (pDVar5->fields).FDLFEJAEDGA;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      in_x1 = extraout_x1_03;
    }
    pSVar7 = MGNPHCAAEIO__FHKMIFJBPEN(pSVar7,in_x1);
    __this = (System_Collections_Generic_List_HOOAAGABMBL__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    if (pSVar7 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar7,
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
        item = local_70.fields._current;
        if (!bVar3) break;
        if ((HOOAAGABMBL_o *)local_70.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__op_Equality
                          (((HOOAAGABMBL_Fields *)((long)local_70.fields._current + 0x10))->
                           _DKODBGOHKGH_k__BackingField,StringLiteral_6868,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        if (bVar3) {
          if (__this == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pHVar6 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pHVar6->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pHVar6->m_Items[(int)uVar1] = (HOOAAGABMBL_o *)item;
            thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      if ((MGNPHCAAEIO_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = MGNPHCAAEIO_<>c_TypeInfo->static_fields->__9__337_0;
      if (comparison == (System_Comparison_HOOAAGABMBL__o *)0x0) {
        if ((MGNPHCAAEIO_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        comparison = (System_Comparison_HOOAAGABMBL__o *)
                     thunk_FUN_01bda818(System_Comparison<HOOAAGABMBL>_TypeInfo);
        System_Comparison<object>___ctor();
        ppSVar4 = &MGNPHCAAEIO_<>c_TypeInfo->static_fields->__9__337_0;
        *ppSVar4 = comparison;
        thunk_FUN_01c20e04(ppSVar4,comparison);
      }
      if (__this != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        System_Collections_Generic_List<object>__Sort
                  ((System_Collections_Generic_List_object__o *)__this,
                   (System_Comparison_T__o *)comparison,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
        return __this;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

