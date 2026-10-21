// CLFCKIFNGHA$$GJJHPEFOHON @ RVA 0x3455098

/* WARNING: Removing unreachable block (ram,0x0355523c) */
/* WARNING: Removing unreachable block (ram,0x035551f8) */
/* WARNING: Removing unreachable block (ram,0x03555248) */

IAGNPGHOAIC_o * CLFCKIFNGHA__GJJHPEFOHON(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  int iVar2;
  IAGNPGHOAIC_o *pIVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  bool local_44 [4];
  
  if ((DAT_045682c1 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682c1 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_44[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_44,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this == (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    pIVar3 = (IAGNPGHOAIC_o *)local_60.fields._current;
    if (!bVar1) {
      pIVar3 = (IAGNPGHOAIC_o *)0x0;
      iVar2 = 5;
      goto LAB_035551e0;
    }
    if ((IAGNPGHOAIC_o *)local_60.fields._current == (IAGNPGHOAIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((IAGNPGHOAIC_Fields *)((long)local_60.fields._current + 0x10))->OMJHOKDPLKI,
                       AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  iVar2 = 4;
LAB_035551e0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
  if (local_44[0] != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
  }
  if (iVar2 != 4) {
    pIVar3 = (IAGNPGHOAIC_o *)0x0;
  }
  return pIVar3;
}

