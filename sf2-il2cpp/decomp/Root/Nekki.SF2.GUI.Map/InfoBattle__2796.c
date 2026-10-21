// TypeDefIndex 2796
// Namespace: Nekki.SF2.GUI.Map
// public class InfoBattle : UIModule
// Fields:
//   private LabelAlias _lblBattleName; // 0x28
//   private ResolutionImage _icon; // 0x30
//   private ResolutionImage _altImage; // 0x38
//   private LabelButton _btnFight; // 0x40
//   private Button _btnSkipFight; // 0x48
//   private Button _btnRemoveFight; // 0x50
//   private Button _btnPeriodicReset; // 0x58
//   private RaidInfo _raidInfo; // 0x60
//   private RaidInfoPrize _raidInfoPrize; // 0x68
//   private ContentClosed _contentClosed; // 0x70
//   private ContentCompleteOrLocked _contentCompleteOrLocked; // 0x78
//   private ContentTourChallBoss _contentTourChall; // 0x80
//   private ContentTourChallBoss _contentBosses; // 0x88
//   private ContentBossesFinal _contentBossesFinal; // 0x90
//   private ContentDuel _contentDuel; // 0x98
//   private ContentSurvival _contentSurvival; // 0xA0
//   private ContentSurvival _contentBossIntermission; // 0xA8
//   private ContentAscension _contentAscension; // 0xB0
//   private ContentRaid _contentRaid; // 0xB8
//   private DNELIPCHKLK AABIECAIFGA; // 0xC0
//   private ContentBase ALCOKIMHMCH; // 0xC8

// ===== public void OnFightButtonClick()  [RVA 0x3417184]
// Nekki.SF2.GUI.Map.InfoBattle$$OnFightButtonClick @ RVA 0x3417184

