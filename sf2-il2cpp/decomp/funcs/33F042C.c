// FCJBEKHDLAF$$JELDGGLBNPO @ RVA 0x33F042C

void FCJBEKHDLAF__JELDGGLBNPO(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int32_t BKBEIEGNBPA;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567f39 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567f39 = 1;
    method = extraout_x1;
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
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      if ((OLKKAIFGGAK_o *)local_48.fields._current == (OLKKAIFGGAK_o *)0x0) break;
      BKBEIEGNBPA = ((OLKKAIFGGAK_Fields *)((long)local_48.fields._current + 0x10))->LBJLDCLMGKD;
      if (BKBEIEGNBPA != -1) {
        OLKKAIFGGAK__IKPHKLHDNMA
                  ((OLKKAIFGGAK_o *)local_48.fields._current,BKBEIEGNBPA,(MethodInfo *)0x0);
        ((OLKKAIFGGAK_Fields *)((long)pIVar1 + 0x10))->LBJLDCLMGKD = -1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

