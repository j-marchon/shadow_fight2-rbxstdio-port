// Nekki.SF2.GUI.Fight.ActivePerkModel$$DestroyAllPerkItems @ RVA 0x31C45BC

void Nekki_SF2_GUI_Fight_ActivePerkModel__DestroyAllPerkItems
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Action_ActivePerkItem__o **ppSVar2;
  System_Action_ActivePerkItemContainer__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  System_Collections_Generic_List_ActivePerkItemContainer__o *pSVar5;
  System_Action_ActivePerkItem__o *action;
  System_Action_ActivePerkItemContainer__o *action_00;
  
                    /* try { // try from 032c45bc to 033c45e3 has its CatchHandler @ 032c4490 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4564 with catch @ 032c45c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4550 with catch @ 032c45c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c45b8 with catch @ 032c45c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c4538 with catch @ 032c45cc
                        */
  if ((DAT_04566c27 & 1) == 0) {
                    /* try { // try from 032c45e4 to 033c45e7 has its CatchHandler @ 032c4610 */
                    /* try { // try from 032c45e8 to 033c461f has its CatchHandler @ 032c4490 */
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&System_Action<ActivePerkItemContainer>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_Clear__);
                    /* catch() { ... } // from try @ 032c45e4 with catch @ 032c4610 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItemContainer>_ForEach__);
                    /* try { // try from 032c4620 to 033c4627 has its CatchHandler @ 032c463c */
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
                    /* try { // try from 032c4628 to 033c4633 has its CatchHandler @ 032c4490 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_BEJBCPLFCPG__);
                    /* try { // try from 032c4634 to 033c463b has its CatchHandler @ 032c463c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032c4620 with catch @ 032c463c
                       catch(type#2 @ 00000000) { ... } // from try @ 032c4634 with catch @ 032c463c
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_ODEMJMABDKA__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo);
    DAT_04566c27 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).DOKOOFIPJGJ;
  if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_0;
  if (action == (System_Action_ActivePerkItem__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    }
    action = (System_Action_ActivePerkItem__o *)
             thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar2 = action;
    thunk_FUN_01c20e04(ppSVar2,action);
  }
  if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar4,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    pSVar4 = (__this->fields).DOKOOFIPJGJ;
    if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).MHHBMNPJOOF;
      if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_1;
      if (action_00 == (System_Action_ActivePerkItemContainer__o *)0x0) {
        if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_00 = (System_Action_ActivePerkItemContainer__o *)
                    thunk_FUN_01bda818(System_Action<ActivePerkItemContainer>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__14_1;
        *ppSVar3 = action_00;
        thunk_FUN_01c20e04(ppSVar3,action_00);
      }
      if (pSVar5 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   (System_Action_T__o *)action_00,
                   Method_System_Collections_Generic_List<ActivePerkItemContainer>_ForEach__);
        pSVar5 = (__this->fields).MHHBMNPJOOF;
        if (pSVar5 != (System_Collections_Generic_List_ActivePerkItemContainer__o *)0x0) {
          iVar1 = (pSVar5->fields)._size;
          (pSVar5->fields)._size = 0;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

