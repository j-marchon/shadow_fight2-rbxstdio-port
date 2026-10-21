// OLKKAIFGGAK$$DJBDIIJKBON @ RVA 0x34F7DE8

int32_t OLKKAIFGGAK__DJBDIIJKBON
                  (OLKKAIFGGAK_o *__this,
                  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *ACHJNNOKEDK,
                  MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  bool bVar3;
  FPLCEOJCPOD_o *__this_00;
  PJKHAJKEHEL_o *pPVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_54;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045687fd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_int>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_GetEnumerator__);
    DAT_045687fd = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_54 = 0;
  if (ACHJNNOKEDK == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_70,(System_Collections_Generic_List_object__o *)ACHJNNOKEDK,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_GetEnumerator__);
  local_50.fields._index = local_70.fields._index;
  local_50.fields._version = local_70.fields._version;
  local_50.fields._list = local_70.fields._list;
  local_50.fields._current = local_70.fields._current;
  iVar2 = 0;
  while( true ) {
    iVar5 = iVar2;
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_int>>_MoveNext__
                      );
    pIVar1 = local_50.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_int>>_Dispose__
                );
      return iVar5;
    }
    local_54 = 0;
    pPVar4 = (__this->fields).FAPMJJBOFEF;
    if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pPVar4->fields).ACHJNNOKEDK;
    if (__this_00 == (FPLCEOJCPOD_o *)0x0) break;
    bVar3 = FPLCEOJCPOD__KNMENIBLFGF
                      (__this_00,(System_String_o *)local_50.fields._current[1].klass,&local_54,true
                       ,false,(MethodInfo *)0x0);
    iVar2 = iVar5;
    if ((bVar3) &&
       (local_54 = *(int *)&pIVar1[1].monitor + local_54, iVar2 = local_54, local_54 <= iVar5)) {
      iVar2 = iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

