// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$Init @ RVA 0x307CDF8

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__Init
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  bool bVar1;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar2;
  Il2CppObject *pIVar3;
  Nekki_SF2_GUI_Fight_DisplayModel_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *pNVar6;
  UnityEngine_UI_VerticalLayoutGroup_o *ODNJEHJPBGA;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  AFFHKININGD_o *pAVar8;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar9;
  IGPDCHBJAPD_o *pIVar10;
  IGPDCHBJAPD_o **ppIVar11;
  MFFKCPDBFPG_o **ppMVar12;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o **ppSVar13;
  System_String_o *pSVar14;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar15;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o **ppNVar16;
  Nekki_SF2_GUI_LabelAlias_o *pNVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_Events_UnityEvent_o *pUVar19;
  float fVar20;
  UnityEngine_Vector2_o UVar21;
  UnityEngine_Color_o endValue;
  
  if ((DAT_04565fe6 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightScreen_BCGDMKNIFOM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightScreen_KIJDNLMKGDH__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EndPvpFightContent>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<VerticalLayoutGroup>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10308);
    FUN_01bab630(&StringLiteral_14092);
    FUN_01bab630(&StringLiteral_10309);
    DAT_04565fe6 = 1;
  }
  Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP(__this,false,method);
  ppIVar11 = &(__this->fields).CIKGADOJJMG;
  *ppIVar11 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar11,PNPKEKHEMCD);
  pNVar17 = (__this->fields)._playerLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppIVar11 == (IGPDCHBJAPD_o *)0x0) goto LAB_0317d350;
    bVar1 = IGPDCHBJAPD__DONKDCJLBPN(*ppIVar11,(MethodInfo *)0x0);
    pSVar14 = StringLiteral_10309;
    CJNHFNHJHPE = StringLiteral_10308;
    if (bVar1) {
      if (((PNPKEKHEMCD == (IGPDCHBJAPD_o *)0x0) ||
          (pAVar8 = (PNPKEKHEMCD->fields).FBFPLEFCDOK, pAVar8 == (AFFHKININGD_o *)0x0)) ||
         ((pSVar2 = (pAVar8->fields).NNHINPLPDHJ,
          pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0 ||
          ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,0,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__),
           pIVar3 == (Il2CppObject *)0x0 ||
           (pAVar8 = (PNPKEKHEMCD->fields).FBFPLEFCDOK, pAVar8 == (AFFHKININGD_o *)0x0))))))
      goto LAB_0317d350;
      pSVar2 = (pAVar8->fields).NNHINPLPDHJ;
    }
    else {
      if ((((PNPKEKHEMCD == (IGPDCHBJAPD_o *)0x0) ||
           (pAVar8 = (PNPKEKHEMCD->fields).FBFPLEFCDOK, pAVar8 == (AFFHKININGD_o *)0x0)) ||
          (pSVar2 = (pAVar8->fields).MECHOBPGHFJ,
          pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) ||
         ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,0,
                               Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__),
          pIVar3 == (Il2CppObject *)0x0 ||
          (pAVar8 = (PNPKEKHEMCD->fields).FBFPLEFCDOK, pAVar8 == (AFFHKININGD_o *)0x0))))
      goto LAB_0317d350;
      pSVar2 = (pAVar8->fields).MECHOBPGHFJ;
      CJNHFNHJHPE = pSVar14;
    }
    if (pSVar2 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_0317d350;
    pSVar14 = pIVar3[0x19].monitor;
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,0,
                        Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0317d350;
    pNVar17 = (__this->fields)._playerLabel;
    fVar20 = *(float *)&pIVar3[0x1a].monitor;
    (__this->fields).BAPCPCEFEFM = bVar1;
    if (pNVar17 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0317d350;
    (pNVar17->fields).super._OAFKPIMLHJE_k__BackingField = StringLiteral_14092;
    thunk_FUN_01c20e04(&(pNVar17->fields).super._OAFKPIMLHJE_k__BackingField);
    pNVar17 = (__this->fields)._playerLabel;
    if (pNVar17 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0317d350;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar17,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._playerAvatar;
    if (pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) goto LAB_0317d350;
    Nekki_SF2_GUI_Fight_DisplayModel__SetAvatar(pNVar4,pSVar14,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._playerAvatar;
    if ((pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) ||
       (pNVar5 = (pNVar4->fields).avatar, pNVar5 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0))
    goto LAB_0317d350;
    __this_00 = UnityEngine_UI_Graphic__get_rectTransform
                          ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._playerAvatar;
    if ((pNVar4 == (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0) ||
       ((pNVar5 = (pNVar4->fields).avatar, pNVar5 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0 ||
        (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_RectTransform_o *)0x0)))) goto LAB_0317d350;
    UVar21 = UnityEngine_RectTransform__get_pivot(__this_01,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0317d350;
    UVar21.fields.y = fVar20;
    UnityEngine_RectTransform__set_pivot(__this_00,UVar21,(MethodInfo *)0x0);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._endFightContentPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar15 = (__this->fields)._endFightContentPrefab;
    pUVar18 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pUVar18 = (__this->fields)._content;
    }
    else {
      pUVar18 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar15 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)pUVar15,pUVar18,
                         Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto LAB_0317d350;
    pNVar6 = (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar15,Method_UnityEngine_GameObject_GetComponent<EndPvpFightContent>__);
    ppNVar16 = &(__this->fields).DBOLEPNBFAD;
    *ppNVar16 = pNVar6;
    thunk_FUN_01c20e04(ppNVar16,pNVar6);
    if ((*ppNVar16 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar15 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar16,(MethodInfo *)0x0),
       pUVar15 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0317d350;
    UnityEngine_GameObject__SetActive(pUVar15,true,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._contentLayout;
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto LAB_0317d350;
    pIVar10 = (__this->fields).CIKGADOJJMG;
    pNVar6 = (__this->fields).DBOLEPNBFAD;
    ODNJEHJPBGA = (UnityEngine_UI_VerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar15,
                             Method_UnityEngine_GameObject_GetComponent<VerticalLayoutGroup>__);
    if (pNVar6 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d350;
    Nekki_SF2_GUI_Fight_EndPvpFightContent__Init
              (pNVar6,pIVar10,ODNJEHJPBGA,(__this->fields)._animationFinishButton,(MethodInfo *)0x0)
    ;
    pNVar6 = (__this->fields).DBOLEPNBFAD;
    if (pNVar6 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d350;
    pUVar19 = (pNVar6->fields).AnimationEndEvent;
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar19 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0317d350;
    UnityEngine_Events_UnityEvent__AddListener(pUVar19,pUVar7,(MethodInfo *)0x0);
    if (*ppNVar16 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d350;
    pUVar19 = ((*ppNVar16)->fields).CloseEvent;
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar19 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0317d350;
    UnityEngine_Events_UnityEvent__AddListener(pUVar19,pUVar7,(MethodInfo *)0x0);
    if (*ppNVar16 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d350;
    pUVar19 = ((*ppNVar16)->fields).ReplayEvent;
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar19 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0317d350;
    UnityEngine_Events_UnityEvent__AddListener(pUVar19,pUVar7,(MethodInfo *)0x0);
  }
  if ((*ppIVar11 != (IGPDCHBJAPD_o *)0x0) &&
     (pIVar9 = ((*ppIVar11)->fields).GIIFANGGEHM, pIVar9 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
    ppMVar12 = &(__this->fields).OFLMHJHPFJM;
    *ppMVar12 = (pIVar9->fields).GPDMCLBBPAD;
    thunk_FUN_01c20e04(ppMVar12);
    pIVar10 = (__this->fields).CIKGADOJJMG;
    if ((pIVar10 != (IGPDCHBJAPD_o *)0x0) &&
       (pIVar9 = (pIVar10->fields).GIIFANGGEHM, pIVar9 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
      ppSVar13 = &(__this->fields).INIAKIIBBHK;
      *ppSVar13 = (pIVar9->fields).OJFMFMHCPOA;
      thunk_FUN_01c20e04(ppSVar13);
      if (*ppSVar13 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
        (__this->fields).DJGIEHCDHDN = 0 < ((*ppSVar13)->fields)._size;
        endValue.fields.b = 1.0;
        endValue.fields.a = 1.0;
        endValue.fields.r = 1.0;
        endValue.fields.g = 1.0;
        DG_Tweening_DOTweenModuleUI__DOColor
                  ((UnityEngine_UI_Image_o *)(__this->fields)._background,endValue,1.0,
                   (MethodInfo *)0x0);
        method_00 = extraout_x1;
        if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        if (DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND != false) {
          Nekki_SF2_GUI_Fight_EndPvpFightScreen__CCLILNDOHAB(__this,method_00);
          return;
        }
        return;
      }
    }
  }
LAB_0317d350:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

