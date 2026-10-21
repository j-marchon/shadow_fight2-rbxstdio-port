// OCMLPCKBHPN$$LMCFEODLLAE @ RVA 0x327E098

bool OCMLPCKBHPN__LMCFEODLLAE
               (System_String_o *IIDPDAKKFFN,System_String_o *DDGBMJNBFPF,
               System_Collections_Generic_List_string__o *DNMNAACLEFD,MethodInfo *method)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456726d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_0456726d = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (DNMNAACLEFD == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)DNMNAACLEFD,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      bVar3 = 0;
      goto LAB_0337e170;
    }
    bVar1 = System_String__op_Equality
                      (IIDPDAKKFFN,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0);
  } while (!bVar1);
  bVar3 = 1;
LAB_0337e170:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)DNMNAACLEFD,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      bVar2 = 0;
      goto LAB_0337e1cc;
    }
    bVar1 = System_String__op_Equality
                      (DDGBMJNBFPF,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0);
  } while (!bVar1);
  bVar2 = 1;
LAB_0337e1cc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & bVar3);
}

