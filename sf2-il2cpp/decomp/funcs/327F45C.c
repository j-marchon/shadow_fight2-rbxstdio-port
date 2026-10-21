// OCMLPCKBHPN$$IKLNIACILPM @ RVA 0x327F45C

/* WARNING: Removing unreachable block (ram,0x0337f618) */
/* WARNING: Removing unreachable block (ram,0x0337f7cc) */
/* WARNING: Removing unreachable block (ram,0x0337f69c) */
/* WARNING: Removing unreachable block (ram,0x0337f730) */
/* WARNING: Removing unreachable block (ram,0x0337f7d4) */

bool OCMLPCKBHPN__IKLNIACILPM
               (System_Collections_Generic_List_string__o *PANHFAADEGO,int32_t DJFJIEDMAMJ,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  byte bVar3;
  byte bVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)(ulong)(uint)DJFJIEDMAMJ;
  if ((DAT_0456727d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456727d = 1;
    method_00 = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
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
            (&local_b8,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
            );
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                      );
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      bVar4 = 0;
      iVar5 = 0xb;
      goto LAB_0337f740;
    }
    if (PANHFAADEGO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)PANHFAADEGO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar2) {
        bVar4 = 0;
        goto LAB_0337f5fc;
      }
      if ((System_String_o *)pIVar1 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((System_String_o *)((long)pIVar1 + 0x18))->klass == (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)local_a0.fields._current,
                         (System_String_o *)
                         (((System_String_o *)((long)pIVar1 + 0x18))->klass->_1).name,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    bVar4 = 1;
LAB_0337f5fc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)PANHFAADEGO,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar2) {
        bVar3 = 0;
        goto LAB_0337f680;
      }
      if ((System_String_o *)pIVar1 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((System_String_o *)((long)pIVar1 + 0x18))->klass == (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)local_a0.fields._current,
                         (System_String_o *)
                         (((System_String_o *)((long)pIVar1 + 0x18))->klass->_1).namespaze,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    bVar3 = 1;
LAB_0337f680:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while (!(bool)(bVar3 & bVar4));
  bVar4 = 1;
  iVar5 = 10;
LAB_0337f740:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
            );
  return (bool)(bVar4 & iVar5 == 10);
}

