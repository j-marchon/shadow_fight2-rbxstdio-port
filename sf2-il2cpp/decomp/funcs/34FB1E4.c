// Nekki.SF2.GUI.Common.Hints.HintGroup$$OnClick @ RVA 0x34FB1E4

void Nekki_SF2_GUI_Common_Hints_HintGroup__OnClick
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar5;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MIBHAJBEMIK__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568820 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
    DAT_04568820 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (__this->fields)._DefaultHintIDs;
  if (pSVar6 == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) goto LAB_035fb4cc;
  if ((pSVar6->fields)._size != 0) {
    uVar2 = Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD(__this,method);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    (__this->fields).ANKLNCJMMHB = true;
    if ((__this->fields)._IsShortcut == false) {
      pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (pSVar4,0,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) goto LAB_035fb4cc;
      Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown(pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      iVar3 = System_Collections_Generic_List<Int32Enum>__get_Item
                        (pSVar4,0,Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Item__);
      if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) goto LAB_035fb4cc;
      Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp(pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) {
LAB_035fb4cc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar4,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        iVar3 = (int32_t)local_60.fields._current;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchDown
                    (pNVar5,iVar3,uVar2,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
      pSVar4 = (System_Collections_Generic_List_T__o *)(__this->fields)._DefaultHintIDs;
      if (pSVar4 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_035fb4cc;
      System_Collections_Generic_List<Int32Enum>__GetEnumerator
                (&local_78,pSVar4,
                 Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__
                               ), bVar1) {
        iVar3 = (int32_t)local_60.fields._current;
        if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = ECNCJPCKOLN__MJGNIHLBKJJ(iVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pNVar5 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar5 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Common_MenuControls__InvokeHintTouchUp(pNVar5,iVar3,uVar2,(MethodInfo *)0x0)
          ;
        }
      }
      System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__)
      ;
    }
    (__this->fields).ANKLNCJMMHB = false;
  }
  return;
}

