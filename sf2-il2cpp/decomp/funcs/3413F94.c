// Nekki.SF2.GUI.Map.InfoBattle$$UpdateBattleInfo @ RVA 0x3413F94

void Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method
               )

{
  System_String_o **ppSVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  AFFHKININGD_o *__this_00;
  DNELIPCHKLK_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  Nekki_SF2_GUI_Map_ContentClosed_o *__this_04;
  System_Delegate_o *pSVar7;
  long lVar8;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *pNVar9;
  MethodInfo *method_01;
  MethodInfo *in_x3;
  MEJIKMPNBNL_o *pMVar10;
  OOMHDDBCBJP_o *pOVar11;
  OLKPEJMEBPJ_o *pOVar12;
  Nekki_SF2_GUI_Map_ContentBase_o **ppNVar13;
  System_Action_OOMHDDBCBJP__o **ppSVar14;
  System_Action_OOMHDDBCBJP__o *pSVar15;
  DNELIPCHKLK_o **ppDVar16;
  System_String_o *a;
  UnityEngine_UI_Button_o *pUVar17;
  System_Action_OOMHDDBCBJP__c *pSVar18;
  DNELIPCHKLK_o *PBDMBCJNKII;
  
  if ((DAT_045680b6 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_UpdateBattleInfo__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_16664);
    DAT_045680b6 = 1;
  }
  bVar2 = Nekki_SF2_GUI_UIModule__get_IsDestroyed
                    ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Map_InfoBattle__ClearInfo(__this,method_00);
  ppDVar16 = &(__this->fields).AABIECAIFGA;
  if (*ppDVar16 == (DNELIPCHKLK_o *)0x0) goto LAB_03514438;
  DNELIPCHKLK__LGOFNFEIKFB(*ppDVar16,(System_String_o *)StringLiteral_1,(MethodInfo *)0x0);
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_16664,(MethodInfo *)0x0);
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO__PHFFPADFANK(BANHBMINMMP,(MethodInfo *)0x0);
  if (__this_00 == (AFFHKININGD_o *)0x0) {
    if (*ppDVar16 == (DNELIPCHKLK_o *)0x0) goto LAB_03514438;
    pMVar10 = (BANHBMINMMP->fields).IAJPHAAMKPC;
    ppSVar1 = (System_String_o **)&StringLiteral_1;
    if (pMVar10 != (MEJIKMPNBNL_o *)0x0) {
      ppSVar1 = &(pMVar10->fields).DEKCPPOJFEH;
    }
    in_x3 = StringLiteral_1;
    DNELIPCHKLK__FABCBOLKOCC
              (*ppDVar16,*ppSVar1,(BANHBMINMMP->fields).DEKCPPOJFEH,
               (System_String_o *)StringLiteral_1,(MethodInfo *)0x0);
  }
  else {
    PBDMBCJNKII = (__this_00->fields).KOILJHHCIEE;
    __this_01 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_01,PBDMBCJNKII,(MethodInfo *)0x0);
    *ppDVar16 = __this_01;
    thunk_FUN_01c20e04(ppDVar16,__this_01);
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this_00->fields).MHOGPFEMHHF,(MethodInfo *)0x0);
    if ((!bVar2) &&
       (bVar2 = System_String__op_Inequality
                          ((__this_00->fields).MHOGPFEMHHF,(System_String_o *)StringLiteral_1,
                           (MethodInfo *)0x0), bVar2)) {
      __this_02 = (__this->fields)._altImage;
      if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03514438;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_02,(__this_00->fields).MHOGPFEMHHF,(MethodInfo *)0x0);
    }
  }
  __this_03 = (__this->fields)._lblBattleName;
  if (__this_03 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03514438;
  method_01 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,(BANHBMINMMP->fields).ICPECIILDFJ,(MethodInfo *)0x0)
  ;
  Nekki_SF2_GUI_Map_InfoBattle__FKFPKOGCLFP(__this,BANHBMINMMP,method_01);
  if (__this_00 != (AFFHKININGD_o *)0x0) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD != false) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar11 = (__this_00->fields).IFJLLGPGMHM;
      if (pOVar11 == (OOMHDDBCBJP_o *)0x0) goto LAB_03514438;
      in_x3 = (MethodInfo *)0x0;
      a = MGNPHCAAEIO_TypeInfo->static_fields->MLPJGCJKKPE;
      pSVar5 = System_String__Concat
                         ((__this_00->fields).LAFKEHDGGND,(pOVar11->fields).DEKCPPOJFEH,
                          (__this_00->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
      bVar2 = System_String__op_Inequality(a,pSVar5,(MethodInfo *)0x0);
      if (bVar2) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD = false;
      }
    }
  }
  pUVar17 = (__this->fields)._btnRemoveFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar17 = (__this->fields)._btnRemoveFight;
    if ((pUVar17 == (UnityEngine_UI_Button_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03514438;
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
  }
  pOVar12 = (BANHBMINMMP->fields).LFJPDELEIHG;
  if (((pOVar12 == (OLKPEJMEBPJ_o *)0x0) || ((pOVar12->fields).PABIMIFJJKF == false)) &&
     (iVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar3 != 0x10)) {
    if (__this_00 == (AFFHKININGD_o *)0x0) {
      bVar2 = false;
    }
    else {
      if ((__this_00->fields).AHCBCNJAMHB != false) {
        __this_04 = (__this->fields)._contentClosed;
        pSVar5 = AFFHKININGD__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
        if (__this_04 == (Nekki_SF2_GUI_Map_ContentClosed_o *)0x0) goto LAB_03514438;
        goto LAB_035142a8;
      }
      bVar2 = AFFHKININGD__CAGKMGGOIOJ(__this_00,(MethodInfo *)0x0);
      bVar2 = !bVar2;
    }
    uVar4 = (*(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                      (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.method);
    if ((!bVar2) && ((uVar4 | 2) != 3)) {
      Nekki_SF2_GUI_Map_InfoBattle__NEMHIDIGACK(__this,BANHBMINMMP,__this_00,in_x3);
      return;
    }
    pNVar9 = (__this->fields)._contentCompleteOrLocked;
    if (pNVar9 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) goto LAB_03514438;
    Nekki_SF2_GUI_Map_ContentCompleteOrLocked__Init
              (pNVar9,BANHBMINMMP,(__this->fields).AABIECAIFGA,(MethodInfo *)0x0);
    pNVar9 = (__this->fields)._contentCompleteOrLocked;
    if (pNVar9 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) goto LAB_03514438;
    ppSVar14 = &(pNVar9->fields).super.OnUpdateBattleInfo;
    pSVar15 = *ppSVar14;
    pSVar7 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    pSVar7 = System_Delegate__Combine((System_Delegate_o *)pSVar15,pSVar7,(MethodInfo *)0x0);
    pSVar18 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar7 == (System_Delegate_o *)0x0) {
      lVar8 = 0;
      *ppSVar14 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar15 = (System_Action_OOMHDDBCBJP__o *)
                thunk_FUN_01bda71c(pSVar7,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar15 == (System_Action_OOMHDDBCBJP__o *)0x0) {
LAB_035143f0:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar7,pSVar18);
      }
      *ppSVar14 = pSVar15;
      pSVar18 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar8 = thunk_FUN_01bda71c(pSVar7,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar8 == 0) goto LAB_035143f0;
    }
    thunk_FUN_01c20e04(ppSVar14,lVar8);
    pNVar9 = (__this->fields)._contentCompleteOrLocked;
  }
  else {
    __this_04 = (__this->fields)._contentClosed;
    if (__this_04 == (Nekki_SF2_GUI_Map_ContentClosed_o *)0x0) goto LAB_03514438;
    pSVar5 = (BANHBMINMMP->fields).BJMHBMDFFPA;
LAB_035142a8:
    Nekki_SF2_GUI_Map_ContentClosed__Init(__this_04,pSVar5,(MethodInfo *)0x0);
    pNVar9 = (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)(__this->fields)._contentClosed;
  }
  ppNVar13 = &(__this->fields).ALCOKIMHMCH;
  *ppNVar13 = (Nekki_SF2_GUI_Map_ContentBase_o *)pNVar9;
  thunk_FUN_01c20e04(ppNVar13);
  if ((*ppNVar13 != (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppNVar13,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
    return;
  }
LAB_03514438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

