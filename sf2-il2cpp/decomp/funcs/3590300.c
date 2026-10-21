// Nekki.SF2.GUI.Profile.BattlePassPanel$$Refresh @ RVA 0x3590300

void Nekki_SF2_GUI_Profile_BattlePassPanel__Refresh
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  EGMONPGHHDP_o *pEVar4;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar5;
  Il2CppObject *arg0;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this_00;
  System_Action_o *pSVar6;
  EEGDOGKBLNG_o *__this_01;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE_00;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  SFButton_o *pSVar8;
  LabelButton_o *pLVar9;
  UnityEngine_UI_ScrollRect_o *pUVar10;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar11;
  JMDPBFOCHHP_CKEMIAEPGKD_o **ppJVar12;
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
    FUN_01bab630(&StringLiteral_3324);
    FUN_01bab630(&StringLiteral_3362);
    FUN_01bab630(&StringLiteral_7503);
    FUN_01bab630(&StringLiteral_3577);
    FUN_01bab630(&StringLiteral_3578);
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
  if (*ppJVar12 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) goto LAB_0369089c;
  Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
            ((__this->fields)._bg,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3362,in_x3);
  pSVar8 = (__this->fields)._infoButton;
  if ((pSVar8 == (SFButton_o *)0x0) || (*ppJVar12 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0))
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
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_7503,in_x3);
  pLVar9 = (__this->fields)._btnBuyPass;
  if ((pLVar9 == (LabelButton_o *)0x0) || (*ppJVar12 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0))
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
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3577,in_x3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036904dc with catch @ 03690504
                        */
  pLVar9 = (__this->fields)._btnGetReward;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03690374 with catch @ 03690508
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03690330 with catch @ 0369050c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036902d4 with catch @ 03690510
                        */
  if ((pLVar9 == (LabelButton_o *)0x0) || (*ppJVar12 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0))
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
            (pNVar11,((*ppJVar12)->fields).KBOFABJIPPD,StringLiteral_3578,in_x3);
  pNVar13 = (__this->fields)._levelLabel;
  pEVar4 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar4 != (EGMONPGHHDP_o *)0x0) {
                    /* try { // try from 0369057c to 037905a3 has its CatchHandler @ 036905b8 */
    iVar3 = EGMONPGHHDP__APIOBOAFKKN(pEVar4,(MethodInfo *)0x0);
    local_34 = iVar3 + 1;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
                    /* try { // try from 036905a4 to 037905af has its CatchHandler @ 0369011c */
                    /* try { // try from 036905b0 to 037905b7 has its CatchHandler @ 036905b8 */
    CJNHFNHJHPE = System_String__Format(StringLiteral_3324,arg0,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369057c with catch @ 036905b8
                       catch(type#2 @ 00000000) { ... } // from try @ 036905b0 with catch @ 036905b8
                        */
    if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar13,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._progressBar;
      if (__this_00 != (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *)0x0) {
        Nekki_SF2_GUI_Profile_ProgressBarBattlePass__Init(__this_00,(MethodInfo *)0x0);
        pJVar5 = (__this->fields).CNFIAJGCJBC;
        if (pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
          pLVar9 = (__this->fields)._btnBuyPass;
          UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).POLMCBLGCFH,(MethodInfo *)0x0);
          if (pLVar9 != (LabelButton_o *)0x0) {
            LabelButton__set_Color(pLVar9,UVar14,(MethodInfo *)0x0);
            pJVar5 = (__this->fields).CNFIAJGCJBC;
            if (pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
              pLVar9 = (__this->fields)._btnGetReward;
              UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).MNHCNNMLFNO,(MethodInfo *)0x0);
              if (pLVar9 != (LabelButton_o *)0x0) {
                LabelButton__set_Color(pLVar9,UVar14,(MethodInfo *)0x0);
                pJVar5 = (__this->fields).CNFIAJGCJBC;
                if (pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
                  pNVar13 = (__this->fields)._levelLabel;
                  UVar14 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar5->fields).KMMIHCHCNDM,(MethodInfo *)0x0);
                  if (pNVar13 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar13->klass->vtable)._23_set_color.methodPtr)
                              (UVar14.fields.r,UVar14.fields.g,UVar14.fields.b,UVar14.fields.a,
                               pNVar13,(pNVar13->klass->vtable)._23_set_color.method);
                    pJVar5 = (__this->fields).CNFIAJGCJBC;
                    if (pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
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
                            if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
                              EEGDOGKBLNG__GILENGKAJNN(__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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

