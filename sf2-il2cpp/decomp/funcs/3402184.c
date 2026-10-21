// MGNPHCAAEIO$$OKOJOGAHMFP @ RVA 0x3402184

System_String_o * MGNPHCAAEIO__OKOJOGAHMFP(System_String_o *HCBBECJJIKK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *__this;
  MethodInfo *extraout_x1;
  System_String_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568041 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__
                );
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568041 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->POFHDIJIOFL;
  if (__this != (System_Collections_Generic_List_MGNDHCBAPEN_string__string___o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_string>>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
                  );
        return StringLiteral_1;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality
                        ((System_String_o *)local_48.fields._current[1].klass,HCBBECJJIKK,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pSVar3 = pIVar1[1].monitor;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_string>>_Dispose__
                  );
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

