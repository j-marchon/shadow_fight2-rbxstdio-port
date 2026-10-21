// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$Init @ RVA 0x32C8374

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool value;
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  PLIIGOCLJDL_o *__this_01;
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this_02;
  System_Action_EOLFEKNCPLM__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  SFButton_o *pSVar4;
  EOLFEKNCPLM_o **ppEVar5;
  UnityEngine_Events_UnityEvent_o *pUVar6;
  
  if ((DAT_04567501 & 1) == 0) {
    FUN_01bab630(&System_Action<EOLFEKNCPLM>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_NOJIAJAMFPH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_OGPINCKBAKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567501 = 1;
  }
  ppEVar5 = &(__this->fields).MLAAJICBOAD;
  *ppEVar5 = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppEVar5,HEHMPFLAEGE);
  pSVar4 = (__this->fields)._clanButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar6,pUVar1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._clanButton;
      if (pSVar4 != (SFButton_o *)0x0) {
        pUVar6 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar6 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar6,pUVar1,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__FKPLBNEDFGN(__this,method_00);
          pNVar2 = (__this->fields)._clanName;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,StringLiteral_1,(pNVar2->klass->vtable)._75_set_text.method);
            __this_00 = (__this->fields)._clanEmptyImage;
            if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_01 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
              if (__this_01 != (PLIIGOCLJDL_o *)0x0) {
                value = PLIIGOCLJDL__CFGNIDNCLIL(__this_01,*ppEVar5,(MethodInfo *)0x0);
                if (value) {
                  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__NMAOIPMGDIG(__this,method_01);
                }
                pUVar3 = (__this->fields)._ratingContainer;
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  method_02 = (MethodInfo *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__AEFFKMDOLHP
                            (__this,false,method_02);
                  pUVar3 = (__this->fields)._clanContainer;
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
                    __this_02 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Current((MethodInfo *)0x0);
                    CJNHFNHJHPE = (System_Action_EOLFEKNCPLM__o *)
                                  thunk_FUN_01bda818(System_Action<EOLFEKNCPLM>_TypeInfo);
                    /* catch() { ... } // from try @ 033c8328 with catch @ 033c8574 */
                    System_Action<object>___ctor();
                    if (__this_02 != (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0) {
                    /* try { // try from 033c8584 to 034c8597 has its CatchHandler @ 033c8658 */
                    /* catch() { ... } // from try @ 033c7d38 with catch @ 033c8598
                       try { // try from 033c8598 to 034c85bf has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c819c with catch @ 033c859c */
                    /* catch() { ... } // from try @ 033c8194 with catch @ 033c85a0 */
                      Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__add_OnRefreshPlayer
                                (__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033c7d2c with catch @ 033c85a4 */
  FUN_01bab8c8();
}

