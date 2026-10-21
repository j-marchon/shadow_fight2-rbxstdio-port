// OLKKAIFGGAK$$CFOOIMNHJPI @ RVA 0x34EE99C

OLKKAIFGGAK_o *
OLKKAIFGGAK__CFOOIMNHJPI(OLKKAIFGGAK_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *pSVar3;
  OLKKAIFGGAK_o *pOVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045687b1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    DAT_045687b1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).MPLCPGJEHPG;
  if (pSVar3 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                             ), pIVar1 = local_48.fields._current, bVar2) {
      if ((OLKKAIFGGAK_o *)local_48.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        (((OLKKAIFGGAK_Fields *)((long)local_48.fields._current + 0x10))->
                         NPFMOEOIEKM,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
        return (OLKKAIFGGAK_o *)pIVar1;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    pSVar3 = (__this->fields).MPLCPGJEHPG;
    if (pSVar3 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
      if (0 < (pSVar3->fields)._size) {
        pOVar4 = (OLKKAIFGGAK_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
        return pOVar4;
      }
      return (OLKKAIFGGAK_o *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

