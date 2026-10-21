// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$MAFILJNCIFB @ RVA 0x355317C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__MAFILJNCIFB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568b51 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_GOPCKGEKOHL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568b51 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar3 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._playerPosProgress;
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_036532d8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = (__this->fields)._progressHintButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pSVar4 = (__this->fields)._progressHintButton;
          if ((pSVar4 != (SFButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pSVar4 = (__this->fields)._progressHintButton;
            if ((pSVar4 != (SFButton_o *)0x0) &&
               (__this_00 = (pSVar4->fields).super.m_OnClick,
               __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
              pSVar4 = (__this->fields)._progressHintButton;
              if (pSVar4 != (SFButton_o *)0x0) {
                __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          goto LAB_036532d8;
        }
      }
    }
  }
  return;
}

