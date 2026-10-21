// TypeDefIndex 792
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanInfoView : TabView
// Fields:
//   private LabelAlias _nameLbl; // 0x28
//   private LabelAlias _descriptionLbl; // 0x30
//   private LabelAlias _curRatingLabel; // 0x38
//   private LabelAlias _curCapacityLabel; // 0x40
//   private LabelAlias _joinRatingLabel; // 0x48
//   private RectTransform _logoImageMountRoot; // 0x50
//   private RectTransform _privatePanel; // 0x58
//   private ClanLevelsInfoTable _clanLevelsTable; // 0x60
//   private ClanLevelInfoCell _cellPrefab; // 0x68
//   private SimpleScroll _scroll; // 0x70
//   private LabelButton _closeBtn; // 0x78
//   private LabelButton _editBtn; // 0x80
//   private LabelButton _joinBtn; // 0x88
//   private OJEHKJHEBID FBILHKCKHEJ; // 0x90
//   private long AMEAGHFFDFI; // 0x98
//   private ClanLogoImage FDOKACGMDHB; // 0xA0

// ===== private void MDMDNJBHHGF(object IMMNELPBGIF)  [RVA 0x306B5B4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$MDMDNJBHHGF @ RVA 0x306B5B4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__MDMDNJBHHGF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int *piVar1;
  Roster_o *__this_00;
  
  if ((DAT_04565f36 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f36 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 3) {
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
      if (__this_00 != (Roster_o *)0x0) {
        Roster__KCCFPCNJJBJ(__this_00,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void BABOCPBBDJP()  [RVA 0x306B6A4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$BABOCPBBDJP @ RVA 0x306B6A4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__BABOCPBBDJP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *PFEFEKFHILE;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar1;
  int64_t KNPEFJLKLAL;
  
  if ((DAT_04565f37 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_EPIOBJFNMGG__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f37 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    KNPEFJLKLAL = (pOVar1->fields).ADEIKPGDIPM;
    PFEFEKFHILE = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (RaidClansManager_o *)0x0) {
      RaidClansManager__FKOLNCFEANA(__this_00,KNPEFJLKLAL,PFEFEKFHILE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FBOJOIDGJBJ(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x306B770]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$FBOJOIDGJBJ @ RVA 0x306B770

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__FBOJOIDGJBJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  System_String_o *pSVar6;
  System_String_o *str3;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *pNVar12;
  UnityEngine_GameObject_o *__this_00;
  OJEHKJHEBID_o *pOVar13;
  long lVar14;
  Il2CppClass *pIVar15;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar16;
  ulong uVar17;
  int32_t *piVar18;
  OJEHKJHEBID_o **ppOVar19;
  ClanLogoImage_o **ppCVar20;
  EEHFEPPDBHL_o *pEVar21;
  undefined8 uVar22;
  ClanLogoImage_o *pCVar23;
  uint32_t local_48;
  int32_t local_44;
  
  if ((DAT_04565f38 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_4378/*"ClanDescFiller"*/);
    FUN_01bab630(&StringLiteral_2443/*"<quad name=TopPanel.rating_icon scale=0.9 /> "*/);
    DAT_04565f38 = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  ppOVar19 = &(__this->fields).FBILHKCKHEJ;
  *ppOVar19 = PBNPKBJKFHE;
  thunk_FUN_01c20e04(ppOVar19,PBNPKBJKFHE);
  if ((*ppOVar19 != (OJEHKJHEBID_o *)0x0) &&
     (pNVar5 = (__this->fields)._nameLbl, pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
              (pNVar5,((*ppOVar19)->fields).GJNOEAKNMOG,(pNVar5->klass->vtable)._75_set_text.method)
    ;
    pOVar13 = (__this->fields).FBILHKCKHEJ;
    if (pOVar13 != (OJEHKJHEBID_o *)0x0) {
      pNVar5 = (__this->fields)._curRatingLabel;
      CJNHFNHJHPE = (pOVar13->fields).IBFEHEDKGAL;
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat(StringLiteral_2443/*"<quad name=TopPanel.rating_icon scale=0.9 /> "*/,pSVar6,(MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                  (pNVar5,pSVar6,(pNVar5->klass->vtable)._75_set_text.method);
        pOVar13 = *ppOVar19;
        if ((pOVar13 != (OJEHKJHEBID_o *)0x0) &&
           (pGVar16 = (pOVar13->fields).MABPCBMOECE,
           pGVar16 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0)) {
          local_44 = (pGVar16->fields).count;
          local_48 = KFCFGKEHPNK__FGFOHBLCFKD((pOVar13->fields).GPDALMOAKGG,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._curCapacityLabel;
          pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
          str3 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat
                             (StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/,pSVar6,StringLiteral_1492/*"/"*/,str3,(MethodInfo *)0x0);
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                      (pNVar5,pSVar6,(pNVar5->klass->vtable)._75_set_text.method);
            if ((*ppOVar19 != (OJEHKJHEBID_o *)0x0) &&
               (pEVar21 = ((*ppOVar19)->fields).MMIHELOLFPP, pEVar21 != (EEHFEPPDBHL_o *)0x0)) {
              pNVar5 = (__this->fields)._joinRatingLabel;
              pSVar6 = BJFCCEEPHOF__POMAAOILGAL((pEVar21->fields).IFICKDAKCHN,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat(StringLiteral_2443/*"<quad name=TopPanel.rating_icon scale=0.9 /> "*/,pSVar6,(MethodInfo *)0x0);
              if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                          (pNVar5,pSVar6,(pNVar5->klass->vtable)._75_set_text.method);
                bVar4 = PCOEHCPGBBG__BDLEIEHBFAD((pEVar21->fields).KKMDFLKPNNJ,(MethodInfo *)0x0);
                if (bVar4) {
                  pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                  lVar8 = Method_System_Array_Empty<string>__;
                  lVar14 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
                  if (lVar14 == 0) {
                    FUN_01b8167c(Method_System_Array_Empty<string>__);
                    lVar14 = *(long *)(lVar8 + 0x38);
                  }
                  lVar14 = *(long *)(lVar14 + 0x10);
                  if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = FUN_01b81620();
                  }
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01ba7564();
                  }
                  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                    lVar8 = FUN_01b81620();
                  }
                  uVar3 = StringLiteral_4378/*"ClanDescFiller"*/;
                  if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0316bbd8;
                  pIVar15 = pIVar7->klass;
                  uVar22 = **(undefined8 **)(lVar8 + 0xb8);
                  uVar2._0_1_ = (pIVar15->_2).rank;
                  uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
                  uVar17 = (ulong)uVar2;
                  if (uVar17 != 0) {
                    piVar18 = &((pIVar15->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar9 = pIVar15->vtable + (*piVar18 + 0xc);
                        goto LAB_0316ba8c;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0316ba8c:
                  pSVar6 = (System_String_o *)
                           (*pVVar9->methodPtr)(pIVar7,uVar3,uVar22,pVVar9->method);
                }
                else {
                  pSVar6 = (pEVar21->fields).KKMDFLKPNNJ;
                }
                pNVar5 = (__this->fields)._descriptionLbl;
                if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                            (pNVar5,pSVar6,(pNVar5->klass->vtable)._75_set_text.method);
                  ppCVar20 = &(__this->fields).FDOKACGMDHB;
                  pCVar23 = *ppCVar20;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar4 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)pCVar23,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar4) {
                    pUVar10 = (__this->fields)._logoImageMountRoot;
                    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0316bbd8;
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                    UnityEngine_TransformExtensions__DeleteAllChildrenObjects
                              (pUVar11,(MethodInfo *)0x0);
                    pUVar10 = (__this->fields)._logoImageMountRoot;
                    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0316bbd8;
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
                    pCVar23 = KFCFGKEHPNK__LEIGOOFFFPE(pUVar11,*ppOVar19,true,2.0,(MethodInfo *)0x0)
                    ;
                    *ppCVar20 = pCVar23;
                    thunk_FUN_01c20e04(ppCVar20,pCVar23);
                  }
                  else {
                    KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar20,*ppOVar19,true,2.0,(MethodInfo *)0x0);
                  }
                  pNVar12 = (__this->fields)._clanLevelsTable;
                  if (pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__Init
                              (pNVar12,(__this->fields)._scroll,(__this->fields)._cellPrefab,
                               (MethodInfo *)0x0);
                    pOVar13 = (__this->fields).FBILHKCKHEJ;
                    if ((pOVar13 != (OJEHKJHEBID_o *)0x0) &&
                       (pNVar12 = (__this->fields)._clanLevelsTable,
                       pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable_o *)0x0)) {
                      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLevelsInfoTable__SetCurrentClanLevel
                                (pNVar12,(pOVar13->fields).GPDALMOAKGG,(MethodInfo *)0x0);
                      if ((*ppOVar19 != (OJEHKJHEBID_o *)0x0) &&
                         ((pEVar21 = ((*ppOVar19)->fields).MMIHELOLFPP,
                          pEVar21 != (EEHFEPPDBHL_o *)0x0 &&
                          (pUVar10 = (__this->fields)._privatePanel,
                          pUVar10 != (UnityEngine_RectTransform_o *)0x0)))) {
                        iVar1 = (pEVar21->fields).JODJOLBBJNI;
                        __this_00 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0)
                        ;
                        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(__this_00,iVar1 == 2,(MethodInfo *)0x0);
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
LAB_0316bbd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HGKGACOAGLK()  [RVA 0x306BBDC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$HGKGACOAGLK @ RVA 0x306BBDC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__HGKGACOAGLK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f39 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_MDMDNJBHHGF__);
    FUN_01bab630(&StringLiteral_17779/*"dlgDontShowAgain"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6602/*"FreshRatingNotify"*/);
    DAT_04565f39 = 1;
    method = extraout_x1;
  }
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  DialogsOpener__AFLGOFPHICD
            (StringLiteral_17850/*"dlgWarning"*/,StringLiteral_6602/*"FreshRatingNotify"*/,StringLiteral_9679/*"OK"*/,StringLiteral_1/*""*/,IELDNEAAPBE,0
             ,0,true,false,StringLiteral_17779/*"dlgDontShowAgain"*/,true,true,true,true,true,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x306BD1C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$.ctor @ RVA 0x306BD1C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  TabView___ctor((TabView_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EPIOBJFNMGG(KEFHDOHHHML IMMNELPBGIF)  [RVA 0x306BD24]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$EPIOBJFNMGG @ RVA 0x306BD24

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__EPIOBJFNMGG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,KEFHDOHHHML_o *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  DialogsManager_o *__this_00;
  RaidClansManager_o *pEVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Roster_o *pAVar3;
  
  if ((DAT_04565f3a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565f3a = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (DialogsManager_o *)0x0) {
    DialogsManager__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (pEVar2 != (RaidClansManager_o *)0x0) {
      RaidClansManager__FOJEJJGMIGP(pEVar2,1,(MethodInfo *)0x0);
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (RaidClansManager_o *)0x0) {
        RaidClansManager__HINLKLNCNDB(pEVar2,(MethodInfo *)0x0);
        method_00 = extraout_x1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_00;
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
          method_00 = extraout_x1_01;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_02;
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (Roster_o *)0x0) {
          if ((pAVar3->fields).MLJFALOOLGI == false) {
            return;
          }
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__HGKGACOAGLK(__this,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NAGPFPHJOEI()  [RVA 0x306BE44]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$NAGPFPHJOEI @ RVA 0x306BE44

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__NAGPFPHJOEI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  DialogsOpener__GDLBIEGHILK((__this->fields).FBILHKCKHEJ,(MethodInfo *)0x0);
  return;
}


// ===== private void JGOEDIHMJLB()  [RVA 0x306BE50]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$JGOEDIHMJLB @ RVA 0x306BE50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__JGOEDIHMJLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  UnityEngine_Events_UnityAction_o *pUVar1;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_04565f3b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_BABOCPBBDJP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_NAGPFPHJOEI__);
    FUN_01bab630(&Method_TabView_KGHLJNMCILN__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565f3b = 1;
    method = extraout_x1;
  }
  pLVar2 = (__this->fields)._closeBtn;
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  if (pLVar2 != (LabelButton_o *)0x0) {
    SFButton__AddEventListener((SFButton_o *)pLVar2,2,IELDNEAAPBE,(MethodInfo *)0x0);
    pLVar2 = (__this->fields)._editBtn;
    if (pLVar2 != (LabelButton_o *)0x0) {
      pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
      pUVar1 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields)._joinBtn;
        if (pLVar2 != (LabelButton_o *)0x0) {
          pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
          pUVar1 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateContent(object IMMNELPBGIF)  [RVA 0x306BF98]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$UpdateContent @ RVA 0x306BF98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  bool bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  PlayerData_o *pEVar8;
  KAMBBJFPLGM_o *__this_01;
  System_Object_array *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565f3c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&StringLiteral_5633/*"EditJoinType"*/);
    FUN_01bab630(&StringLiteral_5632/*"EditIcon"*/);
    FUN_01bab630(&StringLiteral_5635/*"EditRequirements"*/);
    FUN_01bab630(&StringLiteral_5631/*"EditDescription"*/);
    FUN_01bab630(&StringLiteral_5634/*"EditName"*/);
    DAT_04565f3c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  else if (IMMNELPBGIF->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__FBOJOIDGJBJ
            (__this,(OJEHKJHEBID_o *)IMMNELPBGIF,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pIVar3 = StringLiteral_5634/*"EditName"*/;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar9 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar9->m_Items[(int)uVar1] = pIVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,pIVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pIVar3 = StringLiteral_5631/*"EditDescription"*/;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar9 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar9->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar9->m_Items[(int)uVar1] = pIVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pIVar3 = StringLiteral_5632/*"EditIcon"*/;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar9 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar9 != (System_Object_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = pIVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,pIVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pIVar3 = StringLiteral_5633/*"EditJoinType"*/;
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar9 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar9 != (System_Object_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = pIVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar3 = StringLiteral_5635/*"EditRequirements"*/;
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar9 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar9 != (System_Object_array *)0x0) {
              uVar1 = (__this_00->fields)._size;
              if (uVar1 < (uint)pSVar9->max_length) {
                (__this_00->fields)._size = uVar1 + 1;
                pSVar9->m_Items[(int)uVar1] = pIVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,pIVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_68,__this_00,
                         Method_System_Collections_Generic_List<string>_GetEnumerator__);
              bVar5 = false;
              local_50.fields._index = local_68.fields._index;
              local_50.fields._version = local_68.fields._version;
              local_50.fields._list = local_68.fields._list;
              local_50.fields._current = local_68.fields._current;
              while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_50,
                                        Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                       ), bVar4) {
                bVar4 = DOCPIHOLNOA__BJBGLBAEIJB
                                  ((__this->fields).FBILHKCKHEJ,
                                   (System_String_o *)local_50.fields._current,
                                   (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
                bVar5 = (bool)(bVar5 | bVar4);
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              pLVar6 = (__this->fields)._closeBtn;
                    /* try { // try from 0316c330 to 0326c427 has its CatchHandler @ 0316c330
                       catch() { ... } // from try @ 0316c330 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c460 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c620 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c6a0 with catch @ 0316c330 */
              if ((pLVar6 != (LabelButton_o *)0x0) &&
                 (pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
                 pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
                pLVar6 = (__this->fields)._editBtn;
                if ((pLVar6 != (LabelButton_o *)0x0) &&
                   (pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
                   pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar7,bVar5,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._joinBtn;
                  if (pLVar6 != (LabelButton_o *)0x0) {
                    pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
                    if (bVar5 == false) {
                      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                      if (pEVar8 == (PlayerData_o *)0x0) goto LAB_0316c3ec;
                      __this_01 = (pEVar8->fields).MLAAJICBOAD;
                      if (__this_01 == (KAMBBJFPLGM_o *)0x0) {
                        bVar5 = true;
                      }
                      else {
                        bVar5 = KAMBBJFPLGM__ODJAMCJCHGG(__this_01,(MethodInfo *)0x0);
                        bVar5 = !bVar5;
                      }
                    }
                    else {
                      bVar5 = false;
                    }
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar7,bVar5,(MethodInfo *)0x0);
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
LAB_0316c3ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(long FKIGDGJPIAC)  [RVA 0x306C46C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$Init @ RVA 0x306C46C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,int64_t FKIGDGJPIAC,
               MethodInfo *method)

{
  (__this->fields).AMEAGHFFDFI = FKIGDGJPIAC;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__JGOEDIHMJLB(__this,(MethodInfo *)FKIGDGJPIAC);
  return;
}

