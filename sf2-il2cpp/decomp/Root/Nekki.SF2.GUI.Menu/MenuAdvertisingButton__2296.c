// TypeDefIndex 2296
// Namespace: Nekki.SF2.GUI.Menu
// public class MenuAdvertisingButton : MonoBehaviour
// Fields:
//   private const string AGMDELPHKMJ = "BP";
//   private const string POPJOEHGBGO = "TikTok";
//   private const string FMDJMPPLKBP = "SF3";
//   private const string AFMMIJELMNM = "SFArena";
//   private const string NGEGCPFIAMI = "Roulette";
//   private const string KGBKEMNFDLI = "UI/Textures/SF3/";
//   private const string AMAJNAPMOMF = "SF3AdvButton.btn_SF3_pressed";
//   private const string DNFEMKMGHKE = "SF3AdvButton.btn_SF3";
//   private const string CEMPDJDBHBF = "UI/Textures/SF3/SF3AdvButton.Charge_Highlight";
//   private const string IOKBAPKPGBM = "UI/Textures/SF3/SF3AdvButton.btn_icon_SF3";
//   private const string DJCLDEILGHD = "UI/Textures/SFA/btn_icon_Arena";
//   private const string DKEEDICEFKH = "UI/Textures/TickToc/btn_tiktok";
//   private const string NEKOOIBJLBO = "UI/Textures/TickToc/btn_tiktok";
//   private const string JBFHKCICLFB = "UI/Textures/BP/";
//   private const string CBJACLGANDM = "BpAdvButton.btn_BP_pressed";
//   private const string EJMCBNEDKHE = "BpAdvButton.btn_BP";
//   private const string OOGFBOOLEIA = "UI/Textures/BP/BpAdvButton.Charge_Highlight_BP";
//   private const string PCLOIHELEGM = "UI/Textures/BP/BpAdvButton.icon_BattlePass";
//   private static readonly Color ODHANEOKIOL; // 0x0
//   private float _advAnimationTime; // 0x20
//   private float _waitStartShowPergament; // 0x24
//   private float _waitStartHidePergament; // 0x28
//   private ResolutionButton _advButton; // 0x30
//   private ResolutionImage _buttonIcon; // 0x38
//   private ResolutionImage _shineBorder; // 0x40
//   private CocosAnimation _pergamentEffect; // 0x48
//   private CBLABOPKBKD <FONGIJNHBLK>k__BackingField; // 0x50
//   private CBLABOPKBKD COHMICDNKCB; // 0x58
//   private bool <NNCECFJGBFF>k__BackingField; // 0x60
//   private Sequence NEDADGIEPNI; // 0x68
//   private IEnumerator OJLNBGBHEBK; // 0x70
//   private IEnumerator NACLAKCDEOP; // 0x78
//   private bool CPODNGPDPDC; // 0x80

// ===== public CBLABOPKBKD get_ButtonItem()  [RVA 0x330AAF4]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$get_ButtonItem @ RVA 0x330AAF4

CBLABOPKBKD_o *
Nekki_SF2_GUI_Menu_MenuAdvertisingButton__get_ButtonItem
          (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._FONGIJNHBLK_k__BackingField;
}


// ===== public void SetActive(bool CJNHFNHJHPE)  [RVA 0x330AAFC]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$SetActive @ RVA 0x330AAFC

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__SetActive
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  CBLABOPKBKD_o *pCVar6;
  KKLJIDJBFEI_o *pKVar7;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar8;
  
  if ((DAT_0456777b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11430/*"Roulette"*/);
    DAT_0456777b = 1;
  }
  pCVar6 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar6 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ac8c;
  bVar4 = CBLABOPKBKD__FPBFCPPDGNI(pCVar6,(MethodInfo *)0x0);
  pCVar6 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar6 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ac8c;
  bVar2 = bVar4 && CJNHFNHJHPE;
  bVar5 = System_String__op_Equality
                    ((pCVar6->fields).BGHFADDGPAD,StringLiteral_11430/*"Roulette"*/,(MethodInfo *)0x0);
  bVar3 = bVar2;
  if (bVar5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar8 == (ACHLOMELAJE_o *)0x0) || ((pAVar8->fields).FCEBIJCGJOL == false))
    goto LAB_0340ac3c;
    pKVar7 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar7 == (KKLJIDJBFEI_o *)0x0) goto LAB_0340ac8c;
    bVar1 = (pKVar7->fields).super._MGGBEPKMPCF_k__BackingField;
    bVar3 = bVar2 && bVar1 != false;
    if (((bVar1 == false) || (!bVar4 || !CJNHFNHJHPE)) ||
       (bVar3 = bVar2, (__this->fields).CPODNGPDPDC != false)) goto LAB_0340ac0c;
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK(__this,method_00);
LAB_0340ac10:
    pCVar6 = (__this->fields).COHMICDNKCB;
    if (pCVar6 == (CBLABOPKBKD_o *)0x0) {
      bVar4 = true;
    }
    else {
      bVar4 = CBLABOPKBKD__FPBFCPPDGNI(pCVar6,(MethodInfo *)0x0);
      bVar4 = !bVar4;
    }
  }
  else {
LAB_0340ac0c:
    if (bVar3) goto LAB_0340ac10;
LAB_0340ac3c:
    bVar4 = false;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,bVar4,(MethodInfo *)0x0);
    if ((bVar4 != false) && ((__this->fields)._NNCECFJGBFF_k__BackingField != false)) {
      Nekki_SF2_GUI_Menu_MenuAdvertisingButton__RunRibbonAnimation(__this,method_01);
      return;
    }
    return;
  }
