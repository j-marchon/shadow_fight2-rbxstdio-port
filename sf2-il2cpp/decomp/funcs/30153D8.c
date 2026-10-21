// ECENNHNBAME$$BGBLMKAADNE @ RVA 0x30153D8

void ECENNHNBAME__BGBLMKAADNE
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_JADGCGOJLJB__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t CJNHFNHJHPE_00;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_01;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04565bcd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    DAT_04565bcd = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (CJNHFNHJHPE != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<JADGCGOJLJB>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_MoveNext__
                             ), __this_00 = local_58.fields._current, bVar1) {
      CJNHFNHJHPE_00 =
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                      (__this->fields).IPAGCJKIPEN.fields,(MethodInfo *)0x0);
      if ((JADGCGOJLJB_o *)__this_00 == (JADGCGOJLJB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JADGCGOJLJB__BDBMIIBHJFM((JADGCGOJLJB_o *)__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<JADGCGOJLJB>_Dispose__);
    pEVar2 = (__this->fields).DMGLMCBIAGL;
    if ((pEVar2 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
       (__this_01 = (pEVar2->fields).GLFJDDHEMNO,
       __this_01 != (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0)) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
                 Method_System_Collections_Generic_List<JADGCGOJLJB>_AddRange__);
                    /* try { // try from 031154ec to 032154f3 has its CatchHandler @ 03115938 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

