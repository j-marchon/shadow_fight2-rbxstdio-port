// JBGPNJEDALF$$KKCADOCOFFP @ RVA 0x34C3760

BCGLDKLKKDA_o *
JBGPNJEDALF__KKCADOCOFFP(JBGPNJEDALF_o *__this,System_String_o *OIJKLJBGOLH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  BCGLDKLKKDA_o *pBVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456861f & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DOOBINMKNBI__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
                    /* try { // try from 035c37c0 to 036c37e7 has its CatchHandler @ 035c3cbc */
    DAT_0456861f = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OIJKLJBGOLH,(MethodInfo *)0x0);
  pBVar2 = (BCGLDKLKKDA_o *)0x0;
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                (__this->fields).super._ADKGNPMECHK_k__BackingField;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,
               Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__);
      pBVar2 = (BCGLDKLKKDA_o *)local_38.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
        return (BCGLDKLKKDA_o *)0x0;
      }
      if ((BCGLDKLKKDA_o *)local_38.fields._current == (BCGLDKLKKDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 035c381c to 036c3847 has its CatchHandler @ 035c3cb8 */
      bVar1 = BCGLDKLKKDA__JOGKAIEDLIO
                        ((BCGLDKLKKDA_o *)local_38.fields._current,OIJKLJBGOLH,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
  }
  return pBVar2;
}

