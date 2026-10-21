// OCMLPCKBHPN$$IKLNIACILPM @ RVA 0x327DE5C

bool OCMLPCKBHPN__IKLNIACILPM(System_String_o *IFDOANCFKJD,int32_t DJFJIEDMAMJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  method_00 = (MethodInfo *)(ulong)(uint)DJFJIEDMAMJ;
  if ((DAT_0456726b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
                );
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456726b = 1;
    method_00 = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  __this = OCMLPCKBHPN__EFMLMIDOPCL(DJFJIEDMAMJ,method_00);
  if (__this == (System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o
                 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
            );
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                        );
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        iVar4 = 5;
        goto LAB_0337df84;
      }
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_50.fields._current[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        (*(System_String_o **)((long)local_50.fields._current[1].monitor + 0x10),
                         IFDOANCFKJD,(MethodInfo *)0x0);
    } while (!bVar3);
    if (pIVar1[1].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)((long)pIVar1[1].monitor + 0x18),IFDOANCFKJD,
                       (MethodInfo *)0x0);
  } while (!bVar3);
  iVar4 = 4;
LAB_0337df84:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
            );
  return bVar2 && iVar4 == 4;
}

