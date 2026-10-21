// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$AADJLKMEKBF @ RVA 0x32D54FC

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__AADJLKMEKBF
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  bool value;
  Il2CppObject *arg1;
  ProgressBar_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  KEIAEKNFNNA_o *__this_00;
  int64_t CJNHFNHJHPE;
  LabelButton_o *__this_01;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar4;
  OPHDIHJPHDE_o *pOVar5;
  ACHLOMELAJE_o *pAVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o *pSVar8;
  int32_t local_3c;
  int local_38;
  int iStack_34;
  
                    /* try { // try from 033d5508 to 034d550b has its CatchHandler @ 033d5618 */
                    /* try { // try from 033d5518 to 034d5523 has its CatchHandler @ 033d5630 */
  if ((DAT_04567580 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
                    /* try { // try from 033d5528 to 034d5533 has its CatchHandler @ 033d5638 */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_474);
                    /* try { // try from 033d5550 to 034d555f has its CatchHandler @ 033d561c */
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_1492);
                    /* try { // try from 033d5564 to 034d556f has its CatchHandler @ 033d5654 */
    FUN_01bab630(&StringLiteral_22458);
    DAT_04567580 = 1;
  }
  local_38 = 0;
  iStack_34 = 0;
  pCVar4 = (__this->fields).PLOJDGGJEKO;
  if (pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    pSVar8 = (pCVar4->fields)._Title_k__BackingField;
    local_3c = (pCVar4->fields)._AdsTargetCount_k__BackingField;
                    /* try { // try from 033d5594 to 034d5597 has its CatchHandler @ 033d5620 */
                    /* try { // try from 033d5598 to 034d55a3 has its CatchHandler @ 033d563c */
    pNVar7 = (__this->fields)._taskTitleLbl;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
                    /* try { // try from 033d55b4 to 034d55b7 has its CatchHandler @ 033d5614 */
                    /* try { // try from 033d55b8 to 034d55c3 has its CatchHandler @ 033d562c */
    pSVar8 = System_String__Format
                       (StringLiteral_22458,(Il2CppObject *)pSVar8,arg1,(MethodInfo *)0x0);
                    /* try { // try from 033d55c8 to 034d55cf has its CatchHandler @ 033d5628 */
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,pSVar8,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._taskProgressBar;
                    /* try { // try from 033d55ec to 034d55ef has its CatchHandler @ 033d5634 */
      if ((pPVar1 != (ProgressBar_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033d55f0 to 034d55fb has its CatchHandler @ 033d5650 */
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pOVar5 = (__this->fields).MPPGJCKPDFD;
        if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
           (pCVar4 = (__this->fields).PLOJDGGJEKO,
           pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0)) {
          iStack_34 = (pOVar5->fields)._PKGCKALOMOF_k__BackingField;
                    /* try { // try from 033d5610 to 034d5613 has its CatchHandler @ 033d5644 */
          local_38 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
                    /* catch() { ... } // from try @ 033d55b4 with catch @ 033d5614
                       try { // try from 033d5614 to 034d566f has its CatchHandler @ 033d5410 */
                    /* catch() { ... } // from try @ 033d5508 with catch @ 033d5618 */
          if (local_38 <= iStack_34) {
            iStack_34 = local_38;
          }
                    /* catch() { ... } // from try @ 033d5550 with catch @ 033d561c */
                    /* catch() { ... } // from try @ 033d5594 with catch @ 033d5620 */
          pPVar1 = (__this->fields)._taskProgressBar;
                    /* catch() { ... } // from try @ 033d54d8 with catch @ 033d5624 */
          if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 033d55c8 with catch @ 033d5628 */
                    /* catch() { ... } // from try @ 033d55b8 with catch @ 033d562c */
                    /* catch() { ... } // from try @ 033d5518 with catch @ 033d5630 */
                    /* catch() { ... } // from try @ 033d55ec with catch @ 033d5634 */
                    /* catch() { ... } // from try @ 033d5528 with catch @ 033d5638 */
            (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,(float)local_38,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
                    /* catch() { ... } // from try @ 033d5598 with catch @ 033d563c */
            pPVar1 = (__this->fields)._taskProgressBar;
                    /* catch() { ... } // from try @ 033d54ec with catch @ 033d5640 */
            if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 033d5610 with catch @ 033d5644 */
                    /* catch() { ... } // from try @ 033d54a4 with catch @ 033d5648 */
                    /* catch() { ... } // from try @ 033d54b4 with catch @ 033d564c */
                    /* catch() { ... } // from try @ 033d55f0 with catch @ 033d5650 */
                    /* catch() { ... } // from try @ 033d5564 with catch @ 033d5654 */
                    /* catch() { ... } // from try @ 033d5478 with catch @ 033d5658 */
              (*(pPVar1->klass->vtable)._8_SetValue.methodPtr)
                        ((float)iStack_34,0,pPVar1,0,(pPVar1->klass->vtable)._8_SetValue.method);
              pNVar7 = (__this->fields)._taskProgressLbl;
                    /* try { // try from 033d5670 to 034d5687 has its CatchHandler @ 033d56dc */
              pSVar8 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
              pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
                    /* try { // try from 033d5688 to 034d56cb has its CatchHandler @ 033d5410 */
              pSVar8 = System_String__Concat(pSVar8,StringLiteral_1492,pSVar3,(MethodInfo *)0x0);
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                          (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                pOVar5 = (__this->fields).MPPGJCKPDFD;
                if (pOVar5 != (OPHDIHJPHDE_o *)0x0) {
                  if ((pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false) {
                    /* try { // try from 033d56cc to 034d56db has its CatchHandler @ 033d56dc */
                    pNVar7 = (__this->fields)._taskRewardValueLbl;
                    /* catch() { ... } // from try @ 033d5670 with catch @ 033d56dc
                       catch() { ... } // from try @ 033d56cc with catch @ 033d56dc */
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d56e0 to 034d56e3 has its CatchHandler @ 033d56ec */
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 033d56e4 to 034d56ef has its CatchHandler @ 033d5410 */
                    /* catch() { ... } // from try @ 033d56e0 with catch @ 033d56ec */
                    if (DAT_04565b7d == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04565b7d = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar6 == (ACHLOMELAJE_o *)0x0) goto LAB_033d586c;
                    pSVar8 = (pAVar6->fields).FAAJGHKHEBI;
                    if (DAT_045661dd == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_045661dd = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
                    if (__this_00 == (KEIAEKNFNNA_o *)0x0) goto LAB_033d586c;
                    CJNHFNHJHPE = KEIAEKNFNNA__JEAINNIBMLG
                                            (__this_00,(__this->fields).PLOJDGGJEKO,
                                             (MethodInfo *)0x0);
                    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo);
                    }
                    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
                    pSVar8 = System_String__Concat
                                       (StringLiteral_2422,pSVar8,StringLiteral_474,pSVar3,
                                        (MethodInfo *)0x0);
                    if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033d586c;
                    (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                              (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                  }
                  pNVar7 = (__this->fields)._taskRewardValueLbl;
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                    pOVar5 = (__this->fields).MPPGJCKPDFD;
                    if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
                       (pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive
                                (pUVar2,(pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false,
                                 (MethodInfo *)0x0);
                      __this_01 = (__this->fields)._btnClaim;
                      if (__this_01 != (LabelButton_o *)0x0) {
                        pUVar2 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                        if (iStack_34 < local_38) {
                          value = false;
                        }
                        else {
                          pOVar5 = (__this->fields).MPPGJCKPDFD;
                          if (pOVar5 == (OPHDIHJPHDE_o *)0x0) goto LAB_033d586c;
                          value = (pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false;
                        }
                        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
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
LAB_033d586c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

