// OANGEOLKMJG$$GIENGNEGHPJ @ RVA 0x32EE964

void OANGEOLKMJG__GIENGNEGHPJ(OANGEOLKMJG_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456765c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_0456765c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033eea44 to 034eeb33 has its CatchHandler @ 033eea44
                       catch() { ... } // from try @ 033eea44 with catch @ 033eea44
                       catch() { ... } // from try @ 033eec30 with catch @ 033eea44
                       catch() { ... } // from try @ 033eed40 with catch @ 033eea44
                       catch() { ... } // from try @ 033eed48 with catch @ 033eea44
                       catch() { ... } // from try @ 033eedfc with catch @ 033eea44 */
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                (local_48.fields._current,APOLFFJGBEO.fields.LHNJNJMBLJM,
                 APOLFFJGBEO.fields.EMCFCMFGPME,(local_48.fields._current)->klass->vtable[6].method)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