void Nekki_SF2_GUI_Map_InfoBattle__OnFightButtonClick
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  AFFHKININGD_o *FBFPLEFCDOK;
  Nekki_Utils_GlobalTimer_o *__this_00;
  System_Action_o *AENHHCABJBP;
  System_Action_o *OFNOJDGIDGD;
  System_Collections_Generic_List_object__o *pSVar6;
  NBLEEDEAPHB_o *__this_01;
  FPLOLKHJIAF_o *GOAHBPBJCKC;
  undefined8 uVar7;
  MethodInfo *pMVar8;
  System_Collections_Generic_List_AGCDKMOOJGI__o *pSVar9;
  System_Object_array *pSVar10;
  ACHLOMELAJE_o *pAVar11;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  OHDDKGHEEPA_o *__this_02;
  ADDCOJMHMHE_o AStack_160;
  undefined8 local_d0;
  undefined8 local_c8;
  System_Collections_Generic_List_object__o *local_c0 [2];
  undefined4 local_b0;
  undefined8 local_a8 [3];
  undefined4 local_90;
  undefined1 local_67;
  undefined2 local_66;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  if ((DAT_045680a9 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_HAOKGBLOEFC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IINGJLINGAJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGCDKMOOJGI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&StringLiteral_17779/*"dlgDontShowAgain"*/);
    FUN_01bab630(&StringLiteral_16970/*"characterSensei"*/);
    FUN_01bab630(&StringLiteral_21623/*"txtFullRandomRule"*/);
    FUN_01bab630(&StringLiteral_17835/*"dlgStoryBtnFight"*/);
    FUN_01bab630(&StringLiteral_16973/*"character_sensei"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680a9 = 1;
  }
  pMVar8 = (MethodInfo *)0x90;
  memset(&local_d0,0,0x90);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD = false;
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FBFPLEFCDOK = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
    return;
  }
  iVar1 = (FBFPLEFCDOK->fields).JDNKKGPNHPB;
  if (iVar1 != 0x14) {
    if (iVar1 != 7) {
      Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
                ((Nekki_SF2_GUI_Map_InfoBattle_o *)FBFPLEFCDOK,FBFPLEFCDOK,pMVar8);
      return;
    }
    bVar5 = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
    if (!bVar5) {
      JJPNLEPEAFM__LJMGKILCNBI((MethodInfo *)0x0);
      return;
    }
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    AENHHCABJBP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    OFNOJDGIDGD = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      Nekki_Utils_GlobalTimer__ServerTimeSync(__this_00,AENHHCABJBP,OFNOJDGIDGD,(MethodInfo *)0x0);
      return;
    }
LAB_03517720:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_02 = (OHDDKGHEEPA_o *)(FBFPLEFCDOK->fields).IFJLLGPGMHM;
  if (__this_02 == (OHDDKGHEEPA_o *)0x0) goto LAB_03517720;
  bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
  if (((__this_02->klass->_2).naturalAligment < bVar2) ||
     ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_02);
  }
  bVar5 = OHDDKGHEEPA__EPLDDILOPAJ(__this_02,FBFPLEFCDOK,(MethodInfo *)0x0);
  if (bVar5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar11 != (ACHLOMELAJE_o *)0x0) &&
       (pSVar9 = (FBFPLEFCDOK->fields).HFDOEONIBFA,
       pSVar9 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0)) {
      if (((pAVar11->fields).PEMALCKKLIF == false) || ((pSVar9->fields)._size == 0)) {
        JJPNLEPEAFM__NFKLNBFKKLF(__this_02,(MethodInfo *)0x0);
        return;
      }
      memset(&local_c8,0,0x88);
      local_d0 = StringLiteral_16973/*"character_sensei"*/;
      thunk_FUN_01c20e04(&local_d0);
      local_c8 = StringLiteral_16970/*"characterSensei"*/;
      thunk_FUN_01c20e04(&local_c8);
      pSVar6 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar6,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
      __this_01 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
      NBLEEDEAPHB___ctor(__this_01,StringLiteral_21623/*"txtFullRandomRule"*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                         StringLiteral_1/*""*/,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                         (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
      lVar4 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar10 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pSVar10 != (System_Object_array *)0x0) {
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pSVar10->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pSVar10->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
            thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar3,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,(Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          local_c0[0] = pSVar6;
          thunk_FUN_01c20e04(local_c0,pSVar6);
          local_b0 = 0xbf800000;
          uVar7 = thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          local_48 = uVar7;
          thunk_FUN_01c20e04(&local_48,uVar7);
          local_a8[0] = StringLiteral_17835/*"dlgStoryBtnFight"*/;
          thunk_FUN_01c20e04(local_a8);
          local_60 = StringLiteral_17779/*"dlgDontShowAgain"*/;
          local_90 = 5;
          local_66 = 1;
          thunk_FUN_01c20e04(&local_60);
          local_67 = 1;
          local_58 = 0x42c80000;
          memcpy(&AStack_160,&local_d0,0x90);
          JJPNLEPEAFM__NMHCCGPELBE(&AStack_160,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto LAB_03517720;
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)
           (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
  if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03517720;
  if ((pSVar6->fields)._size == 0) {
    return;
  }
  pMVar8 = Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__;
  GOAHBPBJCKC = (FPLOLKHJIAF_o *)
                System_Collections_Generic_List<object>__get_Item
                          (pSVar6,0,(MethodInfo_26E4ADC *)
                                    Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
  if (GOAHBPBJCKC != (FPLOLKHJIAF_o *)0x0) {
    bVar2 = (FPLOLKHJIAF_TypeInfo->_2).naturalAligment;
    if (bVar2 <= (((Il2CppClass *)GOAHBPBJCKC->klass)->_2).naturalAligment) {
      if ((((Il2CppClass *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)FPLOLKHJIAF_TypeInfo) {
        GOAHBPBJCKC = (FPLOLKHJIAF_o *)0x0;
      }
      goto LAB_03517700;
    }
  }
  GOAHBPBJCKC = (FPLOLKHJIAF_o *)0x0;
LAB_03517700:
  Nekki_SF2_GUI_Map_InfoBattle__GEDBBEMEAKB(__this,GOAHBPBJCKC,pMVar8);
  return;
}


// ===== private void IKKGKJLMHOP(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3417E38]
// Nekki.SF2.GUI.Map.InfoBattle$$IKKGKJLMHOP @ RVA 0x3417E38

void Nekki_SF2_GUI_Map_InfoBattle__IKKGKJLMHOP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
  if ((DAT_045680aa & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045680aa = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__LMMJGPKGCDJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO_TypeInfo->static_fields->JOJJNOGLNCD = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JKLIPAHCAHF()  [RVA 0x3417F08]
// Nekki.SF2.GUI.Map.InfoBattle$$JKLIPAHCAHF @ RVA 0x3417F08

void Nekki_SF2_GUI_Map_InfoBattle__JKLIPAHCAHF
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnRemoveFight;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x3417F34]
// Nekki.SF2.GUI.Map.InfoBattle$$GIENGNEGHPJ @ RVA 0x3417F34

void Nekki_SF2_GUI_Map_InfoBattle__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  long lVar2;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EEGDOGKBLNG_o *__this_02;
  System_Action_o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar3;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  NDPMLPGANCI_o *__this_03;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar4;
  System_Action_OOMHDDBCBJP__o **ppSVar5;
  DCHAJIMIFHP_o *__this_04;
  System_Action_OOMHDDBCBJP__o *pSVar6;
  System_Action_OOMHDDBCBJP__c *pSVar7;
  
  if ((DAT_045680ab & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGPINCKBAKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_PDLLNOGBJMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_UpdateBattleInfo__);
    FUN_01bab630(&StringLiteral_20397/*"raid_battle_finish_event"*/);
    DAT_045680ab = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._contentDuel;
  if (pNVar4 != (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) {
    ppSVar5 = &(pNVar4->fields).super.OnUpdateBattleInfo;
    pSVar6 = *ppSVar5;
    pSVar1 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo,method);
    System_Action<object>___ctor();
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)pSVar6,pSVar1,(MethodInfo *)0x0);
    pSVar7 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar1 == (System_Delegate_o *)0x0) {
      lVar2 = 0;
      *ppSVar5 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar6 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar1,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar6 == (System_Action_OOMHDDBCBJP__o *)0x0) {
LAB_0351804c:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar1,pSVar7);
      }
      *ppSVar5 = pSVar6;
      pSVar7 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar2 = thunk_FUN_01bda71c(pSVar1,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar2 == 0) goto LAB_0351804c;
    }
    thunk_FUN_01c20e04(ppSVar5,lVar2);
    __this_00 = (__this->fields)._btnFight;
    if ((__this_00 != (LabelButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Map_InfoBattle__JLCLHIINBBM(__this,method_00);
      Nekki_SF2_GUI_Map_InfoBattle__JKLIPAHCAHF(__this,method_01);
      Nekki_SF2_GUI_Map_InfoBattle__ELOHHHOLNHF(__this,method_02);
      Nekki_SF2_GUI_Map_InfoBattle__ClearInfo(__this,method_03);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_02 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__DNJPBDHOMOI(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar3 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar3 != (KKLJIDJBFEI_o *)0x0) {
          __this_04 = (pKVar3->fields).super.FNHOHLGNHGN;
          EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                        thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (__this_04 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(__this_04,StringLiteral_20397/*"raid_battle_finish_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
            __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            CJNHFNHJHPE_00 =
                 (System_Action_DBMPKPJGIPI__o *)
                 thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
            System_Action<Int32Enum>___ctor();
            if (__this_03 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__IFJFFPAKLKB(__this_03,CJNHFNHJHPE_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ELOHHHOLNHF()  [RVA 0x34181F8]
// Nekki.SF2.GUI.Map.InfoBattle$$ELOHHHOLNHF @ RVA 0x34181F8

void Nekki_SF2_GUI_Map_InfoBattle__ELOHHHOLNHF
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnPeriodicReset;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3418768]
// Nekki.SF2.GUI.Map.InfoBattle$$.ctor @ RVA 0x3418768

void Nekki_SF2_GUI_Map_InfoBattle___ctor(Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045680ac & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045680ac = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar1 = &(__this->fields).AABIECAIFGA;
  *ppDVar1 = __this_00;
  thunk_FUN_01c20e04(ppDVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public OOMHDDBCBJP GetCurrentBattle()  [RVA 0x3413F1C]
// Nekki.SF2.GUI.Map.InfoBattle$$GetCurrentBattle @ RVA 0x3413F1C

OOMHDDBCBJP_o *
Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle
          (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680ad & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680ad = 1;
    method = extraout_x1;
  }
  pAVar1 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method);
  if (pAVar1 != (AFFHKININGD_o *)0x0) {
    return (pAVar1->fields).IFJLLGPGMHM;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pOVar2 = NLPJLHOEAOE__JIOEHAPGADN(DBIAAJNKHLH,(MethodInfo *)0x0);
  return pOVar2;
}


// ===== private void CIHKNMDAPBG(OOMHDDBCBJP BANHBMINMMP, AFFHKININGD AGONJKOMAAA)  [RVA 0x341885C]
// Nekki.SF2.GUI.Map.InfoBattle$$CIHKNMDAPBG @ RVA 0x341885C

void Nekki_SF2_GUI_Map_InfoBattle__CIHKNMDAPBG
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  Il2CppObject *pIVar9;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar10;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_01;
  HBNENINHPGF_o *pHVar11;
  EEGDOGKBLNG_o *pEVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Color_o CJNHFNHJHPE;
  UnityEngine_Color_o UVar19;
  int local_44;
  
  if ((DAT_045680ae & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_15842/*"^enterRaid^"*/);
                    /* try { // try from 035188f8 to 03618a93 has its CatchHandler @ 035188f8
                       catch() { ... } // from try @ 035188f8 with catch @ 035188f8
                       catch() { ... } // from try @ 03518b9c with catch @ 035188f8
                       catch() { ... } // from try @ 03518bd4 with catch @ 035188f8
                       catch() { ... } // from try @ 03518c30 with catch @ 035188f8
                       catch() { ... } // from try @ 03518c60 with catch @ 035188f8 */
    FUN_01bab630(&StringLiteral_15853/*"^startFight^"*/);
    FUN_01bab630(&StringLiteral_15852/*"^startFightFor{{img::{0}}}{{{1}}}^"*/);
    DAT_045680ae = 1;
  }
  pLVar6 = (__this->fields)._btnFight;
  if (pLVar6 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    pLVar6 = (__this->fields)._btnFight;
    if ((pLVar6 != (LabelButton_o *)0x0) &&
       (pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
      if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
        if ((AGONJKOMAAA->fields).JDNKKGPNHPB == 0x14) {
          if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
            bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
            if (bVar2 <= (BANHBMINMMP->klass->_2).naturalAligment) {
              if ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)OHDDKGHEEPA_TypeInfo) {
                BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
              }
              if ((OHDDKGHEEPA_o *)BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
                pSVar8 = (System_Collections_Generic_List_object__o *)
                         (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                                   (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
                if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03518dac;
                if ((pSVar8->fields)._size == 0) {
                  pLVar6 = (__this->fields)._btnFight;
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                    /* try { // try from 03518c6c to 03618c73 has its CatchHandler @ 03518c74 */
                    /* catch() { ... } // from try @ 03518c58 with catch @ 03518c74
                       catch() { ... } // from try @ 03518c6c with catch @ 03518c74 */
                  LabelButton__set_Alias(pLVar6,StringLiteral_15842/*"^enterRaid^"*/,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                  fVar15 = 0.0;
                  fVar16 = 0.0;
                  fVar17 = 0.0;
                  fVar18 = 1.0;
                }
                else {
                  pIVar9 = System_Collections_Generic_List<object>__get_Item
                                     (pSVar8,0,
                                      Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                                     );
                  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03518dac;
                  pSVar13 = pIVar9[5].monitor;
                  pIVar9 = System_Collections_Generic_List<object>__get_Item
                                     (pSVar8,0,
                                      Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__
                                     );
                  if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03518dac;
                  iVar5 = *(int32_t *)&pIVar9[6].klass;
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                  if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_03518dac;
                  pJVar10 = JMDPBFOCHHP__BHJOLIJDBLO(__this_00,pSVar13,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  pSVar14 = StringLiteral_15842/*"^enterRaid^"*/;
                  if (pJVar10 != (JMDPBFOCHHP_EFAJBOEHPLJ_o *)0x0) {
                    pSVar14 = (pJVar10->fields).super.APBICPEOMOM;
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                    }
                    pSVar14 = MGNPHCAAEIO__AFEAIGKCFBL(pSVar14,iVar5,1.0,(MethodInfo *)0x0);
                    pSVar14 = System_String__Concat(StringLiteral_15842/*"^enterRaid^"*/,pSVar14,(MethodInfo *)0x0);
                  }
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                  LabelButton__set_Alias(pLVar6,pSVar14,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 == (EEGDOGKBLNG_o *)0x0) goto LAB_03518dac;
                  iVar4 = EEGDOGKBLNG__APFFEAJBAEK(pEVar12,pSVar13,(MethodInfo *)0x0);
                  if (iVar4 < iVar5) {
                    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UVar19 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                    fVar18 = UVar19.fields.a;
                    fVar17 = UVar19.fields.b;
                    fVar16 = UVar19.fields.g;
                    fVar15 = UVar19.fields.r;
                  }
                  else {
                    fVar18 = 1.0;
                    fVar15 = 0.0;
                    fVar16 = 0.0;
                    fVar17 = 0.0;
                  }
                  if (pLVar6 == (LabelButton_o *)0x0) goto LAB_03518dac;
                }
                UVar19.fields.g = fVar16;
                UVar19.fields.r = fVar15;
                UVar19.fields.a = fVar18;
                UVar19.fields.b = fVar17;
                LabelButton__set_Color(pLVar6,UVar19,(MethodInfo *)0x0);
                pLVar6 = (__this->fields)._btnFight;
                if (pLVar6 != (LabelButton_o *)0x0) {
                  pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                  }
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 != (EEGDOGKBLNG_o *)0x0) {
                    iVar5 = EEGDOGKBLNG__IGIHHCEONEM(pEVar12,(MethodInfo *)0x0);
                    bVar3 = OHDDKGHEEPA__BIFOFLHLABM
                                      ((OHDDKGHEEPA_o *)BANHBMINMMP,iVar5,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar7,bVar3,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                goto LAB_03518dac;
              }
            }
          }
                    /* catch() { ... } // from try @ 03518c2c with catch @ 03518c50 */
                    /* try { // try from 03518c58 to 03618c5f has its CatchHandler @ 03518c74 */
                    /* try { // try from 03518c60 to 03618c6b has its CatchHandler @ 035188f8 */
          return;
        }
                    /* try { // try from 03518a94 to 03618a9b has its CatchHandler @ 03518c14 */
        bVar3 = AFFHKININGD__PHEKFMPOHBK(AGONJKOMAAA,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar8 = (System_Collections_Generic_List_object__o *)
                   (*(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                             (AGONJKOMAAA,(AGONJKOMAAA->klass->vtable)._4_NIKCNPMKAFK.method);
                    /* try { // try from 03518ab4 to 03618abb has its CatchHandler @ 03518c10 */
                    /* try { // try from 03518ac8 to 03618acf has its CatchHandler @ 03518c08 */
          if ((pSVar8 != (System_Collections_Generic_List_object__o *)0x0) &&
             (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar8,0,
                                  Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__),
             pIVar9 != (Il2CppObject *)0x0)) {
            pSVar13 = pIVar9[5].monitor;
                    /* try { // try from 03518adc to 03618ae3 has its CatchHandler @ 03518c04 */
            pIVar9 = System_Collections_Generic_List<object>__get_Item
                               (pSVar8,0,
                                Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
            if (pIVar9 != (Il2CppObject *)0x0) {
                    /* try { // try from 03518aec to 03618af3 has its CatchHandler @ 03518bd8 */
              iVar1 = *(int *)&pIVar9[6].klass;
                    /* try { // try from 03518afc to 03618b03 has its CatchHandler @ 03518be0 */
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                    /* try { // try from 03518b08 to 03618b0f has its CatchHandler @ 03518be8 */
              }
              __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
                    /* try { // try from 03518b18 to 03618b1f has its CatchHandler @ 03518bfc */
                    /* try { // try from 03518b20 to 03618b2f has its CatchHandler @ 03518bec */
              if ((__this_01 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
                 (pHVar11 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                                      (__this_01,pSVar13,(MethodInfo *)0x0),
                 pHVar11 != (HBNENINHPGF_o *)0x0)) {
                pLVar6 = (__this->fields)._btnFight;
                pSVar14 = (pHVar11->fields)._PGCEKJLODEJ_k__BackingField;
                local_44 = iVar1;
                    /* try { // try from 03518b3c to 03618b43 has its CatchHandler @ 03518bf8 */
                pIVar9 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
                    /* try { // try from 03518b48 to 03618b53 has its CatchHandler @ 03518be4 */
                    /* try { // try from 03518b60 to 03618b63 has its CatchHandler @ 03518bf0 */
                pSVar14 = System_String__Format
                                    (StringLiteral_15852/*"^startFightFor{{img::{0}}}{{{1}}}^"*/,(Il2CppObject *)pSVar14,pIVar9,
                                     (MethodInfo *)0x0);
                    /* try { // try from 03518b68 to 03618b87 has its CatchHandler @ 03518c00 */
                if (pLVar6 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar6,pSVar14,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._btnFight;
                    /* try { // try from 03518b90 to 03618b9b has its CatchHandler @ 03518bf4 */
                  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                    /* try { // try from 03518b9c to 03618bcb has its CatchHandler @ 035188f8 */
                  pEVar12 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                  if (pEVar12 != (EEGDOGKBLNG_o *)0x0) {
                    iVar5 = EEGDOGKBLNG__APFFEAJBAEK(pEVar12,pSVar13,(MethodInfo *)0x0);
                    if (iVar5 < iVar1) {
                      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03518bcc to 03618bcf has its CatchHandler @ 03518c0c */
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 03518bd0 to 03618bd3 has its CatchHandler @ 03518bdc */
                    /* try { // try from 03518bd4 to 03618c2b has its CatchHandler @ 035188f8 */
                      UVar19 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
                      fVar18 = UVar19.fields.a;
                      fVar17 = UVar19.fields.b;
                      fVar16 = UVar19.fields.g;
                      fVar15 = UVar19.fields.r;
                    /* catch() { ... } // from try @ 03518aec with catch @ 03518bd8 */
                    }
                    else {
                    /* try { // try from 03518c2c to 03618c2f has its CatchHandler @ 03518c50 */
                      fVar18 = 1.0;
                    /* try { // try from 03518c30 to 03618c57 has its CatchHandler @ 035188f8 */
                      fVar15 = 0.0;
                      fVar16 = 0.0;
                      fVar17 = 0.0;
                    }
                    if (pLVar6 != (LabelButton_o *)0x0) {
                      CJNHFNHJHPE.fields.g = fVar16;
                      CJNHFNHJHPE.fields.r = fVar15;
                      CJNHFNHJHPE.fields.a = fVar18;
                      CJNHFNHJHPE.fields.b = fVar17;
                      LabelButton__set_Color(pLVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_03518dac;
        }
      }
                    /* catch() { ... } // from try @ 03518bd0 with catch @ 03518bdc */
      pLVar6 = (__this->fields)._btnFight;
                    /* catch() { ... } // from try @ 03518afc with catch @ 03518be0 */
      if (pLVar6 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 03518b48 with catch @ 03518be4 */
                    /* catch() { ... } // from try @ 03518b08 with catch @ 03518be8 */
                    /* catch() { ... } // from try @ 03518b20 with catch @ 03518bec */
                    /* catch() { ... } // from try @ 03518b60 with catch @ 03518bf0 */
                    /* catch() { ... } // from try @ 03518b90 with catch @ 03518bf4 */
        LabelButton__set_Alias(pLVar6,StringLiteral_15853/*"^startFight^"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03518b3c with catch @ 03518bf8 */
        pLVar6 = (__this->fields)._btnFight;
                    /* catch() { ... } // from try @ 03518b18 with catch @ 03518bfc */
        if (pLVar6 != (LabelButton_o *)0x0) {
                    /* catch() { ... } // from try @ 03518b68 with catch @ 03518c00 */
                    /* catch() { ... } // from try @ 03518adc with catch @ 03518c04 */
                    /* catch() { ... } // from try @ 03518ac8 with catch @ 03518c08 */
                    /* catch() { ... } // from try @ 03518bcc with catch @ 03518c0c */
                    /* catch() { ... } // from try @ 03518ab4 with catch @ 03518c10 */
                    /* catch() { ... } // from try @ 03518a94 with catch @ 03518c14 */
          LabelButton__set_Color
                    (pLVar6,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03518dac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EEGOPNGLBMJ(AFFHKININGD FBFPLEFCDOK)  [RVA 0x3417CEC]
// Nekki.SF2.GUI.Map.InfoBattle$$EEGOPNGLBMJ @ RVA 0x3417CEC

void Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method
               )

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  OOMHDDBCBJP_o *__this_01;
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((DAT_045680af & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    __this = (Nekki_SF2_GUI_Map_InfoBattle_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680af = 1;
  }
  if ((FBFPLEFCDOK == (AFFHKININGD_o *)0x0) ||
     (__this_01 = (FBFPLEFCDOK->fields).IFJLLGPGMHM, __this_01 == (OOMHDDBCBJP_o *)0x0)) {
LAB_03517e34:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
  if (iVar1 == 5) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03517e34;
    ACHLOMELAJE__DOFAAIMDOCP(__this_00,0,(MethodInfo *)0x0);
  }
  iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
  if ((iVar1 != 2) && (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0), iVar1 != 10))
  {
    iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_01,(MethodInfo *)0x0);
    BANHBMINMMP = (OOMHDDBCBJP_o *)0x0;
    if (iVar1 != 0x15) goto LAB_03517df8;
  }
  BANHBMINMMP = __this_01;
LAB_03517df8:
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__EEGOPNGLBMJ(FBFPLEFCDOK,false,BANHBMINMMP,true,true,false,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateBattleInfoIfSelected(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3418DB0]
// Nekki.SF2.GUI.Map.InfoBattle$$UpdateBattleInfoIfSelected @ RVA 0x3418DB0

void Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfoIfSelected
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method
               )

{
  bool bVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o *DBIAAJNKHLH;
  MethodInfo *method_00;
  
  pDVar2 = (__this->fields).AABIECAIFGA;
  if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
    bVar1 = DNELIPCHKLK__JBCKLNNLKMG(pDVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
      pDVar2 = (__this->fields).AABIECAIFGA;
      DBIAAJNKHLH = OOMHDDBCBJP__LOHPFCGCHNH(BANHBMINMMP,(MethodInfo *)0x0);
      if (pDVar2 != (DNELIPCHKLK_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar1 = DNELIPCHKLK__IPFJNBLGFOE(pDVar2,DBIAAJNKHLH,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x3418E24]
// Nekki.SF2.GUI.Map.InfoBattle$$CLNAOMIIBLH @ RVA 0x3418E24

void Nekki_SF2_GUI_Map_InfoBattle__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  EEGDOGKBLNG_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  NDPMLPGANCI_o *__this_01;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar5;
  System_Action_OOMHDDBCBJP__o **ppSVar6;
  Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *pNVar7;
  DCHAJIMIFHP_o *__this_02;
  System_Action_OOMHDDBCBJP__o *pSVar8;
  System_Action_OOMHDDBCBJP__c *pSVar9;
  
  if ((DAT_045680b0 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_IKKGKJLMHOP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGPINCKBAKE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_PDLLNOGBJMP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_UpdateBattleInfo__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_20397/*"raid_battle_finish_event"*/);
    DAT_045680b0 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._contentDuel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentDuel;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) goto LAB_03519174;
    ppSVar6 = &(pNVar5->fields).super.OnUpdateBattleInfo;
    pSVar8 = *ppSVar6;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar8,pSVar2,(MethodInfo *)0x0);
    pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar6 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar8 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) goto LAB_03519034;
      *ppSVar6 = pSVar8;
      pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar3 == 0) goto LAB_03519034;
    }
    thunk_FUN_01c20e04(ppSVar6,lVar3);
  }
  pNVar7 = (__this->fields)._contentCompleteOrLocked;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields)._contentCompleteOrLocked;
    if (pNVar7 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) goto LAB_03519174;
    ppSVar6 = &(pNVar7->fields).super.OnUpdateBattleInfo;
    pSVar8 = *ppSVar6;
    pSVar2 = (System_Delegate_o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    pSVar2 = System_Delegate__Remove((System_Delegate_o *)pSVar8,pSVar2,(MethodInfo *)0x0);
    pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
    if (pSVar2 == (System_Delegate_o *)0x0) {
      lVar3 = 0;
      *ppSVar6 = (System_Action_OOMHDDBCBJP__o *)0x0;
    }
    else {
      pSVar8 = (System_Action_OOMHDDBCBJP__o *)
               thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (pSVar8 == (System_Action_OOMHDDBCBJP__o *)0x0) {
LAB_03519034:
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2,pSVar9);
      }
      *ppSVar6 = pSVar8;
      pSVar9 = System_Action<OOMHDDBCBJP>_TypeInfo;
      lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<OOMHDDBCBJP>_TypeInfo);
      if (lVar3 == 0) goto LAB_03519034;
    }
    thunk_FUN_01c20e04(ppSVar6,lVar3);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__KBPKLBHOGAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
      __this_02 = (pKVar4->fields).super.FNHOHLGNHGN;
      EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__COEFNEICBLH(__this_02,StringLiteral_20397/*"raid_battle_finish_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
        __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        CJNHFNHJHPE_00 =
             (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo)
        ;
        System_Action<Int32Enum>___ctor();
        if (__this_01 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__LMMJGPKGCDJ(__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03519174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFGAKFACONL()  [RVA 0x3419178]
// Nekki.SF2.GUI.Map.InfoBattle$$HFGAKFACONL @ RVA 0x3419178

void Nekki_SF2_GUI_Map_InfoBattle__HFGAKFACONL
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  AFFHKININGD_o *pAVar2;
  DNELIPCHKLK_o *pDVar3;
  System_String_o *a;
  OOMHDDBCBJP_o *pOVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_045680b1 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15248/*"ZONE_6"*/);
    FUN_01bab630(&StringLiteral_15250/*"ZONE_6|BOSS_SAMURAI|6"*/);
    FUN_01bab630(&StringLiteral_10669/*"QuestBattle"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680b1 = 1;
    method = extraout_x1;
  }
  pAVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method);
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    pDVar3 = (pAVar2->fields).KOILJHHCIEE;
    if (pDVar3 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = (System_String_o *)
        (*(pDVar3->klass->vtable)._3_ToString.methodPtr)
                  (pDVar3,(pDVar3->klass->vtable)._3_ToString.method);
    bVar1 = System_String__op_Equality(a,StringLiteral_15250/*"ZONE_6|BOSS_SAMURAI|6"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pDVar3 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
      DNELIPCHKLK___ctor(pDVar3,StringLiteral_15248/*"ZONE_6"*/,StringLiteral_10669/*"QuestBattle"*/,StringLiteral_1/*""*/,
                         (MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar4 = NLPJLHOEAOE__JIOEHAPGADN(pDVar3,(MethodInfo *)0x0);
      if (pOVar4 != (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03519294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pOVar4->klass->vtable)._14_FAFFJKFGMAL.methodPtr)
                  (pOVar4,(pOVar4->klass->vtable)._14_FAFFJKFGMAL.method);
        return;
      }
    }
  }
  return;
}


// ===== public AFFHKININGD GetCurrentFight()  [RVA 0x3418800]
// Nekki.SF2.GUI.Map.InfoBattle$$GetCurrentFight @ RVA 0x3418800

AFFHKININGD_o *
Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight
          (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  AFFHKININGD_o *pAVar1;
  MethodInfo *extraout_x1;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680b2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680b2 = 1;
    method = extraout_x1;
  }
  DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
  return pAVar1;
}


// ===== private void OGPINCKBAKE()  [RVA 0x34192A8]
// Nekki.SF2.GUI.Map.InfoBattle$$OGPINCKBAKE @ RVA 0x34192A8

void Nekki_SF2_GUI_Map_InfoBattle__OGPINCKBAKE
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(pOVar2,(MethodInfo *)0x0), iVar1 == 0x14)) {
    pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_00);
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,pOVar2,in_x2);
    return;
  }
  return;
}


// ===== private void HAOKGBLOEFC()  [RVA 0x34192EC]
// Nekki.SF2.GUI.Map.InfoBattle$$HAOKGBLOEFC @ RVA 0x34192EC

void Nekki_SF2_GUI_Map_InfoBattle__HAOKGBLOEFC
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_GlobalTimer_o *pNVar2;
  AFFHKININGD_o *__this_00;
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  
  if ((DAT_045680b3 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045680b3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar2 == (Nekki_Utils_GlobalTimer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar2->fields).GAPAJLLHGHO == false) {
    JJPNLEPEAFM__LJMGKILCNBI((MethodInfo *)0x0);
    method_01 = extraout_x1_01;
  }
  else {
    __this_00 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(__this,method_00);
    if (__this_00 == (AFFHKININGD_o *)0x0) {
      return;
    }
    bVar1 = AFFHKININGD__CAGKMGGOIOJ(__this_00,(MethodInfo *)0x0);
    method_01 = extraout_x1_00;
    if (bVar1) {
      Nekki_SF2_GUI_Map_InfoBattle__EEGOPNGLBMJ
                ((Nekki_SF2_GUI_Map_InfoBattle_o *)0x1,__this_00,in_x2);
      return;
    }
  }
  BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_01);
  Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,in_x2);
  return;
}


// ===== private void JLCLHIINBBM()  [RVA 0x34181CC]
// Nekki.SF2.GUI.Map.InfoBattle$$JLCLHIINBBM @ RVA 0x34181CC

void Nekki_SF2_GUI_Map_InfoBattle__JLCLHIINBBM
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._btnSkipFight;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClearInfo()  [RVA 0x3418224]
// Nekki.SF2.GUI.Map.InfoBattle$$ClearInfo @ RVA 0x3418224

void Nekki_SF2_GUI_Map_InfoBattle__ClearInfo
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  DNELIPCHKLK_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  LabelButton_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_ContentClosed_o *pNVar3;
  Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *pNVar4;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *pNVar5;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *pNVar6;
  Nekki_SF2_GUI_Map_ContentDuel_o *pNVar7;
  Nekki_SF2_GUI_Map_ContentSurvival_o *pNVar8;
  Nekki_SF2_GUI_Map_ContentAscension_o *pNVar9;
  Nekki_SF2_GUI_Map_ContentRaid_o *pNVar10;
  Nekki_SF2_GUI_Map_ContentBase_o **ppNVar11;
  UnityEngine_UI_Button_o *pUVar12;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  RaidInfo_o *pRVar14;
  RaidInfoPrize_o *pRVar15;
  Nekki_SF2_GUI_Map_ContentBase_o *x;
  
  if ((DAT_045680b4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045680b4 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._contentClosed;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._contentClosed;
    if ((pNVar3 == (Nekki_SF2_GUI_Map_ContentClosed_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._contentCompleteOrLocked;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._contentCompleteOrLocked;
    if ((pNVar4 == (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._contentTourChall;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentTourChall;
    if ((pNVar5 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar5 = (__this->fields)._contentBosses;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._contentBosses;
    if ((pNVar5 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar6 = (__this->fields)._contentBossesFinal;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar6 = (__this->fields)._contentBossesFinal;
    if ((pNVar6 == (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar7 = (__this->fields)._contentDuel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields)._contentDuel;
    if ((pNVar7 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._contentSurvival;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._contentSurvival;
    if ((pNVar8 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar8 = (__this->fields)._contentBossIntermission;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar8 = (__this->fields)._contentBossIntermission;
    if ((pNVar8 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar9 = (__this->fields)._contentAscension;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar9 = (__this->fields)._contentAscension;
    if ((pNVar9 == (Nekki_SF2_GUI_Map_ContentAscension_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar10 = (__this->fields)._contentRaid;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar10 = (__this->fields)._contentRaid;
    if ((pNVar10 == (Nekki_SF2_GUI_Map_ContentRaid_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  ppNVar11 = &(__this->fields).ALCOKIMHMCH;
  x = *ppNVar11;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((*ppNVar11 == (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    *ppNVar11 = (Nekki_SF2_GUI_Map_ContentBase_o *)0x0;
    thunk_FUN_01c20e04(ppNVar11,0);
  }
  __this_00 = (__this->fields).AABIECAIFGA;
  if (__this_00 != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__LGOFNFEIKFB(__this_00,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._lblBattleName;
    if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._btnFight;
      if ((__this_02 != (LabelButton_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar12 = (__this->fields)._btnRemoveFight;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar12 = (__this->fields)._btnRemoveFight;
          if ((pUVar12 == (UnityEngine_UI_Button_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pUVar12 = (__this->fields)._btnRemoveFight;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar12 = (__this->fields)._btnRemoveFight;
          if ((pUVar12 == (UnityEngine_UI_Button_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pNVar13 = (__this->fields)._altImage;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar13,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pNVar13 = (__this->fields)._altImage;
          if ((pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar13,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pRVar14 = (__this->fields)._raidInfo;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pRVar14,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pRVar14 = (__this->fields)._raidInfo;
          if ((pRVar14 == (RaidInfo_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pRVar14,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03518764;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        pRVar15 = (__this->fields)._raidInfoPrize;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pRVar15,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pRVar15 = (__this->fields)._raidInfoPrize;
        if ((pRVar15 != (RaidInfoPrize_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pRVar15,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03518764:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KFJLIJIGKMK()  [RVA 0x34192AC]
// Nekki.SF2.GUI.Map.InfoBattle$$KFJLIJIGKMK @ RVA 0x34192AC

void Nekki_SF2_GUI_Map_InfoBattle__KFJLIJIGKMK
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(pOVar2,(MethodInfo *)0x0), iVar1 == 0x14)) {
    pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_00);
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,pOVar2,in_x2);
    return;
  }
  return;
}


// ===== private void CEOEIJFKMOG(object IMMNELPBGIF)  [RVA 0x34193C0]
// Nekki.SF2.GUI.Map.InfoBattle$$CEOEIJFKMOG @ RVA 0x34193C0

void Nekki_SF2_GUI_Map_InfoBattle__CEOEIJFKMOG
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  AFFHKININGD_o *AGONJKOMAAA;
  System_Action_BKKPAKHJDKB__o *CPECAEHDDDB;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  
  if ((DAT_045680b5 & 1) == 0) {
    FUN_01bab630(&System_Action<BKKPAKHJDKB>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_OGCPNAAGKAK__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045680b5 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar1 = (int *)thunk_FUN_01bda96c();
  if (*piVar1 == 1) {
    DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AGONJKOMAAA = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
    CPECAEHDDDB = (System_Action_BKKPAKHJDKB__o *)
                  thunk_FUN_01bda818(System_Action<BKKPAKHJDKB>_TypeInfo);
    System_Action<object>___ctor();
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LPGPNBGHDBD__CEOEIJFKMOG(AGONJKOMAAA,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void OGCPNAAGKAK(BKKPAKHJDKB IMMNELPBGIF)  [RVA 0x34194F8]
// Nekki.SF2.GUI.Map.InfoBattle$$OGCPNAAGKAK @ RVA 0x34194F8

void Nekki_SF2_GUI_Map_InfoBattle__OGCPNAAGKAK
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,BKKPAKHJDKB_o *IMMNELPBGIF,MethodInfo *method
               )

{
  if ((IMMNELPBGIF != (BKKPAKHJDKB_o *)0x0) && ((IMMNELPBGIF->fields).HHJIJKJCEOF == 0)) {
    Nekki_SF2_GUI_Map_InfoBattle__OnFightButtonClick(__this,(MethodInfo *)IMMNELPBGIF);
    return;
  }
  return;
}


// ===== private void PDLLNOGBJMP(KEFHDOHHHML DJJDJLMJKDI)  [RVA 0x341950C]
// Nekki.SF2.GUI.Map.InfoBattle$$PDLLNOGBJMP @ RVA 0x341950C

void Nekki_SF2_GUI_Map_InfoBattle__PDLLNOGBJMP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,KEFHDOHHHML_o *DJJDJLMJKDI,MethodInfo *method
               )

{
  int32_t iVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *method_00;
  
  pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,(MethodInfo *)DJJDJLMJKDI);
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) &&
     (iVar1 = OOMHDDBCBJP__NHGGBEACKBD(pOVar2,(MethodInfo *)0x0), iVar1 == 0x14)) {
    pOVar2 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method_00);
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,pOVar2,method);
    return;
  }
  return;
}


// ===== public void UpdateBattleInfo(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3413F94]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_16664/*"battle == null"*/);
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
  DNELIPCHKLK__LGOFNFEIKFB(*ppDVar16,(System_String_o *)StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_16664/*"battle == null"*/,(MethodInfo *)0x0);
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO__PHFFPADFANK(BANHBMINMMP,(MethodInfo *)0x0);
  if (__this_00 == (AFFHKININGD_o *)0x0) {
    if (*ppDVar16 == (DNELIPCHKLK_o *)0x0) goto LAB_03514438;
    pMVar10 = (BANHBMINMMP->fields).IAJPHAAMKPC;
    ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
    if (pMVar10 != (MEJIKMPNBNL_o *)0x0) {
      ppSVar1 = &(pMVar10->fields).DEKCPPOJFEH;
    }
    in_x3 = StringLiteral_1/*""*/;
    DNELIPCHKLK__FABCBOLKOCC
              (*ppDVar16,*ppSVar1,(BANHBMINMMP->fields).DEKCPPOJFEH,
               (System_String_o *)StringLiteral_1/*""*/,(MethodInfo *)0x0);
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
                          ((__this_00->fields).MHOGPFEMHHF,(System_String_o *)StringLiteral_1/*""*/,
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


// ===== private void IINGJLINGAJ(object IMMNELPBGIF)  [RVA 0x3419824]
// Nekki.SF2.GUI.Map.InfoBattle$$IINGJLINGAJ @ RVA 0x3419824

void Nekki_SF2_GUI_Map_InfoBattle__IINGJLINGAJ
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  ACHLOMELAJE_o *__this_00;
  AFFHKININGD_o *pAVar2;
  OHDDKGHEEPA_o *AOMBONOOJFP;
  Il2CppClass *pIVar3;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_045680b7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_045680b7 = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar3 = (System_Nullable<int>_TypeInfo->_1).element_class, IMMNELPBGIF->klass != pIVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar3);
  }
  thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<int>_TypeInfo,auStack_40);
  if (local_3c - 3U < 2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__MPBJMDHDECF(__this_00,local_3c != 3,(MethodInfo *)0x0);
  }
  else if (local_3c == 1) {
    DBIAAJNKHLH = (__this->fields).AABIECAIFGA;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
    if ((pAVar2 != (AFFHKININGD_o *)0x0) &&
       (AOMBONOOJFP = (OHDDKGHEEPA_o *)(pAVar2->fields).IFJLLGPGMHM,
       AOMBONOOJFP != (OHDDKGHEEPA_o *)0x0)) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (AOMBONOOJFP->klass->_2).naturalAligment) &&
         ((AOMBONOOJFP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
        JJPNLEPEAFM__NFKLNBFKKLF(AOMBONOOJFP,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// ===== public void Refresh()  [RVA 0x34193A4]
// Nekki.SF2.GUI.Map.InfoBattle$$Refresh @ RVA 0x34193A4

void Nekki_SF2_GUI_Map_InfoBattle__Refresh
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  OOMHDDBCBJP_o *BANHBMINMMP;
  MethodInfo *in_x2;
  
  BANHBMINMMP = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,BANHBMINMMP,in_x2);
  return;
}


// ===== private void GEDBBEMEAKB(FPLOLKHJIAF GOAHBPBJCKC)  [RVA 0x341772C]
// Nekki.SF2.GUI.Map.InfoBattle$$GEDBBEMEAKB @ RVA 0x341772C

void Nekki_SF2_GUI_Map_InfoBattle__GEDBBEMEAKB
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,FPLOLKHJIAF_o *GOAHBPBJCKC,MethodInfo *method
               )

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  bool bVar5;
  EEGDOGKBLNG_o *__this_00;
  Il2CppObject *pIVar6;
  long lVar7;
  System_String_o *pSVar8;
  VirtualInvokeData *pVVar9;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  System_String_o *pSVar11;
  System_Action_object__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar12;
  ADJEBFOPFFF_o *__this_02;
  Il2CppClass *pIVar13;
  ulong uVar14;
  int32_t *piVar15;
  int32_t *piVar16;
  LabelButton_o *__this_03;
  System_String_o *pSVar17;
  UnityEngine_Color_o CJNHFNHJHPE;
  int32_t local_58;
  int32_t iStack_54;
  
  if ((DAT_045680b8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_InfoBattle_CEOEIJFKMOG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_7512/*"Infobattle::ShowRaidsNotEnoughKeys: rule is NULL"*/);
    FUN_01bab630(&StringLiteral_2428/*"<quad name=MiscSprites.ruby >"*/);
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_270/*" >"*/);
    FUN_01bab630(&StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/);
    FUN_01bab630(&StringLiteral_16813/*"btnEnterNow"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10993/*"RaidsNotEnoughKeysText"*/);
    DAT_045680b8 = 1;
  }
  if (GOAHBPBJCKC == (FPLOLKHJIAF_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_7512/*"Infobattle::ShowRaidsNotEnoughKeys: rule is NULL"*/,(MethodInfo *)0x0);
    return;
  }
  pSVar17 = (GOAHBPBJCKC->fields).super.MLNFANFAMOO;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iStack_54 = EEGDOGKBLNG__APFFEAJBAEK(__this_00,pSVar17,(MethodInfo *)0x0);
    local_58 = (GOAHBPBJCKC->fields).super.DKOHFAHBPPE;
    pSVar17 = OFFIONDOEPM__CDGICMOFKHE(pSVar17,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat(StringLiteral_2422/*"<quad name="*/,pSVar17,StringLiteral_270/*" >"*/,(MethodInfo *)0x0);
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar7 = FUN_01bab718(string___TypeInfo,4);
    pSVar8 = System_Int32__ToString((int32_t)&local_58,(MethodInfo *)0x0);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = pSVar8;
        thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x20),pSVar8);
        if (1 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x28) = pSVar17;
          thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x28),pSVar17);
          pSVar8 = System_Int32__ToString((int32_t)&iStack_54,(MethodInfo *)0x0);
          if (2 < *(uint *)(lVar7 + 0x18)) {
            *(undefined8 *)(lVar7 + 0x30) = pSVar8;
            thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x30),pSVar8);
            if (3 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x38) = pSVar17;
              thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x38),pSVar17);
              uVar4 = StringLiteral_10993/*"RaidsNotEnoughKeysText"*/;
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar13 = pIVar6->klass;
                uVar2._0_1_ = (pIVar13->_2).rank;
                uVar2._1_1_ = (pIVar13->_2).minimumAlignment;
                uVar14 = (ulong)uVar2;
                if (uVar14 != 0) {
                  piVar15 = &((pIVar13->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                        (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                      pVVar9 = pIVar13->vtable + (*piVar15 + 0xc);
                      goto LAB_03517a1c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03517a1c:
                pSVar8 = (System_String_o *)(*pVVar9->methodPtr)(pIVar6,uVar4,lVar7,pVVar9->method);
                pSVar17 = StringLiteral_10992/*"RaidsNotEnoughKeysHeader"*/;
                __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                if (__this_01 != (JMDPBFOCHHP_o *)0x0) {
                  pJVar10 = JMDPBFOCHHP__DIFLKMKBENA
                                      (__this_01,(GOAHBPBJCKC->fields).GMILEGDKKPL,false,
                                       (MethodInfo *)0x0);
                  if (pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    JJPNLEPEAFM__JNDPLPKDPCP
                              (pSVar17,pSVar8,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,
                               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1/*""*/,false,
                               true,true,true,(MethodInfo *)0x0);
                    return;
                  }
                  pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  lVar7 = FUN_01bab718(string___TypeInfo,2);
                  piVar15 = &(pJVar10->fields).NGMFKGGBHND;
                  pSVar11 = System_Int32__ToString((int32_t)piVar15,(MethodInfo *)0x0);
                  if (lVar7 != 0) {
                    if (*(int *)(lVar7 + 0x18) != 0) {
                      *(undefined8 *)(lVar7 + 0x20) = pSVar11;
                      thunk_FUN_01c20e04((undefined8 *)(lVar7 + 0x20),pSVar11);
                      if (1 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x28) = StringLiteral_2428/*"<quad name=MiscSprites.ruby >"*/;
                        thunk_FUN_01c20e04();
                        uVar4 = StringLiteral_16813/*"btnEnterNow"*/;
                        if (pIVar6 != (Il2CppObject *)0x0) {
                          pIVar13 = pIVar6->klass;
                          uVar3._0_1_ = (pIVar13->_2).rank;
                          uVar3._1_1_ = (pIVar13->_2).minimumAlignment;
                          uVar14 = (ulong)uVar3;
                          if (uVar14 != 0) {
                            piVar16 = &((pIVar13->_1).interfaceOffsets)->offset;
                            do {
                              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->
                                  interfaceType == (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                                pVVar9 = pIVar13->vtable + (*piVar16 + 0xc);
                                goto LAB_03517b88;
                              }
                              uVar14 = uVar14 - 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar14 != 0);
                          }
                          pVVar9 = (VirtualInvokeData *)
                                   FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03517b88:
                          pSVar11 = (System_String_o *)
                                    (*pVVar9->methodPtr)(pIVar6,uVar4,lVar7,pVVar9->method);
                          IELDNEAAPBE = (System_Action_object__o *)
                                        thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                          System_Action<object>___ctor();
                          pNVar12 = JJPNLEPEAFM__JNDPLPKDPCP
                                              (pSVar17,pSVar8,pSVar11,StringLiteral_3640/*"CANCEL"*/,IELDNEAAPBE
                                               ,2,1,false,false,StringLiteral_1/*""*/,false,false,true,
                                               true,(MethodInfo *)0x0);
                          if (pNVar12 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
                            bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).
                                    naturalAligment;
                            if (((pNVar12->klass->_2).naturalAligment < bVar1) ||
                               ((pNVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                              FUN_01babc64();
                            }
                            __this_03 = (pNVar12->fields)._btnOK;
                            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                            }
                            __this_02 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
                            if (__this_02 != (ADJEBFOPFFF_o *)0x0) {
                              bVar5 = ADJEBFOPFFF__MIBNBHKOIEI
                                                (__this_02,*piVar15,false,(MethodInfo *)0x0);
                              if (!bVar5) {
                                CJNHFNHJHPE = CFBGPBCDAGA__NFFPCFGDOKG
                                                        (0x9b,0x1c,7,0xff,(MethodInfo *)0x0);
                                if (__this_03 == (LabelButton_o *)0x0) goto LAB_03517ce0;
                                LabelButton__set_Color(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
                              }
                              return;
                            }
                          }
                        }
                        goto LAB_03517ce0;
                      }
                    }
                    goto LAB_03517ce4;
                  }
                }
              }
              goto LAB_03517ce0;
            }
          }
        }
      }
LAB_03517ce4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03517ce0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NEMHIDIGACK(OOMHDDBCBJP BANHBMINMMP, AFFHKININGD AGONJKOMAAA)  [RVA 0x34195A8]
// Nekki.SF2.GUI.Map.InfoBattle$$NEMHIDIGACK @ RVA 0x34195A8

void Nekki_SF2_GUI_Map_InfoBattle__NEMHIDIGACK
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this_00;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *pNVar3;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_Map_ContentDuel_o *__this_01;
  Nekki_SF2_GUI_Map_ContentSurvival_o *pNVar5;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Map_ContentRaid_o *pNVar6;
  Nekki_SF2_GUI_Map_ContentBase_o *pNVar7;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_045680b9 & 1) == 0) {
    FUN_01bab630(&COALAGILPBO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5595/*"ERROR: openStatus() - unknown fight type: "*/);
    DAT_045680b9 = 1;
  }
  if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03519820;
  iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  switch(iVar2) {
  case 1:
  case 3:
  case 4:
  case 9:
  case 0x11:
    pNVar3 = (__this->fields)._contentTourChall;
    if (pNVar3 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentTourChallBoss__Init(pNVar3,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentTourChall;
    break;
  case 2:
  case 10:
  case 0x15:
    if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) goto LAB_03519820;
    if ((AGONJKOMAAA->fields).HLFBMBHOPMI == (BANHBMINMMP->fields).KIHDFNGKPGN - 1)
    goto switchD_03519638_caseD_12;
    pNVar3 = (__this->fields)._contentBosses;
    if (pNVar3 == (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentTourChallBoss__Init(pNVar3,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBosses;
    break;
  case 5:
    pNVar5 = (__this->fields)._contentSurvival;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentSurvival__Init(pNVar5,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentSurvival;
    break;
  default:
    local_38 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    local_48.klass = (System_Enum_c *)COALAGILPBO_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_5595/*"ERROR: openStatus() - unknown fight type: "*/,pSVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    goto LAB_035197ac;
  case 7:
    __this_01 = (__this->fields)._contentDuel;
    if (__this_01 == (Nekki_SF2_GUI_Map_ContentDuel_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentDuel__Init(__this_01,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentDuel;
    break;
  case 8:
    pNVar5 = (__this->fields)._contentBossIntermission;
    if (pNVar5 == (Nekki_SF2_GUI_Map_ContentSurvival_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentSurvival__Init(pNVar5,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBossIntermission;
    break;
  case 0x12:
  case 0x13:
switchD_03519638_caseD_12:
    __this_00 = (__this->fields)._contentBossesFinal;
    if (__this_00 == (Nekki_SF2_GUI_Map_ContentBossesFinal_o *)0x0) goto LAB_03519820;
    method = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Map_ContentBossesFinal__Init(__this_00,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0);
    pNVar6 = (Nekki_SF2_GUI_Map_ContentRaid_o *)(__this->fields)._contentBossesFinal;
    break;
  case 0x14:
    pNVar6 = (__this->fields)._contentRaid;
    if (pNVar6 == (Nekki_SF2_GUI_Map_ContentRaid_o *)0x0) goto LAB_03519820;
    Nekki_SF2_GUI_Map_ContentRaid__Init(pNVar6,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._contentRaid;
  }
  (__this->fields).ALCOKIMHMCH = (Nekki_SF2_GUI_Map_ContentBase_o *)pNVar6;
  thunk_FUN_01c20e04();
LAB_035197ac:
  pNVar7 = (__this->fields).ALCOKIMHMCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).ALCOKIMHMCH;
    if ((pNVar7 == (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) ||
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_02 == (UnityEngine_GameObject_o *)0x0)) {
LAB_03519820:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Map_InfoBattle__CIHKNMDAPBG(__this,BANHBMINMMP,AGONJKOMAAA,method);
  return;
}


// ===== private void FKFPKOGCLFP(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3419510]
// Nekki.SF2.GUI.Map.InfoBattle$$FKFPKOGCLFP @ RVA 0x3419510

void Nekki_SF2_GUI_Map_InfoBattle__FKFPKOGCLFP
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method
               )

{
  undefined4 uVar1;
  int32_t iVar2;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_045680ba & 1) == 0) {
    FUN_01bab630(&StringLiteral_14114/*"UI/battles/"*/);
    DAT_045680ba = 1;
  }
  pNVar3 = (__this->fields)._icon;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_14114/*"UI/battles/"*/._4_4_;
    (pNVar3->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114/*"UI/battles/"*/;
    (pNVar3->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.m_PixelsPerUnitMultiplier);
    if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
      pNVar3 = (__this->fields)._icon;
      iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
      CJNHFNHJHPE = OFFIONDOEPM__GKMBNILEEDE
                              (iVar2 == 0x14,(BANHBMINMMP->fields).NDEFOHKEFJD,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIFBKHJKDNL()  [RVA 0x34199CC]
// Nekki.SF2.GUI.Map.InfoBattle$$MIFBKHJKDNL @ RVA 0x34199CC

void Nekki_SF2_GUI_Map_InfoBattle__MIFBKHJKDNL
               (Nekki_SF2_GUI_Map_InfoBattle_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  OOMHDDBCBJP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045680bb & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    DAT_045680bb = 1;
    method = extraout_x1;
  }
  __this_00 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this,method);
  if (__this_00 != (OOMHDDBCBJP_o *)0x0) {
    iVar1 = OOMHDDBCBJP__NHGGBEACKBD(__this_00,(MethodInfo *)0x0);
    if (iVar1 == 7) {
      if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AGILEPNENOH__DGLJCGNHLIG(false,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this,__this_00,in_x2);
    return;
  }
  return;
}

