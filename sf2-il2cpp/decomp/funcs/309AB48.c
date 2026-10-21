// Nekki.SF2.GUI.Fight.EndFightContent$$EPKNCBDODNP @ RVA 0x309AB48

void Nekki_SF2_GUI_Fight_EndFightContent__EPKNCBDODNP
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_CurrencyReward_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  BNKBGIIJNLF_o *KBLNPGCLGOF;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_BNKBGIIJNLF__o *pSVar6;
  LabelButton_o *pLVar7;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar9;
  Nekki_SF2_GUI_Fight_CurrencyReward_o **ppNVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04566112 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_EPEMNFNGBGG__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<CurrencyReward>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566112 = 1;
    method = extraout_x1;
  }
  pUVar8 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar8 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319ae74;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).BLJFLADGIJC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319ae74;
    (__this->fields).MEBLCDOKBAB = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields).OPOHEPKDHPD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319ae74;
    (__this->fields).JAFGONJHCNL = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pSVar6 = (__this->fields).IJONCLJPNDO;
  if (pSVar6 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0319ae74;
  if ((pSVar6->fields)._size != 0) {
    pUVar2 = (__this->fields)._rewardCurrencyPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0319ae74;
    pNVar4 = (Nekki_SF2_GUI_Fight_CurrencyReward_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_GetComponent<CurrencyReward>__);
    ppNVar10 = &(__this->fields).JMOPMNAODMP;
    *ppNVar10 = pNVar4;
    thunk_FUN_01c20e04(ppNVar10,pNVar4);
    if ((*ppNVar10 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0319ae74;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    if (*ppNVar10 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) goto LAB_0319ae74;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0319ae74;
    UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).IJONCLJPNDO;
    if (pSVar6 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) goto LAB_0319ae74;
    pNVar4 = (__this->fields).JMOPMNAODMP;
    KBLNPGCLGOF = (BNKBGIIJNLF_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar6,0,
                             Method_System_Collections_Generic_List<BNKBGIIJNLF>_get_Item__);
    if (pNVar4 == (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) goto LAB_0319ae74;
    Nekki_SF2_GUI_Fight_CurrencyReward__setIcon(pNVar4,KBLNPGCLGOF,(MethodInfo *)0x0);
  }
  pLVar7 = (__this->fields)._buttonOk;
  if (pLVar7 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar7->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pLVar7 = (__this->fields)._buttonOk;
      if ((pLVar7 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pLVar7 = (__this->fields)._buttonRetry;
        if ((pLVar7 != (LabelButton_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          pLVar7 = (__this->fields)._buttonShop;
          if ((pLVar7 != (LabelButton_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            pLVar7 = (__this->fields)._buttonVideoAD;
            if ((pLVar7 != (LabelButton_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar7,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Fight_EndFightContent__HIPDIBOOEGG(__this,method_00);
              pUVar5 = (__this->fields)._buttonPanel;
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0319ae74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

