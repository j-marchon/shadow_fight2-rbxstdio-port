// GDINNHKFKMB$$HBLEFJOCOPK @ RVA 0x30724B8

/* WARNING: Removing unreachable block (ram,0x03172654) */

bool GDINNHKFKMB__HBLEFJOCOPK
               (System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_Collections_Generic_List_string__o *PDEDHIBCEPJ,MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565f86 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565f86 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_60.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_031725dc;
      }
      bVar1 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)local_80.fields._current,
                         (MethodInfo *)0x0);
    } while (!bVar1);
    bVar2 = 1;
    uVar3 = 6;
LAB_031725dc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}