LAB_0340ac8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RunRibbonAnimation()  [RVA 0x330AE6C]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$RunRibbonAnimation @ RVA 0x330AE6C

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__RunRibbonAnimation
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CBLABOPKBKD_o *pCVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  float fVar12;
  
  if ((DAT_0456777c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ShowPergament__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456777c = 1;
  }
  pCVar7 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar7 != (CBLABOPKBKD_o *)0x0) {
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((pCVar7->fields).BLBMGMJLEEL,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method_00);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI(__this,method_01);
    (__this->fields)._NNCECFJGBFF_k__BackingField = false;
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
      pPVar8 = pPVar3->klass;
      fVar12 = (__this->fields)._waitStartShowPergament;
      uVar1._0_1_ = (pPVar8->_2).rank;
      uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar8->vtable + (*piVar10 + 2);
            goto LAB_0340af8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_0340af8c:
      pSVar6 = (System_Collections_IEnumerator_o *)
               (*pVVar5->methodPtr)((ulong)(uint)fVar12,pPVar3,uVar4,pVVar5->method);
      ppSVar11 = &(__this->fields).OJLNBGBHEBK;
      *ppSVar11 = pSVar6;
      thunk_FUN_01c20e04(ppSVar11,pSVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICLJOJFKBMD()  [RVA 0x330AFE0]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$ICLJOJFKBMD @ RVA 0x330AFE0

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456777d & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456777d = 1;
  }
  ppSVar7 = &(__this->fields).OJLNBGBHEBK;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0340b08c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0340b08c:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x330B0B8]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$OnDestroy @ RVA 0x330B0B8

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__OnDestroy
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456777e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    DAT_0456777e = 1;
  }
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method_00);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method_01);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI(__this,method_02);
    (__this->fields)._NNCECFJGBFF_k__BackingField = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CBMLKIFOKJO()  [RVA 0x330B174]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$CBMLKIFOKJO @ RVA 0x330B174

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).NEDADGIEPNI;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,true,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x330B1AC]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$.cctor @ RVA 0x330B1AC

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton___cctor(MethodInfo *method)

{
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton_StaticFields *pNVar1;
  
  if ((DAT_0456777f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo);
    DAT_0456777f = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo->static_fields;
  (pNVar1->ODHANEOKIOL).fields.b = 0.78431374;
  (pNVar1->ODHANEOKIOL).fields.a = 1.0;
  (pNVar1->ODHANEOKIOL).fields.r = 0.78431374;
  (pNVar1->ODHANEOKIOL).fields.g = 0.78431374;
  return;
}


// ===== public bool get_ShowAnimation()  [RVA 0x330B1FC]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$get_ShowAnimation @ RVA 0x330B1FC

bool Nekki_SF2_GUI_Menu_MenuAdvertisingButton__get_ShowAnimation
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._NNCECFJGBFF_k__BackingField;
}


// ===== public void Init(CBLABOPKBKD OOKMPCPEAAD, CBLABOPKBKD DLKMEONGJEO)  [RVA 0x330B204]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$Init @ RVA 0x330B204

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__Init
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,CBLABOPKBKD_o *OOKMPCPEAAD,
               CBLABOPKBKD_o *DLKMEONGJEO,MethodInfo *method)

