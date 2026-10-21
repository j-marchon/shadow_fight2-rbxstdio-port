// Nekki.SF2.GUI.Dialogs.SettingsDialog$$HCNNHNAIJFB @ RVA 0x34850E8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__HCNNHNAIJFB
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar4;
  DNELIPCHKLK_o *pDVar5;
  Il2CppMethodPointer *ppIVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_Xml_XmlDocument_o *EBGAKMNEJHA;
  System_IObservable_long__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  System_Action_bool__o *BLMFLPJJMPF;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *pMVar9;
  int iVar10;
  Il2CppClass *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  DNELIPCHKLK_o **ppDVar14;
  DNELIPCHKLK_o *pDVar15;
  UniRx_SerialDisposable_o *__this_00;
  PKHMIGFEJCL_o *pPVar16;
  DBNEEHGBCJD_o *pDVar17;
  
  if ((DAT_045683a5 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SettingsDialog_NNONPKOFELD_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<long>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_GNHCEDFBDIM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_NMDMDBFMCKK__);
    FUN_01bab630(&StringLiteral_17715);
    FUN_01bab630(&StringLiteral_6659);
    FUN_01bab630(&StringLiteral_1);
    DAT_045683a5 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_03585848;
  if ((IMMNELPBGIF->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_SettingsDialog_NNONPKOFELD_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  puVar3 = (undefined4 *)thunk_FUN_01bda96c();
  switch(*puVar3) {
  case 0:
    bVar2 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    MFIKGMIDDIG__FDOGCCOEHPL((bool)(~bVar2 & 1),(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_SettingsDialog__IJCCOHCPGIM(__this,method_00);
    return;
  case 1:
    bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
    MFIKGMIDDIG__NEKJIEEEPFO((bool)(~bVar2 & 1),(MethodInfo *)0x0);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_SettingsDialog__OIAIFGDLFHJ(__this,method_01);
    return;
  case 2:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create((System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  case 3:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar16 = (pNVar4->fields).QuestParameters, pPVar16 != (PKHMIGFEJCL_o *)0x0)) {
      ppDVar14 = &(pPVar16->fields).NMHCLFFOMJH;
      pDVar15 = *ppDVar14;
      pDVar5 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
      *ppDVar14 = pDVar5;
      thunk_FUN_01c20e04(ppDVar14,pDVar5);
      (pPVar16->fields).PNPKEKHEMCD = StringLiteral_1;
      thunk_FUN_01c20e04();
      (pPVar16->fields).LOLFFJGLKLD = StringLiteral_1;
      thunk_FUN_01c20e04();
      (pPVar16->fields).CJLNOJMBNPN = (HOOAAGABMBL_o *)0x0;
      thunk_FUN_01c20e04(&pPVar16->fields,0);
      pNVar4 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar4,0xd,(MethodInfo *)0x0);
        *ppDVar14 = pDVar15;
        thunk_FUN_01c20e04(ppDVar14,pDVar15);
        return;
      }
    }
    break;
  case 4:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar11 = pIVar7->klass;
      pDVar17 = (__this->fields).CEEIJODIBOM;
      uVar1._0_1_ = (pIVar11->_2).rank;
      uVar1._1_1_ = (pIVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            ppIVar6 = &pIVar11->vtable[*piVar13 + 0xe].methodPtr;
            goto LAB_035856fc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      ppIVar6 = (Il2CppMethodPointer *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xe);
LAB_035856fc:
      pMVar9 = (MethodInfo *)ppIVar6[1];
      pDVar17 = (DBNEEHGBCJD_o *)(**ppIVar6)(pIVar7,pDVar17);
      Nekki_SF2_GUI_Dialogs_SettingsDialog__HAONPBDHBCD(__this,pDVar17,pMVar9);
      (__this->fields).CEEIJODIBOM = pDVar17;
      thunk_FUN_01c20e04(&(__this->fields).CEEIJODIBOM,pDVar17);
      __this_00 = (__this->fields).LIFKALBPENI;
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source = UniRx_Observable__TimerFrame(0x3c,0,(MethodInfo *)0x0);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      value = UniRx_ObservableExtensions__Subscribe<long>
                        ((System_IObservable_T__o *)source,onNext,
                         Method_UniRx_ObservableExtensions_Subscribe<long>__);
      if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
        UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case 5:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    bVar2 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
    if (!bVar2) {
      IMAPABEJECG__KJFENNDOBOB((MethodInfo *)0x0);
      return;
    }
    bVar2 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0);
    if (bVar2) {
      IMAPABEJECG__KNLFICNFHBE((MethodInfo *)0x0);
      return;
    }
    pSVar8 = IMAPABEJECG__PLPICDIFHHG((MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar8,StringLiteral_6659,(MethodInfo *)0x0);
    if (bVar2) {
      BLMFLPJJMPF = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
                    /* try { // try from 03585818 to 0368583f has its CatchHandler @ 03585bec */
      IMAPABEJECG__JGDKNDBAIHM(BLMFLPJJMPF,(MethodInfo *)0x0);
      return;
    }
    bVar2 = IMAPABEJECG__NHOLBMHOMCM((MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    IMAPABEJECG__FNGMPMDBIKB((MethodInfo *)0x0);
    return;
  case 6:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDCJGIIPLB__BKGENOHNNKM
              ((System_Collections_Generic_ICollection_string__o *)0x0,(MethodInfo *)0x0);
    return;
  case 7:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar7 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__)
    ;
    if (pIVar7 != (Il2CppObject *)0x0) {
      pSVar8 = Core_Configs_Models_BuildSettingsExtension__GetMusicStore
                         (pIVar7[9].monitor,(MethodInfo *)0x0);
      bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar8,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 035856e4 to 03685817 has its CatchHandler @ 035856e4
                       catch() { ... } // from try @ 035856e4 with catch @ 035856e4
                       catch() { ... } // from try @ 03585aac with catch @ 035856e4
                       catch() { ... } // from try @ 03585b64 with catch @ 035856e4
                       catch() { ... } // from try @ 03585b6c with catch @ 035856e4
                       catch() { ... } // from try @ 03585ca4 with catch @ 035856e4 */
      UnityEngine_Application__OpenURL(pSVar8,(MethodInfo *)0x0);
      return;
    }
    break;
  case 8:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    iVar10 = (__this->fields).NLBHDJMJDCE;
    pMVar9 = extraout_x1;
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar9 = extraout_x1_00;
    }
    if (DAT_04568402 == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_04568402 = '\x01';
      pMVar9 = extraout_x1_01;
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar9 = extraout_x1_02;
    }
    if (iVar10 < EOAOCPLIKOI_TypeInfo->static_fields->KLJLNNNMMMJ + -1) {
      iVar10 = (__this->fields).NLBHDJMJDCE + 1;
    }
    else {
      iVar10 = 0;
    }
    goto LAB_035856a4;
  case 9:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    iVar10 = (__this->fields).NLBHDJMJDCE;
    pMVar9 = extraout_x1_03;
    if (iVar10 < 1) {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar9 = extraout_x1_04;
      }
      if (DAT_04568402 == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_04568402 = '\x01';
        pMVar9 = extraout_x1_05;
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar9 = extraout_x1_06;
      }
      iVar10 = EOAOCPLIKOI_TypeInfo->static_fields->KLJLNNNMMMJ;
    }
    iVar10 = iVar10 + -1;
LAB_035856a4:
    (__this->fields).NLBHDJMJDCE = iVar10;
    Nekki_SF2_GUI_Dialogs_SettingsDialog__UpdateLabels(__this,pMVar9);
    return;
  case 10:
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
    EBGAKMNEJHA = GIAMPEGMNHE__IBJOMPOLPCC
                            (pSVar8,StringLiteral_17715,1,true,true,false,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    EOAOCPLIKOI__KLEKBEIJHDE(EBGAKMNEJHA,(MethodInfo *)0x0);
    EOAOCPLIKOI__LPKOPFGLDNA((__this->fields).NLBHDJMJDCE,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__EEGOPNGLBMJ
              ((AFFHKININGD_o *)0x0,false,(OOMHDDBCBJP_o *)0x0,true,true,false,(MethodInfo *)0x0);
    return;
  default:
    return;
  }
LAB_03585848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

