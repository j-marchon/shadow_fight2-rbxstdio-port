// KAHMAJKJMBK$$DBLLCDJCJIJ @ RVA 0x34BEC8C

void KAHMAJKJMBK__DBLLCDJCJIJ(KAHMAJKJMBK_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568603 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_GetEnumerator__);
    DAT_04568603 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).POPEMFAKCLL;
  if (__this_00 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AGCDKMOOJGI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_Dispose__);
        return;
      }
      if ((AGCDKMOOJGI_o *)local_38.fields._current == (AGCDKMOOJGI_o *)0x0) break;
      if (((((AGCDKMOOJGI_Fields *)((long)local_38.fields._current + 0x10))->super).
           _BDDBFNHFMBC_k__BackingField != false) &&
         (((AGCDKMOOJGI_Fields *)((long)local_38.fields._current + 0x10))->EIMDJHJAHKK ==
          ACCIHBHMFPN)) {
        AGCDKMOOJGI__KACMDIEPEMF((AGCDKMOOJGI_o *)local_38.fields._current,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

