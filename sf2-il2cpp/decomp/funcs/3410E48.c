// MGNPHCAAEIO.ONAGKGIEEGI$$ENMHDGDKLJD @ RVA 0x3410E48

void MGNPHCAAEIO_ONAGKGIEEGI__ENMHDGDKLJD(MGNPHCAAEIO_ONAGKGIEEGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04568084 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04568084 = 1;
    method = extraout_x1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HPJKPNJHGMF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_50,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                  );
        return;
      }
      if ((LKPNOBFEAKD_o *)local_50.fields._current.fields.value == (LKPNOBFEAKD_o *)0x0) break;
      LKPNOBFEAKD__ENMHDGDKLJD
                ((LKPNOBFEAKD_o *)local_50.fields._current.fields.value,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

