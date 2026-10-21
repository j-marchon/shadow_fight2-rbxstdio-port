// Nekki.SF2.GUI.Fight.EndPvpFightContent$$IEJCGPFBDPG @ RVA 0x312FE3C

void Nekki_SF2_GUI_Fight_EndPvpFightContent__IEJCGPFBDPG
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *pNVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *parent;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar7;
  LabelButton_o *pLVar8;
  UnityEngine_UI_Button_o *pUVar9;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar10;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o **ppNVar11;
  UnityEngine_Events_UnityEvent_o *pUVar12;
  
  if ((DAT_045666c1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DNADIJHIICK__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666c1 = 1;
    method = extraout_x1;
  }
  pUVar9 = (__this->fields).HMJLEBNKJMH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar9 = (__this->fields).HMJLEBNKJMH;
    if ((pUVar9 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0323015c;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pUVar10 = (__this->fields).BLJFLADGIJC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0323015c;
    (__this->fields).MEBLCDOKBAB = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pUVar10 = (__this->fields).OPOHEPKDHPD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar10,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
    if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0323015c;
    (__this->fields).JAFGONJHCNL = *(float *)&(pUVar3->fields).m_ChildScaleWidth;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar3,300.0,(MethodInfo *)0x0);
  }
  pSVar7 = (__this->fields).DPOPJKJLDEE;
  if (pSVar7 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0323015c;
  if ((pSVar7->fields)._size != 0) {
    pUVar2 = (__this->fields)._rewardItemPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar2,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_0323015c;
    pNVar4 = (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_GetComponent<ItemRewardHardmode>__);
    ppNVar11 = &(__this->fields).AAJALAEDAAG;
    *ppNVar11 = pNVar4;
    thunk_FUN_01c20e04(ppNVar11,pNVar4);
    if ((*ppNVar11 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0323015c;
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    if (*ppNVar11 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0323015c;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0323015c;
    UnityEngine_Transform__SetParent(pUVar5,parent,false,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).DPOPJKJLDEE;
    if (pSVar7 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0323015c;
    pNVar4 = (__this->fields).AAJALAEDAAG;
    IKKAMAMLIKA = (HOOAAGABMBL_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,0,
                             Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    if (pNVar4 == (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) goto LAB_0323015c;
    Nekki_SF2_GUI_Fight_ItemRewardHardmode__SetIcon(pNVar4,IKKAMAMLIKA,(MethodInfo *)0x0);
  }
  pLVar8 = (__this->fields)._buttonExit;
  if (pLVar8 != (LabelButton_o *)0x0) {
    pUVar12 = (UnityEngine_Events_UnityEvent_o *)(pLVar8->fields).super.super.super.m_OnClick;
    pUVar6 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar12,pUVar6,(MethodInfo *)0x0);
      pLVar8 = (__this->fields)._buttonExit;
      if ((pLVar8 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pLVar8 = (__this->fields)._buttonReplay;
        if (pLVar8 != (LabelButton_o *)0x0) {
          pUVar12 = (UnityEngine_Events_UnityEvent_o *)(pLVar8->fields).super.super.super.m_OnClick;
          pUVar6 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar12 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar12,pUVar6,(MethodInfo *)0x0);
            pLVar8 = (__this->fields)._buttonReplay;
            if ((pLVar8 != (LabelButton_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pLVar8,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
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
LAB_0323015c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