{
  bool bVar1;
  CBLABOPKBKD_o **ppCVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_object__o *pSVar6;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *pHVar7;
  System_String_o *pSVar8;
  KKLJIDJBFEI_o *pKVar9;
  FKDLCJJOGIP_o *__this_02;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar10;
  ACHLOMELAJE_o *pAVar11;
  UnityEngine_Events_UnityEvent_o *__this_03;
  CBLABOPKBKD_o **ppCVar12;
  System_String_o *pSVar13;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567780 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_FKILEAIPNCP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_IFPBLGAHOML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_OnClick__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14104/*"UI/Textures/BP/BpAdvButton.Charge_Highlight_BP"*/);
    FUN_01bab630(&StringLiteral_13773/*"TikTok"*/);
    FUN_01bab630(&StringLiteral_14103/*"UI/Textures/BP/"*/);
    FUN_01bab630(&StringLiteral_11520/*"SFArena"*/);
    FUN_01bab630(&StringLiteral_14110/*"UI/Textures/SFA/btn_icon_Arena"*/);
    FUN_01bab630(&StringLiteral_11519/*"SF3AdvButton.btn_SF3_pressed"*/);
    FUN_01bab630(&StringLiteral_14109/*"UI/Textures/SF3/SF3AdvButton.btn_icon_SF3"*/);
    FUN_01bab630(&StringLiteral_14107/*"UI/Textures/SF3/"*/);
    FUN_01bab630(&StringLiteral_3559/*"BpAdvButton.btn_BP"*/);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_14108/*"UI/Textures/SF3/SF3AdvButton.Charge_Highlight"*/);
    FUN_01bab630(&StringLiteral_15552/*"[MenuAdvertisingButton] Init: item["*/);
    FUN_01bab630(&StringLiteral_11430/*"Roulette"*/);
    FUN_01bab630(&StringLiteral_3315/*"BP"*/);
    FUN_01bab630(&StringLiteral_11518/*"SF3AdvButton.btn_SF3"*/);
    FUN_01bab630(&StringLiteral_14111/*"UI/Textures/TickToc/btn_tiktok"*/);
    FUN_01bab630(&StringLiteral_3560/*"BpAdvButton.btn_BP_pressed"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11517/*"SF3"*/);
    FUN_01bab630(&StringLiteral_15791/*"] not exists!"*/);
    FUN_01bab630(&StringLiteral_14105/*"UI/Textures/BP/BpAdvButton.icon_BattlePass"*/);
    DAT_04567780 = 1;
  }
  ppCVar12 = &(__this->fields)._FONGIJNHBLK_k__BackingField;
  *ppCVar12 = OOKMPCPEAAD;
  thunk_FUN_01c20e04(ppCVar12,OOKMPCPEAAD);
  ppCVar2 = &(__this->fields).COHMICDNKCB;
  *ppCVar2 = DLKMEONGJEO;
  thunk_FUN_01c20e04(ppCVar2,DLKMEONGJEO);
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340ba3c;
  bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar3,(MethodInfo *)0x0);
  (__this->fields)._NNCECFJGBFF_k__BackingField = bVar1;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method_00);
  pSVar8 = StringLiteral_1/*""*/;
  pNVar4 = (__this->fields)._advButton;
  if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
  Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
            (pNVar4,StringLiteral_14107/*"UI/Textures/SF3/"*/,StringLiteral_11519/*"SF3AdvButton.btn_SF3_pressed"*/,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._advButton;
  if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
  Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
            (pNVar4,StringLiteral_14107/*"UI/Textures/SF3/"*/,StringLiteral_11519/*"SF3AdvButton.btn_SF3_pressed"*/,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._advButton;
  if ((pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) ||
     (Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar4,StringLiteral_14107/*"UI/Textures/SF3/"*/,StringLiteral_11518/*"SF3AdvButton.btn_SF3"*/,(MethodInfo *)0x0),
     OOKMPCPEAAD == (CBLABOPKBKD_o *)0x0)) goto LAB_0340ba3c;
  if ((OOKMPCPEAAD->fields).NMDOMADFIOI != false) {
    pNVar5 = (__this->fields)._shineBorder;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_14108/*"UI/Textures/SF3/SF3AdvButton.Charge_Highlight"*/,(MethodInfo *)0x0);
  }
  if (*ppCVar12 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ba3c;
  pSVar13 = ((*ppCVar12)->fields).BGHFADDGPAD;
  bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11517/*"SF3"*/,(MethodInfo *)0x0);
  if (bVar1) {
    puVar10 = &StringLiteral_14109/*"UI/Textures/SF3/SF3AdvButton.btn_icon_SF3"*/;
LAB_0340b5cc:
    pSVar13 = (System_String_o *)*puVar10;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11520/*"SFArena"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_14110/*"UI/Textures/SFA/btn_icon_Arena"*/;
      goto LAB_0340b5cc;
    }
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_13773/*"TikTok"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_14111/*"UI/Textures/TickToc/btn_tiktok"*/;
      goto LAB_0340b5cc;
    }
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_3315/*"BP"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340b53c to 0350b543 has its CatchHandler @ 0340b660 */
    if (bVar1) {
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
      Nekki_SF2_GUI_ResolutionButton__SetHighlightedSprite
                (pNVar4,StringLiteral_14103/*"UI/Textures/BP/"*/,StringLiteral_3560/*"BpAdvButton.btn_BP_pressed"*/,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
                    /* try { // try from 0340b56c to 0350b56f has its CatchHandler @ 0340b654 */
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340b570 to 0350b57b has its CatchHandler @ 0340b658 */
                    /* try { // try from 0340b57c to 0350b64b has its CatchHandler @ 0340ac98 */
      Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                (pNVar4,StringLiteral_14103/*"UI/Textures/BP/"*/,StringLiteral_3560/*"BpAdvButton.btn_BP_pressed"*/,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_0340ba3c;
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                (pNVar4,StringLiteral_14103/*"UI/Textures/BP/"*/,StringLiteral_3559/*"BpAdvButton.btn_BP"*/,(MethodInfo *)0x0);
      if ((OOKMPCPEAAD->fields).NMDOMADFIOI != false) {
        pNVar5 = (__this->fields)._shineBorder;
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,StringLiteral_14104/*"UI/Textures/BP/BpAdvButton.Charge_Highlight_BP"*/,(MethodInfo *)0x0);
      }
      puVar10 = &StringLiteral_14105/*"UI/Textures/BP/BpAdvButton.icon_BattlePass"*/;
      goto LAB_0340b5cc;
    }
                    /* try { // try from 0340b894 to 0350b89f has its CatchHandler @ 0340ba10 */
    bVar1 = System_String__op_Equality(pSVar13,StringLiteral_11430/*"Roulette"*/,(MethodInfo *)0x0);
    pSVar13 = StringLiteral_14111/*"UI/Textures/TickToc/btn_tiktok"*/;
                    /* try { // try from 0340b8b8 to 0350b8bf has its CatchHandler @ 0340b95c */
    if (!bVar1) {
      pSVar13 = pSVar8;
    }
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)(OOKMPCPEAAD->fields).super.CPJFEHFANBC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._buttonIcon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    UnityEngine_UI_Image__set_sprite
              ((UnityEngine_UI_Image_o *)pNVar5,(OOKMPCPEAAD->fields).super.CPJFEHFANBC,
               (MethodInfo *)0x0);
  }
  else {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).MEONABNPAPF,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 0340b64c to 0350b64f has its CatchHandler @ 0340b65c */
      if (*ppCVar12 == (CBLABOPKBKD_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340b650 to 0350b677 has its CatchHandler @ 0340ac98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b56c with catch @ 0340b654
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b570 with catch @ 0340b658
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b64c with catch @ 0340b65c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340b53c with catch @ 0340b660
                        */
      bVar1 = System_String__op_Equality
                        (((*ppCVar12)->fields).BGHFADDGPAD,StringLiteral_11430/*"Roulette"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340b678 to 0350b67b has its CatchHandler @ 0340b6a4 */
      if ((bVar1) &&
         (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0),
         !bVar1)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0340b8d8 to 0350b8db has its CatchHandler @ 0340b954 */
                    /* try { // try from 0340b8dc to 0350b903 has its CatchHandler @ 0340b960 */
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 0340b914 to 0350b91b has its CatchHandler @ 0340ba08 */
        if ((pAVar11 == (ACHLOMELAJE_o *)0x0) || ((pAVar11->fields).FCEBIJCGJOL == false)) {
LAB_0340b990:
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0340ba3c;
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        }
        else {
          pKVar9 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar9 == (KKLJIDJBFEI_o *)0x0) goto LAB_0340ba3c;
          if ((pKVar9->fields).super._MGGBEPKMPCF_k__BackingField == false) {
                    /* try { // try from 0340b9ec to 0350b9ef has its CatchHandler @ 0340ba00 */
            __this_02 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0340b9f0 to 0350ba2b has its CatchHandler @ 0340b6d4 */
                    /* catch() { ... } // from try @ 0340b970 with catch @ 0340b9f4 */
                    /* catch() { ... } // from try @ 0340b9ec with catch @ 0340ba00 */
                    /* catch() { ... } // from try @ 0340b938 with catch @ 0340ba04 */
            CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0340b914 with catch @ 0340ba08 */
                    /* catch() { ... } // from try @ 0340b9e4 with catch @ 0340ba0c */
                    /* catch() { ... } // from try @ 0340b894 with catch @ 0340ba10 */
                    /* catch() { ... } // from try @ 0340b9e0 with catch @ 0340ba14 */
                    /* catch() { ... } // from try @ 0340b868 with catch @ 0340ba18 */
                    /* catch() { ... } // from try @ 0340b87c with catch @ 0340ba1c */
            System_Action___ctor();
            if (__this_02 == (FKDLCJJOGIP_o *)0x0) goto LAB_0340ba3c;
                    /* try { // try from 0340ba2c to 0350ba2f has its CatchHandler @ 0340ba5c */
                    /* try { // try from 0340ba30 to 0350ba6b has its CatchHandler @ 0340b6d4 */
            FKDLCJJOGIP__AJLLLOFFOHF(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 0340b938 to 0350b947 has its CatchHandler @ 0340ba04 */
            Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK(__this,method_02);
          }
        }
        goto LAB_0340b6b0;
      }
                    /* try { // try from 0340b67c to 0350b6b3 has its CatchHandler @ 0340ac98 */
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar5 = (__this->fields)._buttonIcon;
      }
      else {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_01 == (DOPEEDABNEK_o *)0x0) goto LAB_0340ba3c;
        pHVar7 = DOPEEDABNEK__CKKIPBAIEMN
                           (__this_01,(OOKMPCPEAAD->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0340b94c to 0350b94f has its CatchHandler @ 0340b958 */
                    /* try { // try from 0340b950 to 0350b96f has its CatchHandler @ 0340b6d4 */
                    /* catch() { ... } // from try @ 0340b8d8 with catch @ 0340b954 */
                    /* catch() { ... } // from try @ 0340b94c with catch @ 0340b958 */
                    /* catch() { ... } // from try @ 0340b8b8 with catch @ 0340b95c */
                    /* catch() { ... } // from try @ 0340b8dc with catch @ 0340b960 */
          pSVar8 = System_String__Concat
                             (StringLiteral_15552/*"[MenuAdvertisingButton] Init: item["*/,(OOKMPCPEAAD->fields).BMGMGAAPFGO,
                              StringLiteral_15791/*"] not exists!"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340b970 to 0350b973 has its CatchHandler @ 0340b9f4 */
                    /* try { // try from 0340b974 to 0350b9c3 has its CatchHandler @ 0340b6d4 */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          goto LAB_0340b990;
        }
        pNVar5 = (__this->fields)._buttonIcon;
        bVar1 = System_String__op_Equality
                          ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751/*"Seal"*/,
                           (MethodInfo *)0x0);
                    /* try { // try from 0340b868 to 0350b86f has its CatchHandler @ 0340ba18 */
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340b87c to 0350b88b has its CatchHandler @ 0340ba1c */
          thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
        }
        if (bVar1) {
          pSVar8 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
        }
        else {
          pSVar8 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
        }
        if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
        *(System_String_o **)&(pNVar5->fields).super.m_PixelsPerUnitMultiplier = pSVar8;
                    /* try { // try from 0340b9c4 to 0350b9df has its CatchHandler @ 0340ba88 */
        thunk_FUN_01c20e04(&(pNVar5->fields).super.m_PixelsPerUnitMultiplier);
        pNVar5 = (__this->fields)._buttonIcon;
        pSVar13 = OFFIONDOEPM__CNLBHLNMCCI
                            ((pHVar7->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      }
      if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
    }
    else {
      pNVar5 = (__this->fields)._buttonIcon;
      if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0340ba3c;
                    /* catch() { ... } // from try @ 0340b678 with catch @ 0340b6a4 */
      pSVar13 = (OOKMPCPEAAD->fields).MEONABNPAPF;
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,pSVar13,(MethodInfo *)0x0);
  }
