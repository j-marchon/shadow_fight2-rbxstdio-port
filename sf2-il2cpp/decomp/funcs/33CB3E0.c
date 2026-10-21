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
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar8;
  Nekki_SF2_GUI_LabelAlias_o *pNVar9;
  float fVar10;
  float __this_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_24;
  
  if ((DAT_04567e29 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__);
    FUN_01bab630(&StringLiteral_1492);
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
      if ((pJVar8 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
         (pSVar4 = (pJVar8->fields).GPNNHMIJLGL,
         pSVar4 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) {
        index = iVar2 - (uint)(iVar2 == (pSVar4->fields)._size + -1);
        if (index < 0) {
          fVar12 = 0.0;
        }
        else {
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar4,index,
                              Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
                             );
          if ((pIVar5 == (Il2CppObject *)0x0) ||
             (pJVar8 = (__this->fields).CNFIAJGCJBC, pJVar8 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0))
          goto LAB_034cb5b4;
          fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)&pIVar5[1].klass + 4));
        }
        pSVar4 = (pJVar8->fields).GPNNHMIJLGL;
                    /* try { // try from 034cb4ec to 035cb4ef has its CatchHandler @ 034cb520 */
        if ((pSVar4 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) &&
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,index + 1,
                                Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Item__
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
            pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492,str2,(MethodInfo *)0x0);
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

