// ECENNHNBAME$$FINLPLHJDHN @ RVA 0x30190BC

/* WARNING: Removing unreachable block (ram,0x031192e4) */

bool ECENNHNBAME__FINLPLHJDHN
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_ObscuredString__o *EOLHDEHOFHL
               ,MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *b;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565be9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_04565be9 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_70.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (EOLHDEHOFHL == (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)EOLHDEHOFHL,
               Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                        );
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_03119238;
      }
      b = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_90.fields._current,
                     (MethodInfo *)0x0);
      bVar1 = System_String__op_Equality((System_String_o *)a,b,(MethodInfo *)0x0);
    } while (!bVar1);
    bVar2 = 1;
    uVar3 = 6;
LAB_03119238:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__
              );
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}

