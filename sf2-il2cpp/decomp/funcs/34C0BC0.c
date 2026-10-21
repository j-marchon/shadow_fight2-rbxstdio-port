// KAHMAJKJMBK$$LLLDBDDBAJG @ RVA 0x34C0BC0

void KAHMAJKJMBK__LLLDBDDBAJG(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KMFIGBGAKNL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *x;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568604 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMFIGBGAKNL>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11466);
    DAT_04568604 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  x = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11466,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields).BJCIIJEPGFL;
    if (__this_00 == (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KMFIGBGAKNL>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_MoveNext__);
      if (!bVar1) break;
      if ((KMFIGBGAKNL_o *)local_38.fields._current == (KMFIGBGAKNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((((KMFIGBGAKNL_Fields *)((long)local_38.fields._current + 0x10))->super).
          _BDDBFNHFMBC_k__BackingField != false) {
        KAHMAJKJMBK__MBNDHAPLBCC
                  ((KAHMAJKJMBK_o *)(ulong)bVar1,(KMFIGBGAKNL_o *)local_38.fields._current,method_00
                  );
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_Dispose__);
  }
  return;
}

