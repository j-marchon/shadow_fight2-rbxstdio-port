// Nekki.SF2.GUI.Profile.PerksController$$get_IsAvailablePerk @ RVA 0x32D0670

bool Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  EPFMFHDGMCE_o *pEVar3;
  ACHLOMELAJE_o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 033d0678 to 034d067b has its CatchHandler @ 033d06a4 */
                    /* try { // try from 033d067c to 034d06b3 has its CatchHandler @ 033d0388 */
  if ((DAT_0456754b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
                    /* catch() { ... } // from try @ 033d0678 with catch @ 033d06a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* try { // try from 033d06b4 to 034d06bb has its CatchHandler @ 033d06d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
                    /* try { // try from 033d06bc to 034d06c7 has its CatchHandler @ 033d0388 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033d06c8 to 034d06cf has its CatchHandler @ 033d06d0 */
    DAT_0456754b = 1;
  }
                    /* catch() { ... } // from try @ 033d06b4 with catch @ 033d06d0
                       catch() { ... } // from try @ 033d06c8 with catch @ 033d06d0 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pEVar3 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
  if (pEVar3 != (EPFMFHDGMCE_o *)0x0) {
    __this_01 = (pEVar3->fields).GCHAMOPMNHF;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                            );
          if (!bVar1) {
            iVar4 = 5;
            goto LAB_033d07b8;
          }
          if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while ((*(int *)&local_48.fields._current[1].monitor != 0) ||
                (iVar2 < *(int *)((long)&local_48.fields._current[1].monitor + 4)));
        iVar4 = 4;
LAB_033d07b8:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
        return bVar1 && iVar4 == 4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

