// AHOEIGAOKEL$$IHKHIJONLCM @ RVA 0x30CF928

void AHOEIGAOKEL__IHKHIJONLCM(AHOEIGAOKEL_o *__this,BKLDKOMCOPN_o *IDIBNBBFFCO,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_02;
  Il2CppObject *pIVar2;
  BKLDKOMCOPN_o *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045662f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    DAT_045662f8 = 1;
    IDIBNBBFFCO = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HANEOGJOELA;
  if (__this_01 == (System_Collections_Generic_List_LabelButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,IDIBNBBFFCO);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__)
      ;
      return;
    }
    if ((SFButton_o *)local_50.fields._current == (SFButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (__this->fields).PGCBEJGMIMA;
    if (__this_02 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        ((SFButton_Fields *)((long)local_50.fields._current + 0x10))->ButtonId,
                        Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    if (pIVar2 == (Il2CppObject *)0x0) break;
    if (*(char *)((long)&pIVar2[3].klass + 4) != '\0') {
      SFButton__set_IsFlashing((SFButton_o *)__this_00,true,(MethodInfo *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

