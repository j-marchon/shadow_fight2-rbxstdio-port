// TypeDefIndex 1583
// Namespace: Nekki.SF2.GUI.Menu
// public class ProgressBarDojoPanel : MonoBehaviour
// Fields:
//   private const string BJNENIPJAMA = "UI/Textures/DojoPack/";
//   private const string HJLNHPIMOAM = ".barBackground";
//   private const string GMKGGMPFIMA = ".barStripe";
//   private const string BDEONELMGIB = ".barBorder";
//   private const string MJGNODKCIPC = ".button";
//   private const string CBBDDDGHKNA = ".shine";
//   private ProgressBar _barPrice; // 0x20
//   private ResolutionImageSkew _back; // 0x28
//   private ResolutionImageSkew _strip; // 0x30
//   private ResolutionImageSkew _border; // 0x38
//   private LabelAlias _infoCoins; // 0x40
//   private SFButton _itemButton; // 0x48
//   private ResolutionImage _itemPicture; // 0x50
//   private ResolutionImage _itemShineBorder; // 0x58
//   private SFButton _hintButton; // 0x60
//   private RectTransform _hintContent; // 0x68
//   private LabelAlias _hintText; // 0x70
//   private ResolutionImage _currencyIcon; // 0x78
//   private RaidConfig.ENBCJNLAHAC MHDJAEILAJL; // 0x80
//   private IEnumerator JJNJMJMBOLN; // 0x88
//   private Sequence GOPKOMPBHKM; // 0x90
//   private bool IKLIGGACIMH; // 0x98

