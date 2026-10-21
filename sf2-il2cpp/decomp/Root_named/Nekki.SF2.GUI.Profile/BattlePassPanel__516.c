// TypeDefIndex 516
// Namespace: Nekki.SF2.GUI.Profile
// public class BattlePassPanel : MonoBehaviour, LEPEFNKEJBC
// Fields:
//   private const string CAJDLMJNLNM = "Background";
//   private const string DNDNOIEDNBA = "Info";
//   private const string IODKFABNOMF = "Btn_Claim_Reward";
//   private const string HLDGBFDGGEM = "Btn_Buy_Pass";
//   private ResolutionImage _bg; // 0x20
//   private SFButton _infoButton; // 0x28
//   private LabelAlias _levelLabel; // 0x30
//   private ProgressBarBattlePass _progressBar; // 0x38
//   private LabelAlias _timeLabel; // 0x40
//   private LabelButton _btnGetReward; // 0x48
//   private CanvasGroup _btnGetRewardContent; // 0x50
//   private LabelButton _btnGetAllRewards; // 0x58
//   private CanvasGroup _btnGetAllRewardsContent; // 0x60
//   private LabelButton _btnBuyPass; // 0x68
//   private CanvasGroup _btnBuyPassContent; // 0x70
//   private EnhancedScroller _scroller; // 0x78
//   private BattlePassRewardCell _cellPrefab; // 0x80
//   private GameObject BFGECCFLJBM; // 0x88
//   private RaidConfig.CKEMIAEPGKD CNFIAJGCJBC; // 0x90
//   private List<PIJBHIFGBCK> IBBJADAIGIL; // 0x98
//   private int KEEBABPJPJK; // 0xA0
//   private bool APPMGPBDDFD; // 0xA4
//   private const string BJNENIPJAMA = "UI/Textures/BP/";
//   private const float HHBBPIADPHD = 429;
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0xA8

// ===== public void .ctor()  [RVA 0x35901A4]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$.ctor @ RVA 0x35901A4

