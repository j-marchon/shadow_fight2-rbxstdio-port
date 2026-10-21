// KAHMAJKJMBK$$DMADJBBJLCA @ RVA 0x34BEDF4

void KAHMAJKJMBK__DMADJBBJLCA(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568607 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AGCDKMOOJGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_GetEnumerator__);
    DAT_04568607 = 1;
    method = extraout_x1;
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
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      if (*(char *)((long)&local_38.fields._current[3].monitor + 4) != '\0') {
        KAHMAJKJMBK__ANCGCCEOBAA(__this,local_38.fields._current[5].monitor,false,in_x3);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

