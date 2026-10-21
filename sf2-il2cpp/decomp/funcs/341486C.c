// IMJHLANAMIK$$MAHFCKJGBPP @ RVA 0x341486C

void IMJHLANAMIK__MAHFCKJGBPP(IMJHLANAMIK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *pNVar2;
  System_Action_T__o *IELDNEAAPBE;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *pNVar4;
  System_Action_o *CJNHFNHJHPE;
  ProgressLabelButton_o *pPVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o **ppNVar6;
  LabelButton_o **ppLVar7;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  
  if ((DAT_0456809c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    FUN_01bab630(&Method_IMJHLANAMIK_DDMIOIAHJAP__);
    FUN_01bab630(&Method_IMJHLANAMIK_MHLJCCAEHML__);
    FUN_01bab630(&Method_IMJHLANAMIK_MOAOJPDPMBB__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10841);
    DAT_0456809c = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)
             GCIFMNHADDF__BFJGHKKGOJC<object>
                       (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidBuyConsumablesDialog>__);
    ppNVar6 = &(__this->fields).GMLKPKIJKJE;
    *ppNVar6 = pNVar2;
    thunk_FUN_01c20e04(ppNVar6,pNVar2);
    pNVar2 = *ppNVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10841,(MethodInfo *)0x0);
      IMJHLANAMIK__NKGIJKODGAN(__this,method_00);
      return;
    }
    pNVar2 = *ppNVar6;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
      pPVar5 = (pNVar2->fields)._btnFight;
      (pNVar2->fields).super.super.IsIgnoreBack = true;
      (__this->fields).PJECIFAMGHF = (LabelButton_o *)pPVar5;
      thunk_FUN_01c20e04();
      pNVar2 = (__this->fields).GMLKPKIJKJE;
      IELDNEAAPBE = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)pNVar2,0,IELDNEAAPBE,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
        if (*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) {
          pLVar3 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetBuyChargesBtn
                             (*ppNVar6,(MethodInfo *)0x0);
          ppLVar7 = &(__this->fields).CCHECBLHFEH;
          *ppLVar7 = pLVar3;
          thunk_FUN_01c20e04(ppLVar7,pLVar3);
          if (*ppLVar7 != (LabelButton_o *)0x0) {
            __this_01 = (UnityEngine_Events_UnityEvent_o *)
                        ((*ppLVar7)->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
              if ((*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
                 (pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                                     (*ppNVar6,(MethodInfo *)0x0),
                 pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
                __this_02 = (pNVar4->fields)._scroll;
                CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                System_Action___ctor();
                if (__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                  Nekki_SF2_GUI_SimpleScroll__add_OnScrollEnded
                            (__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
                  if ((*ppNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *)0x0) &&
                     (pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__GetChargesContainer
                                         (*ppNVar6,(MethodInfo *)0x0),
                     pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)) {
                    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ScrollBackward
                              (pNVar4,false,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

