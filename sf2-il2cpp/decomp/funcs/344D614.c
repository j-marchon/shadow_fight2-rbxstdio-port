// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ONKMCCLALAL @ RVA 0x344D614

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONKMCCLALAL
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  LPAPAMPGDFN_o *__this_00;
  CocosAnimation_o *pCVar5;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar6;
  UnityEngine_Events_UnityEvent_o *pUVar7;
  
  if ((DAT_04568280 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_KKILPMCGFMD__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14096);
    FUN_01bab630(&StringLiteral_13884);
    FUN_01bab630(&StringLiteral_15555);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04568280 = 1;
  }
  pNVar2 = (__this->fields)._btnRuby;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar2,StringLiteral_14092,StringLiteral_13884,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._btnRuby;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar3 = (pNVar2->fields).super.super.m_OnClick,
       pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._btnRuby;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar7 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
        pUVar4 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._btnGoToShop;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                      (pNVar2,StringLiteral_14092,StringLiteral_13884,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._btnGoToShop;
            if ((pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
               (pUVar3 = (pNVar2->fields).super.super.m_OnClick,
               pUVar3 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)pUVar3,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._btnGoToShop;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                pUVar7 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
                pUVar4 = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (pUVar7 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(pUVar7,pUVar4,(MethodInfo *)0x0);
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04565b7d == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04565b7d = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                  if ((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
                     (__this_00 = (pAVar6->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0))
                  {
                    bVar1 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
                    if (!bVar1) {
                      pCVar5 = (__this->fields)._picRubySale;
                      if (pCVar5 == (CocosAnimation_o *)0x0) goto LAB_0354d88c;
                      bVar1 = CocosAnimation__Init
                                        (pCVar5,StringLiteral_14096,0,(System_String_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar1) {
                        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        UnityEngine_Debug__LogError(StringLiteral_15555,(MethodInfo *)0x0);
                      }
                    }
                    pCVar5 = (__this->fields)._picRubySale;
                    if ((pCVar5 != (CocosAnimation_o *)0x0) &&
                       (__this_01 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0),
                       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0354d870 to 0364d897 has its CatchHandler @ 0354dae0 */
                      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateRubySale(__this,method_00);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0354d88c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

