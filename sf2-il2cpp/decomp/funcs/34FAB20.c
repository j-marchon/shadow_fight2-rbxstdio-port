// Nekki.SF2.GUI.Common.Hints.HintGroup$$get_IsHintsPressed @ RVA 0x34FAB20

bool Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsHintsPressed
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* catch() { ... } // from try @ 035fab08 with catch @ 035fab2c */
                    /* try { // try from 035fab34 to 036fab47 has its CatchHandler @ 035faba8 */
  if ((DAT_0456881d & 1) == 0) {
                    /* catch() { ... } // from try @ 035fa60c with catch @ 035fab48
                       try { // try from 035fab48 to 036fab5f has its CatchHandler @ 035fa4c0 */
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
                    /* try { // try from 035fab60 to 036fab63 has its CatchHandler @ 035fab84 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
                    /* try { // try from 035fab64 to 036fab8b has its CatchHandler @ 035fa4c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    DAT_0456881d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035fab60 with catch @ 035fab84 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 035fab8c to 036fab93 has its CatchHandler @ 035faba8 */
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsClickable(__this,method);
                    /* try { // try from 035fab94 to 036fab9f has its CatchHandler @ 035fa4c0 */
  if (bVar1) {
    if ((__this->fields).ANKLNCJMMHB == false) {
                    /* try { // try from 035faba0 to 036faba7 has its CatchHandler @ 035faba8 */
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 035fab34 with catch @ 035faba8
                       catch() { ... } // from try @ 035fab8c with catch @ 035faba8
                       catch() { ... } // from try @ 035faba0 with catch @ 035faba8 */
      if ((__this->fields)._IsShortcut != false) {
        System_Collections_Generic_List<Int32Enum>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        do {
          do {
            bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                              (&local_50,
                               Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                              );
            if (!bVar1) goto LAB_035fad1c;
            iVar2 = (int32_t)local_50.fields._current;
            if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
          } while (bVar1);
          pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
          if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown(pNVar3,iVar2,(MethodInfo *)0x0);
        } while (bVar1);
LAB_035fac58:
        System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
        goto LAB_035fac6c;
      }
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      do {
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                            );
          if (!bVar1) goto LAB_035fac58;
          iVar2 = (int32_t)local_50.fields._current;
          if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar2,(MethodInfo *)0x0);
        } while (bVar1);
        pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = ECNCJPCKOLN__IDDDPCFIALP(iVar2,(MethodInfo *)0x0);
        if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown(pNVar3,iVar2,(MethodInfo *)0x0);
      } while (!bVar1);
LAB_035fad1c:
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
    }
    bVar1 = true;
  }
  else {
LAB_035fac6c:
    bVar1 = false;
  }
  return bVar1;
}

