// TypeDefIndex 2080
// Namespace: 
// public class MainMenuRaidRatingPanel : UIInitializable
// Fields:
//   private ResolutionButton _btnTop100; // 0x28
//   private LabelAlias _labelUserName; // 0x30
//   private LabelAlias _labelUserNameId; // 0x38
//   private ResolutionButton _btnDan; // 0x40
//   private ResolutionImage _imageDan; // 0x48
//   private LabelAlias _labelDan; // 0x50
//   private GameObject _clanPanel; // 0x58
//   private SFButton _btnClan; // 0x60
//   private ResolutionButton _btnLeague; // 0x68
//   private GameObject _iconPositionUp; // 0x70
//   private GameObject _iconPositionDown; // 0x78
//   private GameObject _iconPositionSame; // 0x80
//   private GameObject _iconPositionNo; // 0x88
//   private LabelAlias _labelPosition; // 0x90
//   private float _labelPosition_Offset1; // 0x98
//   private float _labelPosition_Offset2; // 0x9C
//   private bool EGOLDJCOBFF; // 0xA0
//   private int AAKJNHODIMO; // 0xA4
//   private int EBKCENPDEIE; // 0xA8
//   private int NHCHEMBNCGK; // 0xAC
//   private bool EBOJFAMCEAN; // 0xB0
//   private string ELBBBIIBIKM; // 0xB8
//   private long PCNECANPJMO; // 0xC0
//   private ResolutionImage CEFPNGJALDO; // 0xC8
//   private ClanLogoImage FDOKACGMDHB; // 0xD0

// ===== private void KCGCNFGADFD()  [RVA 0x32BC1D4]
// MainMenuRaidRatingPanel$$KCGCNFGADFD @ RVA 0x32BC1D4

void MainMenuRaidRatingPanel__KCGCNFGADFD(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456749c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_8797/*"MainMenuRaidRatingPanel::LeagueBtnClick: No League Info"*/);
    DAT_0456749c = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    if ((pNVar1->fields).NEACDFLBNFO == (GLPEFEEGCPM_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_8797/*"MainMenuRaidRatingPanel::LeagueBtnClick: No League Info"*/,(MethodInfo *)0x0);
      return;
    }
    JJPNLEPEAFM__FNJFGJPELJK((MethodInfo *)0x0);
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_00,0x2a,(MethodInfo *)0x0);
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LEHAAENBCND()  [RVA 0x32BC2AC]
// MainMenuRaidRatingPanel$$LEHAAENBCND @ RVA 0x32BC2AC

