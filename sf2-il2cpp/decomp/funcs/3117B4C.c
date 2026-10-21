// NGJHCIGFLFD$$ENMHDGDKLJD @ RVA 0x3117B4C

void NGJHCIGFLFD__ENMHDGDKLJD(NGJHCIGFLFD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045665c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    DAT_045665c5 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

