// DEKKGJNMFEB$$HPIGDJLAKAG @ RVA 0x322D9E4

GGCMECLCOMJ_o *
DEKKGJNMFEB__HPIGDJLAKAG(DEKKGJNMFEB_o *__this,int32_t DLNKPJMDPJI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_00;
  GGCMECLCOMJ_o *pGVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fc4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_GetEnumerator__);
    DAT_04566fc4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).CGDCBPHBFDE;
  if (__this_00 == (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGCMECLCOMJ>_GetEnumerator__);
  do {
                    /* try { // try from 0332da78 to 0342db1f has its CatchHandler @ 0332da78
                       catch() { ... } // from try @ 0332da78 with catch @ 0332da78
                       catch() { ... } // from try @ 0332dbec with catch @ 0332da78
                       catch() { ... } // from try @ 0332dc7c with catch @ 0332da78
                       catch() { ... } // from try @ 0332dc84 with catch @ 0332da78
                       catch() { ... } // from try @ 0332dd30 with catch @ 0332da78 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_MoveNext__);
    pGVar2 = (GGCMECLCOMJ_o *)local_48.fields._current;
    if (!bVar1) {
      pGVar2 = (GGCMECLCOMJ_o *)0x0;
      break;
    }
    if ((GGCMECLCOMJ_o *)local_48.fields._current == (GGCMECLCOMJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = GGCMECLCOMJ__CBPCNDJFEGO
                      ((GGCMECLCOMJ_o *)local_48.fields._current,DLNKPJMDPJI,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<GGCMECLCOMJ>_Dispose__);
  return pGVar2;
}

