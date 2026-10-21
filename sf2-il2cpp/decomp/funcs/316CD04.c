// AGHKMJNGFOB$$JPONFNMFHGE @ RVA 0x316CD04

int64_t AGHKMJNGFOB__JPONFNMFHGE(AGHKMJNGFOB_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FCGINHCODAI__o *__this_00;
  void *pvVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566902 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>_GetEnumerator__);
    DAT_04566902 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JBCBCLOPOPI;
  if (__this_00 == (System_Collections_Generic_List_FCGINHCODAI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FCGINHCODAI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_MoveNext__);
    if (!bVar1) {
      pvVar2 = (void *)0x0;
      goto LAB_0326cdd0;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((long)PIDMGHLCFAJ < (long)(ulong)*(uint *)&local_38.fields._current[1].klass) ||
          ((long)(ulong)*(uint *)((long)&local_38.fields._current[1].klass + 4) < (long)PIDMGHLCFAJ)
          );
  pvVar2 = local_38.fields._current[1].monitor;
LAB_0326cdd0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_Dispose__);
  return (int64_t)pvVar2;
}

