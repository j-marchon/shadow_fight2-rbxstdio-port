// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$NOLAJAADKAL @ RVA 0x3553C08

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__NOLAJAADKAL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar6;
  SFButton_o *pSVar7;
  UnityEngine_Object_o *x;
  
  if ((DAT_04568b58 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12161);
    DAT_04568b58 = 1;
  }
  if ((__this->fields).DICNIMJBGML ==
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    return;
  }
  pNVar2 = (__this->fields)._bgPic;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pNVar6 = (__this->fields).DICNIMJBGML;
    if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
       (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(pNVar6->fields).HJPOJOPKEKI,(MethodInfo *)0x0);
      pNVar6 = (__this->fields).DICNIMJBGML;
      if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) &&
         (pNVar4 = (__this->fields)._nameText, pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                  (pNVar4,(pNVar6->fields).JIJLBFGKNJK,(pNVar4->klass->vtable)._75_set_text.method);
        pNVar6 = (__this->fields).DICNIMJBGML;
        if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
          pNVar4 = (__this->fields)._points;
          CJNHFNHJHPE = (pNVar6->fields).HHOPNIKFJNE;
          if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                      (pNVar4,pSVar5,(pNVar4->klass->vtable)._75_set_text.method);
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__GGJKMIMPIDJ(__this,method_00);
            (*(__this->klass->vtable)._54_FEAKOMACIGA.methodPtr)
                      (__this,(__this->klass->vtable)._54_FEAKOMACIGA.method);
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__MAFILJNCIFB(__this,method_01);
            pNVar2 = (__this->fields)._playerPosDiff;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._playerPosDiff;
              if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03653ed0;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        (pNVar2,StringLiteral_12161,(MethodInfo *)0x0);
            }
            pNVar2 = (__this->fields)._bgRewardPic;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._bgRewardPic;
              if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pNVar4 = (__this->fields)._noRewardLabel;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar4 = (__this->fields)._noRewardLabel;
              if ((pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pSVar7 = (__this->fields)._chestHintButton;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pSVar7 = (__this->fields)._chestHintButton;
              if ((pSVar7 == (SFButton_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            pNVar2 = (__this->fields)._chestImage;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              pNVar2 = (__this->fields)._chestImage;
              if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653ed0;
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            }
            x = (UnityEngine_Object_o *)(__this->fields)._danP1Root;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pUVar3 = (__this->fields)._danP1Root;
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_03653ed0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

