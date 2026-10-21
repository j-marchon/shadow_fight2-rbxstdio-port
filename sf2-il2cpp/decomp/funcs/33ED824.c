// FCJBEKHDLAF$$CGKHMGBKNCE @ RVA 0x33ED824

void FCJBEKHDLAF__CGKHMGBKNCE
               (FCJBEKHDLAF_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int32_t iVar6;
  OLKKAIFGGAK_o *pOVar7;
  ECENNHNBAME_o *pEVar8;
  PBAKFOBIHEG_o *pPVar9;
  VirtualInvokeData *pVVar10;
  MethodInfo *method_00;
  JIMKCICMMIL_o *pJVar11;
  AFFHKININGD_o *pAVar12;
  PJKHAJKEHEL_o *pPVar13;
  PBAKFOBIHEG_c *pPVar14;
  ulong uVar15;
  int32_t *piVar16;
  MDAPDLLMOMF_o *LEAMIBIAIIN;
  System_Collections_IEnumerator_o *pSVar17;
  float fVar18;
  float fVar19;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
  if ((DAT_04567ee4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_6318);
    FUN_01bab630(&StringLiteral_9071);
    DAT_04567ee4 = 1;
  }
  pJVar11 = (__this->fields).ODIAFMNGOLA;
  if (pJVar11 != (JIMKCICMMIL_o *)0x0) {
    if ((pJVar11->fields).BLGIPOEBHGA == false) {
      return;
    }
    pAVar12 = (__this->fields).FBFPLEFCDOK;
    if (pAVar12 != (AFFHKININGD_o *)0x0) {
      if ((pAVar12->fields).JDNKKGPNHPB == 0) {
        return;
      }
      if (((BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) &&
          (pOVar7 = (BCHKAEBGKGG->fields).HEMGHNOOJPI, pOVar7 != (OLKKAIFGGAK_o *)0x0)) &&
         (pEVar8 = OLKKAIFGGAK__FMEOPPFIHCB(pOVar7,(MethodInfo *)0x0),
         pEVar8 != (ECENNHNBAME_o *)0x0)) {
        bVar5 = System_String__op_Equality
                          ((pEVar8->fields).JIJLBFGKNJK,StringLiteral_9071,(MethodInfo *)0x0);
        if (bVar5) {
          return;
        }
        if ((__this->fields).AHNAIKFDANF != false) {
          return;
        }
        if ((__this->fields).PLEACDNOHFC != false) {
          return;
        }
        pOVar7 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
        if (pOVar7 != (OLKKAIFGGAK_o *)0x0) {
          bVar5 = OLKKAIFGGAK__KNEBDMEKJDD(pOVar7,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          LEAMIBIAIIN = (MDAPDLLMOMF_o *)(BCHKAEBGKGG->fields).KOANCCDDBDA;
          if (LEAMIBIAIIN != (MDAPDLLMOMF_o *)0x0) {
            bVar2 = (JADGCGOJLJB_TypeInfo->_2).naturalAligment;
            if ((bVar2 <= (LEAMIBIAIIN->klass->_2).naturalAligment) &&
               ((LEAMIBIAIIN->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)JADGCGOJLJB_TypeInfo)) {
              iVar6 = JADGCGOJLJB__NHGGBEACKBD((JADGCGOJLJB_o *)LEAMIBIAIIN,(MethodInfo *)0x0);
              if (iVar6 != 4) {
                return;
              }
              pOVar7 = (BCHKAEBGKGG->fields).PFFLOCBGFCH;
              if (pOVar7 == (OLKKAIFGGAK_o *)0x0) {
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogError(StringLiteral_6318,(MethodInfo *)0x0);
                return;
              }
              bVar2 = (MDAPDLLMOMF_TypeInfo->_2).naturalAligment;
              if ((bVar2 <= (LEAMIBIAIIN->klass->_2).naturalAligment) &&
                 ((LEAMIBIAIIN->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)MDAPDLLMOMF_TypeInfo)) {
                fVar18 = OLKKAIFGGAK__NACPMGNAODH
                                   (pOVar7,LEAMIBIAIIN,false,false,(GEBHIBIEAJE_o *)0x0,
                                    (System_Collections_Generic_List_string__o *)0x0,
                                    (MethodInfo *)0x0);
                pOVar7 = (BCHKAEBGKGG->fields).PFFLOCBGFCH;
                if ((pOVar7 != (OLKKAIFGGAK_o *)0x0) &&
                   (pPVar13 = (pOVar7->fields).FAPMJJBOFEF, pPVar13 != (PJKHAJKEHEL_o *)0x0)) {
                  local_60.fakeValueActive = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValueActive;
                  local_60.inited = (pPVar13->fields).JNFNFEJAGGN.fields.inited;
                  local_60._18_2_ = *(undefined2 *)&(pPVar13->fields).JNFNFEJAGGN.fields.field_0x12;
                  local_60.hiddenValueOldByte4.fields =
                       (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                  local_60.fakeValue = (pPVar13->fields).JNFNFEJAGGN.fields.fakeValue;
                  local_60.currentCryptoKey = (pPVar13->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                  local_60.hiddenValue = (pPVar13->fields).JNFNFEJAGGN.fields.hiddenValue;
                  fVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                     ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60
                                      ,(MethodInfo *)0x0);
                  if (fVar18 < fVar19) {
                    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (FCJBEKHDLAF_TypeInfo->static_fields->MILODBPDDCE == false) {
                      return;
                    }
                  }
                  pOVar7 = (BCHKAEBGKGG->fields).HEMGHNOOJPI;
                  if (pOVar7 != (OLKKAIFGGAK_o *)0x0) {
                    OLKKAIFGGAK__PLPBFMKLPGI(pOVar7,false,(MethodInfo *)0x0);
                    (__this->fields).PLEACDNOHFC = true;
                    pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    if (pPVar9 != (PBAKFOBIHEG_o *)0x0) {
                      pPVar14 = pPVar9->klass;
                      pSVar17 = (__this->fields).AFIFGCCDGNF;
                      uVar3._0_1_ = (pPVar14->_2).rank;
                      uVar3._1_1_ = (pPVar14->_2).minimumAlignment;
                      uVar15 = (ulong)uVar3;
                      if (uVar15 != 0) {
                        piVar16 = &((pPVar14->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
                              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                            pVVar10 = pPVar14->vtable + (*piVar16 + 1);
                            goto LAB_034edaf4;
                          }
                          uVar15 = uVar15 - 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar15 != 0);
                      }
                      pVVar10 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,1);
LAB_034edaf4:
                      method_00 = pVVar10->method;
                      (*pVVar10->methodPtr)(pPVar9,pSVar17);
                      pPVar9 = CoroutineManager__get_Current((MethodInfo *)0x0);
                      pSVar17 = FCJBEKHDLAF__MPAJHIDJKEM(__this,BCHKAEBGKGG,method_00);
                      if (pPVar9 != (PBAKFOBIHEG_o *)0x0) {
                        pPVar14 = pPVar9->klass;
                        ppSVar1 = &(__this->fields).AFIFGCCDGNF;
                        uVar4._0_1_ = (pPVar14->_2).rank;
                        uVar4._1_1_ = (pPVar14->_2).minimumAlignment;
                        uVar15 = (ulong)uVar4;
                        if (uVar15 != 0) {
                          piVar16 = &((pPVar14->_1).interfaceOffsets)->offset;
                          do {
                            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType
                                == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                              pVVar10 = pPVar14->vtable + *piVar16;
                              goto LAB_034edb74;
                            }
                            uVar15 = uVar15 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar15 != 0);
                        }
                        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pPVar9,PBAKFOBIHEG_TypeInfo,0);
LAB_034edb74:
                        pSVar17 = (System_Collections_IEnumerator_o *)
                                  (*pVVar10->methodPtr)(pPVar9,pSVar17,1,pVVar10->method);
                        *ppSVar1 = pSVar17;
                        thunk_FUN_01c20e04(ppSVar1,pSVar17);
                        return;
                      }
                    }
                  }
                }
                goto LAB_034edbb0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(LEAMIBIAIIN);
          }
        }
      }
    }
  }
LAB_034edbb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

