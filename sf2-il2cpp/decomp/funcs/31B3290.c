// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$Init @ RVA 0x31B3290

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__Init
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  ProgressBar_o *pPVar3;
  EEGDOGKBLNG_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  
  if ((DAT_04566b92 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_IBMOCCNGEEO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_IMLLPEFHOJD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_JBMIBJCLDDH__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1584);
    DAT_04566b92 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields)._hintButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._itemButton;
      if (pSVar4 != (SFButton_o *)0x0) {
        pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._infoCoins;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                      (pNVar2,StringLiteral_1584,(pNVar2->klass->vtable)._75_set_text.method);
            pPVar3 = (__this->fields)._barPrice;
            (__this->fields).IKLIGGACIMH = false;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._6_Init.methodPtr)
                        (pPVar3,(pPVar3->klass->vtable)._6_Init.method);
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
              CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                            thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
              System_Action<object>___ctor();
              if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
                EEGDOGKBLNG__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                return;
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

