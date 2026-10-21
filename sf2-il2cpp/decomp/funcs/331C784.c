// EHCCNKFIPPA$$LLEDBCILPEN @ RVA 0x331C784

void EHCCNKFIPPA__LLEDBCILPEN(EHCCNKFIPPA_o *__this,NJPBBPOABKP_o *AEDJMMHJIEH,MethodInfo *method)

{
  bool bVar1;
  int32_t ACCIHBHMFPN;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_00;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567821 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__);
    DAT_04567821 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((AEDJMMHJIEH != (NJPBBPOABKP_o *)0x0) &&
     (__this_00 = (AEDJMMHJIEH->fields)._NAGALBFLGCA_k__BackingField,
     __this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<NKPJLEMPIKD>_Dispose__);
        return;
      }
      if ((NKPJLEMPIKD_o *)local_48.fields._current == (NKPJLEMPIKD_o *)0x0) break;
      ACCIHBHMFPN = NKPJLEMPIKD__NHGGBEACKBD
                              ((NKPJLEMPIKD_o *)local_48.fields._current,(MethodInfo *)0x0);
      __this_01 = EHCCNKFIPPA__ALDNBOODDKG(__this,ACCIHBHMFPN,method);
      if (__this_01 == (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)AEDJMMHJIEH,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<NJPBBPOABKP>_Remove__)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

