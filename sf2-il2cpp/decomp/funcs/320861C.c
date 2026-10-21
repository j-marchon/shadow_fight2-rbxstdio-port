// NLPJLHOEAOE$$DGHLELADKNM @ RVA 0x320861C

void NLPJLHOEAOE__DGHLELADKNM(NLPJLHOEAOE_o *__this,int32_t HCILIHJHEOM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566e4d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04566e4d = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if ((AFFHKININGD_o *)local_38.fields._current == (AFFHKININGD_o *)0x0) break;
      AFFHKININGD__EBKOKBBGNFM
                ((AFFHKININGD_o *)local_38.fields._current,HCILIHJHEOM,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

