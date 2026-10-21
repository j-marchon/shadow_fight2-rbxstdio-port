// OOMHDDBCBJP$$IILGJBCBHLA @ RVA 0x3287188

void OOMHDDBCBJP__IILGJBCBHLA(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  Il2CppClass *__this_01;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672c5 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HDDNEKLMLMF;
  if (__this_00 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      __this_01 = local_48.fields._current[2].klass;
      *(undefined4 *)((long)&local_48.fields._current[6].klass + 4) = 2;
      if (__this_01 != (Il2CppClass *)0x0) {
        PAMEPBLOLPB__DNNBHOPPCPL((PAMEPBLOLPB_o *)__this_01,0,(MethodInfo *)0x0);
        if (pIVar1[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        PAMEPBLOLPB__HOONFLPHAIL((PAMEPBLOLPB_o *)pIVar1[2].klass,0,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

