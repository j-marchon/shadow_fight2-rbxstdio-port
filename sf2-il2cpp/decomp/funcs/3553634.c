// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$FEAKOMACIGA @ RVA 0x3553634

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__FEAKOMACIGA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *pNVar2;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar3;
  int iVar4;
  bool bVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_o *pSVar7;
  int32_t MEHNIFHLHOM;
  MethodInfo *extraout_x1;
  int32_t IHEPHBIPLPM;
  int32_t iVar8;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar9;
  SFButton_o *pSVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  System_String_o *pSVar12;
  System_String_o *str0;
  UnityEngine_Color_o UVar13;
  int local_34;
  
  if ((DAT_04568b55 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_21829);
    FUN_01bab630(&StringLiteral_1144);
    FUN_01bab630(&StringLiteral_17869);
    FUN_01bab630(&StringLiteral_18063);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10928);
    DAT_04568b55 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).DICNIMJBGML !=
      (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0) {
    pNVar9 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pNVar9 = (__this->fields)._playerPosProgress;
      if ((pNVar9 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pSVar10 = (__this->fields)._progressHintButton;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pSVar10,(MethodInfo *)0x0);
      if (bVar5) {
        pSVar10 = (__this->fields)._progressHintButton;
        if ((pSVar10 == (SFButton_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      }
    }
    pNVar11 = (__this->fields)._playerPosShiftLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar11,(MethodInfo *)0x0);
    if (bVar5) {
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
    }
    pSVar12 = StringLiteral_18063;
    pNVar2 = (__this->fields).DICNIMJBGML;
    pJVar3 = (__this->fields).LLLCBLJMPIH;
    if (pJVar3 == (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)
      goto LAB_03653980;
    }
    else {
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_OIMJFDFDMMM_o *)0x0)
      goto LAB_03653980;
      if ((pNVar2->fields).HHOPNIKFJNE < (pJVar3->fields).AKAGFOOMLFB) {
        return;
      }
    }
    iVar4 = (pNVar2->fields).LFBJGJJBBGE;
    if (iVar4 < 1) {
      return;
    }
    iVar4 = iVar4 - (pNVar2->fields).FPNOLDAJPGK;
    local_34 = iVar4;
    if ((pNVar2->fields).HHOPNIKFJNE < 0) {
      (__this->fields).AOIPPGELMBD = 3;
      pSVar12 = StringLiteral_18063;
    }
    else if (iVar4 == 0) {
      (__this->fields).AOIPPGELMBD = 3;
    }
    else {
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      puVar1 = &StringLiteral_17869;
      if (0 < iVar4) {
        puVar1 = &StringLiteral_21829;
      }
      pSVar12 = (System_String_o *)*puVar1;
      iVar8 = 1;
      if (iVar4 < 1) {
        iVar8 = 2;
      }
      (__this->fields).AOIPPGELMBD = iVar8;
      if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
         pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03653980;
      UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      puVar1 = &StringLiteral_1144;
      if (iVar4 < 1) {
        puVar1 = &StringLiteral_1;
      }
      str0 = (System_String_o *)*puVar1;
      pSVar7 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(str0,pSVar7,(MethodInfo *)0x0);
      if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03653980;
      (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
                (pNVar11,pSVar7,(pNVar11->klass->vtable)._75_set_text.method);
      pNVar11 = (__this->fields)._playerPosShiftLabel;
      if (local_34 < 0) {
        iVar8 = 0xbc;
        MEHNIFHLHOM = 0x3b;
        IHEPHBIPLPM = 0x2a;
      }
      else {
        iVar8 = 0x10;
        MEHNIFHLHOM = 0x45;
        IHEPHBIPLPM = 0x10;
      }
      UVar13 = CFBGPBCDAGA__NFFPCFGDOKG(iVar8,MEHNIFHLHOM,IHEPHBIPLPM,0xff,(MethodInfo *)0x0);
      if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03653980;
      (*(pNVar11->klass->vtable)._23_set_color.methodPtr)
                (UVar13.fields.r,UVar13.fields.g,UVar13.fields.b,UVar13.fields.a,pNVar11,
                 (pNVar11->klass->vtable)._23_set_color.method);
    }
    pNVar9 = (__this->fields)._playerPosProgress;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pNVar9 = (__this->fields)._playerPosProgress;
      pSVar12 = System_String__Concat(StringLiteral_10928,pSVar12,(MethodInfo *)0x0);
      if (pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar9,pSVar12,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._playerPosProgress;
        if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
          return;
        }
      }
LAB_03653980:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

