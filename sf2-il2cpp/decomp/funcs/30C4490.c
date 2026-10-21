// MDAPDLLMOMF$$OKCANGOIHBI @ RVA 0x30C4490

System_String_o *
MDAPDLLMOMF__OKCANGOIHBI(MDAPDLLMOMF_o *__this,int32_t HBGCLHGMCKD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_00;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456629e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_GetEnumerator__);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456629e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FMECFCOEJCJ;
  if (__this_00 != (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                  );
        return string_TypeInfo->static_fields->Empty;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          &local_48.fields._current[1].monitor,(MethodInfo *)0x0);
      if ((iVar3 <= HBGCLHGMCKD) &&
         (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              &pIVar1[2].monitor,(MethodInfo *)0x0), HBGCLHGMCKD <= iVar3)) {
        pIVar4 = pIVar1[1].klass;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MDAPDLLMOMF_DOPLCEEGPAO>_Dispose__
                  );
        return (System_String_o *)pIVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

