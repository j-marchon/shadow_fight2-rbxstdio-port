// MEHKKHFBNLM$$IELLEFEFFJD @ RVA 0x3392704

void MEHKKHFBNLM__IELLEFEFFJD(MEHKKHFBNLM_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_UnityAnimator__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567c30 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UnityAnimator>_GetEnumerator__);
    DAT_04567c30 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PHCHEEPCEOO;
  (__this->fields).KMPEKADHGMM = true;
  if (__this_00 != (System_Collections_Generic_List_UnityAnimator__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<UnityAnimator>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<UnityAnimator>_Dispose__);
        return;
      }
      if ((UnityAnimator_o *)local_38.fields._current == (UnityAnimator_o *)0x0) break;
      UnityAnimator__Play((UnityAnimator_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