// ===== private void GFAPFHOKBCB()  [RVA 0x31B2E44]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$GFAPFHOKBCB @ RVA 0x31B2E44

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__GFAPFHOKBCB
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  MethodInfo *extraout_x1;
  DG_Tweening_Sequence_o **ppDVar3;
  
  if ((DAT_04566b8d & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    DAT_04566b8d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO(__this,method);
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
  ppDVar3 = &(__this->fields).GOPKOMPBHKM;
  *ppDVar3 = pDVar1;
  thunk_FUN_01c20e04(ppDVar3,pDVar1);
  DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar3,0.0,(MethodInfo *)0x0);
  pDVar1 = *ppDVar3;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._itemShineBorder,0.4,1.0,
                      (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append
            (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  pDVar1 = *ppDVar3;
  pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                     ((UnityEngine_UI_Image_o *)(__this->fields)._itemShineBorder,1.0,1.0,
                      (MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__Append
            (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
  DG_Tweening_TweenSettingsExtensions__SetLoops<object>
            ((Il2CppObject *)*ppDVar3,-1,
             Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
  return;
}


// ===== public bool get_ItemExists()  [RVA 0x31B2F70]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$get_ItemExists @ RVA 0x31B2F70

bool Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__get_ItemExists
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).MHDJAEILAJL != (RaidConfig_ENBCJNLAHAC_o *)0x0;
}


// ===== private void IMLLPEFHOJD()  [RVA 0x31B2F80]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$IMLLPEFHOJD @ RVA 0x31B2F80

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__IMLLPEFHOJD
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  FAIJGJCCKJC_o *__this_01;
  FFHKCJAOPLI_o *__this_02;
  RaidConfig_ENBCJNLAHAC_o *IOOJAJAPMBM;
  
  if ((DAT_04566b8e & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    DAT_04566b8e = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  IOOJAJAPMBM = (__this->fields).MHDJAEILAJL;
  __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
  FAIJGJCCKJC___ctor(__this_01,IOOJAJAPMBM,(MethodInfo *)0x0);
  __this_02 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
  FFHKCJAOPLI___ctor(__this_02,8,(HOOAAGABMBL_o *)__this_01,(System_String_o *)0x0,
                     (System_String_o *)0x0,(MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,4,(Il2CppObject *)__this_02,(System_Action_object__o *)0x0,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HAHOEJMBGIP(bool CMPKOOEKFKF)  [RVA 0x31B304C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$HAHOEJMBGIP @ RVA 0x31B304C

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__HAHOEJMBGIP
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,bool CMPKOOEKFKF,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  
  if ((DAT_04566b8f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b8f = 1;
  }
  pUVar2 = (__this->fields)._hintContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._hintContent;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._hintContent;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CMPKOOEKFKF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCMDCHOBOCC(ResolutionImage IEPECMCLKJB, string HNFFFGNACAJ)  [RVA 0x31B312C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$JCMDCHOBOCC @ RVA 0x31B312C

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *HNFFFGNACAJ,
               MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  RaidConfig_ENBCJNLAHAC_o *pJVar2;
  
  if ((DAT_04566b90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22448/*"{0}{1}"*/);
    FUN_01bab630(&StringLiteral_14106/*"UI/Textures/DojoPack/"*/);
    DAT_04566b90 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14106/*"UI/Textures/DojoPack/"*/._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14106/*"UI/Textures/DojoPack/"*/;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
    pJVar2 = (__this->fields).MHDJAEILAJL;
    if (pJVar2 != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
      CJNHFNHJHPE = System_String__Format
                              (StringLiteral_22448/*"{0}{1}"*/,(Il2CppObject *)(pJVar2->fields).ICECFDIHPHN,
                               (Il2CppObject *)HNFFFGNACAJ,(MethodInfo *)0x0);
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x31B31D0]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$OnDestroy @ RVA 0x31B31D0

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__OnDestroy
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  PlayerData_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566b91 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_JBMIBJCLDDH__);
    DAT_04566b91 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (PlayerData_o *)0x0) {
    PlayerData__LJDDDMFPMDF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x31B3290]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$Init @ RVA 0x31B3290

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__Init
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  ProgressBar_o *pPVar3;
  PlayerData_o *__this_00;
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
    FUN_01bab630(&StringLiteral_1584/*"0/0"*/);
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
                      (pNVar2,StringLiteral_1584/*"0/0"*/,(pNVar2->klass->vtable)._75_set_text.method);
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
              if (__this_00 != (PlayerData_o *)0x0) {
                PlayerData__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x31B344C]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$.ctor @ RVA 0x31B344C

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel___ctor
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void CBMLKIFOKJO()  [RVA 0x31B2F38]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$CBMLKIFOKJO @ RVA 0x31B2F38

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__CBMLKIFOKJO
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).GOPKOMPBHKM;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private void PBNBBJPDHGK()  [RVA 0x31B3454]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$PBNBBJPDHGK @ RVA 0x31B3454

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__PBNBBJPDHGK
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04566b93 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566b93 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).JJNJMJMBOLN;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_032b34f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_032b34f4:
  method_00 = pVVar3->method;
  (*pVVar3->methodPtr)(pPVar2,pSVar8);
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__HAHOEJMBGIP(__this,false,method_00);
  (__this->fields).JJNJMJMBOLN = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void UpdateRaidItemPack()  [RVA 0x31B3530]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$UpdateRaidItemPack @ RVA 0x31B3530

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateRaidItemPack
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  RaidConfig_ENBCJNLAHAC_o *pJVar1;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar2;
  ProgressBar_o *pPVar3;
  RaidConfig_o *__this_00;
  Il2CppObject *pIVar4;
  RaidConfig_EFAJBOEHPLJ_o *pJVar5;
  SFButton_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  RaidConfig_ENBCJNLAHAC_o **ppJVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Color_o UVar8;
  
  if ((DAT_04566b94 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&StringLiteral_1456/*".barBackground"*/);
    FUN_01bab630(&StringLiteral_1457/*".barBorder"*/);
    FUN_01bab630(&StringLiteral_1458/*".barStripe"*/);
    FUN_01bab630(&StringLiteral_1460/*".button"*/);
    FUN_01bab630(&StringLiteral_1482/*".shine"*/);
    DAT_04566b94 = 1;
    method = extraout_x1;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo,method);
  }
  pJVar1 = LPGPNBGHDBD__OICLMNIHIJJ((MethodInfo *)0x0);
  ppJVar6 = &(__this->fields).MHDJAEILAJL;
  *ppJVar6 = pJVar1;
  thunk_FUN_01c20e04(ppJVar6,pJVar1);
  if (*ppJVar6 != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
    pNVar2 = (__this->fields)._border;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                (pNVar2,(float)((*ppJVar6)->fields).JIALOHAOPAO,(MethodInfo *)0x0);
      pJVar1 = (__this->fields).MHDJAEILAJL;
      if ((pJVar1 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
         (pNVar2 = (__this->fields)._back, pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0)) {
        Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                  (pNVar2,(float)(pJVar1->fields).JIALOHAOPAO,(MethodInfo *)0x0);
        pJVar1 = (__this->fields).MHDJAEILAJL;
        if ((pJVar1 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
           (pNVar2 = (__this->fields)._strip, pNVar2 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0))
        {
          Nekki_SF2_GUI_ResolutionImageSkew__set_SkewAngle
                    (pNVar2,(float)(pJVar1->fields).JIALOHAOPAO,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._border,
                     StringLiteral_1457/*".barBorder"*/,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._back,
                     StringLiteral_1456/*".barBackground"*/,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._strip,
                     StringLiteral_1458/*".barStripe"*/,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(__this->fields)._itemPicture,StringLiteral_1460/*".button"*/,in_x3);
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JCMDCHOBOCC
                    (__this,(__this->fields)._itemShineBorder,StringLiteral_1482/*".shine"*/,in_x3);
          pPVar3 = (__this->fields)._barPrice;
          if (pPVar3 != (ProgressBar_o *)0x0) {
            (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,0x3f800000,pPVar3,(pPVar3->klass->vtable)._11_SetValueBorders.method);
            pPVar3 = (__this->fields)._barPrice;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                        (0x3f800000,0,pPVar3,0,(pPVar3->klass->vtable)._8_SetValue.method);
              __this_03 = (__this->fields)._currencyIcon;
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
              if ((((*ppJVar6 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
                   (pIVar4 = DJNBJHPDKDP__PHPELPFMOII<object>
                                       ((System_Collections_Generic_List_T__o *)
                                        ((*ppJVar6)->fields).LIJCIBIOOOH,
                                        Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__),
                   pIVar4 != (Il2CppObject *)0x0)) && (__this_00 != (RaidConfig_o *)0x0)) &&
                 ((pJVar5 = RaidConfig__BHJOLIJDBLO
                                      (__this_00,(System_String_o *)pIVar4[1].klass,
                                       (MethodInfo *)0x0),
                  pJVar5 != (RaidConfig_EFAJBOEHPLJ_o *)0x0 &&
                  (__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)))) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (__this_03,(pJVar5->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
                pJVar1 = (__this->fields).MHDJAEILAJL;
                if (pJVar1 != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                  pNVar7 = (__this->fields)._infoCoins;
                  UVar8 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar1->fields).DPNFGBFFNAJ,(MethodInfo *)0x0);
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
                              (UVar8.fields.r,UVar8.fields.g,UVar8.fields.b,UVar8.fields.a,pNVar7,
                               (pNVar7->klass->vtable)._23_set_color.method);
                    __this_01 = (__this->fields)._itemButton;
                    if (__this_01 != (SFButton_o *)0x0) {
                      __this_02 = SFButton__get_RectTransform(__this_01,(MethodInfo *)0x0);
                      if ((*ppJVar6 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
                         (__this_02 != (UnityEngine_RectTransform_o *)0x0)) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (__this_02,
                                   (UnityEngine_Vector2_o)((*ppJVar6)->fields).MJPMEGEPHCK.fields,
                                   (MethodInfo *)0x0);
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
    FUN_01bab8c8();
  }
  return;
}


// ===== private void JBMIBJCLDDH(IList<PIADCKMDDAK> IMMNELPBGIF)  [RVA 0x31B37F4]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$JBMIBJCLDDH @ RVA 0x31B37F4

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__JBMIBJCLDDH
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *IMMNELPBGIF,MethodInfo *method)

{
  void **ppvVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  ProgressBar_o *pPVar4;
  PlayerData_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *str2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  MethodInfo *method_00;
  RaidConfig_ENBCJNLAHAC_o *pJVar7;
  int32_t iStack_24;
  
  if ((DAT_04566b95 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04566b95 = 1;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 == (RaidConfig_ENBCJNLAHAC_o *)0x0) ||
     (bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__), bVar2)) {
    return;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
     ((pIVar3 = DJNBJHPDKDP__PHPELPFMOII<object>
                          ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__),
      pIVar3 != (Il2CppObject *)0x0 &&
      (pPVar4 = (__this->fields)._barPrice, pPVar4 != (ProgressBar_o *)0x0)))) {
    ppvVar1 = &pIVar3[1].monitor;
    (*(pPVar4->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,(float)*(int *)ppvVar1,pPVar4,(pPVar4->klass->vtable)._11_SetValueBorders.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      iStack_24 = PlayerData__APFFEAJBAEK
                            (__this_00,(System_String_o *)pIVar3[1].klass,(MethodInfo *)0x0);
      pPVar4 = (__this->fields)._barPrice;
      if (pPVar4 != (ProgressBar_o *)0x0) {
        (*(pPVar4->klass->vtable)._8_SetValue.methodPtr)
                  ((float)iStack_24,0,pPVar4,0,(pPVar4->klass->vtable)._8_SetValue.method);
        pSVar5 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
        str2 = System_Int32__ToString((int32_t)ppvVar1,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._itemShineBorder;
        (__this->fields).IKLIGGACIMH = *(int *)ppvVar1 <= iStack_24;
        if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_02,(__this->fields).IKLIGGACIMH,(MethodInfo *)0x0);
          if ((__this->fields).IKLIGGACIMH != false) {
            Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__GFAPFHOKBCB(__this,method_00);
          }
          pNVar6 = (__this->fields)._infoCoins;
          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                      (pNVar6,pSVar5,(pNVar6->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x31B39BC]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$Update @ RVA 0x31B39BC

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__Update
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__PBNBBJPDHGK(__this,method_00);
    return;
  }
  return;
}


// ===== public void UpdateProgressBar()  [RVA 0x31B37F8]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$UpdateProgressBar @ RVA 0x31B37F8

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateProgressBar
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  ProgressBar_o *pPVar4;
  PlayerData_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *str2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  MethodInfo *method_00;
  RaidConfig_ENBCJNLAHAC_o *pJVar7;
  int32_t local_24;
  
  if ((DAT_04566b95 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04566b95 = 1;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 == (RaidConfig_ENBCJNLAHAC_o *)0x0) ||
     (bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MGNDHCBAPEN<string,_int>>__), bVar2)) {
    return;
  }
  pJVar7 = (__this->fields).MHDJAEILAJL;
  if ((pJVar7 != (RaidConfig_ENBCJNLAHAC_o *)0x0) &&
     ((pIVar3 = DJNBJHPDKDP__PHPELPFMOII<object>
                          ((System_Collections_Generic_List_T__o *)(pJVar7->fields).LIJCIBIOOOH,
                           Method_DJNBJHPDKDP_PHPELPFMOII<MGNDHCBAPEN<string,_int>>__),
      pIVar3 != (Il2CppObject *)0x0 &&
      (pPVar4 = (__this->fields)._barPrice, pPVar4 != (ProgressBar_o *)0x0)))) {
    ppvVar1 = &pIVar3[1].monitor;
    (*(pPVar4->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,(float)*(int *)ppvVar1,pPVar4,(pPVar4->klass->vtable)._11_SetValueBorders.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      local_24 = PlayerData__APFFEAJBAEK
                           (__this_00,(System_String_o *)pIVar3[1].klass,(MethodInfo *)0x0);
      pPVar4 = (__this->fields)._barPrice;
      if (pPVar4 != (ProgressBar_o *)0x0) {
        (*(pPVar4->klass->vtable)._8_SetValue.methodPtr)
                  ((float)local_24,0,pPVar4,0,(pPVar4->klass->vtable)._8_SetValue.method);
        pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        str2 = System_Int32__ToString((int32_t)ppvVar1,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(pSVar5,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._itemShineBorder;
        (__this->fields).IKLIGGACIMH = *(int *)ppvVar1 <= local_24;
        if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive
                    (__this_02,(__this->fields).IKLIGGACIMH,(MethodInfo *)0x0);
          if ((__this->fields).IKLIGGACIMH != false) {
            Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__GFAPFHOKBCB(__this,method_00);
          }
          pNVar6 = (__this->fields)._infoCoins;
          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                      (pNVar6,pSVar5,(pNVar6->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IBMOCCNGEEO()  [RVA 0x31B39E4]
// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$IBMOCCNGEEO @ RVA 0x31B39E4

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__IBMOCCNGEEO
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  MethodInfo *in_x2;
  RaidConfig_ENBCJNLAHAC_o *pJVar9;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o **ppSVar13;
  System_Collections_IEnumerator_o *pSVar14;
  float fVar15;
  
  if ((DAT_04566b96 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_PBNBBJPDHGK__);
    FUN_01bab630(&StringLiteral_10514/*"ProgressBar"*/);
    FUN_01bab630(&StringLiteral_10516/*"ProgressBarFull"*/);
    DAT_04566b96 = 1;
  }
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__HAHOEJMBGIP(__this,true,in_x2);
  pJVar9 = (__this->fields).MHDJAEILAJL;
  if (pJVar9 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)0x0;
  }
  else {
    lVar1 = 0x60;
    if ((__this->fields).IKLIGGACIMH != false) {
      lVar1 = 0x68;
    }
    CJNHFNHJHPE = *(System_String_o **)((long)&pJVar9->klass + lVar1);
  }
  bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar5) {
    puVar2 = &StringLiteral_10514/*"ProgressBar"*/;
    if ((__this->fields).IKLIGGACIMH != false) {
      puVar2 = &StringLiteral_10516/*"ProgressBarFull"*/;
    }
    CJNHFNHJHPE = (System_String_o *)*puVar2;
  }
  __this_00 = (__this->fields)._hintText;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,in_x2);
    pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar13 = &(__this->fields).JJNJMJMBOLN;
    pSVar14 = *ppSVar13;
    if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
      pPVar10 = pPVar6->klass;
      uVar3._0_1_ = (pPVar10->_2).rank;
      uVar3._1_1_ = (pPVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar3;
      if (uVar11 != 0) {
        piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar7 = pPVar10->vtable + (*piVar12 + 1);
            goto LAB_032b3b58;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_032b3b58:
      (*pVVar7->methodPtr)(pPVar6,pSVar14,pVVar7->method);
      pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
        pPVar10 = pPVar6->klass;
        fVar15 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar4._0_1_ = (pPVar10->_2).rank;
        uVar4._1_1_ = (pPVar10->_2).minimumAlignment;
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar10->vtable + (*piVar12 + 2);
              goto LAB_032b3c34;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,2);
LAB_032b3c34:
        pSVar14 = (System_Collections_IEnumerator_o *)
                  (*pVVar7->methodPtr)((ulong)(uint)fVar15,pPVar6,uVar8,pVVar7->method);
        *ppSVar13 = pSVar14;
        thunk_FUN_01c20e04(ppSVar13,pSVar14);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

