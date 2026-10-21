// AGILEPNENOH$$HNDIAFHOEJF @ RVA 0x30FED54

void AGILEPNENOH__HNDIAFHOEJF
               (AGILEPNENOH_o *__this,AFFHKININGD_o *FBFPLEFCDOK,bool IPGNPJLADGH,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045664ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3433);
    DAT_045664ad = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_3433,(MethodInfo *)0x0);
        return;
      }
    } while ((AFFHKININGD_o *)local_58.fields._current != FBFPLEFCDOK);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE = NLPJLHOEAOE__KNHMOFPKOAM(FBFPLEFCDOK,IPGNPJLADGH,(MethodInfo *)0x0);
    if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
      AFFHKININGD__HKBKHKMMBFG(FBFPLEFCDOK,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

