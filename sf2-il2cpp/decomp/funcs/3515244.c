// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHintsActive @ RVA 0x3515244

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHintsActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool BALACEGEDBN,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  System_Collections_Generic_List_HintUI__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)(ulong)BALACEGEDBN;
  if ((DAT_0456891d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintUI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456891d = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((x == (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) ||
       (__this_00 = (x->fields).DEDJHBCOMCJ,
       __this_00 == (System_Collections_Generic_List_HintUI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintUI>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<HintUI>_MoveNext__),
          bVar1) {
      if ((UnityEngine_Component_o *)local_48.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_01,BALACEGEDBN,(MethodInfo *)0x0);
    }
                    /* try { // try from 03615358 to 0371535f has its CatchHandler @ 03615548 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HintUI>_Dispose__);
  }
                    /* try { // try from 03615370 to 0371537b has its CatchHandler @ 03615544 */
                    /* try { // try from 0361537c to 03715533 has its CatchHandler @ 03615234 */
  return;
}

