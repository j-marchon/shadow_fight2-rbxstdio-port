// TypeDefIndex 2784
// Namespace: 
// [CompilerGenerated]
// private sealed class GameUtils.GJEPNOIHFEH
// Fields:
//   public bool isCompareQuest; // 0x10
//   public FightList fightList; // 0x18
//   public OOMHDDBCBJP battle; // 0x20
//   public bool isGong; // 0x28

// ===== internal void IDFAEDFDBOG(KHODJHFHCDE validationResult)  [RVA 0x341374C]
// GameUtils.GJEPNOIHFEH$$IDFAEDFDBOG @ RVA 0x341374C

void GameUtils_GJEPNOIHFEH__IDFAEDFDBOG
               (GameUtils_GJEPNOIHFEH_o *__this,KHODJHFHCDE_o *validationResult,MethodInfo *method
               )

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  int32_t iVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar7;
  OHDDKGHEEPA_o *__this_00;
  Roster_o *pAVar8;
  KKEKKPIDGBK_o *pKVar9;
  VirtualInvokeData *pVVar10;
  long lVar11;
  System_String_o *b;
  GOJLGHMMDBO_o *__this_01;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  FightList_o *pAVar12;
  DNELIPCHKLK_o *pDVar13;
  KKEKKPIDGBK_c *pKVar14;
  GameUtils_StaticFields *pMVar15;
  FightList_o *pAVar16;
  ulong uVar17;
  System_Collections_Generic_List_JBCGDIEHOHH__o *pSVar18;
  int32_t *piVar19;
  OOMHDDBCBJP_o *pOVar20;
  PKHMIGFEJCL_o *pPVar21;
  PAMEPBLOLPB_o *pPVar22;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_InfoBattle_o *__this_03;
  System_String_o *a;
  ModelParameters_o *FIJLCCEJANF;
  
                    /* catch() { ... } // from try @ 0351373c with catch @ 03513768 */
  if ((DAT_04568099 & 1) == 0) {
                    /* try { // try from 03513778 to 0361377f has its CatchHandler @ 03513794 */
    FUN_01bab630(&FightHolder_TypeInfo);
                    /* try { // try from 03513780 to 0361378b has its CatchHandler @ 03512c08 */
    FUN_01bab630(&GOJLGHMMDBO_TypeInfo);
                    /* try { // try from 0351378c to 03613793 has its CatchHandler @ 03513794 */
                    /* catch() { ... } // from try @ 03513680 with catch @ 03513794
                       catch() { ... } // from try @ 03513778 with catch @ 03513794
                       catch() { ... } // from try @ 0351378c with catch @ 03513794 */
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10669/*"QuestBattle"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568099 = 1;
  }
  if (validationResult == (KHODJHFHCDE_o *)0x0) goto LAB_03513f14;
  if ((validationResult->fields)._NJFBLJHECFH_k__BackingField == false) {
    return;
  }
  if ((__this->fields).isCompareQuest == false) goto LAB_03513aa4;
  pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (((pNVar7 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
      (pAVar12 = (__this->fields).fightList, pAVar12 == (FightList_o *)0x0)) ||
     (pPVar21 = (pNVar7->fields).QuestParameters, pPVar21 == (PKHMIGFEJCL_o *)0x0))
  goto LAB_03513f14;
  (pPVar21->fields).NMHCLFFOMJH = (pAVar12->fields).KOILJHHCIEE;
  thunk_FUN_01c20e04();
  (pPVar21->fields).PNPKEKHEMCD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (pPVar21->fields).LOLFFJGLKLD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  pAVar12 = (__this->fields).fightList;
  if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
  if ((pAVar12->fields).JDNKKGPNHPB == 0x14) {
    pDVar13 = (pAVar12->fields).KOILJHHCIEE;
    if (pDVar13 == (DNELIPCHKLK_o *)0x0) goto LAB_03513f14;
    (pPVar21->fields).EICOIEGEFAF = (pDVar13->fields).GJFJPLHCBKJ;
    thunk_FUN_01c20e04();
    __this_00 = (OHDDKGHEEPA_o *)(__this->fields).battle;
    if (__this_00 == (OHDDKGHEEPA_o *)0x0) {
      iVar6 = -1;
    }
    else {
      bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      iVar6 = OHDDKGHEEPA__DCAKAGILMOF(__this_00,(MethodInfo *)0x0);
    }
    (pPVar21->fields).OILECKFDMDB = iVar6;
    pAVar12 = (__this->fields).fightList;
    if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
  }
  if ((pAVar12->fields).JDNKKGPNHPB != 0x14) {
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
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar8 == (Roster_o *)0x0) goto LAB_03513f14;
    iVar6 = Roster__FMNEFEMHCGG(pAVar8,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar5 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
      if (bVar5) {
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pKVar9 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pKVar9 == (KKEKKPIDGBK_o *)0x0) goto LAB_03513f14;
        pKVar14 = pKVar9->klass;
        uVar3._0_1_ = (pKVar14->_2).rank;
        uVar3._1_1_ = (pKVar14->_2).minimumAlignment;
        uVar17 = (ulong)uVar3;
        if (uVar17 != 0) {
          piVar19 = &((pKVar14->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar10 = pKVar14->vtable + (*piVar19 + 4);
              goto LAB_03513a04;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pKVar9,KKEKKPIDGBK_TypeInfo,4);
LAB_03513a04:
        (*pVVar10->methodPtr)(pKVar9,3,0,1,pVVar10->method);
      }
    }
  }
  pAVar12 = (__this->fields).fightList;
  if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
  if ((pAVar12->fields).JDNKKGPNHPB != 0x14) {
    pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar7 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03513f14;
    bVar5 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar7,1,(MethodInfo *)0x0);
    if (!bVar5) {
      pAVar12 = (__this->fields).fightList;
      if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
      goto LAB_03513a54;
    }
LAB_03513a7c:
    pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar7,(MethodInfo *)0x0);
      return;
    }
    goto LAB_03513f14;
  }
LAB_03513a54:
  if ((pAVar12->fields).JDNKKGPNHPB == 0x14) {
    pNVar7 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar7 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03513f14;
    bVar5 = Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar7,4,(MethodInfo *)0x0);
    if (bVar5) goto LAB_03513a7c;
  }
LAB_03513aa4:
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
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar8 == (Roster_o *)0x0) goto LAB_03513f14;
  if ((pAVar8->fields).MMOJIJHAJJL == false) {
    pAVar12 = (__this->fields).fightList;
    if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
    iVar1 = (pAVar12->fields).GKCEBBGMBGA;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar5 = GameUtils__FLCIPICBNGD(-iVar1,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
  }
  pAVar12 = (__this->fields).fightList;
  if (pAVar12 == (FightList_o *)0x0) goto LAB_03513f14;
  if ((pAVar12->fields).JDNKKGPNHPB != 7) {
    pPVar22 = (pAVar12->fields).JPBIBBBMCCD;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pPVar22 == (PAMEPBLOLPB_o *)0x0) goto LAB_03513f14;
    PAMEPBLOLPB__DKLPJPMNILO
              (pPVar22,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,(MethodInfo *)0x0);
  }
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
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar8 == (Roster_o *)0x0) goto LAB_03513f14;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar8,false,(MethodInfo *)0x0);
  if ((__this->fields).isGong != false) {
    EDFDANKEBGF__JDFIHJEELJK((MethodInfo *)0x0);
  }
  lVar11 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01b81620();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x10);
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_01b81620(lVar11);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar11 + 0xb8);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar15 = GameUtils_TypeInfo->static_fields;
  if (pMVar15->JOJJNOGLNCD == false) {
LAB_03513ec0:
    __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_02 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_02,6,(Il2CppObject *)(__this->fields).fightList,
                 (System_Action_object__o *)0x0,true,(MethodInfo *)0x0);
      goto LAB_03513ee4;
    }
  }
  else {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar15 = GameUtils_TypeInfo->static_fields;
    }
    pAVar12 = (__this->fields).fightList;
    if ((pAVar12 == (FightList_o *)0x0) ||
       (pOVar20 = (pAVar12->fields).IFJLLGPGMHM, pOVar20 == (OOMHDDBCBJP_o *)0x0))
    goto LAB_03513f14;
    a = pMVar15->MLPJGCJKKPE;
    b = System_String__Concat
                  ((pAVar12->fields).LAFKEHDGGND,(pOVar20->fields).DEKCPPOJFEH,
                   (pAVar12->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    if (!bVar5) {
      pAVar12 = (__this->fields).fightList;
      if ((pAVar12 == (FightList_o *)0x0) ||
         (pDVar13 = (pAVar12->fields).KOILJHHCIEE, pDVar13 == (DNELIPCHKLK_o *)0x0))
      goto LAB_03513f14;
      bVar5 = System_String__op_Equality
                        ((pDVar13->fields).GJFJPLHCBKJ,StringLiteral_10669/*"QuestBattle"*/,(MethodInfo *)0x0);
      if (!bVar5) goto LAB_03513ec0;
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    GameUtils_TypeInfo->static_fields->JOJJNOGLNCD = false;
    pAVar12 = (__this->fields).fightList;
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
    pAVar16 = (__this->fields).fightList;
    if (((pAVar16 != (FightList_o *)0x0) &&
        (pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
        pAVar8 != (Roster_o *)0x0)) &&
       (pPVar22 = Roster__LHFJEODGOJL(pAVar8,(pAVar16->fields).KOILJHHCIEE,(MethodInfo *)0x0),
       pAVar12 != (FightList_o *)0x0)) {
      FightList__HKBKHKMMBFG(pAVar12,pPVar22,(MethodInfo *)0x0);
      pAVar12 = (__this->fields).fightList;
      if ((pAVar12 != (FightList_o *)0x0) &&
         (pSVar18 = (pAVar12->fields).FGAENDJJOGN,
         pSVar18 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0)) {
        uVar4 = (pSVar18->fields)._size - 2;
        (pAVar12->fields).GNBEPMLNKLA = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
        __this_01 = (GOJLGHMMDBO_o *)thunk_FUN_01bda818(GOJLGHMMDBO_TypeInfo);
        GOJLGHMMDBO___ctor(__this_01,(MethodInfo *)0x0);
        pAVar12 = (__this->fields).fightList;
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
        pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar8 != (Roster_o *)0x0) {
          FIJLCCEJANF = (pAVar8->fields).MFLNIMCFPDK;
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          GameUtils__IILEMANDADN
                    (__this_01,pAVar12,FIJLCCEJANF,(ModelParameters_o *)0x0,1,(GOJLGHMMDBO_o *)0x0,0.0,0
                     ,0.0,0,(MethodInfo *)0x0);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          method_01 = (MethodInfo *)0x0;
          bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (bVar5) {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this_03 = (Nekki_SF2_GUI_Map_InfoBattle_o *)x[8].fields.m_CachedPtr,
               __this_03 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) goto LAB_03513f14;
            pOVar20 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentBattle(__this_03,method_00);
            Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(__this_03,pOVar20,method_01);
          }
LAB_03513ee4:
          FightHolder_TypeInfo->static_fields->FightList = (__this->fields).fightList;
          thunk_FUN_01c20e04();
          return;
        }
      }
    }
  }
LAB_03513f14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x341443C]
// GameUtils.GJEPNOIHFEH$$.ctor @ RVA 0x341443C

void GameUtils_GJEPNOIHFEH___ctor(GameUtils_GJEPNOIHFEH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

