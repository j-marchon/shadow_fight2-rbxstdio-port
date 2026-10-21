// FCJBEKHDLAF$$HPJFJDGIOIF @ RVA 0x33EBB64

bool FCJBEKHDLAF__HPJFJDGIOIF(MDAPDLLMOMF_o *LEAMIBIAIIN,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this;
  MethodInfo *extraout_x1;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567f2b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_ObscuredFloat>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_ObscuredFloat>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_ObscuredFloat>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_10808);
    DAT_04567f2b = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (LEAMIBIAIIN == (MDAPDLLMOMF_o *)0x0) {
    bVar1 = false;
  }
  else {
    __this = (LEAMIBIAIIN->fields).AKKFNCFAPDO;
    if (__this == (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_GetEnumerator__
              );
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_ObscuredFloat>>_MoveNext__
                        );
      if (!bVar1) {
        iVar3 = 6;
        goto LAB_034ebc4c;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)local_48.fields._current[1].klass,StringLiteral_10808,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    iVar3 = 5;
LAB_034ebc4c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_ObscuredFloat>>_Dispose__
              );
    bVar1 = bVar1 && iVar3 == 5;
  }
  return bVar1;
}

