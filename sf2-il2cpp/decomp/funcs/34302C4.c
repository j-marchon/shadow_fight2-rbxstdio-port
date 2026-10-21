// GBJGJEGPHKD$$MOEFLHJOFIC @ RVA 0x34302C4

GEBHIBIEAJE_o *
GBJGJEGPHKD__MOEFLHJOFIC(GBJGJEGPHKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_00;
  GBJGJEGPHKD_GOCIPFHDKIO_o *pGVar2;
  GEBHIBIEAJE_o *pGVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568164 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
    DAT_04568164 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields).HJCKNKNHFEK;
  if ((pGVar2 == (GBJGJEGPHKD_GOCIPFHDKIO_o *)0x0) ||
     (__this_00 = (pGVar2->fields).DMFCLEMPPIM,
     __this_00 == (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__);
    pGVar3 = (GEBHIBIEAJE_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar3 = (GEBHIBIEAJE_o *)0x0;
      break;
    }
    if ((GEBHIBIEAJE_o *)local_48.fields._current == (GEBHIBIEAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,
                       ((GEBHIBIEAJE_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK,
                       (MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
  return pGVar3;
}

