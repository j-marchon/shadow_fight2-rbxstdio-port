// MCCHIAKPFEL$$ALLFNDNBMCO @ RVA 0x318D59C

JHBHHHKEFOO_o *
MCCHIAKPFEL__ALLFNDNBMCO(MCCHIAKPFEL_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  bool bVar1;
  JHBHHHKEFOO_o *__this_00;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a1a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_get_Current__);
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
    DAT_04566a1a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JHBHHHKEFOO_o *)0x0) {
    (__this_00->fields).GICDEKDNADC = true;
    JHBHHHKEFOO__KAOJCFCELIB(__this_00,(__this->fields).LNONNMPONFN,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PADLGGFCCMI;
    if (__this_01 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
          return __this_00;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) break;
        if ((*(int *)&local_48.fields._current[1].monitor <= JLAFGLDIFOC) &&
           (JLAFGLDIFOC <= *(int *)((long)&local_48.fields._current[1].monitor + 4))) {
          JHBHHHKEFOO__KAOJCFCELIB
                    (__this_00,(JHBHHHKEFOO_o *)local_48.fields._current[1].klass,(MethodInfo *)0x0)
          ;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

