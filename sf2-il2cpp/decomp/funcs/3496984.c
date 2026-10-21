// NGKBNOEJLPH$$FCPJGGMHKGF @ RVA 0x3496984

bool NGKBNOEJLPH__FCPJGGMHKGF
               (NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,
               System_Collections_Generic_List_FCFGGKLDBFJ__o *IENEDOONGBB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568461 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Contains__);
    __this = (NGKBNOEJLPH_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<FCFGGKLDBFJ>_GetEnumerator__);
    DAT_04568461 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
    bVar1 = false;
  }
  else {
    if (IENEDOONGBB == (System_Collections_Generic_List_FCFGGKLDBFJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)IENEDOONGBB,
               Method_System_Collections_Generic_List<FCFGGKLDBFJ>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_MoveNext__);
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_48.fields._current[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_Collections_Generic_List<object>__Contains
                        (local_48.fields._current[1].monitor,(Il2CppObject *)NLEBDPHNIDI,
                         Method_System_Collections_Generic_List<ECENNHNBAME>_Contains__);
    } while (!bVar2);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<FCFGGKLDBFJ>_Dispose__);
  }
  return bVar1;
}