void Nekki_SF2_GUI_Profile_BattlePassPanel___ctor
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_00;
  System_Collections_Generic_List_PIJBHIFGBCK__o **ppSVar1;
  UniRx_CompositeDisposable_o *__this_01;
  UniRx_CompositeDisposable_o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d70 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PIJBHIFGBCK>_TypeInfo);
    DAT_04568d70 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PIJBHIFGBCK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PIJBHIFGBCK>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PIJBHIFGBCK>__ctor__);
  ppSVar1 = &(__this->fields).IBBJADAIGIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_01,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar2 = __this_01;
  thunk_FUN_01c20e04(ppUVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static void UpdateResolutionImage(ResolutionImage IEPECMCLKJB, string LAPLEHPNADJ, string MAFOJGJOMLG)  [RVA 0x3590264]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$UpdateResolutionImage @ RVA 0x3590264

void Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
               (Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *LAPLEHPNADJ,
               System_String_o *MAFOJGJOMLG,MethodInfo *method)

{
  undefined4 uVar1;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568d71 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14103/*"UI/Textures/BP/"*/);
    FUN_01bab630(&StringLiteral_22352/*"{0}.{1}"*/);
    DAT_04568d71 = 1;
  }
  if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14103/*"UI/Textures/BP/"*/._4_4_;
    (IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14103/*"UI/Textures/BP/"*/;
    (IEPECMCLKJB->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(IEPECMCLKJB->fields).super.m_PixelsPerUnitMultiplier);
                    /* try { // try from 036902d4 to 037902fb has its CatchHandler @ 03690510 */
    CJNHFNHJHPE = System_String__Format
                            (StringLiteral_22352/*"{0}.{1}"*/,(Il2CppObject *)LAPLEHPNADJ,
                             (Il2CppObject *)MAFOJGJOMLG,(MethodInfo *)0x0);
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh()  [RVA 0x3590300]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$Refresh @ RVA 0x3590300

void Nekki_SF2_GUI_Profile_BattlePassPanel__Refresh
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  EGMONPGHHDP_o *pEVar4;
  RaidConfig_CKEMIAEPGKD_o *pJVar5;
  Il2CppObject *arg0;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this_00;
  System_Action_o *pSVar6;
  PlayerData_o *__this_01;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  SFButton_o *pSVar8;
  LabelButton_o *pLVar9;
  UnityEngine_UI_ScrollRect_o *pUVar10;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar11;
  RaidConfig_CKEMIAEPGKD_o **ppJVar12;
  Nekki_SF2_GUI_LabelAlias_o *pNVar13;
  UnityEngine_Color_o UVar14;
  int local_34;
  
  if ((DAT_04568d72 & 1) == 0) {
                    /* try { // try from 03690330 to 03790357 has its CatchHandler @ 0369050c */
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IHNJMFAEDMH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_PGMEJIGDFIK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_POIOFMEMHBP__);
                    /* try { // try from 03690374 to 0379037b has its CatchHandler @ 03690508 */
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
                    /* try { // try from 0369037c to 037904db has its CatchHandler @ 0369011c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&StringLiteral_3324/*"BP_LevelValue{{{0}}}"*/);
    FUN_01bab630(&StringLiteral_3362/*"Background"*/);
    FUN_01bab630(&StringLiteral_7503/*"Info"*/);
    FUN_01bab630(&StringLiteral_3577/*"Btn_Buy_Pass"*/);
    FUN_01bab630(&StringLiteral_3578/*"Btn_Claim_Reward"*/);
    DAT_04568d72 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar4 == (EGMONPGHHDP_o *)0x0) goto LAB_0369089c;
  pJVar5 = EGMONPGHHDP__OKBKFJKEAAG(pEVar4,(MethodInfo *)0x0);
  ppJVar12 = &(__this->fields).CNFIAJGCJBC;
  *ppJVar12 = pJVar5;
  thunk_FUN_01c20e04(ppJVar12,pJVar5);
  if (*ppJVar12 == (RaidConfig_CKEMIAEPGKD_o *)0x0) goto LAB_0369089c;
  Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
            ((__this->fields)._bg,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3362/*"Background"*/,in_x3);
  pSVar8 = (__this->fields)._infoButton;
  if ((pSVar8 == (SFButton_o *)0x0) || (*ppJVar12 == (RaidConfig_CKEMIAEPGKD_o *)0x0))
  goto LAB_0369089c;
  pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)(pSVar8->fields).super.super.m_TargetGraphic;
  if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03690480:
    pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((pNVar11->klass->_2).naturalAligment < bVar1) goto LAB_03690480;
    if ((pNVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_7503/*"Info"*/,in_x3);
  pLVar9 = (__this->fields)._btnBuyPass;
  if ((pLVar9 == (LabelButton_o *)0x0) || (*ppJVar12 == (RaidConfig_CKEMIAEPGKD_o *)0x0))
  goto LAB_0369089c;
  pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)
            (pLVar9->fields).super.super.super.super.m_TargetGraphic;
  if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_036904e0:
                    /* try { // try from 036904e0 to 037904e3 has its CatchHandler @ 03690500 */
    pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
                    /* try { // try from 036904e4 to 037904e7 has its CatchHandler @ 036904fc */
  }
  else {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
                    /* try { // try from 036904dc to 037904df has its CatchHandler @ 03690504 */
    if ((pNVar11->klass->_2).naturalAligment < bVar1) goto LAB_036904e0;
                    /* try { // try from 036904e8 to 037904eb has its CatchHandler @ 0369011c */
                    /* try { // try from 036904ec to 037904ef has its CatchHandler @ 036904f8 */
                    /* try { // try from 036904f0 to 0379051f has its CatchHandler @ 0369011c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036904ec with catch @ 036904f8
                        */
    if ((pNVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036904e4 with catch @ 036904fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036904e0 with catch @ 03690500
                        */
  Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3577/*"Btn_Buy_Pass"*/,in_x3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036904dc with catch @ 03690504
                        */
  pLVar9 = (__this->fields)._btnGetReward;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03690374 with catch @ 03690508
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03690330 with catch @ 0369050c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036902d4 with catch @ 03690510
                        */
  if ((pLVar9 == (LabelButton_o *)0x0) || (*ppJVar12 == (RaidConfig_CKEMIAEPGKD_o *)0x0))
  goto LAB_0369089c;
  pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)
            (pLVar9->fields).super.super.super.super.m_TargetGraphic;
                    /* try { // try from 03690520 to 03790523 has its CatchHandler @ 0369053c */
  if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_03690540:
    pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03690520 with catch @ 0369053c */
    if ((pNVar11->klass->_2).naturalAligment < bVar1) goto LAB_03690540;
    if ((pNVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      pNVar11 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3578/*"Btn_Claim_Reward"*/,in_x3);
  pNVar13 = (__this->fields)._levelLabel;
  pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar4 != (EGMONPGHHDP_o *)0x0) {
                    /* try { // try from 0369057c to 037905a3 has its CatchHandler @ 036905b8 */
    iVar3 = EGMONPGHHDP__APIOBOAFKKN(pEVar4,(MethodInfo *)0x0);
    local_34 = iVar3 + 1;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* try { // try from 036905a4 to 037905af has its CatchHandler @ 0369011c */
                    /* try { // try from 036905b0 to 037905b7 has its CatchHandler @ 036905b8 */
    CJNHFNHJHPE = System_String__Format(StringLiteral_3324/*"BP_LevelValue{{{0}}}"*/,arg0,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369057c with catch @ 036905b8
                       catch(type#2 @ 00000000) { ... } // from try @ 036905b0 with catch @ 036905b8
                        */
    if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._progressBar;
      if (__this_00 != (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *)0x0) {
        Nekki_SF2_GUI_Profile_ProgressBarBattlePass__Init(__this_00,(MethodInfo *)0x0);
        pJVar5 = (__this->fields).CNFIAJGCJBC;
        if (pJVar5 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
          pLVar9 = (__this->fields)._btnBuyPass;
          UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).POLMCBLGCFH,(MethodInfo *)0x0);
          if (pLVar9 != (LabelButton_o *)0x0) {
            LabelButton__set_Color(pLVar9,UVar14,(MethodInfo *)0x0);
            pJVar5 = (__this->fields).CNFIAJGCJBC;
            if (pJVar5 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
              pLVar9 = (__this->fields)._btnGetReward;
              UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).MNHCNNMLFNO,(MethodInfo *)0x0);
              if (pLVar9 != (LabelButton_o *)0x0) {
                LabelButton__set_Color(pLVar9,UVar14,(MethodInfo *)0x0);
                pJVar5 = (__this->fields).CNFIAJGCJBC;
                if (pJVar5 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
                  pNVar13 = (__this->fields)._levelLabel;
                  UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).KMMIHCHCNDM,(MethodInfo *)0x0);
                  if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar13->klass->vtable)._23_set_color.methodPtr)
                              (UVar14.fields.r,UVar14.fields.g,UVar14.fields.b,UVar14.fields.a,
                               pNVar13,(pNVar13->klass->vtable)._23_set_color.method);
                    pJVar5 = (__this->fields).CNFIAJGCJBC;
                    if (pJVar5 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
                      pNVar13 = (__this->fields)._timeLabel;
                      UVar14 = CFBGPBCDAGA__DJEMAAMAJHF
                                         ((pJVar5->fields).KMMIHCHCNDM,(MethodInfo *)0x0);
                      if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        (*(pNVar13->klass->vtable)._23_set_color.methodPtr)
                                  (UVar14.fields.r,UVar14.fields.g,UVar14.fields.b,UVar14.fields.a,
                                   pNVar13,(pNVar13->klass->vtable)._23_set_color.method);
                        pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                        if (pEVar4 != (EGMONPGHHDP_o *)0x0) {
                          iVar3 = EGMONPGHHDP__JEPAEBOBBMA(pEVar4,(MethodInfo *)0x0);
                          if (iVar3 == -1) {
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                            if (pEVar4 == (EGMONPGHHDP_o *)0x0) goto LAB_0369089c;
                            iVar3 = EGMONPGHHDP__APIOBOAFKKN(pEVar4,(MethodInfo *)0x0);
                          }
                          (__this->fields).KEEBABPJPJK = iVar3;
                          (__this->fields).APPMGPBDDFD = true;
                          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                          pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                          System_Action___ctor();
                          if (pEVar4 != (EGMONPGHHDP_o *)0x0) {
                            EGMONPGHHDP__BKANCKFIINC(pEVar4,pSVar6,(MethodInfo *)0x0);
                            __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                            CJNHFNHJHPE_00 =
                                 (System_Action_IList_PIADCKMDDAK___o *)
                                 thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
                            System_Action<object>___ctor();
                            if (__this_01 != (PlayerData_o *)0x0) {
                              PlayerData__GILENGKAJNN(__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                              pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo)
                              ;
                              System_Action___ctor();
                              if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              Nekki_Utils_GlobalTimer__add_OnTick(pSVar6,(MethodInfo *)0x0);
                              Nekki_SF2_GUI_Profile_BattlePassPanel__MOFLFJLBBBI(__this,method_00);
                              pEVar7 = (__this->fields)._scroller;
                              if (pEVar7 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                                bVar2 = (pEVar7->fields)._PMDFLHCJAGH_k__BackingField;
                                EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData
                                          (pEVar7,0.0,(MethodInfo *)0x0);
                                pEVar7 = (__this->fields)._scroller;
                                iVar3 = (__this->fields).KEEBABPJPJK;
                                pSVar6 = (System_Action_o *)
                                         thunk_FUN_01bda818(System_Action_TypeInfo);
                                System_Action___ctor();
                                if (pEVar7 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)
                                {
                                  EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                                            (pEVar7,iVar3,0.5,0.5,true,0,0.0,pSVar6,0,true,
                                             (MethodInfo *)0x0);
                                  if (bVar2 == false) {
                                    return;
                                  }
                                  pEVar7 = (__this->fields)._scroller;
                                  if ((pEVar7 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)
                                                 0x0) &&
                                     (pUVar10 = (pEVar7->fields).JLLMLMJAKJO,
                                     pUVar10 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
                                    (pUVar10->fields).m_Inertia = true;
                                    iVar3 = (pEVar7->fields).snapTweenType;
                                    (pEVar7->fields).snapTweenType = 0;
                                    EnhancedUI_EnhancedScroller_EnhancedScroller__Snap
                                              (pEVar7,(MethodInfo *)0x0);
                                    pEVar7 = (__this->fields)._scroller;
                                    if (pEVar7 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)
                                                  0x0) {
                                      (pEVar7->fields).snapTweenType = iVar3;
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
            }
          }
        }
      }
    }
  }
LAB_0369089c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void OnDisable()  [RVA 0x3590CD0]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$OnDisable @ RVA 0x3590CD0

void Nekki_SF2_GUI_Profile_BattlePassPanel__OnDisable
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  System_Action_o *pSVar1;
  PlayerData_o *__this_01;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d73 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IAKHIFOFLGO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IHNJMFAEDMH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_POIOFMEMHBP__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d73 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__OGCGKIHNKGK(__this_00,pSVar1,(MethodInfo *)0x0);
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                  thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (PlayerData_o *)0x0) {
      PlayerData__LJDDDMFPMDF(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Utils_GlobalTimer__remove_OnTick(pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowInfo()  [RVA 0x3590E60]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$ShowInfo @ RVA 0x3590E60

void Nekki_SF2_GUI_Profile_BattlePassPanel__ShowInfo
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x44,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IAKHIFOFLGO()  [RVA 0x3590E84]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$IAKHIFOFLGO @ RVA 0x3590E84

void Nekki_SF2_GUI_Profile_BattlePassPanel__IAKHIFOFLGO
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  EGMONPGHHDP_o *__this_00;
  int64_t NFBEBOIDJLL;
  System_Action_o *CJNHFNHJHPE;
  LabelButton_o *pLVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  System_String_o *JONDDIMGADB;
  System_String_o *FCLHIDDAHIJ;
  System_String_o *EFIHACGLMNA;
  MethodInfo *extraout_x1;
  long lVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  undefined8 uVar16;
  
  if ((DAT_04568d74 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_IAKHIFOFLGO__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_13805/*"TimeSecondsShort"*/);
    FUN_01bab630(&StringLiteral_16774/*"bpNotAvailable"*/);
    DAT_04568d74 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 == (EGMONPGHHDP_o *)0x0) goto LAB_03691498;
  NFBEBOIDJLL = EGMONPGHHDP__IEMNJCLKOIP(__this_00,(MethodInfo *)0x0);
  if (NFBEBOIDJLL < 1) {
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnGetReward;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03691498;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar6,false,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnBuyPass;
    if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03691498;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar6,false,(MethodInfo *)0x0);
    DialogsOpener__JNDPLPKDPCP
              (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_16774/*"bpNotAvailable"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,true,true,true,true,
               (MethodInfo *)0x0);
    NFBEBOIDJLL = 0;
  }
  pNVar15 = (__this->fields)._timeLabel;
  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar8 = Method_System_Array_Empty<string>__;
  lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar11 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar11 = *(long *)(lVar8 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01b81620();
  }
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  uVar5 = StringLiteral_13795/*"TimeDaysShort"*/;
  if (pIVar7 != (Il2CppObject *)0x0) {
    pIVar12 = pIVar7->klass;
    uVar16 = **(undefined8 **)(lVar8 + 0xb8);
    uVar1._0_1_ = (pIVar12->_2).rank;
    uVar1._1_1_ = (pIVar12->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
    if (uVar13 != 0) {
      piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
          goto LAB_03691168;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691168:
    pSVar10 = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar8 = Method_System_Array_Empty<string>__;
    lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar11 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar11 = *(long *)(lVar8 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01b81620();
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    uVar5 = StringLiteral_13796/*"TimeHourShort"*/;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar12 = pIVar7->klass;
      uVar16 = **(undefined8 **)(lVar8 + 0xb8);
      uVar2._0_1_ = (pIVar12->_2).rank;
      uVar2._1_1_ = (pIVar12->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
            goto LAB_03691240;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691240:
      JONDDIMGADB = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = Method_System_Array_Empty<string>__;
      lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar11 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar11 = *(long *)(lVar8 + 0x38);
      }
      lVar11 = *(long *)(lVar11 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01b81620();
      }
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      uVar5 = StringLiteral_13800/*"TimeMinuteShort"*/;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar12 = pIVar7->klass;
        uVar16 = **(undefined8 **)(lVar8 + 0xb8);
        uVar3._0_1_ = (pIVar12->_2).rank;
        uVar3._1_1_ = (pIVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar3;
        if (uVar13 != 0) {
          piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
              goto LAB_03691318;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03691318:
        FCLHIDDAHIJ = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
        pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        lVar8 = Method_System_Array_Empty<string>__;
        lVar11 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
        if (lVar11 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<string>__);
          lVar11 = *(long *)(lVar8 + 0x38);
        }
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        uVar5 = StringLiteral_13805/*"TimeSecondsShort"*/;
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar12 = pIVar7->klass;
          uVar16 = **(undefined8 **)(lVar8 + 0xb8);
          uVar4._0_1_ = (pIVar12->_2).rank;
          uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
          uVar13 = (ulong)uVar4;
          if (uVar13 != 0) {
            piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar9 = pIVar12->vtable + (*piVar14 + 0xc);
                goto LAB_036913f8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036913f8:
          EFIHACGLMNA = (System_String_o *)(*pVVar9->methodPtr)(pIVar7,uVar5,uVar16,pVVar9->method);
          pSVar10 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                              (NFBEBOIDJLL,true,true,true,true,true,true,StringLiteral_255/*" : "*/,pSVar10,
                               true,true,true,true,true,JONDDIMGADB,FCLHIDDAHIJ,EFIHACGLMNA,2,
                               (MethodInfo *)0x0);
          if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03691494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                      (pNVar15,pSVar10,(pNVar15->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
  }
LAB_03691498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BuyPass()  [RVA 0x359149C]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$BuyPass @ RVA 0x359149C

void Nekki_SF2_GUI_Profile_BattlePassPanel__BuyPass
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  EGMONPGHHDP_o *__this_01;
  System_Action_BKKPAKHJDKB__o *BLMFLPJJMPF;
  System_Action_o *ENDODGIEMNL;
  
  if ((DAT_04568d75 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_LDKKGOHMOAP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_PNODOPPNPDC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d75 = 1;
  }
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    ENDODGIEMNL = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_01 != (EGMONPGHHDP_o *)0x0) {
      EGMONPGHHDP__ABMEJKFGFAP(__this_01,BLMFLPJJMPF,ENDODGIEMNL,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IHNJMFAEDMH(IList<PIADCKMDDAK> GMCEHJAIFBJ)  [RVA 0x35915C0]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$IHNJMFAEDMH @ RVA 0x35915C0

void Nekki_SF2_GUI_Profile_BattlePassPanel__IHNJMFAEDMH
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *GMCEHJAIFBJ,MethodInfo *method)

{
  bool bVar1;
  EGMONPGHHDP_o *__this_00;
  System_Collections_Generic_IList_PIADCKMDDAK__o *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *__this_01;
  
  if ((DAT_04568d7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7f = 1;
    GMCEHJAIFBJ = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,GMCEHJAIFBJ);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    bVar1 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._btnBuyPass;
    if (__this_01 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void OnDestroy()  [RVA 0x359164C]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$OnDestroy @ RVA 0x359164C

void Nekki_SF2_GUI_Profile_BattlePassPanel__OnDestroy
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EIFHKGFMIEN_c *pEVar1;
  MENMJFHKIDI_c *pMVar2;
  EIFHKGFMIEN_o *pEVar3;
  MENMJFHKIDI_o *__this_00;
  UniRx_CompositeDisposable_o *__this_01;
  MethodInfo *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar4;
  EIFHKGFMIEN_o **ppEVar5;
  MENMJFHKIDI_o **ppMVar6;
  EIFHKGFMIEN_o *source;
  MENMJFHKIDI_o *source_00;
  
  if ((DAT_04568d76 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&MENMJFHKIDI_TypeInfo);
    FUN_01bab630(&Util_TypeInfo);
    DAT_04568d76 = 1;
    method = extraout_x1;
  }
  if (Util_TypeInfo->static_fields->IEGHLFIBMBL != false) {
    return;
  }
  pEVar4 = (__this->fields)._scroller;
  if (pEVar4 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    ppEVar5 = &(pEVar4->fields).scrollerSnapped;
    source = *ppEVar5;
    pEVar3 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo,method);
    EIFHKGFMIEN___ctor(pEVar3,(Il2CppObject *)__this,
                       Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__,(MethodInfo *)0x0)
    ;
    pEVar3 = (EIFHKGFMIEN_o *)
             System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)pEVar3,(MethodInfo *)0x0);
    pEVar1 = EIFHKGFMIEN_TypeInfo;
    if (pEVar3 == (EIFHKGFMIEN_o *)0x0) {
      *ppEVar5 = (EIFHKGFMIEN_o *)0x0;
    }
    else if ((pEVar3->klass != EIFHKGFMIEN_TypeInfo) || (*ppEVar5 = pEVar3, pEVar3->klass != pEVar1)
            ) goto LAB_036917c8;
    thunk_FUN_01c20e04(ppEVar5,pEVar3);
    pEVar4 = (__this->fields)._scroller;
    if (pEVar4 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
      ppMVar6 = &(pEVar4->fields).scrollerScrollingChanged;
      source_00 = *ppMVar6;
      __this_00 = (MENMJFHKIDI_o *)thunk_FUN_01bda818(MENMJFHKIDI_TypeInfo);
      MENMJFHKIDI___ctor(__this_00,(Il2CppObject *)__this,
                         Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__,
                         (MethodInfo *)0x0);
      pEVar3 = (EIFHKGFMIEN_o *)
               System_Delegate__Remove
                         ((System_Delegate_o *)source_00,(System_Delegate_o *)__this_00,
                          (MethodInfo *)0x0);
      pMVar2 = MENMJFHKIDI_TypeInfo;
      if (pEVar3 == (EIFHKGFMIEN_o *)0x0) {
        *ppMVar6 = (MENMJFHKIDI_o *)0x0;
      }
      else if (((MENMJFHKIDI_c *)pEVar3->klass != MENMJFHKIDI_TypeInfo) ||
              (*ppMVar6 = (MENMJFHKIDI_o *)pEVar3, (MENMJFHKIDI_c *)pEVar3->klass != pMVar2)) {
LAB_036917c8:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pEVar3);
      }
      thunk_FUN_01c20e04(ppMVar6,pEVar3);
      __this_01 = (__this->fields).BNAIPPCOGPE;
      if (__this_01 != (UniRx_CompositeDisposable_o *)0x0) {
        UniRx_CompositeDisposable__Dispose(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LDKKGOHMOAP()  [RVA 0x3591800]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$LDKKGOHMOAP @ RVA 0x3591800

void Nekki_SF2_GUI_Profile_BattlePassPanel__LDKKGOHMOAP
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MFJHNBOEHFN(RaidConfig.FNILDHLJBBJ PBDIPLHDHHD, int JLAFGLDIFOC)  [RVA 0x3591820]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$MFJHNBOEHFN @ RVA 0x3591820

void Nekki_SF2_GUI_Profile_BattlePassPanel__MFJHNBOEHFN
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               RaidConfig_FNILDHLJBBJ_o *PBDIPLHDHHD,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  RaidConfig_o *__this_00;
  RaidConfig_ENBCJNLAHAC_o *IOOJAJAPMBM;
  FAIJGJCCKJC_o *__this_01;
  PIJBHIFGBCK_o *__this_02;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_03;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  PIJBHIFGBCK_array *pPVar6;
  System_String_o *str1;
  GameUtils_OPCJEEFOCFB_o local_c0;
  System_String_o *local_90;
  System_String_o *pSStack_88;
  int32_t iStack_80;
  undefined4 uStack_7c;
  System_String_o *pSStack_78;
  bool_conflict local_70;
  undefined7 uStack_6f;
  GameUtils_OPCJEEFOCFB_o local_60;
  
  if ((DAT_04568d77 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1546);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1548);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__);
    FUN_01bab630(&PIJBHIFGBCK_TypeInfo);
    DAT_04568d77 = 1;
  }
  local_60.fields.OAPLLNNEONM = false;
  local_60.fields._33_7_ = 0;
  local_60.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_60.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_60.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_60.fields.ADCKCMDHIHM = 0;
  local_60.fields._20_4_ = 0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((PBDIPLHDHHD != (RaidConfig_FNILDHLJBBJ_o *)0x0) && (__this_00 != (RaidConfig_o *)0x0)) {
    IOOJAJAPMBM = RaidConfig__DIFLKMKBENA
                            (__this_00,(PBDIPLHDHHD->fields).JFDGLPNMELO,false,(MethodInfo *)0x0);
    if (IOOJAJAPMBM == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1545,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1546,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      str1 = (PBDIPLHDHHD->fields).JFDGLPNMELO;
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1547,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1548,
                 (MethodInfo *)0x0);
      str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(pSVar5,str1,str2,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
    FAIJGJCCKJC___ctor(__this_01,IOOJAJAPMBM,(MethodInfo *)0x0);
    GameUtils_OPCJEEFOCFB___ctor(&local_60,(HOOAAGABMBL_o *)__this_01,(MethodInfo *)0x0);
    local_60.fields.OAPLLNNEONM = true;
    pSStack_88 = local_60.fields.KPDPJONADPJ;
    local_90 = local_60.fields.JIJLBFGKNJK;
    pSStack_78 = local_60.fields.GPOEEHGGIII;
    iStack_80 = local_60.fields.ADCKCMDHIHM;
    uStack_7c = local_60.fields._20_4_;
    local_70 = true;
    uStack_6f = local_60.fields._33_7_;
    __this_02 = (PIJBHIFGBCK_o *)thunk_FUN_01bda818(PIJBHIFGBCK_TypeInfo);
    local_c0.fields.KPDPJONADPJ = pSStack_88;
    local_c0.fields.JIJLBFGKNJK = local_90;
    local_c0.fields.GPOEEHGGIII = pSStack_78;
    local_c0.fields.ADCKCMDHIHM = iStack_80;
    local_c0.fields._20_4_ = uStack_7c;
    local_c0.fields.OAPLLNNEONM = local_70;
    local_c0.fields._33_7_ = uStack_6f;
    PIJBHIFGBCK___ctor(__this_02,JLAFGLDIFOC,&local_c0,(MethodInfo *)0x0);
    if (__this_02 != (PIJBHIFGBCK_o *)0x0) {
      *(bool_conflict *)&(__this_02->fields)._BDCFJIKFPMA_k__BackingField =
           (IOOJAJAPMBM->fields).NIHFMGMHLBN;
      lVar2 = Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__;
      __this_03 = (__this->fields).IBBJADAIGIL;
      if (__this_03 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
        pPVar6 = (__this_03->fields)._items;
        (__this_03->fields)._version = (__this_03->fields)._version + 1;
        if (pPVar6 != (PIJBHIFGBCK_array *)0x0) {
          uVar1 = (__this_03->fields)._size;
          if (uVar1 < (uint)pPVar6->max_length) {
            (__this_03->fields)._size = uVar1 + 1;
            pPVar6->m_Items[(int)uVar1] = __this_02;
            thunk_FUN_01c20e04(pPVar6->m_Items + (int)uVar1,__this_02);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void POIOFMEMHBP()  [RVA 0x3591B28]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$POIOFMEMHBP @ RVA 0x3591B28

void Nekki_SF2_GUI_Profile_BattlePassPanel__POIOFMEMHBP
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  EGMONPGHHDP_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  int local_24;
  
  if ((DAT_04568d78 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_3324/*"BP_LevelValue{{{0}}}"*/);
    DAT_04568d78 = 1;
    method = extraout_x1;
  }
  __this_02 = (__this->fields)._levelLabel;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    iVar1 = EGMONPGHHDP__APIOBOAFKKN(__this_00,(MethodInfo *)0x0);
    local_24 = iVar1 + 1;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    CJNHFNHJHPE = System_String__Format(StringLiteral_3324/*"BP_LevelValue{{{0}}}"*/,arg0,(MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._progressBar;
      if (__this_01 != (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *)0x0) {
        Nekki_SF2_GUI_Profile_ProgressBarBattlePass__UpdateProgress(__this_01,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ECIMACJIPAE(EnhancedScroller MLOLBLIGDHM, bool DEELHIOKJMK)  [RVA 0x3591DA8]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$ECIMACJIPAE @ RVA 0x3591DA8

void Nekki_SF2_GUI_Profile_BattlePassPanel__ECIMACJIPAE
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,bool DEELHIOKJMK,
               MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *__this_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *method_00;
  int iVar2;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar4;
  UnityEngine_GameObject_o **ppUVar5;
  UnityEngine_Object_o *x;
  
  method_00 = MLOLBLIGDHM;
  if ((DAT_04568d79 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d79 = 1;
    method_00 = extraout_x1;
  }
  if (!DEELHIOKJMK) {
    if (MLOLBLIGDHM == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03691ed0;
    if ((MLOLBLIGDHM->fields)._PMDFLHCJAGH_k__BackingField == false) {
      if ((__this->fields).APPMGPBDDFD != false) {
        (__this->fields).APPMGPBDDFD = false;
        return;
      }
      pEVar3 = (__this->fields)._scroller;
      if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        if ((pEVar3->fields)._scrollPosition <= 0.0) {
          iVar2 = 0;
        }
        else {
          pSVar4 = (__this->fields).IBBJADAIGIL;
          if (pSVar4 == (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) goto LAB_03691ed0;
          iVar2 = (pSVar4->fields)._size + -1;
        }
        (__this->fields).KEEBABPJPJK = iVar2;
        Nekki_SF2_GUI_Profile_BattlePassPanel__PGMEJIGDFIK(__this,(MethodInfo *)method_00);
        return;
      }
      goto LAB_03691ed0;
    }
  }
  __this_00 = (__this->fields)._btnGetReward;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,false,(MethodInfo *)0x0);
    ppUVar5 = &(__this->fields).BFGECCFLJBM;
    x = (UnityEngine_Object_o *)*ppUVar5;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (*ppUVar5 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(*ppUVar5,false,(MethodInfo *)0x0);
      *ppUVar5 = (UnityEngine_GameObject_o *)0x0;
      thunk_FUN_01c20e04(ppUVar5,0);
      return;
    }
  }
LAB_03691ed0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOFLFJLBBBI()  [RVA 0x35908A0]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$MOFLFJLBBBI @ RVA 0x35908A0

void Nekki_SF2_GUI_Profile_BattlePassPanel__MOFLFJLBBBI
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  RaidConfig_o *pJVar2;
  Il2CppObject *pIVar3;
  RaidConfig_FNILDHLJBBJ_o *GDGBNEPJEOO;
  System_String_o *format;
  EGMONPGHHDP_o *pEVar4;
  RaidConfig_FNILDHLJBBJ_o *pJVar5;
  DDMHMABAHHD_o *FBODAFDBNLH;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *in_x3;
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar8;
  RaidConfig_CKEMIAEPGKD_o *pJVar9;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar10;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar11;
  System_Collections_Generic_List_DDMHMABAHHD__o *pSVar12;
  LabelButton_o *__this_00;
  int index;
  
  if ((DAT_04568d7a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15431/*"[BattlePassPanel.UpdateBattlePassSlots] Unknown reward in Loot container [{0}]"*/);
    FUN_01bab630(&StringLiteral_15430/*"[BattlePassPanel.UpdateBattlePassSlots] Loot container [{0}] not found"*/);
    DAT_04568d7a = 1;
  }
  pSVar8 = (__this->fields).IBBJADAIGIL;
  if (pSVar8 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pJVar9 = (__this->fields).CNFIAJGCJBC;
    if (pJVar9 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
      index = 0;
      while (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
            pSVar10 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
        if ((pSVar10->fields)._size <= index) {
          __this_00 = (__this->fields)._btnBuyPass;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          if ((pEVar4 != (EGMONPGHHDP_o *)0x0) &&
             (bVar1 = EGMONPGHHDP__PJKNOEOGFNM(pEVar4,(MethodInfo *)0x0),
             __this_00 != (LabelButton_o *)0x0)) {
            UnityEngine_UI_Selectable__set_interactable
                      ((UnityEngine_UI_Selectable_o *)__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0
                      );
            return;
          }
          break;
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        pJVar9 = (__this->fields).CNFIAJGCJBC;
        if ((((pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) ||
             (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
             pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
            (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                 Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                                ), pIVar3 == (Il2CppObject *)0x0)) ||
           (pJVar2 == (RaidConfig_o *)0x0)) break;
        GDGBNEPJEOO = RaidConfig__OJOIAONADNG(pJVar2,pIVar3[1].monitor,(MethodInfo *)0x0);
        if (GDGBNEPJEOO == (RaidConfig_FNILDHLJBBJ_o *)0x0) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          pJVar9 = (__this->fields).CNFIAJGCJBC;
          if (((pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) ||
              (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
              pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
             ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                   Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                                  ), pIVar3 == (Il2CppObject *)0x0 ||
              (args == (System_Object_array *)0x0)))) break;
          pIVar3 = pIVar3[1].monitor;
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar6 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar6 == 0
             )) {
LAB_03690cc4:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)args->max_length == 0) {
LAB_03690cc0:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items,pIVar3);
          format = StringLiteral_15430/*"[BattlePassPanel.UpdateBattlePassSlots] Loot container [{0}] not found"*/;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            format = StringLiteral_15430/*"[BattlePassPanel.UpdateBattlePassSlots] Loot container [{0}] not found"*/;
          }
LAB_03690ad4:
          UnityEngine_Debug__LogErrorFormat(format,args,(MethodInfo *)0x0);
        }
        else {
          pSVar11 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
          if (pSVar11 ==
              (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0) break;
          if ((pSVar11->fields)._size < 1) {
            pSVar12 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
            if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
            if ((pSVar12->fields)._size < 1) {
              args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
              pJVar9 = (__this->fields).CNFIAJGCJBC;
              if ((((pJVar9 != (RaidConfig_CKEMIAEPGKD_o *)0x0) &&
                   (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
                   pSVar10 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) &&
                  (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                       Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                                      ), pIVar3 != (Il2CppObject *)0x0)) &&
                 (args != (System_Object_array *)0x0)) {
                pIVar3 = pIVar3[1].monitor;
                if ((pIVar3 != (Il2CppObject *)0x0) &&
                   (lVar6 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class),
                   lVar6 == 0)) goto LAB_03690cc4;
                if ((int)args->max_length == 0) goto LAB_03690cc0;
                args->m_Items[0] = pIVar3;
                thunk_FUN_01c20e04(args->m_Items,pIVar3);
                format = StringLiteral_15431/*"[BattlePassPanel.UpdateBattlePassSlots] Unknown reward in Loot container [{0}]"*/;
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  format = StringLiteral_15431/*"[BattlePassPanel.UpdateBattlePassSlots] Unknown reward in Loot container [{0}]"*/;
                }
                goto LAB_03690ad4;
              }
              break;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
            if (pEVar4 == (EGMONPGHHDP_o *)0x0) break;
            bVar1 = EGMONPGHHDP__OEGMLDDKCLA(pEVar4,GDGBNEPJEOO,(MethodInfo *)0x0);
            if (bVar1) {
              if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
              pJVar9 = (__this->fields).CNFIAJGCJBC;
              if (((pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) ||
                  (pSVar10 = (pJVar9->fields).GPNNHMIJLGL,
                  pSVar10 == (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) ||
                 ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar10,index,
                                       Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                                      ), pIVar3 == (Il2CppObject *)0x0 ||
                  (pJVar2 == (RaidConfig_o *)0x0)))) break;
              pJVar5 = RaidConfig__OJOIAONADNG
                                 (pJVar2,(System_String_o *)pIVar3[2].klass,(MethodInfo *)0x0);
              if (pJVar5 == (RaidConfig_FNILDHLJBBJ_o *)0x0) goto LAB_03690ba4;
              pSVar11 = (pJVar5->fields).BAPMMGFEIDM;
              if (pSVar11 ==
                  (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
              break;
              GDGBNEPJEOO = pJVar5;
              if (0 < (pSVar11->fields)._size) goto LAB_03690a4c;
              pSVar12 = (pJVar5->fields).GFBNJPMOEKD;
              if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
              if ((pSVar12->fields)._size < 1) goto LAB_03690ae0;
            }
            else {
LAB_03690ba4:
              pSVar12 = (GDGBNEPJEOO->fields).GFBNJPMOEKD;
              if (pSVar12 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) break;
            }
            FBODAFDBNLH = (DDMHMABAHHD_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar12,0,
                                     Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__)
            ;
            Nekki_SF2_GUI_Profile_BattlePassPanel__OOGBJMINHEC(__this,FBODAFDBNLH,index,in_x3);
          }
          else {
LAB_03690a4c:
            Nekki_SF2_GUI_Profile_BattlePassPanel__MFJHNBOEHFN(__this,GDGBNEPJEOO,index,in_x3);
          }
        }
LAB_03690ae0:
        pJVar9 = (__this->fields).CNFIAJGCJBC;
        index = index + 1;
        if (pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OOGBJMINHEC(DDMHMABAHHD FBODAFDBNLH, int JLAFGLDIFOC)  [RVA 0x3592030]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$OOGBJMINHEC @ RVA 0x3592030

void Nekki_SF2_GUI_Profile_BattlePassPanel__OOGBJMINHEC
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,DDMHMABAHHD_o *FBODAFDBNLH,
               int32_t JLAFGLDIFOC,MethodInfo *method)

{
  uint uVar1;
  System_ValueTuple_object__int__o key;
  long lVar2;
  bool bVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  PIJBHIFGBCK_o *__this_00;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_01;
  MethodInfo_2BCEB60 *in_x4;
  PIJBHIFGBCK_array *pPVar7;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o
  *__this_02;
  System_ValueTuple_object__int__o __this_03;
  GameUtils_OPCJEEFOCFB_o local_c0;
  Il2CppObject local_90;
  int32_t iStack_80;
  undefined4 uStack_7c;
  System_String_o *pSStack_78;
  bool_conflict local_70;
  undefined7 uStack_6f;
  GameUtils_OPCJEEFOCFB_o local_60;
  
  if ((DAT_04568d7b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1550);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1551);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1552);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&PIJBHIFGBCK_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_int>__ctor__);
    DAT_04568d7b = 1;
  }
  local_60.fields.OAPLLNNEONM = false;
  local_60.fields._33_7_ = 0;
  local_60.fields.KPDPJONADPJ = (System_String_o *)0x0;
  local_60.fields.JIJLBFGKNJK = (System_String_o *)0x0;
  local_60.fields.GPOEEHGGIII = (System_String_o *)0x0;
  local_60.fields.ADCKCMDHIHM = 0;
  local_60.fields._20_4_ = 0;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (FBODAFDBNLH != (DDMHMABAHHD_o *)0x0) {
    __this_03.fields._8_8_ = (FBODAFDBNLH->fields)._COIPKAKHDFP_k__BackingField;
    __this_02 = GameUtils_TypeInfo->static_fields->MIIIMPBMBKA;
    local_90.klass = (Il2CppClass *)0x0;
    local_90.monitor = (System_String_o *)0x0;
    __this_03.fields.Item1 = &local_90;
    System_ValueTuple<object,_int>___ctor
              (__this_03,
               (Il2CppObject *)(ulong)(uint)(FBODAFDBNLH->fields)._HFPMLGFDOKC_k__BackingField,
               (int32_t)Method_System_ValueTuple<string,_int>__ctor__,in_x4);
    if (__this_02 !=
        (System_Collections_Generic_Dictionary_ValueTuple_string__int___MGNPHCAAEIO_OPCJEEFOCFB__o *
        )0x0) {
      key.fields._8_8_ = local_90.monitor;
      key.fields.Item1 = (Il2CppObject *)local_90.klass;
      bVar3 = System_Collections_Generic_Dictionary<ValueTuple<object,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>__TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,key,
                         &local_60,
                         Method_System_Collections_Generic_Dictionary<ValueTuple<string,_int>,_MGNPHCAAEIO_OPCJEEFOCFB>_TryGetValue__
                        );
      if (bVar3) {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(local_60.fields.JIJLBFGKNJK,(MethodInfo *)0x0);
        if (!bVar3) {
          local_90.monitor = local_60.fields.KPDPJONADPJ;
          local_90.klass = (Il2CppClass *)local_60.fields.JIJLBFGKNJK;
          pSStack_78 = local_60.fields.GPOEEHGGIII;
          iStack_80 = local_60.fields.ADCKCMDHIHM;
          uStack_7c = local_60.fields._20_4_;
          local_70 = local_60.fields.OAPLLNNEONM;
          uStack_6f = local_60.fields._33_7_;
          __this_00 = (PIJBHIFGBCK_o *)thunk_FUN_01bda818(PIJBHIFGBCK_TypeInfo);
          local_c0.fields.KPDPJONADPJ = local_90.monitor;
          local_c0.fields.JIJLBFGKNJK = (System_String_o *)local_90.klass;
          local_c0.fields.GPOEEHGGIII = pSStack_78;
          local_c0.fields.ADCKCMDHIHM = iStack_80;
          local_c0.fields._20_4_ = uStack_7c;
          local_c0.fields.OAPLLNNEONM = local_70;
          local_c0.fields._33_7_ = uStack_6f;
          PIJBHIFGBCK___ctor(__this_00,JLAFGLDIFOC,&local_c0,(MethodInfo *)0x0);
          if (__this_00 != (PIJBHIFGBCK_o *)0x0) {
            *(undefined1 *)&(__this_00->fields)._BDCFJIKFPMA_k__BackingField = 0;
            lVar2 = Method_System_Collections_Generic_List<PIJBHIFGBCK>_Add__;
            __this_01 = (__this->fields).IBBJADAIGIL;
            if (__this_01 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
              pPVar7 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pPVar7 != (PIJBHIFGBCK_array *)0x0) {
                uVar1 = (__this_01->fields)._size;
                if (uVar1 < (uint)pPVar7->max_length) {
                  (__this_01->fields)._size = uVar1 + 1;
                  pPVar7->m_Items[(int)uVar1] = __this_00;
                  thunk_FUN_01c20e04(pPVar7->m_Items + (int)uVar1,__this_00);
                  return;
                }
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)__this_00,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
          goto LAB_03692340;
        }
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1549,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1550,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        str1 = (FBODAFDBNLH->fields)._COIPKAKHDFP_k__BackingField;
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1551,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1552,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat(pSVar6,str1,str2,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_03692340:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetNumberOfCells(EnhancedScroller MLOLBLIGDHM)  [RVA 0x3592344]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetNumberOfCells @ RVA 0x3592344

int32_t Nekki_SF2_GUI_Profile_BattlePassPanel__GetNumberOfCells
                  (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
                  EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,MethodInfo *method)

{
  System_Collections_Generic_List_PIJBHIFGBCK__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = MLOLBLIGDHM;
  auVar2._0_8_ = __this;
  if ((DAT_04568d7c & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Count__);
    DAT_04568d7c = 1;
  }
  pSVar1 = (__this->fields).IBBJADAIGIL;
  if (pSVar1 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void OMIMKNHBAMI(EnhancedScroller MLOLBLIGDHM, int FKPMOBKJAAI, int DHEJIHJMOGL, EnhancedScrollerCellView BDJDEAKFBJF)  [RVA 0x359238C]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$OMIMKNHBAMI @ RVA 0x359238C

void Nekki_SF2_GUI_Profile_BattlePassPanel__OMIMKNHBAMI
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
               EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t FKPMOBKJAAI,
               int32_t DHEJIHJMOGL,
               EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *BDJDEAKFBJF,
               MethodInfo *method)

{
  (__this->fields).KEEBABPJPJK = DHEJIHJMOGL;
  Nekki_SF2_GUI_Profile_BattlePassPanel__PGMEJIGDFIK(__this,(MethodInfo *)MLOLBLIGDHM);
  return;
}


// ===== public void GetAllRewards()  [RVA 0x3592394]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetAllRewards @ RVA 0x3592394

void Nekki_SF2_GUI_Profile_BattlePassPanel__GetAllRewards
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  System_Action_o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d7d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_GNFAMCPHEEC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7d = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__MJPJLODOPOH(__this_00,-1,BLMFLPJJMPF,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PNODOPPNPDC(BKKPAKHJDKB HOKBHLPPCAH)  [RVA 0x3592454]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$PNODOPPNPDC @ RVA 0x3592454

void Nekki_SF2_GUI_Profile_BattlePassPanel__PNODOPPNPDC
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,BKKPAKHJDKB_o *HOKBHLPPCAH,
               MethodInfo *method)

{
  bool bVar1;
  EGMONPGHHDP_o *__this_00;
  BKKPAKHJDKB_o *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *__this_01;
  
  if ((DAT_04568d7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7f = 1;
    HOKBHLPPCAH = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,HOKBHLPPCAH);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    bVar1 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._btnBuyPass;
    if (__this_01 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AFEDLPANHEH(bool CJNHFNHJHPE)  [RVA 0x3592458]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$AFEDLPANHEH @ RVA 0x3592458

void Nekki_SF2_GUI_Profile_BattlePassPanel__AFEDLPANHEH
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AJMCGPMEMFJ(BKLDKOMCOPN HOKBHLPPCAH)  [RVA 0x3592478]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$AJMCGPMEMFJ @ RVA 0x3592478

void Nekki_SF2_GUI_Profile_BattlePassPanel__AJMCGPMEMFJ
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,BKLDKOMCOPN_o *HOKBHLPPCAH,
               MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNFAMCPHEEC()  [RVA 0x3591C1C]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GNFAMCPHEEC @ RVA 0x3591C1C

void Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int DHEJIHJMOGL;
  EGMONPGHHDP_o *pEVar1;
  System_Action_o *OGIPJCNPEOP;
  MethodInfo *extraout_x1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar2;
  
  if ((DAT_04568d7e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_PGMEJIGDFIK__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_12220/*"Something went wrong with battlepass data!"*/);
    DAT_04568d7e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar1 != (EGMONPGHHDP_o *)0x0) {
    DHEJIHJMOGL = EGMONPGHHDP__JEPAEBOBBMA(pEVar1,(MethodInfo *)0x0);
    if (DHEJIHJMOGL == -1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (pEVar1 == (EGMONPGHHDP_o *)0x0) goto LAB_03691da4;
      DHEJIHJMOGL = EGMONPGHHDP__APIOBOAFKKN(pEVar1,(MethodInfo *)0x0);
    }
    if (__this != (Nekki_SF2_GUI_Profile_BattlePassPanel_o *)0x0) {
      (__this->fields).KEEBABPJPJK = DHEJIHJMOGL;
      if (DHEJIHJMOGL == -1) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_12220/*"Something went wrong with battlepass data!"*/,(MethodInfo *)0x0);
      }
      else {
        (__this->fields).APPMGPBDDFD = true;
        pEVar2 = (__this->fields)._scroller;
        OGIPJCNPEOP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pEVar2 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03691da4;
        EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                  (pEVar2,DHEJIHJMOGL,0.5,0.5,true,0,0.0,OGIPJCNPEOP,0,true,(MethodInfo *)0x0);
      }
      pEVar2 = (__this->fields)._scroller;
      if (pEVar2 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
        EnhancedUI_EnhancedScroller_EnhancedScroller__RefreshActiveCellViews
                  (pEVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03691da4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IPEAHAAOFGJ()  [RVA 0x35915C4]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$IPEAHAAOFGJ @ RVA 0x35915C4

void Nekki_SF2_GUI_Profile_BattlePassPanel__IPEAHAAOFGJ
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  EGMONPGHHDP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *__this_01;
  
  if ((DAT_04568d7f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d7f = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    bVar1 = EGMONPGHHDP__PJKNOEOGFNM(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._btnBuyPass;
    if (__this_01 != (LabelButton_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_01,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_BattlePassPanel__GNFAMCPHEEC(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PGMEJIGDFIK()  [RVA 0x3591ED4]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$PGMEJIGDFIK @ RVA 0x3591ED4

void Nekki_SF2_GUI_Profile_BattlePassPanel__PGMEJIGDFIK
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  EGMONPGHHDP_o *__this_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_01;
  EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *x;
  UnityEngine_Component_o *__this_02;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  UnityEngine_GameObject_o **ppUVar4;
  LabelButton_o *__this_03;
  
  if ((DAT_04568d80 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d80 = 1;
    method = extraout_x1;
  }
  __this_03 = (__this->fields)._btnGetReward;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if ((__this_00 == (EGMONPGHHDP_o *)0x0) ||
     (bVar2 = EGMONPGHHDP__LKMGFEDIOAC(__this_00,(__this->fields).KEEBABPJPJK,(MethodInfo *)0x0),
     __this_03 == (LabelButton_o *)0x0)) goto LAB_0369202c;
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_03,bVar2,(MethodInfo *)0x0);
  __this_01 = (__this->fields)._scroller;
  if (__this_01 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_0369202c;
  x = EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellViewAtDataIndex
                (__this_01,(__this->fields).KEEBABPJPJK,(MethodInfo *)0x0);
  if (x == (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) {
LAB_03691fa0:
    x = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_03691fa0;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo) {
      x = (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((x != (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)0x0) &&
     (__this_02 = *(UnityEngine_Component_o **)&x[1].fields.active,
     __this_02 != (UnityEngine_Component_o *)0x0)) {
    pUVar3 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    ppUVar4 = &(__this->fields).BFGECCFLJBM;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
    if (*ppUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(*ppUVar4,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0369202c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GetReward()  [RVA 0x3592498]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetReward @ RVA 0x3592498

void Nekki_SF2_GUI_Profile_BattlePassPanel__GetReward
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t HGIALBGPMAO;
  EGMONPGHHDP_o *__this_00;
  System_Action_o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d81 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_GNFAMCPHEEC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568d81 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  HGIALBGPMAO = (__this->fields).KEEBABPJPJK;
  BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    EGMONPGHHDP__MJPJLODOPOH
              (__this_00,HGIALBGPMAO,BLMFLPJJMPF,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x3592564]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$Init @ RVA 0x3592564

void Nekki_SF2_GUI_Profile_BattlePassPanel__Init
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  int32_t left;
  EIFHKGFMIEN_c *pEVar1;
  MENMJFHKIDI_c *pMVar2;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  EIFHKGFMIEN_o *pEVar4;
  MENMJFHKIDI_o *__this_00;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectOffset_o *__this_01;
  UnityEngine_UI_LayoutGroup_o *__this_02;
  System_Action_Action_BKLDKOMCOPN___o **ppSVar6;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  EIFHKGFMIEN_o **ppEVar7;
  MENMJFHKIDI_o **ppMVar8;
  UnityEngine_RectOffset_o **ppUVar9;
  System_Action_Action_BKLDKOMCOPN___o *addHandler;
  EIFHKGFMIEN_o *a;
  MENMJFHKIDI_o *a_00;
  System_Action_Action_BKLDKOMCOPN___o *removeHandler;
  double dVar10;
  undefined8 in_d1;
  undefined4 uVar11;
  double __x;
  float fVar12;
  UnityEngine_Rect_o UVar13;
  double local_48;
  
  uVar11 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04568d82 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_AJMCGPMEMFJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EIFHKGFMIEN_TypeInfo);
    FUN_01bab630(&MENMJFHKIDI_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<BKLDKOMCOPN>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&UnityEngine_RectOffset_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_DJPPAELDLFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_JAHGJBJHNON__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo);
    DAT_04568d82 = 1;
  }
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  EnhancedUI_EnhancedScroller_EnhancedScroller__set_Delegate
            (pEVar3,(LEPEFNKEJBC_o *)__this,(MethodInfo *)0x0);
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  ppEVar7 = &(pEVar3->fields).scrollerSnapped;
  a = *ppEVar7;
  pEVar4 = (EIFHKGFMIEN_o *)thunk_FUN_01bda818(EIFHKGFMIEN_TypeInfo);
  EIFHKGFMIEN___ctor(pEVar4,(Il2CppObject *)__this,
                     Method_Nekki_SF2_GUI_Profile_BattlePassPanel_OMIMKNHBAMI__,(MethodInfo *)0x0);
  pEVar4 = (EIFHKGFMIEN_o *)
           System_Delegate__Combine
                     ((System_Delegate_o *)a,(System_Delegate_o *)pEVar4,(MethodInfo *)0x0);
  pEVar1 = EIFHKGFMIEN_TypeInfo;
  if (pEVar4 == (EIFHKGFMIEN_o *)0x0) {
    *ppEVar7 = (EIFHKGFMIEN_o *)0x0;
  }
  else if ((pEVar4->klass != EIFHKGFMIEN_TypeInfo) || (*ppEVar7 = pEVar4, pEVar4->klass != pEVar1))
  goto LAB_03692768;
  thunk_FUN_01c20e04(ppEVar7,pEVar4);
  pEVar3 = (__this->fields)._scroller;
  if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_03692aa0;
  ppMVar8 = &(pEVar3->fields).scrollerScrollingChanged;
  a_00 = *ppMVar8;
  __this_00 = (MENMJFHKIDI_o *)thunk_FUN_01bda818(MENMJFHKIDI_TypeInfo);
  MENMJFHKIDI___ctor(__this_00,(Il2CppObject *)__this,
                     Method_Nekki_SF2_GUI_Profile_BattlePassPanel_ECIMACJIPAE__,(MethodInfo *)0x0);
  pEVar4 = (EIFHKGFMIEN_o *)
           System_Delegate__Combine
                     ((System_Delegate_o *)a_00,(System_Delegate_o *)__this_00,(MethodInfo *)0x0);
  pMVar2 = MENMJFHKIDI_TypeInfo;
  if (pEVar4 == (EIFHKGFMIEN_o *)0x0) {
    *ppMVar8 = (MENMJFHKIDI_o *)0x0;
  }
  else if (((MENMJFHKIDI_c *)pEVar4->klass != MENMJFHKIDI_TypeInfo) ||
          (*ppMVar8 = (MENMJFHKIDI_o *)pEVar4, (MENMJFHKIDI_c *)pEVar4->klass != pMVar2)) {
LAB_03692768:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pEVar4);
  }
  thunk_FUN_01c20e04(ppMVar8,pEVar4);
  pEVar3 = (__this->fields)._scroller;
  if (((pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) ||
      (pUVar5 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pEVar3,(MethodInfo *)0x0),
      pUVar5 == (UnityEngine_RectTransform_o *)0x0)) ||
     (pUVar5->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03692aa0;
  UVar13 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
  if (DAT_04561501 == '\0') {
    FUN_01bab630(0xc3d68000,CONCAT44(uVar11,UVar13.fields.m_YMin),UVar13.fields.m_Width,
                 UVar13.fields.m_Height,&System_Math_TypeInfo);
    DAT_04561501 = '\x01';
  }
  fVar12 = (UVar13.fields.m_Width + -429.0) * 0.5;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __x = (double)fVar12;
  dVar10 = modf(__x,&local_48);
  if (0.0 <= fVar12) {
    if (dVar10 == 0.5) {
      dVar10 = 1.0;
      goto LAB_0369284c;
    }
    local_48 = (double)(long)(__x + 0.5);
  }
  else if (dVar10 == -0.5) {
    dVar10 = -1.0;
LAB_0369284c:
    if (((long)local_48 & 1U) != 0) {
      local_48 = local_48 + dVar10;
    }
  }
  else {
    local_48 = (double)(long)(__x + -0.5);
  }
  pEVar3 = (__this->fields)._scroller;
  left = -0x80000000;
  if (local_48 != INFINITY) {
    left = (int)local_48;
  }
  __this_01 = (UnityEngine_RectOffset_o *)thunk_FUN_01bda818(UnityEngine_RectOffset_TypeInfo);
  UnityEngine_RectOffset___ctor(__this_01,left,left,0,0,(MethodInfo *)0x0);
  if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    ppUVar9 = &(pEVar3->fields).padding;
    *ppUVar9 = __this_01;
    thunk_FUN_01c20e04(ppUVar9,__this_01);
    pEVar3 = (__this->fields)._scroller;
    if ((pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) &&
       (pUVar5 = (pEVar3->fields).EKNAKFAPEGK, pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
      __this_02 = (UnityEngine_UI_LayoutGroup_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar5,
                             Method_UnityEngine_Component_GetComponent<HorizontalOrVerticalLayoutGroup>__
                            );
      pEVar3 = (__this->fields)._scroller;
      if ((pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) &&
         (__this_02 != (UnityEngine_UI_LayoutGroup_o *)0x0)) {
        UnityEngine_UI_LayoutGroup__set_padding
                  (__this_02,(pEVar3->fields).padding,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_0;
        if (addHandler == (System_Action_Action_BKLDKOMCOPN___o *)0x0) {
          if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Action_BKLDKOMCOPN___o *)
                       thunk_FUN_01bda818(System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar6 = &Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_0;
          *ppSVar6 = addHandler;
          thunk_FUN_01c20e04(ppSVar6,addHandler);
        }
        if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_1
        ;
        if (removeHandler == (System_Action_Action_BKLDKOMCOPN___o *)0x0) {
          if ((Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Action_BKLDKOMCOPN___o *)
               thunk_FUN_01bda818(System_Action<Action<BKLDKOMCOPN>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar6 = &Nekki_SF2_GUI_Profile_BattlePassPanel_<>c_TypeInfo->static_fields->__9__27_1;
          *ppSVar6 = removeHandler;
          thunk_FUN_01c20e04(ppSVar6,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           ((System_Action_Action_T___o *)addHandler,
                            (System_Action_Action_T___o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<BKLDKOMCOPN>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
        System_Action<object>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               (source,onNext,
                                Method_UniRx_ObservableExtensions_Subscribe<BKLDKOMCOPN>__);
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        return;
      }
    }
  }
LAB_03692aa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float GetCellViewSize(EnhancedScroller MLOLBLIGDHM, int DHEJIHJMOGL)  [RVA 0x3592AA4]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetCellViewSize @ RVA 0x3592AA4

float Nekki_SF2_GUI_Profile_BattlePassPanel__GetCellViewSize
                (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
                EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
                MethodInfo *method)

{
  return 429.0;
}


// ===== public EnhancedScrollerCellView GetCellView(EnhancedScroller MLOLBLIGDHM, int DHEJIHJMOGL, int FKPMOBKJAAI)  [RVA 0x3592AB0]
// Nekki.SF2.GUI.Profile.BattlePassPanel$$GetCellView @ RVA 0x3592AB0

EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *
Nekki_SF2_GUI_Profile_BattlePassPanel__GetCellView
          (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,
          EnhancedUI_EnhancedScroller_EnhancedScroller_o *MLOLBLIGDHM,int32_t DHEJIHJMOGL,
          int32_t FKPMOBKJAAI,MethodInfo *method)

{
  byte bVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *__this_01;
  BCOICIIDFPD_o *IMMNELPBGIF;
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_02;
  
  if ((DAT_04568d83 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo,MLOLBLIGDHM,DHEJIHJMOGL,
                 FKPMOBKJAAI);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Item__);
    DAT_04568d83 = 1;
  }
  __this_00 = (__this->fields)._scroller;
  if (__this_00 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *)
                EnhancedUI_EnhancedScroller_EnhancedScroller__GetCellView
                          (__this_00,
                           (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)
                           (__this->fields)._cellPrefab,(MethodInfo *)0x0);
    __this_02 = (__this->fields).IBBJADAIGIL;
    if ((__this_02 != (System_Collections_Generic_List_PIJBHIFGBCK__o *)0x0) &&
       (IMMNELPBGIF = (BCOICIIDFPD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,DHEJIHJMOGL,
                                 Method_System_Collections_Generic_List<PIJBHIFGBCK>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_BattlePassRewardCell_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         (((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
           (Il2CppClass *)Nekki_SF2_GUI_Profile_BattlePassRewardCell_TypeInfo &&
          (Nekki_SF2_GUI_Dialogs_BaseRewardCell__SetData
                     ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *)__this_01,IMMNELPBGIF,
                      (MethodInfo *)0x0), IMMNELPBGIF != (BCOICIIDFPD_o *)0x0)))) {
        Nekki_SF2_GUI_Profile_BattlePassRewardCell__EnableProbability
                  (__this_01,*(bool *)&IMMNELPBGIF[1].klass,(MethodInfo *)0x0);
        return (EnhancedUI_EnhancedScroller_EnhancedScrollerCellView_o *)__this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

