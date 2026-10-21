// LHKALFIIJKB$$GKJMHPMANGK @ RVA 0x34FE888

void LHKALFIIJKB__GKJMHPMANGK(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *__this;
  LHKALFIIJKB_c *method_00;
  MethodInfo *method_01;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456883b & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_get_Current__
                );
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    DAT_0456883b = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = LHKALFIIJKB_TypeInfo->static_fields->KLMLDJJBLKO;
  if (__this != (System_Collections_Generic_List_LHKALFIIJKB_CFFGMHNFPLN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<LHKALFIIJKB_CFFGMHNFPLN>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<LHKALFIIJKB_CFFGMHNFPLN>_Dispose__
                  );
        if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = ANFOHCGLHID__CBHLMLMMFBP((MethodInfo *)0x0);
        CEJLHKFNEDB__JAGMOPPIMKB(pSVar3,(MethodInfo *)0x0);
        method_00 = LHKALFIIJKB_TypeInfo;
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (LHKALFIIJKB_c *)thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__PGLPDFKGFGG((MethodInfo *)method_00);
        LHKALFIIJKB__FKPLMPKAECO(false,method_01);
        return;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_IO_File__Exists
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
      if (bVar2) {
        System_IO_File__Copy
                  ((System_String_o *)pIVar1[1].klass,pIVar1[1].monitor,true,(MethodInfo *)0x0);
        pSVar3 = pIVar1[1].monitor;
        if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CFJANHACGMG__PKACMGFBIKK(pSVar3,false,false,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

