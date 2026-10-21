// NCNJEIBHGBH$$LFGIGCHIPIA @ RVA 0x32F3778

bool NCNJEIBHGBH__LFGIGCHIPIA(NCNJEIBHGBH_o *__this,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456767c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    DAT_0456767c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JODEDMLAIEG;
  if (__this_00 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_033f383c;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)&local_48.fields._current[7].monitor != AAJGEHHPMGH);
  iVar2 = 4;
LAB_033f383c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
  return bVar1 && iVar2 == 4;
}

