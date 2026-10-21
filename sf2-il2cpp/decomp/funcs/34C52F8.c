// CPGONFFGAHM$$DPDEMPFEJEB @ RVA 0x34C52F8

void CPGONFFGAHM__DPDEMPFEJEB(CPGONFFGAHM_o *__this,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  Il2CppClass *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568630 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04568630 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOOBCEJBJAO;
  if ((__this_00 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_01 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      __this_02 = local_38.fields._current[4].klass;
      if (__this_02 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CNDPAJOLKFN__LFENGGKOJDO
                ((CNDPAJOLKFN_o *)__this_02,local_38.fields._current[3].monitor,(MethodInfo *)0x0);
      CNDPAJOLKFN__PGLILPKGILI((CNDPAJOLKFN_o *)__this_02,0.5,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

