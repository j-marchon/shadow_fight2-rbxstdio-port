// NIELMODLCLC$$RandomizeObscuredVars @ RVA 0x359799C

void NIELMODLCLC__RandomizeObscuredVars(NIELMODLCLC_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568da8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_04568da8 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DMEBCLCBAOE;
  if (__this_00 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
        return;
      }
      if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_38.fields._current ==
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) break;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_38.fields._current,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

