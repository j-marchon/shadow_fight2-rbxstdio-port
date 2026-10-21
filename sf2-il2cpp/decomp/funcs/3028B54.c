// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$AADJLKMEKBF @ RVA 0x3028B54

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AADJLKMEKBF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  UnityEngine_GameObject_o *pUVar5;
  ProgressBar_o *pPVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  BECIPDJBAOG_o *pBVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  JMDPBFOCHHP_EBEGCDCOHHJ_o *pJVar11;
  JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_o *pJVar12;
  BDMABHJEEGD_o *pBVar13;
  int32_t local_34;
  int local_28;
  int iStack_24;
  
  if ((DAT_04565ca3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_2441);
    DAT_04565ca3 = 1;
  }
  local_34 = 0;
  pUVar5 = (__this->fields)._taskLayout;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._noTaskLayout;
    if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_gameObject(pUVar5,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__CCPABLFBFFA(__this,method_00);
      Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__JCJJOLALDGM(__this,method_01);
      pPVar6 = (__this->fields)._taskProgressBar;
      if ((pPVar6 != (ProgressBar_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._bestResultTitleLabel;
        if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          pJVar11 = (__this->fields).MGIFEGEAHOB;
          if ((pJVar11 != (JMDPBFOCHHP_EBEGCDCOHHJ_o *)0x0) &&
             (pJVar12 = (pJVar11->fields).HMAFPGLFDDP,
             pJVar12 != (JMDPBFOCHHP_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0)) {
            uVar3 = (pJVar12->fields).BGHFADDGPAD;
            if ((uVar3 < 0xf) && ((1 << (ulong)(uVar3 & 0x1f) & 0x529aU) != 0)) {
              pPVar6 = (__this->fields)._taskProgressBar;
              if ((pPVar6 == (ProgressBar_o *)0x0) ||
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
                 pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
              UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              pNVar7 = (__this->fields)._bestResultTitleLabel;
              if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
                 pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
              UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
            }
            pBVar13 = (__this->fields).NCJONEIOCML;
            if (pBVar13 != (BDMABHJEEGD_o *)0x0) {
              iVar1 = (pBVar13->fields).OOCPIHHNOBO;
              iVar2 = (pBVar13->fields).CLLIINPOPHO;
              pPVar6 = (__this->fields)._taskProgressBar;
              local_28 = iVar2;
              iStack_24 = iVar1;
              if (pPVar6 != (ProgressBar_o *)0x0) {
                (*(pPVar6->klass->vtable)._11_SetValueBorders.methodPtr)
                          (0,(float)iVar2,pPVar6,(pPVar6->klass->vtable)._11_SetValueBorders.method)
                ;
                pPVar6 = (__this->fields)._taskProgressBar;
                if (pPVar6 != (ProgressBar_o *)0x0) {
                  (*(pPVar6->klass->vtable)._8_SetValue.methodPtr)
                            ((float)iVar1,0,pPVar6,0,(pPVar6->klass->vtable)._8_SetValue.method);
                  if (iVar2 == 1) {
                    pPVar6 = (__this->fields)._taskProgressBar;
                    if ((pPVar6 == (ProgressBar_o *)0x0) ||
                       (pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0),
                       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
                    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                    pNVar7 = (__this->fields)._bestResultTitleLabel;
                    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                       (pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
                       pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03128e3c;
                    UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                  }
                  pNVar7 = (__this->fields)._taskProgressLbl;
                  pSVar8 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
                  pSVar9 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
                  pSVar8 = System_String__Concat(pSVar8,StringLiteral_1492,pSVar9,(MethodInfo *)0x0)
                  ;
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                              (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                    pBVar13 = (__this->fields).NCJONEIOCML;
                    if ((pBVar13 != (BDMABHJEEGD_o *)0x0) &&
                       (pBVar10 = (pBVar13->fields).MJIIHOLHNCK, pBVar10 != (BECIPDJBAOG_o *)0x0)) {
                      pNVar7 = (__this->fields)._taskRewardRatingLbl;
                      bVar4 = BECIPDJBAOG__HMCAGKEIIGO(pBVar10,(MethodInfo *)0x0);
                      pSVar8 = StringLiteral_2441;
                      if (bVar4) {
                        pBVar13 = (__this->fields).NCJONEIOCML;
                        if ((pBVar13 == (BDMABHJEEGD_o *)0x0) ||
                           (pBVar10 = (pBVar13->fields).MJIIHOLHNCK, pBVar10 == (BECIPDJBAOG_o *)0x0
                           )) goto LAB_03128e3c;
                        local_34 = (pBVar10->fields).NLLKMEMKBAF;
                      }
                      else {
                        local_34 = 0;
                      }
                      pSVar9 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                      pSVar8 = System_String__Concat(pSVar8,pSVar9,(MethodInfo *)0x0);
                      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                        method_03 = (pNVar7->klass->vtable)._75_set_text.method;
                        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)(pNVar7,pSVar8);
                        bVar4 = GALHNMPIEHA__OALAPMJJBLJ
                                          ((__this->fields).NCJONEIOCML,(MethodInfo *)0x0);
                        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__SetRefreshButtonVisible
                                  (__this,bVar4,method_03);
                        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__OPLLGEBAFIO(__this,method_02)
                        ;
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
LAB_03128e3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

