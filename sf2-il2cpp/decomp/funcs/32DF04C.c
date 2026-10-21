// DOPEEDABNEK$$EOJOOBMABPP @ RVA 0x32DF04C

void DOPEEDABNEK__EOJOOBMABPP(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675e3 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return;
      }
      if ((HOOAAGABMBL_o *)local_38.fields._current == (HOOAAGABMBL_o *)0x0) break;
      if (((HOOAAGABMBL_Fields *)((long)local_38.fields._current + 0x10))->BDGHEBINKCB != false) {
        HOOAAGABMBL__GEBIJFANLGH((HOOAAGABMBL_o *)local_38.fields._current,false,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