LAB_0340b6b0:
  pNVar4 = (__this->fields)._advButton;
                    /* try { // try from 0340b6b4 to 0350b6bb has its CatchHandler @ 0340b6d0 */
                    /* try { // try from 0340b6bc to 0350b6c7 has its CatchHandler @ 0340ac98 */
  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = (pNVar4->fields).super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0340b6c8 to 0350b6cf has its CatchHandler @ 0340b6d0 */
    pNVar4 = (__this->fields)._advButton;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340b6b4 with catch @ 0340b6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 0340b6c8 with catch @ 0340b6d0
                        */
                    /* try { // try from 0340b6d4 to 0350b867 has its CatchHandler @ 0340b6d4
                       catch() { ... } // from try @ 0340b6d4 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b950 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b974 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340b9f0 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340ba30 with catch @ 0340b6d4
                       catch() { ... } // from try @ 0340ba74 with catch @ 0340b6d4 */
      SFButton__RemoveAllEventListener((SFButton_o *)pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._advButton;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        __this_03 = (UnityEngine_Events_UnityEvent_o *)(pNVar4->fields).super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._advButton;
          pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            SFButton__AddEventListener((SFButton_o *)pNVar4,0,pSVar6,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._advButton;
            pSVar6 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              SFButton__AddEventListener((SFButton_o *)pNVar4,1,pSVar6,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._advButton;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                SFButton__set_IsFlashing((SFButton_o *)pNVar4,true,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GFAPFHOKBCB(__this,method_01);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0340ba3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ECAECIIFHDI()  [RVA 0x330BB64]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$ECAECIIFHDI @ RVA 0x330BB64

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ECAECIIFHDI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Events_UnityAction_o *call;
  CocosAnimation_o *pCVar2;
  
  if ((DAT_04567781 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_BNFALOJINFI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567781 = 1;
  }
  pCVar2 = (__this->fields)._pergamentEffect;
  if ((pCVar2 != (CocosAnimation_o *)0x0) &&
     (pUVar1 = (pCVar2->fields).OnAnimationComplete,
     pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._pergamentEffect;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      pUVar1 = (pCVar2->fields).OnAnimationComplete;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar1,call,(MethodInfo *)0x0);
        pCVar2 = (__this->fields)._pergamentEffect;
        if (pCVar2 != (CocosAnimation_o *)0x0) {
          CocosAnimation__SetLastFrame(pCVar2,(MethodInfo *)0x0);
          pCVar2 = (__this->fields)._pergamentEffect;
          if (pCVar2 != (CocosAnimation_o *)0x0) {
            (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IFPBLGAHOML(object IMMNELPBGIF)  [RVA 0x330BC30]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$IFPBLGAHOML @ RVA 0x330BC30

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IFPBLGAHOML
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  
  pNVar1 = (__this->fields)._buttonIcon;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0340bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar1,
               (pNVar1->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GHDNMPGNLOK()  [RVA 0x330AC90]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$GHDNMPGNLOK @ RVA 0x330AC90

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GHDNMPGNLOK
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar1;
  System_String_o *pSVar2;
  CBLABOPKBKD_o *pCVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
                    /* try { // try from 0340ac98 to 0350b53b has its CatchHandler @ 0340ac98
                       catch() { ... } // from try @ 0340ac98 with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b57c with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b650 with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b67c with catch @ 0340ac98
                       catch() { ... } // from try @ 0340b6bc with catch @ 0340ac98 */
  if ((DAT_04567782 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    FUN_01bab630(&StringLiteral_15552/*"[MenuAdvertisingButton] Init: item["*/);
    FUN_01bab630(&StringLiteral_15791/*"] not exists!"*/);
    DAT_04567782 = 1;
  }
  if ((__this->fields).CPODNGPDPDC != false) {
    return;
  }
  (__this->fields).CPODNGPDPDC = true;
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
    if ((pCVar3 != (CBLABOPKBKD_o *)0x0) && (__this_01 != (JMDPBFOCHHP_o *)0x0)) {
      pJVar1 = JMDPBFOCHHP__DIFLKMKBENA
                         (__this_01,(pCVar3->fields).BMGMGAAPFGO,false,(MethodInfo *)0x0);
      if (pJVar1 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
        pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
        if (pCVar3 != (CBLABOPKBKD_o *)0x0) {
          pSVar2 = System_String__Concat
                             (StringLiteral_15552/*"[MenuAdvertisingButton] Init: item["*/,(pCVar3->fields).BMGMGAAPFGO,StringLiteral_15791/*"] not exists!"*/,
                              (MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pNVar4 = (__this->fields)._buttonIcon;
        if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar2 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar2;
          thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
          pNVar4 = (__this->fields)._buttonIcon;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (pNVar4,(pJVar1->fields).KPDPJONADPJ,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnClick()  [RVA 0x330BC64]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$OnClick @ RVA 0x330BC64

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__OnClick
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t HONPNKFABKF;
  DOPEEDABNEK_o *__this_00;
  HOOAAGABMBL_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  FFHKCJAOPLI_o *__this_03;
  MethodInfo *method_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *pPVar3;
  MethodInfo *method_01;
  System_String_o *pSVar4;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  CBLABOPKBKD_o *pCVar5;
  
  if ((DAT_04567783 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15553/*"[MenuAdvertisingButton] OnClick: item["*/);
    FUN_01bab630(&StringLiteral_11430/*"Roulette"*/);
    FUN_01bab630(&StringLiteral_3315/*"BP"*/);
    FUN_01bab630(&StringLiteral_15791/*"] not exists!"*/);
    DAT_04567783 = 1;
  }
  pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((pCVar5->fields).BGHFADDGPAD,StringLiteral_3315/*"BP"*/,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IONKKHOGGJM
                ((Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)0x1,method_02);
    }
    pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
    if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
      method_04 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality
                        ((pCVar5->fields).BGHFADDGPAD,StringLiteral_11430/*"Roulette"*/,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BBFLOHNAIEH(__this,method_03);
        goto LAB_0340beb0;
      }
      pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
      if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((pCVar5->fields).super._HOHLBKMCIDD_k__BackingField,(MethodInfo *)0x0);
        pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
        if (pCVar5 != (CBLABOPKBKD_o *)0x0) {
          if (bVar1) {
            bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pCVar5->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
            if (bVar1) goto LAB_0340beb0;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
            if ((pCVar5 != (CBLABOPKBKD_o *)0x0) &&
               (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField,
               __this_00 != (DOPEEDABNEK_o *)0x0)) {
              __this_01 = DOPEEDABNEK__CKKIPBAIEMN
                                    (__this_00,(pCVar5->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
              if (__this_01 == (HOOAAGABMBL_o *)0x0) {
                pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField;
                if (pCVar5 == (CBLABOPKBKD_o *)0x0) goto LAB_0340bf24;
                pSVar4 = System_String__Concat
                                   (StringLiteral_15553/*"[MenuAdvertisingButton] OnClick: item["*/,(pCVar5->fields).BMGMGAAPFGO,
                                    StringLiteral_15791/*"] not exists!"*/,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
              }
              else {
                __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                HONPNKFABKF = HOOAAGABMBL__LHILOAKFKLP(__this_01,(MethodInfo *)0x0);
                __this_03 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                FFHKCJAOPLI___ctor(__this_03,HONPNKFABKF,__this_01,(System_String_o *)0x0,
                                   (System_String_o *)0x0,(MethodInfo *)0x0);
                if (__this_02 == (NDPMLPGANCI_o *)0x0) goto LAB_0340bf24;
                NDPMLPGANCI__EKPAFDJIAGI
                          (__this_02,4,(Il2CppObject *)__this_03,(System_Action_object__o *)0x0,true
                           ,(MethodInfo *)0x0);
              }
LAB_0340beb0:
              EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pSVar4 = (pCVar5->fields).super._HOHLBKMCIDD_k__BackingField;
            if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Application__OpenURL(pSVar4,(MethodInfo *)0x0);
            pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance(method_00);
            if (((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
                (pCVar5 = (__this->fields)._FONGIJNHBLK_k__BackingField,
                pCVar5 != (CBLABOPKBKD_o *)0x0)) &&
               (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
              (pPVar3->fields).JEMIJCDAKLB = (pCVar5->fields).super._HOHLBKMCIDD_k__BackingField;
              method_01 = (MethodInfo *)thunk_FUN_01c20e04();
                    /* try { // try from 0340bea0 to 0350c037 has its CatchHandler @ 0340bea0
                       catch() { ... } // from try @ 0340bea0 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c1f4 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c2b4 with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c32c with catch @ 0340bea0
                       catch() { ... } // from try @ 0340c36c with catch @ 0340bea0 */
              pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance(method_01);
              if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar2,0x50,method_04);
                goto LAB_0340beb0;
              }
            }
          }
        }
      }
    }
  }
LAB_0340bf24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GFAPFHOKBCB()  [RVA 0x330BA40]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$GFAPFHOKBCB @ RVA 0x330BA40

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GFAPFHOKBCB
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o *pDVar1;
  DG_Tweening_Core_TweenerCore_Color__Color__ColorOptions__o *pDVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar3;
  DG_Tweening_Sequence_o **ppDVar4;
  
  if ((DAT_04567784 & 1) == 0) {
                    /* catch() { ... } // from try @ 0340ba2c with catch @ 0340ba5c */
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 0340ba6c to 0350ba73 has its CatchHandler @ 0340ba88 */
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
                    /* try { // try from 0340ba74 to 0350ba7f has its CatchHandler @ 0340b6d4 */
    DAT_04567784 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method);
                    /* try { // try from 0340ba80 to 0350ba87 has its CatchHandler @ 0340ba88 */
  pCVar3 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar3 != (CBLABOPKBKD_o *)0x0) {
                    /* catch() { ... } // from try @ 0340b9c4 with catch @ 0340ba88
                       catch() { ... } // from try @ 0340ba6c with catch @ 0340ba88
                       catch() { ... } // from try @ 0340ba80 with catch @ 0340ba88 */
    if ((pCVar3->fields).NMDOMADFIOI != false) {
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar1 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      ppDVar4 = &(__this->fields).NEDADGIEPNI;
      *ppDVar4 = pDVar1;
      thunk_FUN_01c20e04(ppDVar4,pDVar1);
      DG_Tweening_TweenSettingsExtensions__AppendInterval(*ppDVar4,0.0,(MethodInfo *)0x0);
      pDVar1 = *ppDVar4;
      pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((UnityEngine_UI_Image_o *)(__this->fields)._shineBorder,0.4,1.0,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      pDVar1 = *ppDVar4;
      pDVar2 = DG_Tweening_DOTweenModuleUI__DOFade
                         ((UnityEngine_UI_Image_o *)(__this->fields)._shineBorder,1.0,1.0,
                          (MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__Append
                (pDVar1,(DG_Tweening_Tween_o *)pDVar2,(MethodInfo *)0x0);
      DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                ((Il2CppObject *)*ppDVar4,-1,
                 Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
      return;
    }
    __this_00 = (__this->fields)._shineBorder;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLOOLFNKCKA()  [RVA 0x330C148]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$MLOOLFNKCKA @ RVA 0x330C148

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567785 & 1) == 0) {
                    /* try { // try from 0340c164 to 0350c16b has its CatchHandler @ 0340c2dc */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567785 = 1;
  }
  ppSVar7 = &(__this->fields).NACLAKCDEOP;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
                    /* try { // try from 0340c17c to 0350c183 has its CatchHandler @ 0340c2f4 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0340c188 to 0350c18f has its CatchHandler @ 0340c2d4 */
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 0340c198 to 0350c19f has its CatchHandler @ 0340c2c4 */
  uVar5 = (ulong)uVar1;
                    /* try { // try from 0340c1a0 to 0350c1af has its CatchHandler @ 0340c2d0 */
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0340c1b4 to 0350c1d7 has its CatchHandler @ 0340c30c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0340c1e8 to 0350c1f3 has its CatchHandler @ 0340c2c8 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0340c1f4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0340c1f4:
                    /* try { // try from 0340c1f4 to 0350c2a3 has its CatchHandler @ 0340bea0 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void BNFALOJINFI()  [RVA 0x330C220]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$BNFALOJINFI @ RVA 0x330C220

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  CocosAnimation_o *pCVar1;
  
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA(__this,method);
  pCVar1 = (__this->fields)._pergamentEffect;
  if ((pCVar1 != (CocosAnimation_o *)0x0) &&
     (__this_00 = (pCVar1->fields).OnAnimationComplete,
     __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._pergamentEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = false;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKILEAIPNCP(object IMMNELPBGIF)  [RVA 0x330C270]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$FKILEAIPNCP @ RVA 0x330C270

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__FKILEAIPNCP
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton_StaticFields *pNVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  if ((DAT_04567786 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo);
    DAT_04567786 = 1;
    IMMNELPBGIF = extraout_x1;
  }
                    /* try { // try from 0340c2a4 to 0350c2a7 has its CatchHandler @ 0340c2ec */
                    /* try { // try from 0340c2a8 to 0350c2ab has its CatchHandler @ 0340c2e8 */
  pNVar2 = (__this->fields)._buttonIcon;
                    /* try { // try from 0340c2ac to 0350c2af has its CatchHandler @ 0340c2e4 */
                    /* try { // try from 0340c2b0 to 0350c2b3 has its CatchHandler @ 0340c2cc */
  if ((Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340c2b4 to 0350c327 has its CatchHandler @ 0340bea0 */
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo,IMMNELPBGIF);
                    /* catch() { ... } // from try @ 0340c134 with catch @ 0340c2b8 */
  }
                    /* catch() { ... } // from try @ 0340c05c with catch @ 0340c2bc */
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch() { ... } // from try @ 0340c068 with catch @ 0340c2c0 */
    pNVar1 = Nekki_SF2_GUI_Menu_MenuAdvertisingButton_TypeInfo->static_fields;
                    /* catch() { ... } // from try @ 0340c198 with catch @ 0340c2c4 */
                    /* catch() { ... } // from try @ 0340c1e8 with catch @ 0340c2c8 */
                    /* catch() { ... } // from try @ 0340c2b0 with catch @ 0340c2cc */
                    /* catch() { ... } // from try @ 0340c1a0 with catch @ 0340c2d0 */
                    /* catch() { ... } // from try @ 0340c188 with catch @ 0340c2d4 */
                    /* catch() { ... } // from try @ 0340c10c with catch @ 0340c2d8 */
                    /* catch() { ... } // from try @ 0340c164 with catch @ 0340c2dc */
                    /* catch() { ... } // from try @ 0340c0c8 with catch @ 0340c2e0 */
                    /* WARNING: Could not recover jumptable at 0x0340c2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 0340c2ac with catch @ 0340c2e4 */
    (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
              ((pNVar1->ODHANEOKIOL).fields.r,(pNVar1->ODHANEOKIOL).fields.g,
               (pNVar1->ODHANEOKIOL).fields.b,(pNVar1->ODHANEOKIOL).fields.a,pNVar2,
               (pNVar2->klass->vtable)._23_set_color.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0340c2a8 with catch @ 0340c2e8 */
  FUN_01bab8c8();
}


// ===== private void IONKKHOGGJM()  [RVA 0x330BF28]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$IONKKHOGGJM @ RVA 0x330BF28

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__IONKKHOGGJM
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  MJHMHBEJFBH_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567787 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    DAT_04567787 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__BJIAIGCNFDJ((MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    __this_01 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
    MJHMHBEJFBH___ctor(__this_01,4,(MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_00,7,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void KHPEJMPPJOI()  [RVA 0x330C2EC]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$KHPEJMPPJOI @ RVA 0x330C2EC

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__KHPEJMPPJOI
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  float fVar10;
  
                    /* catch() { ... } // from try @ 0340c2a4 with catch @ 0340c2ec */
                    /* catch() { ... } // from try @ 0340c0e0 with catch @ 0340c2f0 */
                    /* catch() { ... } // from try @ 0340c17c with catch @ 0340c2f4 */
                    /* catch() { ... } // from try @ 0340c0ec with catch @ 0340c2f8 */
                    /* catch() { ... } // from try @ 0340c104 with catch @ 0340c2fc */
                    /* catch() { ... } // from try @ 0340c098 with catch @ 0340c300 */
                    /* catch() { ... } // from try @ 0340c038 with catch @ 0340c304 */
                    /* catch() { ... } // from try @ 0340c138 with catch @ 0340c308 */
                    /* catch() { ... } // from try @ 0340c1b4 with catch @ 0340c30c */
                    /* catch() { ... } // from try @ 0340c0b4 with catch @ 0340c310 */
  if ((DAT_04567788 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0340c328 to 0350c32b has its CatchHandler @ 0340c354 */
                    /* try { // try from 0340c32c to 0350c363 has its CatchHandler @ 0340bea0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ECAECIIFHDI__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567788 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__MLOOLFNKCKA(__this,method);
                    /* catch() { ... } // from try @ 0340c328 with catch @ 0340c354 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0340c364 to 0350c36b has its CatchHandler @ 0340c380 */
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0340c36c to 0350c377 has its CatchHandler @ 0340bea0 */
                    /* try { // try from 0340c378 to 0350c37f has its CatchHandler @ 0340c380 */
  System_Action___ctor();
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0340c364 with catch @ 0340c380
                       catch() { ... } // from try @ 0340c378 with catch @ 0340c380 */
  pPVar6 = pPVar2->klass;
  fVar10 = (__this->fields)._waitStartHidePergament;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + (*piVar8 + 2);
        goto LAB_0340c3dc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_0340c3dc:
  pSVar5 = (System_Collections_IEnumerator_o *)
           (*pVVar4->methodPtr)((ulong)(uint)fVar10,pPVar2,uVar3,pVVar4->method);
  ppSVar9 = &(__this->fields).NACLAKCDEOP;
  *ppSVar9 = pSVar5;
  thunk_FUN_01c20e04(ppSVar9,pSVar5);
  return;
}


// ===== public void ShowPergament()  [RVA 0x330C414]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$ShowPergament @ RVA 0x330C414

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ShowPergament
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  CocosAnimation_o *pCVar5;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_Exception_o *__this_02;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar7;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  
  if ((DAT_04567789 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_KHPEJMPPJOI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5958/*"Error: animation not found: "*/);
    DAT_04567789 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method);
  pCVar7 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (((pCVar7 != (CBLABOPKBKD_o *)0x0) &&
      (pSVar3 = (pCVar7->fields).BLBMGMJLEEL, pSVar3 != (System_String_o *)0x0)) &&
     (pSVar4 = System_String__Split(pSVar3,0x2e,0,(MethodInfo *)0x0),
     pSVar4 != (System_String_array *)0x0)) {
    if ((int)pSVar4->max_length != 2) {
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
      pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7718/*"Invalid anim path name. Should be : AtlasPath.PrefixName"*/);
      System_Exception___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ShowPergament__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_02,uVar6);
    }
    if (pSVar4 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar4->max_length;
      if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pCVar5 = (__this->fields)._pergamentEffect;
      if (pCVar5 != (CocosAnimation_o *)0x0) {
        pSVar3 = pSVar4->m_Items[0];
        bVar2 = CocosAnimation__Init(pCVar5,pSVar3,0,pSVar4->m_Items[1],(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = System_String__Concat(StringLiteral_5958/*"Error: animation not found: "*/,pSVar3,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
          return;
        }
        pCVar5 = (__this->fields)._pergamentEffect;
        if (pCVar5 != (CocosAnimation_o *)0x0) {
          __this_03 = (pCVar5->fields).OnAnimationComplete;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
            pCVar5 = (__this->fields)._pergamentEffect;
            if (pCVar5 != (CocosAnimation_o *)0x0) {
              CocosAnimation__SetFramesRange(pCVar5,0,-1,(MethodInfo *)0x0);
              pCVar5 = (__this->fields)._pergamentEffect;
              if (pCVar5 != (CocosAnimation_o *)0x0) {
                (pCVar5->fields)._PPEGDOHGLJJ_k__BackingField = (__this->fields)._advAnimationTime;
                CocosAnimation__SetFirstFrame(pCVar5,(MethodInfo *)0x0);
                pCVar5 = (__this->fields)._pergamentEffect;
                if (pCVar5 != (CocosAnimation_o *)0x0) {
                  (pCVar5->fields)._FEBBHCOAEMI_k__BackingField = 1;
                  (pCVar5->fields)._NOAJIBNJKPE_k__BackingField = true;
                  __this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
                  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    pCVar5 = (__this->fields)._pergamentEffect;
                    if ((pCVar5 != (CocosAnimation_o *)0x0) &&
                       (__this_01 = (pCVar5->fields)._MPAMHJJKABE_k__BackingField,
                       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                      CJNHFNHJHPE = UnityEngine_RectTransform__get_anchorMax
                                              (__this_01,(MethodInfo *)0x0);
                      CocosAnimation__set_RectAnchor(pCVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
                      (__this->fields)._NNCECFJGBFF_k__BackingField = false;
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


// ===== public void set_ShowAnimation(bool CJNHFNHJHPE)  [RVA 0x330C64C]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$set_ShowAnimation @ RVA 0x330C64C

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__set_ShowAnimation
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._NNCECFJGBFF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void BBFLOHNAIEH()  [RVA 0x330BFE8]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$BBFLOHNAIEH @ RVA 0x330BFE8

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BBFLOHNAIEH
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ENBCJNLAHAC_o *IOOJAJAPMBM;
  NDPMLPGANCI_o *__this_01;
  FAIJGJCCKJC_o *__this_02;
  FFHKCJAOPLI_o *__this_03;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar2;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_0456778a & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0340c038 to 0350c03f has its CatchHandler @ 0340c304 */
    DAT_0456778a = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  bVar1 = MGNPHCAAEIO__HDEOLJBKIHJ(true,(MethodInfo *)0x0);
                    /* try { // try from 0340c05c to 0350c05f has its CatchHandler @ 0340c2bc */
  if (!bVar1) {
    return;
  }
  pCVar2 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (pCVar2 != (CBLABOPKBKD_o *)0x0) {
                    /* try { // try from 0340c068 to 0350c087 has its CatchHandler @ 0340c2c0 */
    CJNHFNHJHPE = (pCVar2->fields).BMGMGAAPFGO;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
                    /* try { // try from 0340c098 to 0350c0a3 has its CatchHandler @ 0340c300 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (__this_00 != (JMDPBFOCHHP_o *)0x0) {
                    /* try { // try from 0340c0b4 to 0350c0c3 has its CatchHandler @ 0340c310 */
      IOOJAJAPMBM = JMDPBFOCHHP__DIFLKMKBENA(__this_00,CJNHFNHJHPE,false,(MethodInfo *)0x0);
      __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0340c0c8 to 0350c0cf has its CatchHandler @ 0340c2e0 */
      __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
                    /* try { // try from 0340c0e0 to 0350c0e7 has its CatchHandler @ 0340c2f0 */
                    /* try { // try from 0340c0ec to 0350c0f3 has its CatchHandler @ 0340c2f8 */
      FAIJGJCCKJC___ctor(__this_02,IOOJAJAPMBM,(MethodInfo *)0x0);
      __this_03 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* try { // try from 0340c104 to 0350c10b has its CatchHandler @ 0340c2fc */
                    /* try { // try from 0340c10c to 0350c11b has its CatchHandler @ 0340c2d8 */
      FFHKCJAOPLI___ctor(__this_03,8,(HOOAAGABMBL_o *)__this_02,(System_String_o *)0x0,
                         (System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_01 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0340c134 to 0350c137 has its CatchHandler @ 0340c2b8 */
                    /* try { // try from 0340c138 to 0350c15f has its CatchHandler @ 0340c308 */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_01,4,(Il2CppObject *)__this_03,(System_Action_object__o *)0x0,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CancelAnimation()  [RVA 0x330AFC0]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$CancelAnimation @ RVA 0x330AFC0

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CancelAnimation
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method);
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI(__this,method_00);
  (__this->fields)._NNCECFJGBFF_k__BackingField = false;
  return;
}


// ===== public void .ctor()  [RVA 0x330C658]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$.ctor @ RVA 0x330C658

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton___ctor
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  (__this->fields)._waitStartHidePergament = 3.0;
  (__this->fields)._advAnimationTime = 0.7;
  (__this->fields)._waitStartShowPergament = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GBHHOFOABPC(CBLABOPKBKD CJNHFNHJHPE)  [RVA 0x330C674]
// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$GBHHOFOABPC @ RVA 0x330C674

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__GBHHOFOABPC
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,CBLABOPKBKD_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FONGIJNHBLK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

