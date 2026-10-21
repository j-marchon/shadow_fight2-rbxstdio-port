// Nekki.SF2.GUI.Common.Hints.HintGroup$$ContainsAnyHintIDs @ RVA 0x34FBA58

bool Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsAnyHintIDs
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,
               System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568823 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_04568823 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GLIELCCFAGL == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<Int32Enum>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
             Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_035fbb34;
    }
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,(int32_t)local_48.fields._current,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
  } while (!bVar2);
  iVar3 = 4;
LAB_035fbb34:
  System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
  return bVar1 && iVar3 == 4;
}