void MainMenuRaidRatingPanel__LEHAAENBCND(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  HCKCBFOGMMJ_o *__this_00;
  EEGDOGKBLNG_o *pEVar3;
  int64_t OGPGLGPMEPD;
  GKLPDMLELJF_o *pGVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  int32_t *piVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_0456749d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_7231/*"ID: "*/);
    DAT_0456749d = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((pEVar3 != (EEGDOGKBLNG_o *)0x0) &&
     (OGPGLGPMEPD = EEGDOGKBLNG__APCMGOCHMGC(pEVar3,(MethodInfo *)0x0),
     __this_00 != (HCKCBFOGMMJ_o *)0x0)) {
    pGVar4 = HCKCBFOGMMJ__LLEJFHJIBHC(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pGVar4 == (GKLPDMLELJF_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 == (EEGDOGKBLNG_o *)0x0) goto LAB_033bc480;
      iVar2 = EEGDOGKBLNG__IGIHHCEONEM(pEVar3,(MethodInfo *)0x0);
    }
    else {
      iVar2 = (pGVar4->fields).PEBHLKLGDBM;
    }
    piVar6 = &(__this->fields).AAKJNHODIMO;
    if (*piVar6 != iVar2) {
      pNVar7 = (__this->fields)._labelDan;
      (__this->fields).AAKJNHODIMO = iVar2;
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bc480;
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
      pSVar5 = EEGDOGKBLNG__GKMAFGODLLG(pEVar3,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).ELBBBIIBIKM;
      bVar1 = System_String__op_Inequality(*ppSVar8,pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).ELBBBIIBIKM = pSVar5;
        thunk_FUN_01c20e04(ppSVar8,pSVar5);
        pNVar7 = (__this->fields)._labelUserName;
        if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bc480;
        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                  (pNVar7,*ppSVar8,(pNVar7->klass->vtable)._75_set_text.method);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
        pSVar5 = EEGDOGKBLNG__GGHGAIBPPJO(pEVar3,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(StringLiteral_7231/*"ID: "*/,pSVar5,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._labelUserNameId;
        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033bc47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                    (pNVar7,pSVar5,(pNVar7->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
LAB_033bc480:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetBtnTop100IsFlashing(bool CJNHFNHJHPE)  [RVA 0x32BC484]
// MainMenuRaidRatingPanel$$SetBtnTop100IsFlashing @ RVA 0x32BC484

void MainMenuRaidRatingPanel__SetBtnTop100IsFlashing
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_0456749e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456749e = 1;
  }
  pNVar2 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  x = (__this->fields).CEFPNGJALDO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (CJNHFNHJHPE)) {
    MainMenuRaidRatingPanel__MHNENMANPGF(__this,method_00);
  }
  pNVar2 = (__this->fields)._btnTop100;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    SFButton__set_IsFlashing((SFButton_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KFBJGJHEIHC(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x32BC740]
// MainMenuRaidRatingPanel$$KFBJGJHEIHC @ RVA 0x32BC740

void MainMenuRaidRatingPanel__KFBJGJHEIHC
               (MainMenuRaidRatingPanel_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  SFButton_o *pSVar3;
  ClanLogoImage_o **ppCVar4;
  ClanLogoImage_o *pCVar5;
  
  if ((DAT_0456749f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456749f = 1;
  }
  pSVar3 = (__this->fields)._btnClan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  ppCVar4 = &(__this->fields).FDOKACGMDHB;
  pCVar5 = *ppCVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (__this->fields)._btnClan;
    if (pSVar3 != (SFButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar2,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._btnClan;
      if (pSVar3 != (SFButton_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
        pCVar5 = KFCFGKEHPNK__LEIGOOFFFPE(pUVar2,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
        *ppCVar4 = pCVar5;
        thunk_FUN_01c20e04(ppCVar4,pCVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar4,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
  return;
}


// ===== private void ENOENFMAGCF(KGBIBHEFBHA HEHMPFLAEGE)  [RVA 0x32BC868]
// MainMenuRaidRatingPanel$$ENOENFMAGCF @ RVA 0x32BC868

void MainMenuRaidRatingPanel__ENOENFMAGCF
               (MainMenuRaidRatingPanel_o *__this,KGBIBHEFBHA_o *HEHMPFLAEGE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  EEGDOGKBLNG_o *__this_00;
  JMDPBFOCHHP_o *pJVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_RectTransform_o *rt;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar10;
  Nekki_SF2_GUI_LabelAlias_o *pNVar11;
  int32_t *piVar12;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_01;
  int index;
  float value;
  
  if ((DAT_045674a0 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_CMLEEJPGHNC>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_8799/*"MainMenuRaidRatingPanel::updatePlayerInfo: raidLeagues or Leagues empty"*/);
    FUN_01bab630(&StringLiteral_8798/*"MainMenuRaidRatingPanel::updatePlayerInfo: player is NULL"*/);
    DAT_045674a0 = 1;
  }
  pNVar11 = (__this->fields)._labelPosition;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) {
    if ((__this->fields).EGOLDJCOBFF == false) {
      (__this->fields).EGOLDJCOBFF = true;
      Util__IHPDCBOFHPA((__this->fields)._iconPositionUp,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionDown,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionNo,false,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA((__this->fields)._iconPositionSame,false,(MethodInfo *)0x0);
      pNVar11 = (__this->fields)._labelPosition;
      if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pUVar8 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar8,false,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_8798/*"MainMenuRaidRatingPanel::updatePlayerInfo: player is NULL"*/,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_033bcd20;
  }
  iVar1 = (HEHMPFLAEGE->fields).HCBJCMDLODI;
  iVar2 = (HEHMPFLAEGE->fields).NCDPJGNAKPN;
  bVar3 = KGBIBHEFBHA__PIMMFPEOOJJ(HEHMPFLAEGE,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_033bcd20;
  iVar5 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (pJVar6 == (JMDPBFOCHHP_o *)0x0) goto LAB_033bcd20;
  if ((pJVar6->fields)._JMEOCLFDHMM_k__BackingField == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
LAB_033bc9d8:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8799/*"MainMenuRaidRatingPanel::updatePlayerInfo: raidLeagues or Leagues empty"*/,(MethodInfo *)0x0);
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if ((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
       (pJVar10 = (pJVar6->fields)._JMEOCLFDHMM_k__BackingField,
       pJVar10 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) goto LAB_033bcd20;
    bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)(pJVar10->fields).NPPJFJBJLLG,
                       Method_DJNBJHPDKDP_OBECCOPBADO<JMDPBFOCHHP_CMLEEJPGHNC>__);
    if (bVar4) goto LAB_033bc9d8;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
      (pJVar10 = (pJVar6->fields)._JMEOCLFDHMM_k__BackingField,
      pJVar10 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) ||
     (__this_01 = (pJVar10->fields).NPPJFJBJLLG,
     __this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0))
  goto LAB_033bcd20;
  if (0 < (__this_01->fields)._size) {
    index = 0;
    do {
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_get_Item__
                         );
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033bcd20;
      if (*(int *)&pIVar7[1].klass == iVar5) {
        bVar4 = (HEHMPFLAEGE->fields).NLLKMEMKBAF < *(int *)&pIVar7[2].monitor;
        goto LAB_033bcb40;
      }
      index = index + 1;
    } while (index < (__this_01->fields)._size);
  }
  bVar4 = false;
LAB_033bcb40:
  piVar12 = &(__this->fields).EBKCENPDEIE;
  *piVar12 = iVar1;
  (__this->fields).EBOJFAMCEAN = bVar3;
  (__this->fields).NHCHEMBNCGK = iVar2;
  Util__IHPDCBOFHPA((__this->fields)._iconPositionUp,(bVar3 && iVar1 < iVar2) && !bVar4,
                    (MethodInfo *)0x0);
  if ((__this->fields).EBOJFAMCEAN == false) {
    bVar3 = false;
  }
  else {
    bVar3 = !bVar4 && (__this->fields).NHCHEMBNCGK < (__this->fields).EBKCENPDEIE;
  }
  Util__IHPDCBOFHPA((__this->fields)._iconPositionDown,bVar3,(MethodInfo *)0x0);
  if ((__this->fields).EBOJFAMCEAN == false) {
    bVar3 = false;
  }
  else {
    bVar3 = !bVar4 && (__this->fields).EBKCENPDEIE == (__this->fields).NHCHEMBNCGK;
  }
  Util__IHPDCBOFHPA((__this->fields)._iconPositionSame,bVar3,(MethodInfo *)0x0);
  Util__IHPDCBOFHPA((__this->fields)._iconPositionNo,bVar4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._labelPosition;
  if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bcd20;
  pUVar8 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
  Util__IHPDCBOFHPA(pUVar8,!bVar4,(MethodInfo *)0x0);
  pNVar11 = (__this->fields)._labelPosition;
  pSVar9 = System_Int32__ToString((int32_t)piVar12,(MethodInfo *)0x0);
  if (pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033bcd20;
  (*(pNVar11->klass->vtable)._75_set_text.methodPtr)
            (pNVar11,pSVar9,(pNVar11->klass->vtable)._75_set_text.method);
  pNVar11 = (__this->fields)._labelPosition;
  if ((pNVar11 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
     (pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033bcd20;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar8 = (__this->fields)._iconPositionNo;
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
  value = (__this->fields)._labelPosition_Offset1;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
  if (bVar3) {
LAB_033bccb0:
    value = (__this->fields)._labelPosition_Offset2;
  }
  else {
    pUVar8 = (__this->fields)._iconPositionUp;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
    pUVar8 = (__this->fields)._iconPositionDown;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
    pUVar8 = (__this->fields)._iconPositionSame;
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto LAB_033bcd20;
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if (bVar3) goto LAB_033bccb0;
  }
  pNVar11 = (__this->fields)._labelPosition;
  if (pNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    rt = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__get_transform((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0);
    if ((rt != (UnityEngine_RectTransform_o *)0x0) &&
       (rt->klass != UnityEngine_RectTransform_TypeInfo)) {
      rt = (UnityEngine_RectTransform_o *)0x0;
    }
    UnityEngine_TransformExtensions__SetAnchoredPositionX(rt,value,(MethodInfo *)0x0);
    return;
  }
LAB_033bcd20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetClanVisible(bool CJNHFNHJHPE)  [RVA 0x32BCD24]
// MainMenuRaidRatingPanel$$SetClanVisible @ RVA 0x32BCD24

void MainMenuRaidRatingPanel__SetClanVisible
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_045674a1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a1 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._clanPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._clanPanel;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void SetTouchEnabled(bool CJNHFNHJHPE)  [RVA 0x32BCDC8]
// MainMenuRaidRatingPanel$$SetTouchEnabled @ RVA 0x32BCDC8

void MainMenuRaidRatingPanel__SetTouchEnabled
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  SFButton_o *pSVar3;
  
  if ((DAT_045674a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a2 = 1;
  }
  pNVar2 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnTop100;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._btnDan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnDan;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._btnLeague;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnLeague;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pSVar3 = (__this->fields)._btnClan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar3 = (__this->fields)._btnClan;
  if (pSVar3 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pSVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_033bcf10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetHintBtnPressType(PressType ACCIHBHMFPN, bool IHKMBHOELIL)  [RVA 0x32BCF14]
// MainMenuRaidRatingPanel$$SetHintBtnPressType @ RVA 0x32BCF14

void MainMenuRaidRatingPanel__SetHintBtnPressType
               (MainMenuRaidRatingPanel_o *__this,int32_t ACCIHBHMFPN,bool IHKMBHOELIL,
               MethodInfo *method)

{
  LJLLAKHOFFF__JAEOMHIAHJB
            ((UnityEngine_UI_Button_o *)(__this->fields)._btnTop100,ACCIHBHMFPN,IHKMBHOELIL,
             (MethodInfo *)0x0);
  return;
}


// ===== private void LIJCCLDLFKN()  [RVA 0x32BCF24]
// MainMenuRaidRatingPanel$$LIJCCLDLFKN @ RVA 0x32BCF24

void MainMenuRaidRatingPanel__LIJCCLDLFKN(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  PLIIGOCLJDL_o *pPVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  
  if ((DAT_045674a3 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a3 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._btnTop100;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bd004;
    if ((pNVar3->fields).super.BDKMNPCCDNI != false) {
      SFButton__set_IsFlashing((SFButton_o *)pNVar3,false,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (pPVar2 == (PLIIGOCLJDL_o *)0x0) goto LAB_033bd004;
      (pPVar2->fields)._KDMKAMFOEAI_k__BackingField = false;
    }
  }
  JJPNLEPEAFM__OHIKPLPOJBK((MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(__this_00,0x2a,(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_033bd004:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LLBKAMIEBAH()  [RVA 0x32BD008]
// MainMenuRaidRatingPanel$$LLBKAMIEBAH @ RVA 0x32BD008

void MainMenuRaidRatingPanel__LLBKAMIEBAH(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  undefined8 uVar2;
  UnityEngine_UI_Image_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_045674a4 & 1) == 0) {
    auVar4 = FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a4 = 1;
  }
  uVar2 = auVar4._0_8_;
  if (DAT_04565b84 == '\0') {
    uVar2 = FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,auVar4._8_8_);
    DAT_04565b84 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((pNVar3 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) &&
     (__this_00 = (pNVar3->fields)._backgroundPicture, uVar2 = 0,
     __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
    Nekki_SF2_GUI_Menu_MenuScroll__Collapse
              ((Nekki_SF2_GUI_Menu_MenuScroll_o *)__this_00,0.0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    uVar2 = 0;
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      bVar1 = EEGDOGKBLNG__CLJIMCDAEKO(__this_01,(MethodInfo *)0x0);
      if (bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        uVar2 = 0;
        if (__this_02 == (EEOMEMBBGNA_o *)0x0) goto LAB_033bd0f0;
        EEOMEMBBGNA__FOJEJJGMIGP(__this_02,0,(MethodInfo *)0x0);
      }
      else {
        JJPNLEPEAFM__DDOCEEFBIGC((Il2CppObject *)0x0,(MethodInfo *)0x0);
      }
      EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_033bd0f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2);
}


// ===== public void Interactable(bool CJNHFNHJHPE)  [RVA 0x32BD0F4]
// MainMenuRaidRatingPanel$$Interactable @ RVA 0x32BD0F4

void MainMenuRaidRatingPanel__Interactable
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  MainMenuRaidRatingPanel__SetTouchEnabled(__this,CJNHFNHJHPE,method);
  return;
}


// ===== public SFButton GetLadderBtn()  [RVA 0x32BD0FC]
// MainMenuRaidRatingPanel$$GetLadderBtn @ RVA 0x32BD0FC

SFButton_o *
MainMenuRaidRatingPanel__GetLadderBtn(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  return (SFButton_o *)(__this->fields)._btnLeague;
}


// ===== private void AIFHOHIMLFM()  [RVA 0x32BD104]
// MainMenuRaidRatingPanel$$AIFHOHIMLFM @ RVA 0x32BD104

void MainMenuRaidRatingPanel__AIFHOHIMLFM(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  PLIIGOCLJDL_o *__this_01;
  System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE;
  EEOMEMBBGNA_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  
  if ((DAT_045674a5 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KFBJGJHEIHC__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_NLBPEFENJIK__);
    DAT_045674a5 = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_JCFJFJCKLKG__o *)
                  thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__IJMELLFDCDD(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE_00 =
           (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__OKAMOFKHOLK(__this_02,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateValues()  [RVA 0x32BD24C]
// MainMenuRaidRatingPanel$$UpdateValues @ RVA 0x32BD24C

void MainMenuRaidRatingPanel__UpdateValues(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  NFFDIPBFJHP_o *__this_00;
  KGBIBHEFBHA_o *HEHMPFLAEGE;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  
  if ((DAT_045674a6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a6 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (__this_00 != (NFFDIPBFJHP_o *)0x0) {
    BFFBKNCLLML = (__this_00->fields).NEACDFLBNFO;
    HEHMPFLAEGE = (KGBIBHEFBHA_o *)0x0;
    if (BFFBKNCLLML != (GLPEFEEGCPM_o *)0x0) {
      HEHMPFLAEGE = NFFDIPBFJHP__GMMAAHEMGHH(__this_00,BFFBKNCLLML,in_x2);
    }
    MainMenuRaidRatingPanel__ENOENFMAGCF(__this,HEHMPFLAEGE,in_x2);
    MainMenuRaidRatingPanel__LEHAAENBCND(__this,method_00);
    MainMenuRaidRatingPanel__OEPCAGOICLN(__this,method_01);
    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
      CJNHFNHJHPE = EEGDOGKBLNG__NMFKMEFIIMP(__this_01,(MethodInfo *)0x0);
      MainMenuRaidRatingPanel__SetClanVisible(__this,CJNHFNHJHPE,in_x2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NLBPEFENJIK(object IMMNELPBGIF)  [RVA 0x32BD390]
// MainMenuRaidRatingPanel$$NLBPEFENJIK @ RVA 0x32BD390

void MainMenuRaidRatingPanel__NLBPEFENJIK
               (MainMenuRaidRatingPanel_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  PLIIGOCLJDL_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  int64_t BIIMFIDNPJP;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *CJNHFNHJHPE;
  System_String_o *HCAAAAMDCNO;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_03;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  
  if ((DAT_045674a7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_045674a7 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields)._btnDan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (((__this_01 != (EEGDOGKBLNG_o *)0x0) &&
      (BIIMFIDNPJP = EEGDOGKBLNG__APCMGOCHMGC(__this_01,(MethodInfo *)0x0),
      __this_00 != (PLIIGOCLJDL_o *)0x0)) &&
     (__this_02 = PLIIGOCLJDL__INONDJFCPHI(__this_00,BIIMFIDNPJP,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_string__o *)0x0)) {
    CJNHFNHJHPE = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,0,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    HCAAAAMDCNO = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,1,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    __this_03 = (__this->fields)._imageDan;
    if (__this_03 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._btnDan;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                  (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._btnDan;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                    (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,HCAAAAMDCNO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32BD504]
// MainMenuRaidRatingPanel$$.ctor @ RVA 0x32BD504

void MainMenuRaidRatingPanel___ctor(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  (__this->fields)._labelPosition_Offset1 = 75.0;
  (__this->fields)._labelPosition_Offset2 = 130.0;
  Nekki_SF2_GUI_UIInitializable___ctor((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void AKPDIPJLNGK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x32BD518]
// MainMenuRaidRatingPanel$$AKPDIPJLNGK @ RVA 0x32BD518

void MainMenuRaidRatingPanel__AKPDIPJLNGK
               (MainMenuRaidRatingPanel_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar2;
  KGBIBHEFBHA_o *HEHMPFLAEGE;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_T__o *__this_01;
  int index;
  
  if ((DAT_045674a8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    DAT_045674a8 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    if (pIVar1 == (Il2CppObject *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar2 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = pIVar1[2].monitor;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_T__o *)0x0) {
        index = 0;
        do {
          if ((__this_01->fields).count <= index) {
            return;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__;
          HEHMPFLAEGE = (KGBIBHEFBHA_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  (__this_01,index,
                                   (MethodInfo_295F6AC *)
                                   Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__
                                  );
          if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) break;
          if ((HEHMPFLAEGE->fields).ANAJGHJEEOC == iVar2) {
            MainMenuRaidRatingPanel__ENOENFMAGCF(__this,HEHMPFLAEGE,method_00);
          }
          __this_01 = pIVar1[2].monitor;
          index = index + 1;
        } while (__this_01 != (Google_Protobuf_Collections_RepeatedField_T__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HMOFDGEDBCL()  [RVA 0x32BD62C]
// MainMenuRaidRatingPanel$$HMOFDGEDBCL @ RVA 0x32BD62C

void MainMenuRaidRatingPanel__HMOFDGEDBCL(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  DCHAJIMIFHP_o *__this_00;
  PLIIGOCLJDL_o *__this_01;
  System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE;
  EEOMEMBBGNA_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  
  if ((DAT_045674a5 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KFBJGJHEIHC__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_NLBPEFENJIK__);
    DAT_045674a5 = 1;
  }
  pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
     (__this_00 = (pKVar1->fields).super.FNHOHLGNHGN, __this_00 != (DCHAJIMIFHP_o *)0x0)) {
    DCHAJIMIFHP__GMNFJKHEJLO(__this_00,(Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_JCFJFJCKLKG__o *)
                  thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__IJMELLFDCDD(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      CJNHFNHJHPE_00 =
           (System_Action_OJEHKJHEBID__o *)thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__OKAMOFKHOLK(__this_02,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDOLHNHBCIO()  [RVA 0x32BD630]
// MainMenuRaidRatingPanel$$DDOLHNHBCIO @ RVA 0x32BD630

void MainMenuRaidRatingPanel__DDOLHNHBCIO(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t JBFDEJOPCDC;
  GCIFMNHADDF_o *__this_01;
  PEEIMHCMDND_o *__this_02;
  
  if ((DAT_045674a9 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674a9 = 1;
  }
  bVar1 = Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__IsActive((MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    JBFDEJOPCDC = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__IDKIMGGFFNH(__this_01,(MethodInfo *)0x0);
      __this_02 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (__this_02 != (PEEIMHCMDND_o *)0x0) {
        PEEIMHCMDND__JDONKPBCNLL(__this_02,JBFDEJOPCDC,(MethodInfo *)0x0);
        EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void DKLDHKNAEBO()  [RVA 0x32BD6D8]
// MainMenuRaidRatingPanel$$DKLDHKNAEBO @ RVA 0x32BD6D8

void MainMenuRaidRatingPanel__DKLDHKNAEBO(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  PLIIGOCLJDL_o *pPVar4;
  KKLJIDJBFEI_o *pKVar5;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  System_Action_JCFJFJCKLKG__o *CJNHFNHJHPE;
  EEOMEMBBGNA_o *__this_00;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  Il2CppObject *IMMNELPBGIF;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  SFButton_o *pSVar7;
  System_String_o **ppSVar8;
  UnityEngine_Events_UnityEvent_o *pUVar9;
  DCHAJIMIFHP_o *__this_01;
  undefined4 local_34;
  
  if ((DAT_045674aa & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_AKPDIPJLNGK__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_DDOLHNHBCIO__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KCGCNFGADFD__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_KFBJGJHEIHC__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_LIJCCLDLFKN__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_LLBKAMIEBAH__);
    FUN_01bab630(&Method_MainMenuRaidRatingPanel_NLBPEFENJIK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_13890/*"TopPanel.league_icon_1"*/);
    FUN_01bab630(&StringLiteral_20479/*"refresh_league_event"*/);
    FUN_01bab630(&StringLiteral_13889/*"TopPanel.ico_top100_1"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674aa = 1;
  }
  (__this->fields).EGOLDJCOBFF = false;
  (__this->fields).AAKJNHODIMO = 0;
  (__this->fields).EBKCENPDEIE = 0;
  *(undefined8 *)((long)&(__this->fields).EBKCENPDEIE + 1) = 0;
  ppSVar8 = &(__this->fields).ELBBBIIBIKM;
  *ppSVar8 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar8);
  pNVar1 = (__this->fields)._btnTop100;
  (__this->fields).PCNECANPJMO = 0;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
    Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
              (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_13889/*"TopPanel.ico_top100_1"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._btnTop100;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = (pNVar1->fields).super.super.m_OnClick,
       pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._btnTop100;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick;
        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
          pNVar1 = (__this->fields)._btnTop100;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          if ((pPVar4 != (PLIIGOCLJDL_o *)0x0) &&
             (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0)) {
            SFButton__set_IsFlashing
                      ((SFButton_o *)pNVar1,(pPVar4->fields)._KDMKAMFOEAI_k__BackingField,
                       (MethodInfo *)0x0);
            pNVar1 = (__this->fields)._btnLeague;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
              Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                        (pNVar1,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_13890/*"TopPanel.league_icon_1"*/,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._btnLeague;
              if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
                 (pUVar2 = (pNVar1->fields).super.super.m_OnClick,
                 pUVar2 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                UnityEngine_Events_UnityEventBase__RemoveAllListeners
                          ((UnityEngine_Events_UnityEventBase_o *)pUVar2,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._btnLeague;
                if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pNVar1->fields).super.super.m_OnClick
                  ;
                  pUVar3 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    pMVar6 = (MethodInfo *)0x0;
                    UnityEngine_Events_UnityEvent__AddListener(pUVar9,pUVar3,(MethodInfo *)0x0);
                    pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                    if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                      if ((pKVar5->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                        local_34 = 0;
                        thunk_FUN_01bda448(int_TypeInfo,&local_34);
                        MainMenuRaidRatingPanel__NLBPEFENJIK(__this,IMMNELPBGIF,pMVar6);
                      }
                      MainMenuRaidRatingPanel__SetClanVisible(__this,false,pMVar6);
                      pSVar7 = (__this->fields)._btnClan;
                      if (pSVar7 != (SFButton_o *)0x0) {
                        pUVar9 = (UnityEngine_Events_UnityEvent_o *)(pSVar7->fields).super.m_OnClick
                        ;
                        pUVar3 = (UnityEngine_Events_UnityAction_o *)
                                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                        UnityEngine_Events_UnityAction___ctor();
                        if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          pMVar6 = (MethodInfo *)0x0;
                          UnityEngine_Events_UnityEvent__AddListener
                                    (pUVar9,pUVar3,(MethodInfo *)0x0);
                          pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                          if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                            if ((pKVar5->fields).super._MGGBEPKMPCF_k__BackingField != false) {
                              MainMenuRaidRatingPanel__KFBJGJHEIHC
                                        (__this,(OJEHKJHEBID_o *)0x0,pMVar6);
                            }
                            pNVar1 = (__this->fields)._btnDan;
                            if (pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                              pUVar9 = (UnityEngine_Events_UnityEvent_o *)
                                       (pNVar1->fields).super.super.m_OnClick;
                              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                              UnityEngine_Events_UnityAction___ctor();
                              if (pUVar9 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                UnityEngine_Events_UnityEvent__AddListener
                                          (pUVar9,pUVar3,(MethodInfo *)0x0);
                                MainMenuRaidRatingPanel__AIFHOHIMLFM(__this,method_00);
                                pKVar5 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
                                if (pKVar5 != (KKLJIDJBFEI_o *)0x0) {
                                  __this_01 = (pKVar5->fields).super.FNHOHLGNHGN;
                                  EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                                                thunk_FUN_01bda818(
                                                  System_Action<KEFHDOHHHML>_TypeInfo);
                                  System_Action<object>___ctor();
                                  if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
                                    DCHAJIMIFHP__MPFFOIIBAKO
                                              (__this_01,StringLiteral_20479/*"refresh_league_event"*/,EKDIECDFOIO,
                                               (MethodInfo *)0x0);
                                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                                      thunk_FUN_01ba7564();
                                    }
                                    pPVar4 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                                    CJNHFNHJHPE = (System_Action_JCFJFJCKLKG__o *)
                                                  thunk_FUN_01bda818(
                                                  System_Action<JCFJFJCKLKG>_TypeInfo);
                                    System_Action<object>___ctor();
                                    if (pPVar4 != (PLIIGOCLJDL_o *)0x0) {
                                      PLIIGOCLJDL__JODJMGAGEFG(pPVar4,CJNHFNHJHPE,(MethodInfo *)0x0)
                                      ;
                                      __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                                      CJNHFNHJHPE_00 =
                                           (System_Action_OJEHKJHEBID__o *)
                                           thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
                                      System_Action<object>___ctor();
                                      if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
                                        EEOMEMBBGNA__MFDOCMJONOH
                                                  (__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHNENMANPGF()  [RVA 0x32BC550]
// MainMenuRaidRatingPanel$$MHNENMANPGF @ RVA 0x32BC550

void MainMenuRaidRatingPanel__MHNENMANPGF(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  
  if ((DAT_045674ab & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8957/*"MenuButtons.Highlight_menu"*/);
    FUN_01bab630(&StringLiteral_3576/*"BtnTop100FlashingImage"*/);
    DAT_045674ab = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).CEFPNGJALDO;
  pNVar6 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_3576/*"BtnTop100FlashingImage"*/,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._btnTop100;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._btnTop100;
      if ((pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         ((pUVar3 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
          pUVar3 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
        UnityEngine_Transform__set_parent(pUVar2,pUVar3,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetAsFirstSibling(pUVar2,(MethodInfo *)0x0);
          pNVar6 = (Nekki_SF2_GUI_ResolutionImage_o *)
                   UnityEngine_GameObject__AddComponent<object>
                             (__this_00,
                              Method_UnityEngine_GameObject_AddComponent<ResolutionImage>__);
          *ppNVar5 = pNVar6;
          thunk_FUN_01c20e04(ppNVar5,pNVar6);
          if (*ppNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                      (*ppNVar5,StringLiteral_8957/*"MenuButtons.Highlight_menu"*/,(MethodInfo *)0x0);
            if (*ppNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppNVar5,(MethodInfo *)0x0);
              UnityEngine_TransformExtensions__SetLocalScale(pUVar2,1.3,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._btnTop100;
              if (pNVar4 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                (pNVar4->fields).super.FlashingImage = (__this->fields).CEFPNGJALDO;
                thunk_FUN_01c20e04(&(pNVar4->fields).super.FlashingImage);
                return;
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


// ===== private void OEPCAGOICLN()  [RVA 0x32BD2F0]
// MainMenuRaidRatingPanel$$OEPCAGOICLN @ RVA 0x32BD2F0

void MainMenuRaidRatingPanel__OEPCAGOICLN(MainMenuRaidRatingPanel_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  MethodInfo *in_x2;
  long lVar2;
  long lVar3;
  
  if ((DAT_045674ac & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045674ac = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    PBNPKBJKFHE = (pEVar1->fields).MICFEIBNOLM;
    lVar2 = (__this->fields).PCNECANPJMO;
    if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
      if (lVar2 == 0) {
        return;
      }
      (__this->fields).PCNECANPJMO = 0;
      PBNPKBJKFHE = (OJEHKJHEBID_o *)0x0;
    }
    else {
      lVar3 = (PBNPKBJKFHE->fields).ADEIKPGDIPM;
      if (lVar2 == lVar3) {
        return;
      }
      (__this->fields).PCNECANPJMO = lVar3;
    }
    MainMenuRaidRatingPanel__KFBJGJHEIHC(__this,PBNPKBJKFHE,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

