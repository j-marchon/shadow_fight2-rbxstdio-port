// MMIIDELPHLP$$ADABMFHEMBG @ RVA 0x32E58D8

/* WARNING: Removing unreachable block (ram,0x033e5b34) */

int32_t MMIIDELPHLP__ADABMFHEMBG
                  (MMIIDELPHLP_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
                  MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t maxExclusive;
  System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *__this_00;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456760b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMIIDELPHLP_FJDJOEFFGNH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMIIDELPHLP_FJDJOEFFGNH>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMIIDELPHLP_FJDJOEFFGNH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_0456760b = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BAFCLOIPEMA;
  if (__this_00 == (System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MMIIDELPHLP_FJDJOEFFGNH>_MoveNext__
                      );
    pIVar1 = local_70.fields._current;
    if (!bVar2) {
      iVar4 = 0;
      break;
    }
    if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar2) {
        iVar4 = 0;
        uVar5 = 2;
        goto LAB_033e5a78;
      }
      if ((System_String_o *)pIVar1 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)*(System_String_Fields *)((long)pIVar1 + 0x10),
                         (System_String_o *)local_90.fields._current,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                        ((long)pIVar1 + 0x18),(MethodInfo *)0x0);
    maxExclusive = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                              *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                               &((System_String_o *)((long)pIVar1 + 0x18))->fields,(MethodInfo *)0x0
                             );
    iVar3 = UnityEngine_Random__Range(iVar3,maxExclusive,(MethodInfo *)0x0);
    iVar4 = iVar3 + 1;
    uVar5 = 6;
LAB_033e5a78:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar5 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,
             Method_System_Collections_Generic_List_Enumerator<MMIIDELPHLP_FJDJOEFFGNH>_Dispose__);
  return iVar4;
}

