// Nekki.SF2.GUI.Map.MapScene$$DNKNGIHFMLC @ RVA 0x3583FEC

void Nekki_SF2_GUI_Map_MapScene__DNKNGIHFMLC
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar4;
  Nekki_SF2_GUI_Map_MapCurrencyPanel_o *pNVar5;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar6;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04568ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_ACFKDEHDMFJ__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ceb = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar5 = (pNVar3->fields).RaidKeysPanel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
          (pNVar5 = (pNVar3->fields).RaidKeysPanel,
          pNVar5 == (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *)0x0)) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036841fc;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).FMIFNIIJJNK;
    if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
      pNVar6 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar6,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
            (pNVar6 = (pNVar3->fields)._RaidDailyQuestsButton_k__BackingField,
            pNVar6 == (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) ||
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
           pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036841fc;
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      }
      pSVar4 = (__this->fields).JFANFALIFFE;
      if (pSVar4 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
        if ((pSVar4->fields)._size < 2) {
          return;
        }
        pNVar3 = (__this->fields).FMIFNIIJJNK;
        if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
          pUVar7 = (pNVar3->fields).RaidMapScrollButton;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          pNVar3 = (__this->fields).FMIFNIIJJNK;
          if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
              (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
              pUVar7 != (UnityEngine_UI_Button_o *)0x0)) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).FMIFNIIJJNK;
            if (((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                pUVar7 != (UnityEngine_UI_Button_o *)0x0)) &&
               (__this_00 = (pUVar7->fields).m_OnClick,
               __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
              UnityEngine_Events_UnityEventBase__RemoveAllListeners
                        ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
              pNVar3 = (__this->fields).FMIFNIIJJNK;
              if ((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                 (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                 pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar7->fields).m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                  pNVar3 = (__this->fields).FMIFNIIJJNK;
                  if ((pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                     (pUVar7 = (pNVar3->fields).RaidMapScrollButton,
                     pUVar7 != (UnityEngine_UI_Button_o *)0x0)) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pUVar7,false,(MethodInfo *)0x0);
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
LAB_036841fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

