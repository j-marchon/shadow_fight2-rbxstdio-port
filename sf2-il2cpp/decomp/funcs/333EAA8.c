// AFFHKININGD$$LMLGHFLCHGE @ RVA 0x333EAA8

void AFFHKININGD__LMLGHFLCHGE(AFFHKININGD_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567984 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Remove__);
    DAT_04567984 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).LDDKNBHPPOK;
  if (pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                             ), bVar1) {
      pSVar2 = (__this->fields).MECHOBPGHFJ;
      if (pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,local_48.fields._current,
                 Method_System_Collections_Generic_List<PJKHAJKEHEL>_Remove__);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    pSVar2 = (__this->fields).LDDKNBHPPOK;
    if (pSVar2 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

