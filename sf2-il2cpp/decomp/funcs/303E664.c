// PJKHAJKEHEL$$LNJPBAAMPKA @ RVA 0x303E664

void PJKHAJKEHEL__LNJPBAAMPKA(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565da0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04565da0 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INGEFFGPJPB;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                             ), pIVar1 = local_38.fields._current, bVar2) {
      if (local_38.fields._current != (Il2CppObject *)0x0) {
        CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(true,(MethodInfo *)0x0);
        *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)((long)&pIVar1[1].monitor + 4) =
             CVar3;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

