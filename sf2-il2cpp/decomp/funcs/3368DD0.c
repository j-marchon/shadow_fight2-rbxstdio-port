// MDFGJKBMECA$$NEECEMHBMEB @ RVA 0x3368DD0

void MDFGJKBMECA__NEECEMHBMEB(GBJGJEGPHKD_o *BCKBBGCOMJD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  char **ppcVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567ad3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04567ad3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD != (GBJGJEGPHKD_o *)0x0) {
    __this = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0);
    __this_00 = GBJGJEGPHKD__JNAHGJHEIOE(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                    );
          return;
        }
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,
                            *(int32_t *)&local_60.fields._current[1].klass,
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        pIVar4 = (Il2CppClass *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,
                            *(int32_t *)((long)&pIVar1[1].klass + 4),
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) break;
        pIVar3[1].klass = pIVar4;
        thunk_FUN_01c20e04(pIVar3 + 1,pIVar4);
        if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppcVar5 = &(pIVar4->_1).name;
        *ppcVar5 = (char *)pIVar3;
        thunk_FUN_01c20e04(ppcVar5,pIVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

