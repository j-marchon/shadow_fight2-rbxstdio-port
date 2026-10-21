// GGLKHCAIGDI$$FCBPFKMMBJD @ RVA 0x33A72D4

bool GGLKHCAIGDI__FCBPFKMMBJD(GGLKHCAIGDI_o *__this,System_String_o *DAFCPNPODFD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567cf9 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HEHMAPDMHIG;
  if (__this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_034a73a0;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[1].klass,DAFCPNPODFD,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_034a73a0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
  return bVar1 && iVar3 == 4;
}

