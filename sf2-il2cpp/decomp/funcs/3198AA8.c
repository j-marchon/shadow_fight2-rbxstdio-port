// DCMMOJCGNNK$$EPBENPDCBFE @ RVA 0x3198AA8

bool DCMMOJCGNNK__EPBENPDCBFE(DCMMOJCGNNK_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566a8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_04566a8f = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
     (__this_00 = (AHEFOIOKDOK->fields).GFBNJPMOEKD,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_03298b4c:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    pIVar2 = local_50.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return (__this->fields).super.GBBHFPBFOPI != false;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._JEEFFPFPAMB_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields)._JEEFFPFPAMB_k__BackingField,
                         (System_String_o *)pIVar2[3].klass,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_03298b4c;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._PKDJDCIAMPA_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields)._PKDJDCIAMPA_k__BackingField,pIVar2[3].monitor,
                         (MethodInfo *)0x0);
      if (!bVar3) goto LAB_03298b4c;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (bVar3) goto LAB_03298bd8;
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Equality
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,pIVar2[1].monitor,
                       (MethodInfo *)0x0);
    if (bVar3) {
LAB_03298bd8:
      bVar1 = (__this->fields).super.GBBHFPBFOPI;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return bVar1 == false;
    }
  } while( true );
}

