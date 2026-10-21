// CFEHHBPCGFN$$MAHFCKJGBPP @ RVA 0x31B4E80

void CFEHHBPCGFN__MAHFCKJGBPP
               (CFEHHBPCGFN_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_GEBHIBIEAJE__o *__this_01;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04566baa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_get_Current__);
                    /* try { // try from 032b4ecc to 033b506b has its CatchHandler @ 032b4ecc
                       catch() { ... } // from try @ 032b4ecc with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b50ac with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b512c with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b51dc with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b520c with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b5254 with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b5270 with catch @ 032b4ecc
                       catch() { ... } // from try @ 032b52b0 with catch @ 032b4ecc */
    __this = (CFEHHBPCGFN_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
    DAT_04566baa = 1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  if ((((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
       (pOVar2 = (CPECAEHDDDB->fields).EMCFCMFGPME, pOVar2 != (OLKKAIFGGAK_o *)0x0)) &&
      (__this_00 = (pOVar2->fields).HMIAFJALFCJ, __this = (CFEHHBPCGFN_o *)0x0,
      __this_00 != (GBJGJEGPHKD_o *)0x0)) &&
     (__this_01 = GBJGJEGPHKD__EKHACIPBPAP(__this_00,(MethodInfo *)0x0),
     __this = (CFEHHBPCGFN_o *)0x0,
     __this_01 != (System_Collections_Generic_List_GEBHIBIEAJE__o *)0x0)) {
    if (LOPENELMPML) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_40,
                           Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(undefined1 *)&local_40.fields._current[4].monitor = 1;
      }
    }
    else {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<GEBHIBIEAJE>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_40,
                           Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_MoveNext__
                          );
        if (!bVar1) break;
        if (local_40.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *(undefined1 *)&local_40.fields._current[4].monitor = 0;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<GEBHIBIEAJE>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

