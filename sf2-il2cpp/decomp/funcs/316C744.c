// NFGLEDADCGL$$BKPCFFPHHBJ @ RVA 0x316C744

int32_t NFGLEDADCGL__BKPCFFPHHBJ(NFGLEDADCGL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045668ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    DAT_045668ff = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PEJIOCBFEEE;
  if (__this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    iVar2 = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
        return iVar2;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      iVar2 = *(int *)((long)&local_38.fields._current[1].klass + 4) + iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

