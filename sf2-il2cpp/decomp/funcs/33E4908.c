// FCJBEKHDLAF$$KLBLKMJOBME @ RVA 0x33E4908

void FCJBEKHDLAF__KLBLKMJOBME(FCJBEKHDLAF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567ec1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567ec1 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      if ((OLKKAIFGGAK_o *)local_38.fields._current == (OLKKAIFGGAK_o *)0x0) break;
      OLKKAIFGGAK__INJOMAFNCDK
                ((OLKKAIFGGAK_o *)local_38.fields._current,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

