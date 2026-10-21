// Nekki.SF2.GUI.Profile.ProfileScene$$TakeAchievementReward @ RVA 0x33955F0

void Nekki_SF2_GUI_Profile_ProfileScene__TakeAchievementReward
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP,
               MethodInfo *method)

{
  bool bVar1;
  FEPPOONJCGI_o *__this_00;
  ACHLOMELAJE_o *pAVar2;
  int64_t iVar3;
  Nekki_SF2_GUI_Menu_MainMenu_o *__this_01;
  KKLJIDJBFEI_o *pKVar4;
  Nekki_SF2_GUI_Profile_AchievementsController_o *pNVar5;
  Nekki_SF2_GUI_Profile_AchievementCell_o *x;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *pNVar6;
  Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *__this_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar7;
  
  if ((DAT_04567c4d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567c4d = 1;
  }
  if (HKCIMMBPDLP == (KMJDCOABCCG_o *)0x0) goto LAB_03495968;
  if ((HKCIMMBPDLP->fields).AHKHDBIDDIH == false) {
    (HKCIMMBPDLP->fields).AHKHDBIDDIH = true;
    KMJDCOABCCG__GEBIJFANLGH(HKCIMMBPDLP,false,(MethodInfo *)0x0);
                    /* try { // try from 03495678 to 0359569b has its CatchHandler @ 03495704 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0349569c to 035956a3 has its CatchHandler @ 03495700 */
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 034956b4 to 035956d3 has its CatchHandler @ 03495708 */
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar7 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar7->fields).IMJJJJJMMHL, __this_00 == (FEPPOONJCGI_o *)0x0))
    goto LAB_03495968;
    FEPPOONJCGI__IMHHMPMNGKB(__this_00,HKCIMMBPDLP,true,true,(MethodInfo *)0x0);
                    /* try { // try from 034956e0 to 035956eb has its CatchHandler @ 034956fc */
    if (0 < (HKCIMMBPDLP->fields).ICOLJMCHFEC) {
                    /* try { // try from 034956ec to 0359571f has its CatchHandler @ 034955e8 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034956e0 with catch @ 034956fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349569c with catch @ 03495700
                        */
      if (DAT_04565b7d == '\0') {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03495678 with catch @ 03495704
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034956b4 with catch @ 03495708
                        */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
                    /* try { // try from 03495720 to 03595737 has its CatchHandler @ 034957b0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 03495738 to 0359579f has its CatchHandler @ 034955e8 */
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (iVar3 = ACHLOMELAJE__IMLCNMCBEEN(pAVar2,(MethodInfo *)0x0), pAVar7 == (ACHLOMELAJE_o *)0x0
         )) goto LAB_03495968;
      ACHLOMELAJE__CEICBEHCCDA
                (pAVar7,iVar3 + (HKCIMMBPDLP->fields).ICOLJMCHFEC,false,(MethodInfo *)0x0);
    }
                    /* try { // try from 034957a0 to 035957af has its CatchHandler @ 034957b0 */
    if (0 < (HKCIMMBPDLP->fields).DBDIDOBPFMC) {
                    /* catch() { ... } // from try @ 03495720 with catch @ 034957b0
                       catch() { ... } // from try @ 034957a0 with catch @ 034957b0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034957b4 to 035957b7 has its CatchHandler @ 034957c0 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 034957b8 to 035957c3 has its CatchHandler @ 034955e8 */
      if (DAT_04565b7d == '\0') {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034957b4 with catch @ 034957c0
                        */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
      }
      else {
        pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
         (iVar3 = ACHLOMELAJE__HEHFNBKGJLP(pAVar2,(MethodInfo *)0x0), pAVar7 == (ACHLOMELAJE_o *)0x0
         )) goto LAB_03495968;
      ACHLOMELAJE__OGPHHGFFKHD
                (pAVar7,iVar3 + (HKCIMMBPDLP->fields).DBDIDOBPFMC,2,false,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CCKIFMALFBA;
    if (__this_01 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_03495968;
    Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(__this_01,(MethodInfo *)0x0);
    EDFDANKEBGF__HKPLJCDJKMB((MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 == (KKLJIDJBFEI_o *)0x0) goto LAB_03495968;
    if ((pKVar4->fields).super._MGGBEPKMPCF_k__BackingField != false) {
      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar4 == (KKLJIDJBFEI_o *)0x0) goto LAB_03495968;
      KKLJIDJBFEI__LIKCPEBFCEC(pKVar4,(MethodInfo *)0x0);
    }
  }
  pNVar5 = (__this->fields)._AchievementsController;
  if (pNVar5 == (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) goto LAB_03495968;
  x = Nekki_SF2_GUI_Profile_AchievementsController__GetCellByAchievement
                (pNVar5,HKCIMMBPDLP,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0) ||
       (pNVar6 = (x->fields).achievSubItem,
       pNVar6 == (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0)) goto LAB_03495968;
    Nekki_SF2_GUI_Profile_AchievementSubItem__ResetOpacity(pNVar6,method_00);
    pNVar6 = (x->fields).achievSubItem;
    if (pNVar6 == (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) goto LAB_03495968;
    (*(pNVar6->klass->vtable)._59_Choose.methodPtr)
              (pNVar6,(pNVar6->klass->vtable)._59_Choose.method);
  }
  __this_02 = (__this->fields).GJIPOBCNEPG;
  if (__this_02 != (Nekki_SF2_GUI_Profile_ProfileBottomPanel_o *)0x0) {
    Nekki_SF2_GUI_Common_BottomPanel<Int32Enum>__UpdateIndicators
              ((Nekki_SF2_GUI_Common_BottomPanel_T__o *)__this_02,
               Method_Nekki_SF2_GUI_Common_BottomPanel<EBGNICNEJFJ>_UpdateIndicators__);
    pNVar5 = (__this->fields)._AchievementsController;
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar5 != (Nekki_SF2_GUI_Profile_AchievementsController_o *)0x0) {
      Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
                (pNVar5,FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03495968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

