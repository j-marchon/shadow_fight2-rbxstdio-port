// TypeDefIndex 828
// Namespace: Nekki.SF2.GUI.Fight
// public class EndPvpFightScreen : MonoBehaviour, HAFLPBGEGCI
// Fields:
//   private GameObject _endFightContentPrefab; // 0x20
//   private GameObject _resistanceContentPrefab; // 0x28
//   private ResolutionImage _background; // 0x30
//   private Transform _content; // 0x38
//   private LabelAlias _playerLabel; // 0x40
//   private DisplayModel _playerAvatar; // 0x48
//   private Button _animationFinishButton; // 0x50
//   private GameObject _contentLayout; // 0x58
//   private IGPDCHBJAPD CIKGADOJJMG; // 0x60
//   private EndPvpFightContent DBOLEPNBFAD; // 0x68
//   private ResistanceContent EHKAIEBMIFA; // 0x70
//   private bool DJGIEHCDHDN; // 0x78
//   private List<IGPDCHBJAPD.DHAPBDACLMI> INIAKIIBBHK; // 0x80
//   private MFFKCPDBFPG OFLMHJHPFJM; // 0x88
//   private GameObject KDFFLHPEGEN; // 0x90
//   private bool BAPCPCEFEFM; // 0x98
//   private const string FCFAIOFPLCO = "FightUI.Label_Win";
//   private const string NCALBKMKDED = "FightUI.Label_Lose";
//   private const string JOJONMOKJOP = "FightUI.Label_Timesup";
//   private const string EHPPMKGOKPG = "UI/Atlases/";

// ===== private Transform CFFOLDAGGMJ()  [RVA 0x307CC00]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$CFFOLDAGGMJ @ RVA 0x307CC00

UnityEngine_Transform_o *
Nekki_SF2_GUI_Fight_EndPvpFightScreen__CFFOLDAGGMJ
          (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if ((DAT_04565fe3 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ResolutionImage>__);
    DAT_04565fe3 = 1;
  }
  __this_00 = (__this->fields)._playerLabel;
  if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = (UnityEngine_Component_o *)
                  UnityEngine_Component__GetComponentInChildren<object>
                            ((UnityEngine_Component_o *)__this_00,
                             Method_UnityEngine_Component_GetComponentInChildren<ResolutionImage>__)
     , __this_01 != (UnityEngine_Component_o *)0x0)) {
    pUVar1 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x307CC5C]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$.ctor @ RVA 0x307CC5C

void Nekki_SF2_GUI_Fight_EndPvpFightScreen___ctor
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  (__this->fields).BAPCPCEFEFM = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void BCGDMKNIFOM()  [RVA 0x307CC6C]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$BCGDMKNIFOM @ RVA 0x307CC6C

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__BCGDMKNIFOM
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP(__this,false,in_x2);
  return;
}


// ===== public void OnAnimationFinishButton()  [RVA 0x307CD18]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$OnAnimationFinishButton @ RVA 0x307CD18

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__OnAnimationFinishButton
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *pNVar2;
  
  if ((DAT_04565fe4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fe4 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).DBOLEPNBFAD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).DBOLEPNBFAD;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Fight_EndPvpFightContent__FinishAnimation(pNVar2,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP(__this,false,method_00);
  return;
}


// ===== public void OnBackKeyClicked(object OCMMDIHLKMH)  [RVA 0x307CD9C]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$OnBackKeyClicked @ RVA 0x307CD9C

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__OnBackKeyClicked
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,Il2CppObject *OCMMDIHLKMH,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  IGPDCHBJAPD_o *PNPKEKHEMCD;
  
  if ((DAT_04565fe5 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565fe5 = 1;
    OCMMDIHLKMH = extraout_x1;
  }
  PNPKEKHEMCD = (__this->fields).CIKGADOJJMG;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,OCMMDIHLKMH);
  }
  MGNPHCAAEIO__ABOKGFABBOO(PNPKEKHEMCD,(MethodInfo *)0x0);
  return;
}


// ===== public void Init(IGPDCHBJAPD PNPKEKHEMCD)  [RVA 0x307CDF8]
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
    FUN_01bab630(&StringLiteral_10308/*"Player1Wins"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10309/*"Player2Wins"*/);
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
    pSVar14 = StringLiteral_10309/*"Player2Wins"*/;
    CJNHFNHJHPE = StringLiteral_10308/*"Player1Wins"*/;
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
    (pNVar17->fields).super._OAFKPIMLHJE_k__BackingField = StringLiteral_14092/*"UI/Atlases/"*/;
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


