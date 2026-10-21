// TypeDefIndex 2690
// Namespace: Nekki.SF2.GUI.Profile
// public class ProgressBarBattlePass : MonoBehaviour
// Fields:
//   private const string BJEDNOAKFIA = "Progressbar_back";
//   private const string EPBIDPDDALO = "Progressbar_stripe";
//   private ProgressBar _barPoints; // 0x20
//   private LabelAlias _infoPoints; // 0x28
//   private ResolutionImage _currencyIcon; // 0x30
//   public float MinValuePercent; // 0x38
//   public float MaxValuePercent; // 0x3C
//   private RaidConfig.CKEMIAEPGKD CNFIAJGCJBC; // 0x40

// ===== public void Init()  [RVA 0x33CB22C]
// Nekki.SF2.GUI.Profile.ProgressBarBattlePass$$Init @ RVA 0x33CB22C

void Nekki_SF2_GUI_Profile_ProgressBarBattlePass__Init
               (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *__this_00;
  RaidConfig_CKEMIAEPGKD_o *pJVar1;
  ProgressBar_o *pPVar2;
  RaidConfig_o *__this_01;
  RaidConfig_o *pJVar3;
  RaidConfig_EFAJBOEHPLJ_o *pJVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  RaidConfig_JMEJFGKJNEA_o *pJVar5;
  RaidConfig_CKEMIAEPGKD_o **ppJVar6;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  UnityEngine_Color_o UVar8;
  
  if ((DAT_04567e28 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_10523/*"Progressbar_stripe"*/);
    FUN_01bab630(&StringLiteral_10522/*"Progressbar_back"*/);
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
      if ((pPVar2 != (ProgressBar_o *)0x0) && (*ppJVar6 != (RaidConfig_CKEMIAEPGKD_o *)0x0)) {
        Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
                  ((pPVar2->fields).super.Background,((*ppJVar6)->fields).KBOFABJIPPD,
                   StringLiteral_10522/*"Progressbar_back"*/,(MethodInfo *)0x0);
        pPVar2 = (__this->fields)._barPoints;
        if ((pPVar2 != (ProgressBar_o *)0x0) && (*ppJVar6 != (RaidConfig_CKEMIAEPGKD_o *)0x0)) {
                    /* try { // try from 034cb314 to 035cb33b has its CatchHandler @ 034cb52c */
          Nekki_SF2_GUI_Profile_BattlePassPanel__UpdateResolutionImage
                    ((pPVar2->fields).Stripe,((*ppJVar6)->fields).KBOFABJIPPD,StringLiteral_10523/*"Progressbar_stripe"*/,
                     (MethodInfo *)0x0);
          __this_02 = (__this->fields)._currencyIcon;
          __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if ((((pJVar3 != (RaidConfig_o *)0x0) &&
               (pJVar5 = (pJVar3->fields)._NFFDCNIMBHK_k__BackingField,
               pJVar5 != (RaidConfig_JMEJFGKJNEA_o *)0x0)) && (__this_01 != (RaidConfig_o *)0x0))
             && ((pJVar4 = RaidConfig__BHJOLIJDBLO
                                     (__this_01,(pJVar5->fields).PPFEFPPPLOA,(MethodInfo *)0x0),
                 pJVar4 != (RaidConfig_EFAJBOEHPLJ_o *)0x0 &&
                 (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)))) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (__this_02,(pJVar4->fields).super.APBICPEOMOM,(MethodInfo *)0x0);
            pJVar1 = (__this->fields).CNFIAJGCJBC;
                    /* try { // try from 034cb370 to 035cb397 has its CatchHandler @ 034cb528 */
            if (pJVar1 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
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


// ===== public void UpdateProgress()  [RVA 0x33CB3E0]
// Nekki.SF2.GUI.Profile.ProgressBarBattlePass$$UpdateProgress @ RVA 0x33CB3E0

void Nekki_SF2_GUI_Profile_ProgressBarBattlePass__UpdateProgress
               (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this,MethodInfo *method)

{
  int index;
  int32_t iVar1;
  int32_t iVar2;
  EGMONPGHHDP_o *pEVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar4;
  Il2CppObject *pIVar5;
  ProgressBar_o *pPVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  RaidConfig_CKEMIAEPGKD_o *pJVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  float fVar10;
  float __this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_24;
  
  if ((DAT_04567e29 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04567e29 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar3 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar3 != (EGMONPGHHDP_o *)0x0) {
    iVar1 = EGMONPGHHDP__CJINGJONNEI(pEVar3,(MethodInfo *)0x0);
    pEVar3 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (pEVar3 != (EGMONPGHHDP_o *)0x0) {
      iVar2 = EGMONPGHHDP__APIOBOAFKKN(pEVar3,(MethodInfo *)0x0);
      pJVar8 = (__this->fields).CNFIAJGCJBC;
      if ((pJVar8 != (RaidConfig_CKEMIAEPGKD_o *)0x0) &&
         (pSVar4 = (pJVar8->fields).GPNNHMIJLGL,
         pSVar4 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) {
        index = iVar2 - (uint)(iVar2 == (pSVar4->fields)._size + -1);
        if (index < 0) {
          fVar12 = 0.0;
        }
        else {
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                             );
          if ((pIVar5 == (Il2CppObject *)0x0) ||
             (pJVar8 = (__this->fields).CNFIAJGCJBC, pJVar8 == (RaidConfig_CKEMIAEPGKD_o *)0x0))
          goto LAB_034cb5b4;
          fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)&pIVar5[1].klass + 4));
        }
        pSVar4 = (pJVar8->fields).GPNNHMIJLGL;
                    /* try { // try from 034cb4ec to 035cb4ef has its CatchHandler @ 034cb520 */
        if ((pSVar4 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) &&
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index + 1,
                                Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_get_Item__
                               ), pIVar5 != (Il2CppObject *)0x0)) {
                    /* try { // try from 034cb4f0 to 035cb4f3 has its CatchHandler @ 034cb51c */
                    /* try { // try from 034cb4f4 to 035cb4f7 has its CatchHandler @ 034cb518 */
          pPVar6 = (__this->fields)._barPoints;
                    /* try { // try from 034cb4f8 to 035cb4fb has its CatchHandler @ 034cb510 */
                    /* try { // try from 034cb4fc to 035cb4ff has its CatchHandler @ 034cb0dc */
          fVar10 = 1.0;
                    /* try { // try from 034cb500 to 035cb503 has its CatchHandler @ 034cb50c */
          fVar11 = (float)NEON_ucvtf(*(undefined4 *)((long)&pIVar5[1].klass + 4));
                    /* try { // try from 034cb504 to 035cb53b has its CatchHandler @ 034cb0dc */
          fVar13 = (float)iVar1 - fVar12;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb500 with catch @ 034cb50c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb4f8 with catch @ 034cb510
                        */
          if ((float)iVar1 < fVar11) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb3cc with catch @ 034cb514
                        */
            fVar10 = (__this->fields).MinValuePercent;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb4f4 with catch @ 034cb518
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb4f0 with catch @ 034cb51c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb4ec with catch @ 034cb520
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb3b8 with catch @ 034cb524
                        */
            fVar10 = fVar10 + (fVar13 * ((__this->fields).MaxValuePercent - fVar10)) /
                              (fVar11 - fVar12);
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb370 with catch @ 034cb528
                        */
          if (pPVar6 != (ProgressBar_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cb314 with catch @ 034cb52c
                        */
                    /* try { // try from 034cb53c to 035cb53f has its CatchHandler @ 034cb558 */
            fVar10 = (float)(*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                                      (fVar10,0,pPVar6,0,(pPVar6->klass->vtable)._8_SetValue.method)
            ;
            pNVar9 = (__this->fields)._infoPoints;
            local_24 = fVar13;
                    /* catch() { ... } // from try @ 034cb53c with catch @ 034cb558 */
            pSVar7 = System_Single__ToString(fVar10,(MethodInfo *)&local_24);
            local_24 = fVar11 - fVar12;
            str2 = System_Single__ToString(__this_00,(MethodInfo *)&local_24);
            pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492/*"/"*/,str2,(MethodInfo *)0x0);
            if (pNVar9 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 034cb598 to 035cb5bf has its CatchHandler @ 034cb5d4 */
              (*(pNVar9->klass->vtable)._75_set_text.methodPtr)
                        (pNVar9,pSVar7,(pNVar9->klass->vtable)._75_set_text.method);
              return;
            }
          }
        }
      }
    }
  }
LAB_034cb5b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33CB5B8]
// Nekki.SF2.GUI.Profile.ProgressBarBattlePass$$.ctor @ RVA 0x33CB5B8

void Nekki_SF2_GUI_Profile_ProgressBarBattlePass___ctor
               (Nekki_SF2_GUI_Profile_ProgressBarBattlePass_o *__this,MethodInfo *method)

{
                    /* try { // try from 034cb5c0 to 035cb5cb has its CatchHandler @ 034cb0dc */
  (__this->fields).MinValuePercent = 0.043;
  (__this->fields).MaxValuePercent = 0.964;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

