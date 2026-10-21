// FCJBEKHDLAF$$CABNLDNOLDM @ RVA 0x33EA01C

void FCJBEKHDLAF__CABNLDNOLDM(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *in_x3;
  int DPJIDNBJIBG;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567efb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567efb = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DPJIDNBJIBG = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        FCJBEKHDLAF__HMDJFLDLPMN(__this,BCKBBGCOMJD,method);
        return;
      }
      if ((OLKKAIFGGAK_o *)local_48.fields._current == BCKBBGCOMJD) break;
      DPJIDNBJIBG = DPJIDNBJIBG + 1;
    }
    FCJBEKHDLAF__OGCMOEOKOJP(__this,DPJIDNBJIBG,(OLKKAIFGGAK_o *)0x0,in_x3);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

