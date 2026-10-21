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
    FUN_01bab630(&StringLiteral_2436);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_4378);
    FUN_01bab630(&StringLiteral_2443);
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
      pSVar6 = System_String__Concat(StringLiteral_2443,pSVar6,(MethodInfo *)0x0);
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
                             (StringLiteral_2436,pSVar6,StringLiteral_1492,str3,(MethodInfo *)0x0);
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                      (pNVar5,pSVar6,(pNVar5->klass->vtable)._75_set_text.method);
            if ((*ppOVar19 != (OJEHKJHEBID_o *)0x0) &&
               (pEVar21 = ((*ppOVar19)->fields).MMIHELOLFPP, pEVar21 != (EEHFEPPDBHL_o *)0x0)) {
              pNVar5 = (__this->fields)._joinRatingLabel;
              pSVar6 = BJFCCEEPHOF__POMAAOILGAL((pEVar21->fields).IFICKDAKCHN,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat(StringLiteral_2443,pSVar6,(MethodInfo *)0x0);
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
                  uVar3 = StringLiteral_4378;
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

