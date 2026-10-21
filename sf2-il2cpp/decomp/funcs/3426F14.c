// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$UpdateBoss @ RVA 0x3426F14

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__UpdateBoss
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,
               int32_t MKNBFGPHPEE,MethodInfo *method)

{
  bool value;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  CNLGMNIEGFG_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  PJKHAJKEHEL_o *pPVar6;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  IIHMKHNLJKD_o *__this_03;
  System_String_o *pSVar7;
  ProgressBar_o *pPVar8;
  System_String_o *str2;
  CHDGOFBHAFI_o *pCVar9;
  UnityEngine_GameObject_o *pUVar10;
  LabelButton_o *pLVar11;
  MethodInfo *method_00;
  System_String_o **ppSVar12;
  ProgressBar_c *pPVar13;
  ProgressLabelButton_o *__this_04;
  OHDDKGHEEPA_o *__this_05;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_06;
  OHDDKGHEEPA_NHCNEOLLGHG_o *pOVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  UnityEngine_Vector2_o UVar18;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Color_o UVar19;
  int32_t local_44;
  
                    /* try { // try from 03526f1c to 03626f1f has its CatchHandler @ 03526f48 */
                    /* try { // try from 03526f20 to 03626f57 has its CatchHandler @ 03526d60 */
  if ((DAT_04568118 & 1) == 0) {
                    /* catch() { ... } // from try @ 03526f1c with catch @ 03526f48 */
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
                    /* try { // try from 03526f58 to 03626f5f has its CatchHandler @ 03526f74 */
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
                    /* try { // try from 03526f60 to 03626f6b has its CatchHandler @ 03526d60 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03526f6c to 03626f73 has its CatchHandler @ 03526f74 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03526f58 with catch @ 03526f74
                       catch(type#2 @ 00000000) { ... } // from try @ 03526f6c with catch @ 03526f74
                        */
                    /* try { // try from 03526f78 to 0362704f has its CatchHandler @ 03526f78
                       catch() { ... } // from try @ 03526f78 with catch @ 03526f78
                       catch() { ... } // from try @ 035270ac with catch @ 03526f78
                       catch() { ... } // from try @ 035270d8 with catch @ 03526f78
                       catch() { ... } // from try @ 03527104 with catch @ 03526f78
                       catch() { ... } // from try @ 03527134 with catch @ 03526f78 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    FUN_01bab630(&StringLiteral_10872);
    FUN_01bab630(&StringLiteral_10840);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04568118 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if (LJJOMPLONBH == (KDADMJGPAOM_o *)0x0) goto LAB_03527518;
  iVar3 = (LJJOMPLONBH->fields).IILCHFKCEEH;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
  if (__this_00 == (CNLGMNIEGFG_o *)0x0) {
    return;
  }
  __this_05 = (OHDDKGHEEPA_o *)(__this_00->fields).super.IFJLLGPGMHM;
  if (__this_05 == (OHDDKGHEEPA_o *)0x0) goto LAB_03527518;
  bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03527050 to 03627057 has its CatchHandler @ 035270e8 */
  if (((__this_05->klass->_2).naturalAligment < bVar1) ||
     ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_05);
  }
  pOVar14 = (__this_05->fields)._FHGDHAIAPBG_k__BackingField;
                    /* try { // try from 03527060 to 0362706f has its CatchHandler @ 035270e4 */
  if (pOVar14 == (OHDDKGHEEPA_NHCNEOLLGHG_o *)0x0) {
    OKBIKHHKOEN = (__this_00->fields).super.MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035270a0 to 036270ab has its CatchHandler @ 035270dc */
    pPVar6 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
                    /* try { // try from 035270ac to 036270d3 has its CatchHandler @ 03526f78 */
    if ((pPVar6 == (PJKHAJKEHEL_o *)0x0) ||
       (pNVar4 = (__this->fields)._name, pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    goto LAB_03527518;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,(pPVar6->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03527518;
    ppSVar12 = &(pPVar6->fields).NILOEHGNJNL;
  }
  else {
    pNVar4 = (__this->fields)._name;
    if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03527518;
    Nekki_SF2_GUI_LabelAlias__set_Alias
              (pNVar4,(pOVar14->fields)._DCNDIMPOGJD_k__BackingField,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03527518;
                    /* try { // try from 03527080 to 03627083 has its CatchHandler @ 035270d8 */
    ppSVar12 = &(pOVar14->fields)._AJLFECONJFN_k__BackingField;
  }
                    /* try { // try from 035270d4 to 036270d7 has its CatchHandler @ 035270e0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527080 with catch @ 035270d8
                       try { // try from 035270d8 to 036270ff has its CatchHandler @ 03526f78 */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,*ppSVar12,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035270a0 with catch @ 035270dc
                        */
  __this_06 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._icon;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035270d4 with catch @ 035270e0
                        */
  if (__this_06 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527060 with catch @ 035270e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03527050 with catch @ 035270e8
                        */
    bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03527100 to 03627103 has its CatchHandler @ 03527124 */
                    /* try { // try from 03527104 to 0362712b has its CatchHandler @ 03526f78 */
                    /* catch() { ... } // from try @ 03527100 with catch @ 03527124 */
    if (((bVar1 <= (__this_06->klass->_2).naturalAligment) &&
        ((__this_06->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) &&
       (Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_06,(MethodInfo *)0x0),
       pOVar14 != (OHDDKGHEEPA_NHCNEOLLGHG_o *)0x0)) {
                    /* try { // try from 0352712c to 03627133 has its CatchHandler @ 03527148 */
                    /* try { // try from 03527134 to 0362713f has its CatchHandler @ 03526f78 */
      Nekki_SF2_GUI_ResolutionImageAvatar__SetHighModeScale
                (__this_06,(pOVar14->fields)._BLCPPMPOEHJ_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 03527140 to 03627147 has its CatchHandler @ 03527148 */
      __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_06,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0352712c with catch @ 03527148
                       catch(type#2 @ 00000000) { ... } // from try @ 03527140 with catch @ 03527148
                        */
      __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_06,(MethodInfo *)0x0);
      if ((__this_02 == (UnityEngine_RectTransform_o *)0x0) ||
         (UVar18 = UnityEngine_RectTransform__get_pivot(__this_02,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03527518;
      value_00.fields.y = (pOVar14->fields)._DAJMKNDILJA_k__BackingField;
      value_00.fields.x = UVar18.fields.x;
      UnityEngine_RectTransform__set_pivot(__this_01,value_00,(MethodInfo *)0x0);
    }
  }
  UVar19 = OHDDKGHEEPA__LHDLKKJCILP(__this_05,(MethodInfo *)0x0);
  (__this->fields).PIDNBPCOAOM.fields.r = UVar19.fields.r;
  (__this->fields).PIDNBPCOAOM.fields.g = UVar19.fields.g;
  (__this->fields).PIDNBPCOAOM.fields.b = UVar19.fields.b;
  (__this->fields).PIDNBPCOAOM.fields.a = UVar19.fields.a;
  if ((__this_05->fields)._PLEKIDHFFPB_k__BackingField == false) {
    bVar2 = false;
  }
  else {
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b86 == '\0') {
      FUN_01bab630(&ACHLOMELAJE_TypeInfo);
      DAT_04565b86 = '\x01';
    }
    if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_03 = ACHLOMELAJE_TypeInfo->static_fields->BFJCOMHPDJC;
    if (__this_03 == (IIHMKHNLJKD_o *)0x0) goto LAB_03527518;
    bVar2 = IIHMKHNLJKD__LCLIGIJPCOD(__this_03,StringLiteral_10840,(MethodInfo *)0x0);
  }
  (__this->fields).NGOMPLJHBHH = bVar2;
  iVar3 = OHDDKGHEEPA__MFPFLDMMJII(__this_05,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetBtnFightValueBorders_MS
            (__this,0,(long)(iVar3 * 1000),method);
  local_44 = OHDDKGHEEPA__MFPFLDMMJII(__this_05,(MethodInfo *)0x0);
  pSVar7 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(StringLiteral_10872,pSVar7,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
  fVar15 = (float)(LJJOMPLONBH->fields).IOJIABMGMGB;
  fVar17 = (float)MKNBFGPHPEE / fVar15;
  fVar15 = (float)(LJJOMPLONBH->fields).PDGEHKCPGDK / fVar15;
  if (fVar17 <= fVar15) {
    if (fVar17 < fVar15) {
LAB_03527318:
      pPVar8 = (__this->fields)._bossLifeBar;
      if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
      pPVar13 = pPVar8->klass;
      uVar16 = 0;
      goto LAB_03527328;
    }
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    bVar2 = ProgressBarBase__IsChanging((ProgressBarBase_o *)pPVar8,(MethodInfo *)0x0);
    if (!bVar2) goto LAB_03527318;
  }
  else {
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    bVar2 = ProgressBarBase__IsChanging((ProgressBarBase_o *)pPVar8,(MethodInfo *)0x0);
    if (!bVar2) {
      pPVar8 = (__this->fields)._bossLifeBar;
      if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
      (*(pPVar8->klass->vtable)._8_SetValue.methodPtr)
                ((ulong)(uint)fVar17,0,pPVar8,0,(pPVar8->klass->vtable)._8_SetValue.method);
    }
    pPVar8 = (__this->fields)._bossLifeBar;
    if (pPVar8 == (ProgressBar_o *)0x0) goto LAB_03527518;
    pPVar13 = pPVar8->klass;
    uVar16 = 0x3fc00000;
LAB_03527328:
    (*(pPVar13->vtable)._8_SetValue.methodPtr)
              ((ulong)(uint)fVar15,uVar16,pPVar8,0,(pPVar13->vtable)._8_SetValue.method);
  }
  iVar3 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
  if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = BJFCCEEPHOF__POMAAOILGAL(iVar3,(MethodInfo *)0x0);
  str2 = BJFCCEEPHOF__POMAAOILGAL((LJJOMPLONBH->fields).IOJIABMGMGB,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492,str2,(MethodInfo *)0x0);
  CNLGMNIEGFG__HFNDKACEADO(__this_00,(float)(LJJOMPLONBH->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
  pNVar4 = (__this->fields)._bossLifeValue;
  if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
              (pNVar4,pSVar7,(pNVar4->klass->vtable)._75_set_text.method);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
      bVar2 = OOBBAGLCFPF__IFFNMNFGOII((pCVar9->fields).AABMLCNHHPN,(MethodInfo *)0x0);
      __this_04 = (__this->fields)._btnFight;
      if ((__this_04 != (ProgressLabelButton_o *)0x0) &&
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
        value = !bVar2;
        UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
        pPVar8 = (__this->fields)._bossLifeBar;
        if ((pPVar8 != (ProgressBar_o *)0x0) &&
           (pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar8,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._healthPic;
          if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar10 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._bossLifeValue;
            if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar10 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar10,value,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._finishHimLabel;
              if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (pUVar10 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
                 pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar10,bVar2,(MethodInfo *)0x0);
                pLVar11 = (__this->fields)._btnFinalFight;
                if ((pLVar11 != (LabelButton_o *)0x0) &&
                   (pUVar10 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
                   pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar10,bVar2,(MethodInfo *)0x0);
                  pLVar11 = (__this->fields)._btnExit;
                  if ((pLVar11 != (LabelButton_o *)0x0) &&
                     (pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pLVar11,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
                    method_00 = (MethodInfo *)0x0;
                    UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetTimerVisible
                              (__this,value,method_00);
                    pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                      bVar2 = OOBBAGLCFPF__FLMDOPMDKID
                                        ((pCVar9->fields).AABMLCNHHPN,(MethodInfo *)0x0);
                      if (bVar2) {
                        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetRaidEndedState
                                  (__this,false,method_00);
                      }
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
LAB_03527518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

