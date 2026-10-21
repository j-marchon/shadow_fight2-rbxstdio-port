// GDINNHKFKMB$$HBLEFJOCOPK @ RVA 0x30729D8

bool GDINNHKFKMB__HBLEFJOCOPK
               (System_String_o *KGLJICLJHEL,System_Collections_Generic_List_string__o *PDEDHIBCEPJ,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565f89 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565f89 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03172a9c;
    }
    bVar2 = System_String__op_Equality
                      (KGLJICLJHEL,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_03172a9c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return bVar1 && iVar3 == 4;
}

