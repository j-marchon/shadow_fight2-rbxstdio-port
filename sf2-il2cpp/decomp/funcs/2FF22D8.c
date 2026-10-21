// HintButton$$NEHBJIEEKBD @ RVA 0x2FF22D8

void HintButton__NEHBJIEEKBD(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintUI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565a79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    DAT_04565a79 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._Hints;
  if (__this_00 != (System_Collections_Generic_List_HintUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Common_Hints_HintUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Common_Hints_HintUI_o *)0x0) break;
      Nekki_SF2_GUI_Common_Hints_HintUI__set_Style
                ((Nekki_SF2_GUI_Common_Hints_HintUI_o *)local_38.fields._current,
                 (__this->fields)._Style,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

