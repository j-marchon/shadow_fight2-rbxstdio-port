// AFFHKININGD$$KBJBDOJKGML @ RVA 0x333E2F0

CALLBECPAIA_o * AFFHKININGD__KBJBDOJKGML(AFFHKININGD_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *extraout_x1;
  CALLBECPAIA_o *pCVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567981 & 1) == 0) {
    FUN_01bab630(&CALLBECPAIA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_04567981 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = AFFHKININGD__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    pCVar4 = (CALLBECPAIA_o *)local_38.fields._current;
    if (!bVar2) {
      pCVar4 = (CALLBECPAIA_o *)0x0;
      goto LAB_0343e3f4;
    }
    if ((CALLBECPAIA_o *)local_38.fields._current == (CALLBECPAIA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)local_38.fields._current,(MethodInfo *)0x0);
  } while (iVar3 != 0x21);
  bVar1 = (CALLBECPAIA_TypeInfo->_2).naturalAligment;
  if (((((CALLBECPAIA_c *)((Il2CppObject *)pCVar4)->klass)->_2).naturalAligment < bVar1) ||
     ((((CALLBECPAIA_c *)((Il2CppObject *)pCVar4)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)CALLBECPAIA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pCVar4);
  }
LAB_0343e3f4:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
  return pCVar4;
}

