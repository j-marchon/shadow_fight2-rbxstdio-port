// MGNPHCAAEIO$$EKOMOGPCHCN @ RVA 0x33FC378

/* WARNING: Removing unreachable block (ram,0x034fc5a8) */

System_Collections_Generic_List_PJKHAJKEHEL__o *
MGNPHCAAEIO__EKOMOGPCHCN
          (System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this;
  NLPJLHOEAOE_o *__this_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  PJKHAJKEHEL_array *pPVar5;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456805c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456805c = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
  if (OKBIKHHKOEN == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)OKBIKHHKOEN,
             Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    pIVar3 = local_80.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__)
      ;
      return __this;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((PJKHAJKEHEL_o *)pIVar3 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (__this_00 == (NLPJLHOEAOE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = NLPJLHOEAOE__GINBGECFLHA
                          (__this_00,(PJKHAJKEHEL_o *)pIVar3,
                           ((PJKHAJKEHEL_Fields *)((long)pIVar3 + 0x10))->MGDHGEHGKBA,
                           (MethodInfo *)0x0);
    if (__this_01 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                             ), pIVar3 = local_a0.fields._current, bVar4) {
      method_00 = extraout_x1_00;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      MGNPHCAAEIO__JPFEMNNELIF((PJKHAJKEHEL_o *)pIVar3,method_00);
      lVar2 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
      if (__this == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pPVar5 == (PJKHAJKEHEL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pPVar5->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pPVar5->m_Items[(int)uVar1] = (PJKHAJKEHEL_o *)pIVar3;
        thunk_FUN_01c20e04(pPVar5->m_Items + (int)uVar1,pIVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,pIVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

