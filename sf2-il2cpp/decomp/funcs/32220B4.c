// DCAEKAABCEM$$HCBAKFNPGDN @ RVA 0x32220B4

void DCAEKAABCEM__HCBAKFNPGDN(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566f44 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Count__);
    DAT_04566f44 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = DCAEKAABCEM__CENBKKEGHFO(__this,method);
  if ((__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) &&
     (0 < (__this_00->fields)._size)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar2 = local_38.fields._current[1].klass;
      if (pIVar2 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(code *)(pIVar2->_1).namespaze)
                ((pIVar2->_1).element_class,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_Dispose__)
    ;
  }
  return;
}

