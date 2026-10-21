// NJPBBPOABKP$$GIENGNEGHPJ @ RVA 0x338E190

void NJPBBPOABKP__GIENGNEGHPJ(NJPBBPOABKP_o *__this,EHCCNKFIPPA_o *KOKHLOCPDIK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567bfe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    DAT_04567bfe = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._DEKNAHBMHGA_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,KOKHLOCPDIK,
                 (local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

