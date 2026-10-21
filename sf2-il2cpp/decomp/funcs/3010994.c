// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$Init @ RVA 0x3010994

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  GKLPDMLELJF_o **ppGVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  PLIIGOCLJDL_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  SFButton_o *pSVar7;
  GKLPDMLELJF_o *pGVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar10;
  int32_t local_34;
  
                    /* try { // try from 03110994 to 0321099f has its CatchHandler @ 03110848 */
                    /* try { // try from 031109a0 to 032109a7 has its CatchHandler @ 031109a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0311097c with catch @ 031109a8
                       catch(type#2 @ 00000000) { ... } // from try @ 031109a0 with catch @ 031109a8
                        */
  if ((DAT_04565ba7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_DNFIBMGKICI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_KGNBJLLJHOC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565ba7 = 1;
  }
  ppGVar1 = &(__this->fields).DICNIMJBGML;
  (__this->fields).DICNIMJBGML = HEHMPFLAEGE;
  thunk_FUN_01c20e04(ppGVar1,HEHMPFLAEGE);
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
    pNVar10 = (__this->fields)._status;
    if ((pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pNVar10 = (__this->fields)._playerDan;
      if ((pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._playerDanNumber;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._playerNameBtn;
          if ((pSVar7 != (SFButton_o *)0x0) &&
             (pUVar6 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
             pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._playerName;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
              pSVar7 = (__this->fields)._kickButton;
              if ((pSVar7 != (SFButton_o *)0x0) &&
                 (pUVar6 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  else {
    pSVar7 = (__this->fields)._playerNameBtn;
    if ((pSVar7 != (SFButton_o *)0x0) &&
       (pUVar2 = (pSVar7->fields).super.m_OnClick,
       pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._playerNameBtn;
      if (pSVar7 != (SFButton_o *)0x0) {
        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick;
        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
          pSVar7 = (__this->fields)._kickButton;
          if ((pSVar7 != (SFButton_o *)0x0) &&
             (pUVar2 = (pSVar7->fields).super.m_OnClick,
             pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
            pSVar7 = (__this->fields)._kickButton;
            if (pSVar7 != (SFButton_o *)0x0) {
              pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
                pSVar7 = (__this->fields)._kickButton;
                if (pSVar7 != (SFButton_o *)0x0) {
                  UnityEngine_UI_Selectable__set_interactable
                            ((UnityEngine_UI_Selectable_o *)pSVar7,true,(MethodInfo *)0x0);
                  pGVar8 = (__this->fields).DICNIMJBGML;
                  if ((pGVar8 != (GKLPDMLELJF_o *)0x0) &&
                     (pNVar4 = (__this->fields)._playerName,
                     pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                              (pNVar4,(pGVar8->fields).LLBEKLPKDHK,
                               (pNVar4->klass->vtable)._75_set_text.method);
                    pGVar8 = (__this->fields).DICNIMJBGML;
                    if (pGVar8 != (GKLPDMLELJF_o *)0x0) {
                      local_34 = (pGVar8->fields).PEBHLKLGDBM;
                      pNVar4 = (__this->fields)._playerDanNumber;
                      pSVar5 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                                  (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
                        pNVar10 = (__this->fields)._playerDan;
                        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                        pGVar8 = *ppGVar1;
                        if (((pGVar8 != (GKLPDMLELJF_o *)0x0) && (__this_00 != (PLIIGOCLJDL_o *)0x0)
                            ) && (pSVar5 = PLIIGOCLJDL__PAHKCILGFIK
                                                     (__this_00,(pGVar8->fields).ANAJGHJEEOC,
                                                      (MethodInfo *)0x0),
                                 pNVar10 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                                    (pNVar10,pSVar5,(MethodInfo *)0x0);
                          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__FDFHMHPOHKA
                                    (__this,method_00);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

