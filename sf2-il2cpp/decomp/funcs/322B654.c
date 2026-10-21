// LevelPlaySample$$BIGMGPLIEOD @ RVA 0x322B654

void LevelPlaySample__BIGMGPLIEOD(LevelPlaySample_o *__this,MethodInfo *method)

{
  System_Action_LevelPlayImpressionData__o *value;
  System_String_o *pSVar1;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o *pUVar2;
  System_Action_LevelPlayAdInfo__o *pSVar3;
  System_Action_LevelPlayAdError__o *pSVar4;
  System_Action_LevelPlayAdInfo__LevelPlayAdError__o *pSVar5;
  System_Action_LevelPlayAdInfo__LevelPlayReward__o *value_00;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o *pUVar6;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *pUVar7;
  MethodInfo *extraout_x1;
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o **ppUVar8;
  Unity_Services_LevelPlay_LevelPlayBannerAd_o **ppUVar9;
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o **ppUVar10;
  
  if ((DAT_04566fb2 & 1) == 0) {
    FUN_01bab630(&System_Action<LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayImpressionData>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayBannerAd_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
    FUN_01bab630(&Method_LevelPlaySample_AAFFIBOCFFH__);
    FUN_01bab630(&Method_LevelPlaySample_ACADPALBDLH__);
    FUN_01bab630(&Method_LevelPlaySample_ADFENJGLAGA__);
    FUN_01bab630(&Method_LevelPlaySample_AKEBGKFCHLO__);
    FUN_01bab630(&Method_LevelPlaySample_BDEGEMGKPMB__);
    FUN_01bab630(&Method_LevelPlaySample_DCKMGPNJNIC__);
    FUN_01bab630(&Method_LevelPlaySample_DJCJNGBFGBG__);
    FUN_01bab630(&Method_LevelPlaySample_ECILFFHDDAJ__);
    FUN_01bab630(&Method_LevelPlaySample_EELEPPJJMFH__);
    FUN_01bab630(&Method_LevelPlaySample_ENJIFGNBJLM__);
    FUN_01bab630(&Method_LevelPlaySample_EPINKADNGPC__);
    FUN_01bab630(&Method_LevelPlaySample_GDHOCPPOOIF__);
    FUN_01bab630(&Method_LevelPlaySample_JGPGLINODDI__);
    FUN_01bab630(&Method_LevelPlaySample_JLGCDMMAGKG__);
    FUN_01bab630(&Method_LevelPlaySample_JMEFCAAMCCI__);
    FUN_01bab630(&Method_LevelPlaySample_KECEJEPBMFI__);
    FUN_01bab630(&Method_LevelPlaySample_KONLJJGHAIG__);
    FUN_01bab630(&Method_LevelPlaySample_LDAEIMDIBFD__);
    FUN_01bab630(&Method_LevelPlaySample_LDBINAOFDCP__);
    FUN_01bab630(&Method_LevelPlaySample_LOKJLKAPLGO__);
    FUN_01bab630(&Method_LevelPlaySample_NHFCBFMKMEF__);
    FUN_01bab630(&Method_LevelPlaySample_NJGIPCEMDAB__);
    FUN_01bab630(&Method_LevelPlaySample_NMDMFDPKILG__);
    FUN_01bab630(&Method_LevelPlaySample_ONLFONNJBPG__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566fb2 = 1;
    method = extraout_x1;
  }
  value = (System_Action_LevelPlayImpressionData__o *)
          thunk_FUN_01bda818(System_Action<LevelPlayImpressionData>_TypeInfo,method);
  System_Action<object>___ctor();
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__add_OnImpressionDataReady(value,(MethodInfo *)0x0);
  pSVar1 = BEIKKEJHIAD__OMBKMANDPBN((MethodInfo *)0x0);
  pUVar2 = (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)
           thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
  Unity_Services_LevelPlay_LevelPlayRewardedAd___ctor
            (pUVar2,pSVar1,(Unity_Services_LevelPlay_LevelPlayRewardedAd_Config_o *)0x0,
             (MethodInfo *)0x0);
  ppUVar8 = &(__this->fields).MHBAPJBAHKL;
  *ppUVar8 = pUVar2;
  thunk_FUN_01c20e04(ppUVar8,pUVar2);
  pUVar2 = *ppUVar8;
  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
           thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
    Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdLoaded(pUVar2,pSVar3,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).MHBAPJBAHKL;
    pSVar4 = (System_Action_LevelPlayAdError__o *)
             thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
    System_Action<object>___ctor();
    if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
      Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdLoadFailed
                (pUVar2,pSVar4,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).MHBAPJBAHKL;
      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
               thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
      System_Action<object>___ctor();
      if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
        Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdDisplayed
                  (pUVar2,pSVar3,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).MHBAPJBAHKL;
        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
                 thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo);
        System_Action<object,_object>___ctor();
        if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
          Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdDisplayFailed
                    (pUVar2,pSVar5,(MethodInfo *)0x0);
          pUVar2 = (__this->fields).MHBAPJBAHKL;
          value_00 = (System_Action_LevelPlayAdInfo__LevelPlayReward__o *)
                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo,_LevelPlayReward>_TypeInfo);
          System_Action<object,_object>___ctor();
          if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
            Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdRewarded
                      (pUVar2,value_00,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).MHBAPJBAHKL;
            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
            System_Action<object>___ctor();
            if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
              Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdClicked
                        (pUVar2,pSVar3,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).MHBAPJBAHKL;
              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                       thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
              System_Action<object>___ctor();
              if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
                Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdClosed
                          (pUVar2,pSVar3,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).MHBAPJBAHKL;
                pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                         thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                System_Action<object>___ctor();
                if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)0x0) {
                  Unity_Services_LevelPlay_LevelPlayRewardedAd__add_OnAdInfoChanged
                            (pUVar2,pSVar3,(MethodInfo *)0x0);
                  pSVar1 = BEIKKEJHIAD__KADBPNJNAND((MethodInfo *)0x0);
                  pUVar6 = (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)
                           thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayBannerAd_TypeInfo);
                  Unity_Services_LevelPlay_LevelPlayBannerAd___ctor
                            (pUVar6,pSVar1,
                             (Unity_Services_LevelPlay_LevelPlayBannerAd_Config_o *)0x0,
                             (MethodInfo *)0x0);
                  ppUVar9 = &(__this->fields).KIAJDAOCCHI;
                  *ppUVar9 = pUVar6;
                  thunk_FUN_01c20e04(ppUVar9,pUVar6);
                  pUVar6 = *ppUVar9;
                  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                           thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                    Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLoaded
                              (pUVar6,pSVar3,(MethodInfo *)0x0);
                    pUVar6 = (__this->fields).KIAJDAOCCHI;
                    pSVar4 = (System_Action_LevelPlayAdError__o *)
                             thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                      Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLoadFailed
                                (pUVar6,pSVar4,(MethodInfo *)0x0);
                      pUVar6 = (__this->fields).KIAJDAOCCHI;
                      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                               thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                      System_Action<object>___ctor();
                      if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                        Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdDisplayed
                                  (pUVar6,pSVar3,(MethodInfo *)0x0);
                        pUVar6 = (__this->fields).KIAJDAOCCHI;
                        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o *)
                                 thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo
                                                  );
                        System_Action<object,_object>___ctor();
                        if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                          Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdDisplayFailed
                                    (pUVar6,pSVar5,(MethodInfo *)0x0);
                          pUVar6 = (__this->fields).KIAJDAOCCHI;
                          pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                   thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                          System_Action<object>___ctor();
                          if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                            Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdClicked
                                      (pUVar6,pSVar3,(MethodInfo *)0x0);
                            pUVar6 = (__this->fields).KIAJDAOCCHI;
                            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                     thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                            System_Action<object>___ctor();
                            if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                              Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdCollapsed
                                        (pUVar6,pSVar3,(MethodInfo *)0x0);
                              pUVar6 = (__this->fields).KIAJDAOCCHI;
                              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                       thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
                              System_Action<object>___ctor();
                              if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                                Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdLeftApplication
                                          (pUVar6,pSVar3,(MethodInfo *)0x0);
                                pUVar6 = (__this->fields).KIAJDAOCCHI;
                                pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                         thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo)
                                ;
                                System_Action<object>___ctor();
                                if (pUVar6 != (Unity_Services_LevelPlay_LevelPlayBannerAd_o *)0x0) {
                                  Unity_Services_LevelPlay_LevelPlayBannerAd__add_OnAdExpanded
                                            (pUVar6,pSVar3,(MethodInfo *)0x0);
                                  pSVar1 = BEIKKEJHIAD__DFNGIMBJFED((MethodInfo *)0x0);
                                  pUVar7 = (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)
                                           thunk_FUN_01bda818(
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo
                                                  );
                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd___ctor
                                            (pUVar7,pSVar1,
                                             (Unity_Services_LevelPlay_LevelPlayInterstitialAd_Config_o
                                              *)0x0,(MethodInfo *)0x0);
                                  ppUVar10 = &(__this->fields).AFFAMBLJIDN;
                                  *ppUVar10 = pUVar7;
                                  thunk_FUN_01c20e04(ppUVar10,pUVar7);
                                  pUVar7 = *ppUVar10;
                                  pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                           thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (pUVar7 != (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                 *)0x0) {
                                    Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdLoaded
                                              (pUVar7,pSVar3,(MethodInfo *)0x0);
                                    pUVar7 = (__this->fields).AFFAMBLJIDN;
                                    pSVar4 = (System_Action_LevelPlayAdError__o *)
                                             thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdError>_TypeInfo);
                                    System_Action<object>___ctor();
                                    if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                      Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdLoadFailed
                                                (pUVar7,pSVar4,(MethodInfo *)0x0);
                                      pUVar7 = (__this->fields).AFFAMBLJIDN;
                                      pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                               thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                        Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdDisplayed
                                                  (pUVar7,pSVar3,(MethodInfo *)0x0);
                                        pUVar7 = (__this->fields).AFFAMBLJIDN;
                                        pSVar5 = (System_Action_LevelPlayAdInfo__LevelPlayAdError__o
                                                  *)thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo,_LevelPlayAdError>_TypeInfo
                                                  );
                                        System_Action<object,_object>___ctor();
                                        if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                          Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdDisplayFailed
                                                    (pUVar7,pSVar5,(MethodInfo *)0x0);
                                          pUVar7 = (__this->fields).AFFAMBLJIDN;
                                          pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                   thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                          System_Action<object>___ctor();
                                          if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                            Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdClicked
                                                      (pUVar7,pSVar3,(MethodInfo *)0x0);
                                            pUVar7 = (__this->fields).AFFAMBLJIDN;
                                            pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                     thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                            System_Action<object>___ctor();
                                            if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                              Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdClosed
                                                        (pUVar7,pSVar3,(MethodInfo *)0x0);
                                              pUVar7 = (__this->fields).AFFAMBLJIDN;
                                              pSVar3 = (System_Action_LevelPlayAdInfo__o *)
                                                       thunk_FUN_01bda818(
                                                  System_Action<LevelPlayAdInfo>_TypeInfo);
                                              System_Action<object>___ctor();
                                              if (pUVar7 != (
                                                  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o
                                                  *)0x0) {
                                                Unity_Services_LevelPlay_LevelPlayInterstitialAd__add_OnAdInfoChanged
                                                          (pUVar7,pSVar3,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