// ===== private void CCLILNDOHAB()  [RVA 0x307D354]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$CCLILNDOHAB @ RVA 0x307D354

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__CCLILNDOHAB
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  LPGLKMNHELJ_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *pDVar4;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o **ppNVar5;
  Nekki_SF2_GUI_Fight_ResistanceContent_o **ppNVar6;
  IGPDCHBJAPD_o *pIVar7;
  Nekki_SF2_GUI_Fight_EndPvpFightContent_o *x;
  Nekki_SF2_GUI_Fight_ResistanceContent_o *pNVar8;
  UnityEngine_Transform_o *pUVar9;
  
  if ((DAT_04565fe7 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightScreen_CCLILNDOHAB__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565fe7 = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).DBOLEPNBFAD;
  x = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).AnimationEndEvent,
       pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)) goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if ((*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar5)->fields).ReplayEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0)
       ) goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar5 == (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0) goto LAB_0317d694;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar5 = (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar5,0);
  }
  ppNVar6 = &(__this->fields).EHKAIEBMIFA;
  pNVar8 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar6 == (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) ||
       (pUVar2 = ((*ppNVar6)->fields).CloseEvent, pUVar2 == (UnityEngine_Events_UnityEvent_o *)0x0))
    goto LAB_0317d694;
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
    if (*ppNVar6 == (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) goto LAB_0317d694;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*ppNVar6,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    *ppNVar6 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0;
    thunk_FUN_01c20e04(ppNVar6,0);
  }
  if ((__this->fields).DJGIEHCDHDN == false) {
    pIVar7 = (__this->fields).CIKGADOJJMG;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__ABOKGFABBOO(pIVar7,(MethodInfo *)0x0);
    if ((__this->fields).OFLMHJHPFJM == (MFFKCPDBFPG_o *)0x0) {
      return;
    }
    __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
    LPGLKMNHELJ___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (LPGLKMNHELJ_o *)0x0) {
      (__this_00->fields).FGCJFGHMIOL = (__this->fields).OFLMHJHPFJM;
      thunk_FUN_01c20e04();
      pIVar7 = (__this->fields).CIKGADOJJMG;
      if ((pIVar7 != (IGPDCHBJAPD_o *)0x0) &&
         (pDVar4 = (pIVar7->fields).DBIAAJNKHLH, pDVar4 != (DNELIPCHKLK_o *)0x0)) {
        (__this_00->fields).JOPIEJMBFHK = (pDVar4->fields).GDPFBDIJNHA;
        thunk_FUN_01c20e04();
        JJPNLEPEAFM__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    (__this->fields).DJGIEHCDHDN = false;
    pUVar3 = (__this->fields)._resistanceContentPrefab;
    pUVar9 = (__this->fields)._content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar9 = (__this->fields)._content;
    }
    else {
      pUVar9 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,pUVar9,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pNVar8 = (Nekki_SF2_GUI_Fight_ResistanceContent_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<ResistanceContent>__);
      *ppNVar6 = pNVar8;
      thunk_FUN_01c20e04(ppNVar6,pNVar8);
      if (*ppNVar6 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_ResistanceContent__Init
                  (*ppNVar6,(__this->fields).INIAKIIBBHK,(MethodInfo *)0x0);
        pNVar8 = (__this->fields).EHKAIEBMIFA;
        if (pNVar8 != (Nekki_SF2_GUI_Fight_ResistanceContent_o *)0x0) {
          pUVar2 = (pNVar8->fields).CloseEvent;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar2,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0317d694:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KIJDNLMKGDH()  [RVA 0x307D698]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$KIJDNLMKGDH @ RVA 0x307D698

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__KIJDNLMKGDH
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *obj;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_04565fe8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04565fe8 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
  auVar2._8_8_ = method;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar2 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Fight_FightScene_o *)0x0) {
    Nekki_SF2_GUI_Fight_FightScene__RestartFight
              ((Nekki_SF2_GUI_Fight_FightScene_o *)**(undefined8 **)(lVar1 + 0xb8),(MethodInfo *)0x0
              );
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PLAIIFOBHLP(bool CMPKOOEKFKF)  [RVA 0x307CC74]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$PLAIIFOBHLP @ RVA 0x307CC74

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__PLAIIFOBHLP
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,bool CMPKOOEKFKF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_04565fe9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565fe9 = 1;
  }
  pUVar2 = (__this->fields)._animationFinishButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._animationFinishButton;
    if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OnDestroy()  [RVA 0x307D758]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$OnDestroy @ RVA 0x307D758

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__OnDestroy
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x307D780]
// Nekki.SF2.GUI.Fight.EndPvpFightScreen$$Awake @ RVA 0x307D780

void Nekki_SF2_GUI_Fight_EndPvpFightScreen__Awake
               (Nekki_SF2_GUI_Fight_EndPvpFightScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

