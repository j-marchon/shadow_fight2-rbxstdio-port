// Nekki.SF2.GUI.Profile.ProgressBarBattlePass$$Init @ RVA 0x33CB22C

void Nekki_SF2_GUI_Profile_ProgressBarBattlePass__Init
               (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar1;
  ProgressBar_o *pPVar2;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_o *pJVar3;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  JMDPBFOCHHP_JMEJFGKJNEA_o *pJVar5;
  JMDPBFOCHHP_CKEMIAEPGKD_o **ppJVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Color_o UVar8;
  
  if ((DAT_04567e28 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_10523);
    FUN_01bab630(&StringLiteral_10522);
    DAT_04567e28 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (__this_00 != (EGMONPGHHDP_o *)0x0) {
    pJVar1 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
    ppJVar6 = &(__this->fields).CNFIAJGCJBC;
    *ppJVar6 = pJVar1;
    thunk_FUN_01c20e04(ppJVar6,pJVar1);
    pPVar2 = (__this->fields)._barPoints;
    if (pPVar2 != (ProgressBar_o *)0x0) {
      (*(pPVar2->klass->vtable)._6_Init.methodPtr)(pPVar2,(pPVar2->klass->vtable)._6_Init.method);
      pPVar2 = (__this->fields)._barPoints;
      if ((pPVar2 != (ProgressBar_o *)0x0) && (*ppJVar6 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
        Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
                  ((pPVar2->fields).super.Background,((*ppJVar6)->fields).KBOFABJIPPD,
                   StringLiteral_10522,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._barPoints;
        if ((pPVar2 != (ProgressBar_o *)0x0) && (*ppJVar6 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
                    /* try { // try from 034cb314 to 035cb33b has its CatchHandler @ 034cb52c */
          Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
                    ((pPVar2->fields).Stripe,((*ppJVar6)->fields).KBOFABJIPPD,StringLiteral_10523,
                     (MethodInfo *)0x0);
          __this_02 = (__this->fields)._currencyIcon;
          __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if ((((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
               (pJVar5 = (pJVar3->fields)._NFFDCNIMBHK_k__BackingField,
               pJVar5 != (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0)) && (__this_01 != (JMDPBFOCHHP_o *)0x0))
             && ((pJVar4 = JMDPBFOCHHP__BHJOLIJDBLO
                                     (__this_01,(pJVar5->fields).PPFEFPPPLOA,(MethodInfo *)0x0),
                 pJVar4 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0 &&
                 (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)))) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,(pJVar4->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
            pJVar1 = (__this->fields).CNFIAJGCJBC;
                    /* try { // try from 034cb370 to 035cb397 has its CatchHandler @ 034cb528 */
            if (pJVar1 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
              pNVar7 = (__this->fields)._infoPoints;
              UVar8 = CFBGPBCDAGA__DJEMAAMAJHF((pJVar1->fields).DPNFGBFFNAJ,(MethodInfo *)0x0);
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
                          (UVar8.fields.r,UVar8.fields.g,UVar8.fields.b,UVar8.fields.a,pNVar7,
                           (pNVar7->klass->vtable)._23_set_color.method);
                pPVar2 = (__this->fields)._barPoints;
                if (pPVar2 != (ProgressBar_o *)0x0) {
                  (*(pPVar2->klass->vtable)._6_Init.methodPtr)
                            (pPVar2,(pPVar2->klass->vtable)._6_Init.method);
                  pPVar2 = (__this->fields)._barPoints;
                  if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* try { // try from 034cb3b8 to 035cb3bb has its CatchHandler @ 034cb524 */
                    (*(pPVar2->klass->vtable)._11_SetValueBorders.methodPtr)
                              (0,0x3f800000,pPVar2,
                               (pPVar2->klass->vtable)._11_SetValueBorders.method);
                    /* try { // try from 034cb3cc to 035cb3d3 has its CatchHandler @ 034cb514 */
                    /* try { // try from 034cb3d4 to 035cb4eb has its CatchHandler @ 034cb0dc */
                    Nekki_SF2_GUI_Profile_ProgressBarBattlePass__UpdateProgress(__this,method_00);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

