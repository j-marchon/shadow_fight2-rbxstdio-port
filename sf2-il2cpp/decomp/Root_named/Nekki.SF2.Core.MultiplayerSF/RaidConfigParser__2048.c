// Original name: Nekki.SF2.Core.MultiplayerSF.RaidConfigParser  (obfuscated FCNNPBIIEOK)
// TypeDefIndex 2048
// Namespace: 
// public static class RaidConfigParser
// Fields:

// ===== public static RaidConfig.EJICJNOEGGE INOFNLPJAHG(XmlDocument LKILNGEECIJ)  [RVA 0x32AB6E0]
// RaidConfigParser$$INOFNLPJAHG @ RVA 0x32AB6E0

/* WARNING: Removing unreachable block (ram,0x033aba18) */

RaidConfig_EJICJNOEGGE_o *
RaidConfigParser__INOFNLPJAHG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  RaidConfig_EJICJNOEGGE_o *__this;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = LKILNGEECIJ;
  if ((DAT_0456743b & 1) == 0) {
    FUN_01bab630(&RaidConfig_EJICJNOEGGE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11343/*"RestrictedItems"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    auVar10 = FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_0456743b = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_11343/*"RestrictedItems"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar4 == (long *)0x0) {
      return (RaidConfig_EJICJNOEGGE_o *)0x0;
    }
    __this = (RaidConfig_EJICJNOEGGE_o *)thunk_FUN_01bda818(RaidConfig_EJICJNOEGGE_TypeInfo);
    RaidConfig_EJICJNOEGGE___ctor(__this,(MethodInfo *)0x0);
    auVar10 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    plVar4 = auVar10._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar10._8_8_;
    auVar10 = auVar2 << 0x40;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_033ab848;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ab848:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return __this;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_033ab9ac;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033ab994;
        }
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_033ab8a8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ab8a8:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar3) {
          if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar6,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (System_Xml_XmlAttributeCollection_o *)
                        (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                  (JHMENEKPIBO,
                                   (JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (__this == (RaidConfig_EJICJNOEGGE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            RaidConfig_EJICJNOEGGE__AGACILCHJGI(__this,pSVar6,(MethodInfo *)0x0);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_033ab994:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033ab9d0;
    }
  }
LAB_033ab9ac:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033ab9d0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return __this;
}


// ===== public static RaidConfig.JMEJFGKJNEA EAGBBNECKFB(XmlDocument LKILNGEECIJ)  [RVA 0x32ABAFC]
// RaidConfigParser$$EAGBBNECKFB @ RVA 0x32ABAFC

/* WARNING: Removing unreachable block (ram,0x033acb6c) */
/* WARNING: Removing unreachable block (ram,0x033ac850) */
/* WARNING: Removing unreachable block (ram,0x033acb54) */

RaidConfig_JMEJFGKJNEA_o *
RaidConfigParser__EAGBBNECKFB(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  RaidConfig_JMEJFGKJNEA_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  RaidConfig_CKEMIAEPGKD_o *__this_00;
  System_DateTime_o SVar12;
  int64_t iVar13;
  int64_t iVar14;
  long *plVar15;
  RaidConfig_EEJFKIEGDPH_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_02;
  System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *__this_03;
  MethodInfo_27F61B8 *pMVar16;
  long lVar17;
  RaidConfig_EEJFKIEGDPH_array *pJVar18;
  RaidConfig_CKEMIAEPGKD_array *pJVar19;
  ulong uVar20;
  int *piVar21;
  System_Nullable_DateTime__o __this_04;
  System_Nullable_DateTime__o __this_05;
  System_Nullable_DateTime__Fields local_80;
  System_Nullable_DateTime__Fields local_70;
  
  if ((DAT_0456743c & 1) == 0) {
    FUN_01bab630(&RaidConfig_CKEMIAEPGKD_TypeInfo);
    FUN_01bab630(&RaidConfig_EEJFKIEGDPH_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&RaidConfig_JMEJFGKJNEA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_CKEMIAEPGKD>_Add__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3318/*"BPEventKey"*/);
    FUN_01bab630(&StringLiteral_3573/*"BtnBuyTextColor"*/);
    FUN_01bab630(&StringLiteral_3149/*"Atlas"*/);
    FUN_01bab630(&StringLiteral_10430/*"PremiumFlagCurrency"*/);
    FUN_01bab630(&StringLiteral_10519/*"ProgressBarSkew"*/);
    FUN_01bab630(&StringLiteral_10432/*"PremiumPackName"*/);
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_22254/*"{0,0,0}"*/);
    FUN_01bab630(&StringLiteral_3440/*"BattlePasses"*/);
    FUN_01bab630(&StringLiteral_3439/*"BattlePassPointsCurrency"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9653/*"Number"*/);
    FUN_01bab630(&StringLiteral_12091/*"ShowDojoProgressBar"*/);
    FUN_01bab630(&StringLiteral_10517/*"ProgressBarFullHint"*/);
    FUN_01bab630(&StringLiteral_10429/*"Premium"*/);
    FUN_01bab630(&StringLiteral_10346/*"Points"*/);
    FUN_01bab630(&StringLiteral_10518/*"ProgressBarHint"*/);
    FUN_01bab630(&StringLiteral_12374/*"StartTime"*/);
    FUN_01bab630(&StringLiteral_12899/*"TextOnScrollColor"*/);
    FUN_01bab630(&StringLiteral_3574/*"BtnClaimTextColor"*/);
    FUN_01bab630(&StringLiteral_11234/*"Replacement"*/);
    FUN_01bab630(&StringLiteral_8669/*"Loot"*/);
    FUN_01bab630(&StringLiteral_10520/*"ProgressBarTextColor"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_3561/*"BpGift"*/);
    DAT_0456743c = 1;
  }
  local_70 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  local_80 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_3440/*"BattlePasses"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (RaidConfig_JMEJFGKJNEA_o *)0x0;
    }
    __this = (RaidConfig_JMEJFGKJNEA_o *)thunk_FUN_01bda818(RaidConfig_JMEJFGKJNEA_TypeInfo);
    RaidConfig_JMEJFGKJNEA___ctor(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_10432/*"PremiumPackName"*/,(MethodInfo *)0x0);
      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if (__this != (RaidConfig_JMEJFGKJNEA_o *)0x0) {
        (__this->fields).COENDIKFHPA = pSVar9;
        thunk_FUN_01c20e04();
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_10430/*"PremiumFlagCurrency"*/,(MethodInfo *)0x0);
          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          (__this->fields).GDAPNIKAOJK = pSVar9;
          thunk_FUN_01c20e04();
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_3318/*"BPEventKey"*/,(MethodInfo *)0x0);
            pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this->fields).BMODOAKLCNA = pSVar9;
            thunk_FUN_01c20e04();
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_3561/*"BpGift"*/,(MethodInfo *)0x0);
              pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              (__this->fields).CGEMEMLPJFE = pSVar9;
              thunk_FUN_01c20e04();
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
              if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar7,StringLiteral_3439/*"BattlePassPointsCurrency"*/,(MethodInfo *)0x0);
                pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                   (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                (__this->fields).PPFEFPPPLOA = pSVar9;
                thunk_FUN_01c20e04();
                plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x210));
                if (plVar6 != (long *)0x0) {
                  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  do {
                    lVar17 = *plVar6;
                    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_033abfa4;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033abfa4:
                    uVar20 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                    if ((uVar20 & 1) == 0) {
                      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                      if (plVar6 == (long *)0x0) {
                        return __this;
                      }
                      lVar17 = *plVar6;
                      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar20 == 0) goto LAB_033aca2c;
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      goto LAB_033aca14;
                    }
                    lVar17 = *plVar6;
                    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                          goto LAB_033ac004;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ac004:
                    pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar6,puVar10[1]);
                    if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
                      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                      if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                         ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01babc64(pSVar11);
                      }
                    }
                    bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
                    if (!bVar3) {
                      __this_00 = (RaidConfig_CKEMIAEPGKD_o *)
                                  thunk_FUN_01bda818(RaidConfig_CKEMIAEPGKD_TypeInfo);
                      RaidConfig_CKEMIAEPGKD___ctor(__this_00,(MethodInfo *)0x0);
                      if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if (__this_00 == (RaidConfig_CKEMIAEPGKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      (__this_00->fields).JIJLBFGKNJK = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3149/*"Atlas"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).KBOFABJIPPD = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).BPCADJLKKGA = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12091/*"ShowDojoProgressBar"*/,(MethodInfo *)0x0);
                      bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
                      (__this_00->fields).HKKGMGDDCOD = bVar3;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10518/*"ProgressBarHint"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).EGMPFEOGKOF = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10517/*"ProgressBarFullHint"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).DFHEHPGHMLF = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10520/*"ProgressBarTextColor"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254/*"{0,0,0}"*/,(MethodInfo *)0x0);
                      (__this_00->fields).DPNFGBFFNAJ = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3573/*"BtnBuyTextColor"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254/*"{0,0,0}"*/,(MethodInfo *)0x0);
                      (__this_00->fields).POLMCBLGCFH = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3574/*"BtnClaimTextColor"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254/*"{0,0,0}"*/,(MethodInfo *)0x0);
                      (__this_00->fields).MNHCNNMLFNO = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12899/*"TextOnScrollColor"*/,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254/*"{0,0,0}"*/,(MethodInfo *)0x0);
                      (__this_00->fields).KMMIHCHCNDM = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10519/*"ProgressBarSkew"*/,(MethodInfo *)0x0);
                      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                      (__this_00->fields).JIALOHAOPAO = iVar4;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12374/*"StartTime"*/,(MethodInfo *)0x0);
                      pMVar16 = (MethodInfo_27F61B8 *)0x0;
                      local_70 = (System_Nullable_DateTime__Fields)
                                 EIABCPKDEBD__LDPPNAICGFJ
                                           (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if ((local_70._0_8_ & 0xff) == 0) {
                        iVar13 = 0;
                      }
                      else {
                        __this_04.fields.value.fields._dateData =
                             (System_DateTime_Fields)
                             (System_DateTime_Fields)
                             Method_System_Nullable<DateTime>_get_Value__._dateData;
                        __this_04.fields._0_8_ = &local_70;
                        SVar12 = System_Nullable<DateTime>__get_Value(__this_04,pMVar16);
                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar13 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar12,(MethodInfo *)0x0);
                        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar14 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                        iVar13 = iVar13 - iVar14;
                      }
                      (__this_00->fields).LKENIPBKAJI = iVar13;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
                      pMVar16 = (MethodInfo_27F61B8 *)0x0;
                      local_80 = (System_Nullable_DateTime__Fields)
                                 EIABCPKDEBD__LDPPNAICGFJ
                                           (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if ((local_80._0_8_ & 0xff) == 0) {
                        iVar13 = 0;
                      }
                      else {
                        __this_05.fields.value.fields._dateData =
                             (System_DateTime_Fields)
                             (System_DateTime_Fields)
                             Method_System_Nullable<DateTime>_get_Value__._dateData;
                        __this_05.fields._0_8_ = &local_80;
                        SVar12 = System_Nullable<DateTime>__get_Value(__this_05,pMVar16);
                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar13 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar12,(MethodInfo *)0x0);
                        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar14 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                        iVar13 = iVar13 - iVar14;
                      }
                      (__this_00->fields).PMHJGJHCNHE = iVar13;
                      plVar15 = (long *)(*(pSVar11->klass->vtable)._13_get_ChildNodes.methodPtr)
                                                  (pSVar11,(pSVar11->klass->vtable).
                                                           _13_get_ChildNodes.method);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      plVar15 = (long *)(**(code **)(*plVar15 + 0x1b8))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
LAB_033ac510:
                      lVar17 = *plVar15;
                      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_033ac55c;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar10 = (undefined8 *)
                                FUN_01b81914(plVar15,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ac55c:
                      uVar20 = (*(code *)*puVar10)(plVar15,puVar10[1]);
                      if ((uVar20 & 1) != 0) {
                        lVar17 = *plVar15;
                        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_033ac5bc;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar15,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ac5bc:
                        pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar15,puVar10[1]);
                        if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                          if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                             ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(pSVar11);
                          }
                        }
                        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
                        if (!bVar3) {
                          __this_01 = (RaidConfig_EEJFKIEGDPH_o *)
                                      thunk_FUN_01bda818(RaidConfig_EEJFKIEGDPH_TypeInfo);
                          RaidConfig_EEJFKIEGDPH___ctor(__this_01,(MethodInfo *)0x0);
                          if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_9653/*"Number"*/,(MethodInfo *)0x0);
                          uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                          if (__this_01 == (RaidConfig_EEJFKIEGDPH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          (__this_01->fields).NOPGBJNLFHM = uVar5;
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_10346/*"Points"*/,(MethodInfo *)0x0);
                          uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                          (__this_01->fields).BAAELBFKBAC = uVar5;
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_8669/*"Loot"*/,(MethodInfo *)0x0);
                          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                          (__this_01->fields).KHIFPLJPKHN = pSVar9;
                          thunk_FUN_01c20e04();
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_11234/*"Replacement"*/,(MethodInfo *)0x0);
                          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                          (__this_01->fields).ANBCIPKCNPC = pSVar9;
                          thunk_FUN_01c20e04();
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_10429/*"Premium"*/,(MethodInfo *)0x0);
                          bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
                          (__this_01->fields).IINMNOMNONO = bVar3;
                          lVar17 = 
                          Method_System_Collections_Generic_List<RaidConfig_EEJFKIEGDPH>_Add__;
                          __this_02 = (__this_00->fields).GPNNHMIJLGL;
                          if (__this_02 ==
                              (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pJVar18 = (__this_02->fields)._items;
                          (__this_02->fields)._version = (__this_02->fields)._version + 1;
                          if (pJVar18 == (RaidConfig_EEJFKIEGDPH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          uVar2 = (__this_02->fields)._size;
                          if (uVar2 < (uint)pJVar18->max_length) {
                            (__this_02->fields)._size = uVar2 + 1;
                            pJVar18->m_Items[(int)uVar2] = __this_01;
                            thunk_FUN_01c20e04(pJVar18->m_Items + (int)uVar2,__this_01);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (Il2CppObject *)__this_01,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                        goto LAB_033ac510;
                      }
                      plVar15 = (long *)thunk_FUN_01bda71c(plVar15,System_IDisposable_TypeInfo);
                      if (plVar15 != (long *)0x0) {
                        lVar17 = *plVar15;
                        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(System_IDisposable_c **)(piVar21 + -2) ==
                                System_IDisposable_TypeInfo) {
                              puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                              goto LAB_033ac838;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_01b81914(plVar15,System_IDisposable_TypeInfo,0);
LAB_033ac838:
                        (*(code *)*puVar10)(plVar15,puVar10[1]);
                      }
                      lVar17 = Method_System_Collections_Generic_List<RaidConfig_CKEMIAEPGKD>_Add__
                      ;
                      __this_03 = (__this->fields).BJOLIBMAAAM;
                      if (__this_03 ==
                          (System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pJVar19 = (__this_03->fields)._items;
                      (__this_03->fields)._version = (__this_03->fields)._version + 1;
                      if (pJVar19 == (RaidConfig_CKEMIAEPGKD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      uVar2 = (__this_03->fields)._size;
                      if (uVar2 < (uint)pJVar19->max_length) {
                        (__this_03->fields)._size = uVar2 + 1;
                        pJVar19->m_Items[(int)uVar2] = __this_00;
                        thunk_FUN_01c20e04(pJVar19->m_Items + (int)uVar2,__this_00);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_03,
                                   (Il2CppObject *)__this_00,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  } while( true );
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
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033aca14:
    if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033aca50;
    }
  }
LAB_033aca2c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033aca50:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  return __this;
}


// ===== public static RaidConfig.AEJBILHMFDB OHMHMHLIHEO(XmlDocument LKILNGEECIJ)  [RVA 0x32ACD70]
// RaidConfigParser$$OHMHMHLIHEO @ RVA 0x32ACD70

/* WARNING: Removing unreachable block (ram,0x033ad3c8) */
/* WARNING: Removing unreachable block (ram,0x033ad684) */
/* WARNING: Removing unreachable block (ram,0x033ad690) */

RaidConfig_AEJBILHMFDB_o *
RaidConfigParser__OHMHMHLIHEO(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  RaidConfig_AEJBILHMFDB_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  long *plVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  System_Xml_XmlNode_o *pSVar12;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *__this_00;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_01;
  RaidConfig_CMLEEJPGHNC_o *item;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_02;
  MethodInfo *method_00;
  long lVar13;
  RaidConfig_CMLEEJPGHNC_array *pJVar14;
  ulong uVar15;
  int *piVar16;
  UnityEngine_Color_o UVar17;
  System_Nullable_Color__Fields local_78;
  
  if ((DAT_0456743d & 1) == 0) {
    FUN_01bab630(&RaidConfig_AEJBILHMFDB_TypeInfo);
    FUN_01bab630(&RaidConfig_AEJBILHMFDB_DFCNIHGANOH_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_set_Item__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_CMLEEJPGHNC>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8910/*"MedalImage"*/);
    FUN_01bab630(&StringLiteral_11723/*"Schedule"*/);
    FUN_01bab630(&StringLiteral_11338/*"RestoreCurrencyValueAtSeasonStart"*/);
    FUN_01bab630(&StringLiteral_13881/*"TopBadgeImage"*/);
    FUN_01bab630(&StringLiteral_10359/*"PosTo"*/);
    FUN_01bab630(&StringLiteral_8368/*"League"*/);
    FUN_01bab630(&StringLiteral_8358/*"Leaderboard"*/);
    FUN_01bab630(&StringLiteral_5075/*"DanImagePressed"*/);
    FUN_01bab630(&StringLiteral_5074/*"DanImage"*/);
    FUN_01bab630(&StringLiteral_8912/*"MedalTextColor"*/);
    FUN_01bab630(&StringLiteral_8365/*"LeaderboardUpdateInterval"*/);
    FUN_01bab630(&StringLiteral_8372/*"Leagues"*/);
    FUN_01bab630(&StringLiteral_4899/*"CronSchedule"*/);
    DAT_0456743d = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_8372/*"Leagues"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (RaidConfig_AEJBILHMFDB_o *)0x0;
    }
    __this = (RaidConfig_AEJBILHMFDB_o *)thunk_FUN_01bda818(RaidConfig_AEJBILHMFDB_TypeInfo);
    RaidConfig_AEJBILHMFDB___ctor(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_11338/*"RestoreCurrencyValueAtSeasonStart"*/,(MethodInfo *)0x0);
      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      if (__this != (RaidConfig_AEJBILHMFDB_o *)0x0) {
        (__this->fields).APBGEFLPIFI = iVar4;
        plVar9 = (long *)(**(code **)(*plVar6 + 0x468))
                                   (plVar6,StringLiteral_11723/*"Schedule"*/,*(undefined8 *)(*plVar6 + 0x470));
        if ((plVar9 != (long *)0x0) &&
           (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_4899/*"CronSchedule"*/,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
          (__this->fields).DFFIEFDCMJI = pSVar10;
          thunk_FUN_01c20e04();
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_8365/*"LeaderboardUpdateInterval"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,10000,(MethodInfo *)0x0);
            (__this->fields).EKAPEBDBNPO = iVar4;
            plVar9 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_8358/*"Leaderboard"*/,*(undefined8 *)(*plVar6 + 0x470));
            if ((plVar9 != (long *)0x0) &&
               (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x210)),
               plVar9 != (long *)0x0)) {
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              do {
                lVar13 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_033ad094;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ad094:
                uVar15 = (*(code *)*puVar11)(plVar9,puVar11[1]);
                if ((uVar15 & 1) == 0) {
                  plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
                  if (plVar9 == (long *)0x0) goto LAB_033ad3bc;
                  lVar13 = *plVar9;
                  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar15 == 0) goto LAB_033ad38c;
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  goto LAB_033ad374;
                }
                lVar13 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_033ad0f4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)
                          FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ad0f4:
                pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar9,puVar11[1]);
                if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
                  bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                  if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
                     ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(pSVar12);
                  }
                }
                bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
                if (!bVar3) {
                  __this_00 = (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)
                              thunk_FUN_01bda818(RaidConfig_AEJBILHMFDB_DFCNIHGANOH_TypeInfo);
                  RaidConfig_AEJBILHMFDB_DFCNIHGANOH___ctor(__this_00,(MethodInfo *)0x0);
                  if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_10359/*"PosTo"*/,(MethodInfo *)0x0);
                  uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                  if (__this_00 == (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  (__this_00->fields).OLGNPLGBNDJ = uVar5;
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_5074/*"DanImage"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).KJAIPLMIAGP = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_5075/*"DanImagePressed"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).HBGDJPCCLAO = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_13881/*"TopBadgeImage"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).DCHJFFCOGFB = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_8910/*"MedalImage"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pSVar10 = OFFIONDOEPM__CNLBHLNMCCI(pSVar10,(MethodInfo *)0x0);
                  (__this_00->fields).HHCNBANOKPB = pSVar10;
                  thunk_FUN_01c20e04();
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                     (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_8912/*"MedalTextColor"*/,(MethodInfo *)0x0);
                  pSVar10 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                  local_78.hasValue = false;
                  local_78._1_3_ = 0;
                  local_78.value.fields.r = 0.0;
                  local_78.value.fields.g = 0.0;
                  local_78.value.fields.b = 0.0;
                  local_78.value.fields.a = 0.0;
                  UVar17 = CFBGPBCDAGA__HPBCENEFAMD
                                     (pSVar10,1.0,(System_Nullable_Color__o *)&local_78,
                                      (MethodInfo *)0x0);
                  (__this_00->fields).JPBGLAAFMKH.fields.r = UVar17.fields.r;
                  (__this_00->fields).JPBGLAAFMKH.fields.g = UVar17.fields.g;
                  (__this_00->fields).JPBGLAAFMKH.fields.b = UVar17.fields.b;
                  (__this_00->fields).JPBGLAAFMKH.fields.a = UVar17.fields.a;
                  __this_01 = (__this->fields).BFODFJIGBHE;
                  if (__this_01 ==
                      (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o
                       *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  System_Collections_Generic_Dictionary<uint,_object>__set_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (__this_00->fields).OLGNPLGBNDJ,(Il2CppObject *)__this_00,
                             Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_set_Item__
                            );
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_033ad674;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_033ad5d4:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033ad608;
    }
  }
LAB_033ad5ec:
  puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033ad608:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return __this;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_033ad374:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_033ad3b0;
    }
  }
LAB_033ad38c:
  puVar11 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_033ad3b0:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_033ad3bc:
  plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_033ad464;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ad464:
      uVar15 = (*(code *)*puVar11)(plVar6,puVar11[1]);
      if ((uVar15 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) {
          return __this;
        }
        lVar13 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_033ad5ec;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033ad5d4;
      }
      lVar13 = *plVar6;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar11 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_033ad4c4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ad4c4:
      pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar6,puVar11[1]);
      if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
           ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar12);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
      if (!bVar3) {
        if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = (System_String_o *)
                  (*(pSVar12->klass->vtable)._8_unknown.methodPtr)
                            (pSVar12,(pSVar12->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar10,StringLiteral_8368/*"League"*/,(MethodInfo *)0x0);
        if (bVar3) {
          item = RaidConfigParser__DMNGKKPFLJO(pSVar12,method_00);
          lVar13 = Method_System_Collections_Generic_List<RaidConfig_CMLEEJPGHNC>_Add__;
          __this_02 = (__this->fields).NPPJFJBJLLG;
          if (__this_02 == (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar14 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pJVar14 == (RaidConfig_CMLEEJPGHNC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pJVar14->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pJVar14->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pJVar14->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
LAB_033ad674:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidConfig.KJLILNPHJHI FKKLOIFLEOG(XmlDocument LKILNGEECIJ)  [RVA 0x32AE264]
// RaidConfigParser$$FKKLOIFLEOG @ RVA 0x32AE264

/* WARNING: Removing unreachable block (ram,0x033ae69c) */

RaidConfig_KJLILNPHJHI_o *
RaidConfigParser__FKKLOIFLEOG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int32_t iVar4;
  long *plVar5;
  RaidConfig_KJLILNPHJHI_o *__this;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar7;
  RaidConfig_BGJBFFKJHHD_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = LKILNGEECIJ;
  if ((DAT_0456743e & 1) == 0) {
    FUN_01bab630(&RaidConfig_BGJBFFKJHHD_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_set_Item__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&RaidConfig_KJLILNPHJHI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3538/*"BonusPrize"*/);
    FUN_01bab630(&StringLiteral_2714/*"Achievement"*/);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    auVar13 = FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_0456743e = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_2720/*"Achievements"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return (RaidConfig_KJLILNPHJHI_o *)0x0;
    }
    __this = (RaidConfig_KJLILNPHJHI_o *)thunk_FUN_01bda818(RaidConfig_KJLILNPHJHI_TypeInfo);
    RaidConfig_KJLILNPHJHI___ctor(__this,(MethodInfo *)0x0);
    auVar13 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    plVar5 = auVar13._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar13._8_8_;
    auVar13 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_033ae410;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ae410:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return __this;
          }
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_033ae61c;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_033ae604;
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_033ae470;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ae470:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar3) {
          if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar7,StringLiteral_2714/*"Achievement"*/,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (RaidConfig_BGJBFFKJHHD_o *)
                        thunk_FUN_01bda818(RaidConfig_BGJBFFKJHHD_TypeInfo);
            RaidConfig_BGJBFFKJHHD___ctor(__this_00,(MethodInfo *)0x0);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
            pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (__this_00 == (RaidConfig_BGJBFFKJHHD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).JIJLBFGKNJK = pSVar7;
            thunk_FUN_01c20e04();
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            (__this_00->fields).IGLHCNLNIPK = iVar4;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_3538/*"BonusPrize"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            (__this_00->fields).DBDIDOBPFMC = iVar4;
            if (__this == (RaidConfig_KJLILNPHJHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields).EHGOHNHDKPP;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_01,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_set_Item__
                      );
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_033ae604:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033ae640;
    }
  }
LAB_033ae61c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033ae640:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return __this;
}


// ===== public static RaidConfig.NMAJABPDEPE DGBHJEPOFIE(XmlDocument LKILNGEECIJ)  [RVA 0x32AE7C8]
// RaidConfigParser$$DGBHJEPOFIE @ RVA 0x32AE7C8

/* WARNING: Removing unreachable block (ram,0x033af8b0) */
/* WARNING: Removing unreachable block (ram,0x033af3bc) */
/* WARNING: Removing unreachable block (ram,0x033af654) */
/* WARNING: Removing unreachable block (ram,0x033af51c) */
/* WARNING: Removing unreachable block (ram,0x033af8a0) */

RaidConfig_NMAJABPDEPE_o *
RaidConfigParser__DGBHJEPOFIE(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint32_t uVar4;
  int32_t iVar5;
  long *plVar6;
  RaidConfig_NMAJABPDEPE_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *pSVar10;
  System_String_o *pSVar11;
  RaidConfig_EBEGCDCOHHJ_o *__this_00;
  System_Xml_XmlDocument_o *pSVar12;
  long *plVar13;
  long *plVar14;
  System_Xml_XmlNode_o *pSVar15;
  RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK__o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  long lVar16;
  RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_array *pJVar17;
  ulong uVar18;
  int *piVar19;
  System_Xml_XmlDocument_o **ppSVar20;
  RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *pJVar21;
  System_Xml_XmlNode_o **ppSVar22;
  System_String_o **ppSVar23;
  RaidConfig_EBEGCDCOHHJ_PGBKNGBLPCD_o *pJVar24;
  RaidConfig_EBEGCDCOHHJ_PGBKNGBLPCD_Fields *pJVar25;
  
  if ((DAT_0456743f & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_set_Item__
                );
    FUN_01bab630(&RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_TypeInfo);
    FUN_01bab630(&RaidConfig_EBEGCDCOHHJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EBEGCDCOHHJ_EALAJNADPCK>_Add__)
    ;
    FUN_01bab630(&RaidConfig_NMAJABPDEPE_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_OGIKGBOMKNN>__)
    ;
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_POIGHHJEKOA>__)
    ;
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_8672/*"LootContainerName"*/);
    FUN_01bab630(&StringLiteral_8893/*"MaxProgress"*/);
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
    FUN_01bab630(&StringLiteral_10724/*"Quests"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9417/*"NewQuestAfterFinishedPeriod"*/);
    FUN_01bab630(&StringLiteral_4214/*"CdMinTime"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_11231/*"RenewPeriod"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_4213/*"CdCost"*/);
    FUN_01bab630(&StringLiteral_11369/*"Reward"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_13924/*"Trigger"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    FUN_01bab630(&StringLiteral_10642/*"Quest"*/);
    FUN_01bab630(&StringLiteral_10861/*"RaidId"*/);
    DAT_0456743f = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_10724/*"Quests"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (RaidConfig_NMAJABPDEPE_o *)0x0;
    }
    __this = (RaidConfig_NMAJABPDEPE_o *)thunk_FUN_01bda818(RaidConfig_NMAJABPDEPE_TypeInfo);
    RaidConfig_NMAJABPDEPE___ctor(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_11231/*"RenewPeriod"*/,(MethodInfo *)0x0);
      uVar4 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
      if (__this != (RaidConfig_NMAJABPDEPE_o *)0x0) {
        (__this->fields).OIMHAENFHBJ = uVar4;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_9417/*"NewQuestAfterFinishedPeriod"*/,(MethodInfo *)0x0);
          uVar4 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
          (__this->fields).BLGKNLLKCKM = uVar4;
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_4213/*"CdCost"*/,(MethodInfo *)0x0);
            uVar4 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
            (__this->fields).OAFBLBIBJBG = uVar4;
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_4214/*"CdMinTime"*/,(MethodInfo *)0x0);
              uVar4 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
              (__this->fields).DCOMFGPIBOE = uVar4;
              plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x210));
              if (plVar6 != (long *)0x0) {
                plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                do {
                  lVar16 = *plVar6;
                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_033aeb38;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033aeb38:
                  uVar18 = (*(code *)*puVar9)(plVar6,puVar9[1]);
                  if ((uVar18 & 1) == 0) {
                    plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                    if (plVar6 == (long *)0x0) {
                      return __this;
                    }
                    lVar16 = *plVar6;
                    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar18 == 0) goto LAB_033af790;
                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    goto LAB_033af778;
                  }
                  lVar16 = *plVar6;
                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_033aeb98;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033aeb98:
                  pSVar10 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar6,puVar9[1]);
                  if (pSVar10 != (System_Xml_XmlNode_o *)0x0) {
                    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
                       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64(pSVar10);
                    }
                  }
                  bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar10,(MethodInfo *)0x0);
                  if (!bVar3) {
                    if (pSVar10 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar11 = (System_String_o *)
                              (*(pSVar10->klass->vtable)._8_unknown.methodPtr)
                                        (pSVar10,(pSVar10->klass->vtable)._8_unknown.method);
                    bVar3 = System_String__op_Equality
                                      (pSVar11,StringLiteral_10642/*"Quest"*/,(MethodInfo *)0x0);
                    if (bVar3) {
                      __this_00 = (RaidConfig_EBEGCDCOHHJ_o *)
                                  thunk_FUN_01bda818(RaidConfig_EBEGCDCOHHJ_TypeInfo);
                      RaidConfig_EBEGCDCOHHJ___ctor(__this_00,(MethodInfo *)0x0);
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_7293/*"Id"*/,(MethodInfo *)0x0);
                      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                      if (__this_00 == (RaidConfig_EBEGCDCOHHJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      (__this_00->fields).GHLADMPGEGP = iVar5;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).JIJLBFGKNJK = pSVar11;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
                      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      pSVar11 = OFFIONDOEPM__CNLBHLNMCCI(pSVar11,(MethodInfo *)0x0);
                      (__this_00->fields).OPBJKMDPKLG = pSVar11;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
                      pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).ABCHAOKFLGL = pSVar11;
                      thunk_FUN_01c20e04();
                      pSVar12 = (System_Xml_XmlDocument_o *)
                                thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
                      System_Xml_XmlDocument___ctor(pSVar12,(MethodInfo *)0x0);
                      ppSVar20 = &(__this_00->fields).PBIBOFJFPGP;
                      *ppSVar20 = pSVar12;
                      thunk_FUN_01c20e04(ppSVar20,pSVar12);
                      EIABCPKDEBD__DGPOFACHGMP
                                ((System_Xml_XmlNode_o *)*ppSVar20,pSVar10,(MethodInfo *)0x0);
                      plVar13 = (long *)(*(pSVar10->klass->vtable)._13_get_ChildNodes.methodPtr)
                                                  (pSVar10,(pSVar10->klass->vtable).
                                                           _13_get_ChildNodes.method);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      plVar13 = (long *)(**(code **)(*plVar13 + 0x1b8))
                                                  (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
LAB_033aedac:
                      lVar16 = *plVar13;
                      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar18 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_033aedf8;
                          }
                          uVar18 = uVar18 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar9 = (undefined8 *)
                               FUN_01b81914(plVar13,System_Collections_IEnumerator_TypeInfo,0);
LAB_033aedf8:
                      uVar18 = (*(code *)*puVar9)(plVar13,puVar9[1]);
                      if ((uVar18 & 1) != 0) {
                        lVar16 = *plVar13;
                        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar18 != 0) {
                          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                              goto LAB_033aee58;
                            }
                            uVar18 = uVar18 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar9 = (undefined8 *)
                                 FUN_01b81914(plVar13,System_Collections_IEnumerator_TypeInfo,1);
LAB_033aee58:
                        pSVar10 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar13,puVar9[1]);
                        if (pSVar10 != (System_Xml_XmlNode_o *)0x0) {
                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                          if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
                             ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(pSVar10);
                          }
                        }
                        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar10,(MethodInfo *)0x0);
                        if (!bVar3) {
                          if (pSVar10 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar11 = (System_String_o *)
                                    (*(pSVar10->klass->vtable)._8_unknown.methodPtr)
                                              (pSVar10,(pSVar10->klass->vtable)._8_unknown.method);
                          bVar3 = System_String__op_Equality
                                            (pSVar11,StringLiteral_13924/*"Trigger"*/,(MethodInfo *)0x0);
                          if (bVar3) {
                            pSVar12 = (__this_00->fields).PBIBOFJFPGP;
                            if (pSVar12 == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pJVar21 = (__this_00->fields).HMAFPGLFDDP;
                            plVar14 = (long *)(*(pSVar12->klass->vtable)._51_get_Item.methodPtr)
                                                        (pSVar12,StringLiteral_10642/*"Quest"*/,
                                                         (pSVar12->klass->vtable)._51_get_Item.
                                                         method);
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar15 = (System_Xml_XmlNode_o *)
                                      (**(code **)(*plVar14 + 0x468))
                                                (plVar14,StringLiteral_13924/*"Trigger"*/,
                                                 *(undefined8 *)(*plVar14 + 0x470));
                            if (pJVar21 == (RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            ppSVar22 = &(pJVar21->fields).MBPMLMMBLDG;
                            *ppSVar22 = pSVar15;
                            thunk_FUN_01c20e04(ppSVar22);
                            pJVar21 = (__this_00->fields).HMAFPGLFDDP;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                               (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                        method);
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_10861/*"RaidId"*/,(MethodInfo *)0x0);
                            pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                                (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                            if (pJVar21 == (RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            ppSVar23 = &(pJVar21->fields).NLPOCKANMGL;
                            *ppSVar23 = pSVar11;
                            thunk_FUN_01c20e04(ppSVar23);
                            pJVar21 = (__this_00->fields).HMAFPGLFDDP;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                               (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                        method);
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_8893/*"MaxProgress"*/,(MethodInfo *)0x0);
                            iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                            if (pJVar21 == (RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            (pJVar21->fields).DDLLPNOHLBL = iVar5;
                            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                               (pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                        method);
                            if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar7,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                            pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                                (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                            pJVar21 = (__this_00->fields).HMAFPGLFDDP;
                            iVar5 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                                              (pSVar11,0,
                                               Method_PCOEHCPGBBG_AICKIDLLIBK<RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_POIGHHJEKOA>__
                                              );
                            if (pJVar21 == (RaidConfig_EBEGCDCOHHJ_COMPPNIAOGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            (pJVar21->fields).BGHFADDGPAD = iVar5;
                          }
                          else {
                            bVar3 = System_String__op_Equality
                                              (pSVar11,StringLiteral_11369/*"Reward"*/,(MethodInfo *)0x0);
                            if (bVar3) {
                              pJVar24 = (__this_00->fields).AMAMLPJLCFG;
                              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (pSVar10,(pSVar10->klass->vtable).
                                                          _16_get_Attributes.method);
                              if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar7,StringLiteral_8672/*"LootContainerName"*/,(MethodInfo *)0x0);
                              pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                                  (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                              if (pJVar24 == (RaidConfig_EBEGCDCOHHJ_PGBKNGBLPCD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_01bab8c8();
                              }
                              pJVar25 = &pJVar24->fields;
                              pJVar25->LEJBNEIJJIF = pSVar11;
                              thunk_FUN_01c20e04(pJVar25);
                            }
                            else {
                              bVar3 = System_String__op_Equality
                                                (pSVar11,StringLiteral_4577/*"Conditions"*/,(MethodInfo *)0x0);
                              if (bVar3) {
                                plVar14 = (long *)(*(pSVar10->klass->vtable)._13_get_ChildNodes.
                                                    methodPtr)(pSVar10,(pSVar10->klass->vtable).
                                                                       _13_get_ChildNodes.method);
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
                                plVar14 = (long *)(**(code **)(*plVar14 + 0x1b8))
                                                            (plVar14,*(undefined8 *)
                                                                      (*plVar14 + 0x1c0));
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01bab8c8();
                                }
LAB_033af0cc:
                                lVar16 = *plVar14;
                                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                if (uVar18 != 0) {
                                  piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                  do {
                                    if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                                        System_Collections_IEnumerator_TypeInfo) {
                                      puVar9 = (undefined8 *)
                                               (lVar16 + (long)*piVar19 * 0x10 + 0x138);
                                      goto LAB_033af118;
                                    }
                                    uVar18 = uVar18 - 1;
                                    piVar19 = piVar19 + 4;
                                  } while (uVar18 != 0);
                                }
                                puVar9 = (undefined8 *)
                                         FUN_01b81914(plVar14,
                                                  System_Collections_IEnumerator_TypeInfo,0);
LAB_033af118:
                                uVar18 = (*(code *)*puVar9)(plVar14,puVar9[1]);
                                if ((uVar18 & 1) != 0) {
                                  lVar16 = *plVar14;
                                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                    do {
                                      if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                                          System_Collections_IEnumerator_TypeInfo) {
                                        puVar9 = (undefined8 *)
                                                 (lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                                        goto LAB_033af178;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar19 = piVar19 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar9 = (undefined8 *)
                                           FUN_01b81914(plVar14,
                                                  System_Collections_IEnumerator_TypeInfo,1);
LAB_033af178:
                                  pSVar10 = (System_Xml_XmlNode_o *)
                                            (*(code *)*puVar9)(plVar14,puVar9[1]);
                                  if (pSVar10 != (System_Xml_XmlNode_o *)0x0) {
                                    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                                    if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
                                       ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01babc64(pSVar10);
                                    }
                                  }
                                  bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar10,(MethodInfo *)0x0);
                                  if (!bVar3) {
                                    __this_01 = (RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_o *)
                                                thunk_FUN_01bda818(
                                                  RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_TypeInfo);
                                    RaidConfig_EBEGCDCOHHJ_EALAJNADPCK___ctor
                                              (__this_01,(MethodInfo *)0x0);
                                    if (pSVar10 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr
                                             )(pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                       method);
                                    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0)
                                    ;
                                    pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                                        (pSVar8,(System_String_o *)0x0,
                                                         (MethodInfo *)0x0);
                                    if (__this_01 == (RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    (__this_01->fields).JIJLBFGKNJK = pSVar11;
                                    thunk_FUN_01c20e04();
                                    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr
                                             )(pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                       method);
                                    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar7,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0
                                                       );
                                    iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                                    (__this_01->fields).JAICMIMBIOA = iVar5;
                                    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(pSVar10->klass->vtable)._16_get_Attributes.methodPtr
                                             )(pSVar10,(pSVar10->klass->vtable)._16_get_Attributes.
                                                       method);
                                    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar7,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0
                                                       );
                                    pSVar11 = EIABCPKDEBD__JPKEHIBGOEM
                                                        (pSVar8,(System_String_o *)0x0,
                                                         (MethodInfo *)0x0);
                                    iVar5 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                                                      (pSVar11,-1,
                                                                                                              
                                                  Method_PCOEHCPGBBG_AICKIDLLIBK<RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_OGIKGBOMKNN>__
                                                  );
                                    (__this_01->fields).BGHFADDGPAD = iVar5;
                                    lVar16 = 
                                    Method_System_Collections_Generic_List<RaidConfig_EBEGCDCOHHJ_EALAJNADPCK>_Add__
                                    ;
                                    __this_02 = (__this_00->fields).KPFGHBEKJIM;
                                    if (__this_02 ==
                                        (System_Collections_Generic_List_JMDPBFOCHHP_EBEGCDCOHHJ_EALAJNADPCK__o
                                         *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    pJVar17 = (__this_02->fields)._items;
                                    (__this_02->fields)._version = (__this_02->fields)._version + 1;
                                    if (pJVar17 == (RaidConfig_EBEGCDCOHHJ_EALAJNADPCK_array *)0x0)
                                    {
                    /* WARNING: Subroutine does not return */
                                      FUN_01bab8c8();
                                    }
                                    uVar2 = (__this_02->fields)._size;
                                    if (uVar2 < (uint)pJVar17->max_length) {
                                      (__this_02->fields)._size = uVar2 + 1;
                                      pJVar17->m_Items[(int)uVar2] = __this_01;
                                      thunk_FUN_01c20e04(pJVar17->m_Items + (int)uVar2,__this_01);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)
                                                 __this_02,(Il2CppObject *)__this_01,
                                                 *(MethodInfo_26E4DAC **)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                  }
                                  goto LAB_033af0cc;
                                }
                                plVar14 = (long *)thunk_FUN_01bda71c(plVar14,
                                                  System_IDisposable_TypeInfo);
                                if (plVar14 != (long *)0x0) {
                                  lVar16 = *plVar14;
                                  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                  if (uVar18 != 0) {
                                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                    do {
                                      if (*(System_IDisposable_c **)(piVar19 + -2) ==
                                          System_IDisposable_TypeInfo) {
                                        puVar9 = (undefined8 *)
                                                 (lVar16 + (long)*piVar19 * 0x10 + 0x138);
                                        goto LAB_033af3a0;
                                      }
                                      uVar18 = uVar18 - 1;
                                      piVar19 = piVar19 + 4;
                                    } while (uVar18 != 0);
                                  }
                                  puVar9 = (undefined8 *)
                                           FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_033af3a0:
                                  (*(code *)*puVar9)(plVar14,puVar9[1]);
                                }
                              }
                            }
                          }
                        }
                        goto LAB_033aedac;
                      }
                      plVar13 = (long *)thunk_FUN_01bda71c(plVar13,System_IDisposable_TypeInfo);
                      if (plVar13 != (long *)0x0) {
                        lVar16 = *plVar13;
                        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                        if (uVar18 != 0) {
                          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(System_IDisposable_c **)(piVar19 + -2) ==
                                System_IDisposable_TypeInfo) {
                              puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                              goto LAB_033af504;
                            }
                            uVar18 = uVar18 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_033af504:
                        (*(code *)*puVar9)(plVar13,puVar9[1]);
                      }
                      __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)
                                  (__this->fields).HJGMOINDJAK;
                      if (__this_03 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
                      {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      System_Collections_Generic_Dictionary<int,_object>__set_Item
                                (__this_03,(__this_00->fields).GHLADMPGEGP,(Il2CppObject *)__this_00
                                 ,
                                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_EBEGCDCOHHJ>_set_Item__
                                );
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033af778:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033af7b4;
    }
  }
LAB_033af790:
  puVar9 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033af7b4:
  (*(code *)*puVar9)(plVar6,puVar9[1]);
  return __this;
}


// ===== public static RaidConfig.EMDEPOFJFEF NCNIIIGPJEO(XmlDocument LKILNGEECIJ)  [RVA 0x32AFA24]
// RaidConfigParser$$NCNIIIGPJEO @ RVA 0x32AFA24

/* WARNING: Removing unreachable block (ram,0x033afd7c) */

RaidConfig_EMDEPOFJFEF_o *
RaidConfigParser__NCNIIIGPJEO(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long *plVar5;
  RaidConfig_EMDEPOFJFEF_o *__this;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  RaidConfig_FNILDHLJBBJ_o *__this_00;
  long lVar7;
  RaidConfig_FNILDHLJBBJ_array *pJVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *__this_01;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = LKILNGEECIJ;
  if ((DAT_04567440 & 1) == 0) {
    FUN_01bab630(&RaidConfig_EMDEPOFJFEF_TypeInfo);
    FUN_01bab630(&RaidConfig_FNILDHLJBBJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    auVar11 = FUN_01bab630(&StringLiteral_4623/*"Containers"*/);
    DAT_04567440 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_4623/*"Containers"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return (RaidConfig_EMDEPOFJFEF_o *)0x0;
    }
    __this = (RaidConfig_EMDEPOFJFEF_o *)thunk_FUN_01bda818(RaidConfig_EMDEPOFJFEF_TypeInfo);
    RaidConfig_EMDEPOFJFEF___ctor(__this,(MethodInfo *)0x0);
    auVar11 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    plVar5 = auVar11._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    auVar11 = auVar3 << 0x40;
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033afb90;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033afb90:
        uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return __this;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_033afd0c;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033afcf4;
        }
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_033afbf0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033afbf0:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar4 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar4) {
          if (__this == (RaidConfig_EMDEPOFJFEF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033afd6c to 034afd73 has its CatchHandler @ 033b0014 */
            FUN_01bab8c8();
          }
          __this_01 = (__this->fields).BAPMMGFEIDM;
          __this_00 = (RaidConfig_FNILDHLJBBJ_o *)
                      thunk_FUN_01bda818(RaidConfig_FNILDHLJBBJ_TypeInfo);
          RaidConfig_FNILDHLJBBJ___ctor(__this_00,JHMENEKPIBO,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ>_Add__;
          if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar8 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pJVar8 == (RaidConfig_FNILDHLJBBJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pJVar8->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pJVar8->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pJVar8->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033afcf4:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033afd30;
    }
  }
LAB_033afd0c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
                    /* try { // try from 033afd18 to 034afd1f has its CatchHandler @ 033b006c */
LAB_033afd30:
                    /* try { // try from 033afd30 to 034afd33 has its CatchHandler @ 033aff40 */
                    /* try { // try from 033afd34 to 034afd6b has its CatchHandler @ 033af8d8 */
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return __this;
}


// ===== private static RaidConfig.CMLEEJPGHNC DMNGKKPFLJO(XmlNode AHDGNOJPPIB)  [RVA 0x32AD8DC]
// RaidConfigParser$$DMNGKKPFLJO @ RVA 0x32AD8DC

/* WARNING: Removing unreachable block (ram,0x033ade9c) */
/* WARNING: Removing unreachable block (ram,0x033ae14c) */

RaidConfig_CMLEEJPGHNC_o *
RaidConfigParser__DMNGKKPFLJO(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  RaidConfig_CMLEEJPGHNC_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  RaidConfig_HKDMLOKOJPH_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  RaidConfig_NCAGOHHFFFN_o *__this_02;
  long *plVar9;
  RaidConfig_NCAGOHHFFFN_o **ppJVar10;
  RaidConfig_OJADNDJAKOA_o *__this_03;
  RaidConfig_OJADNDJAKOA_o **ppJVar11;
  MethodInfo *extraout_x1;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04567441 & 1) == 0) {
    FUN_01bab630(&RaidConfig_CMLEEJPGHNC_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_set_Item__
                );
    FUN_01bab630(&RaidConfig_HKDMLOKOJPH_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&RaidConfig_NCAGOHHFFFN_TypeInfo);
    FUN_01bab630(&RaidConfig_OJADNDJAKOA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_8672/*"LootContainerName"*/);
    FUN_01bab630(&StringLiteral_7434/*"InactivityChecker"*/);
    FUN_01bab630(&StringLiteral_13833/*"To"*/);
    FUN_01bab630(&StringLiteral_10362/*"Position"*/);
    FUN_01bab630(&StringLiteral_11377/*"Rewards"*/);
    FUN_01bab630(&StringLiteral_13882/*"TopLeague"*/);
    FUN_01bab630(&StringLiteral_9069/*"MinRewardRating"*/);
    FUN_01bab630(&StringLiteral_10359/*"PosTo"*/);
    FUN_01bab630(&StringLiteral_2737/*"Active"*/);
    FUN_01bab630(&StringLiteral_11369/*"Reward"*/);
    FUN_01bab630(&StringLiteral_5078/*"DanUp"*/);
    FUN_01bab630(&StringLiteral_11028/*"Rating"*/);
    FUN_01bab630(&StringLiteral_12158/*"Size"*/);
    FUN_01bab630(&StringLiteral_12778/*"TRUE"*/);
    FUN_01bab630(&StringLiteral_13918/*"Treshold"*/);
    FUN_01bab630(&StringLiteral_5079/*"DanUpConditions"*/);
    FUN_01bab630(&StringLiteral_5072/*"Dan"*/);
    DAT_04567441 = 1;
    method = extraout_x1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return (RaidConfig_CMLEEJPGHNC_o *)0x0;
  }
  __this = (RaidConfig_CMLEEJPGHNC_o *)thunk_FUN_01bda818(RaidConfig_CMLEEJPGHNC_TypeInfo,method);
  RaidConfig_CMLEEJPGHNC___ctor(__this,(MethodInfo *)0x0);
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033ae130;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_5072/*"Dan"*/,(MethodInfo *)0x0);
  iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
  if (__this == (RaidConfig_CMLEEJPGHNC_o *)0x0) goto LAB_033ae130;
  (__this->fields).NEKMDLBLENC = iVar3;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033ae130;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_12158/*"Size"*/,(MethodInfo *)0x0);
  iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
  (__this->fields).ONGLGHIKBJF = iVar3;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033ae130;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_9069/*"MinRewardRating"*/,(MethodInfo *)0x0);
  iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,1,(MethodInfo *)0x0);
  (__this->fields).AKAGFOOMLFB = iVar3;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033ae130;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_13882/*"TopLeague"*/,(MethodInfo *)0x0);
  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12778/*"TRUE"*/,(MethodInfo *)0x0);
  (__this->fields).IGFBDMOAFDO = bVar2;
  plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_11377/*"Rewards"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_033adc38;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033adc38:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_033adea0;
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_033ade58;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_033ade40;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_033adc98;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033adc98:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar2 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0 && !bVar2) {
          pSVar6 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_11369/*"Reward"*/,(MethodInfo *)0x0);
          if (bVar2) {
            __this_00 = (RaidConfig_HKDMLOKOJPH_o *)
                        thunk_FUN_01bda818(RaidConfig_HKDMLOKOJPH_TypeInfo);
            RaidConfig_HKDMLOKOJPH___ctor(__this_00,(MethodInfo *)0x0);
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_10359/*"PosTo"*/,(MethodInfo *)0x0);
            iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,-1,(MethodInfo *)0x0);
            if (__this_00 == (RaidConfig_HKDMLOKOJPH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).OLGNPLGBNDJ = iVar3;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_8672/*"LootContainerName"*/,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_00->fields).LEJBNEIJJIF = pSVar6;
            thunk_FUN_01c20e04();
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_5078/*"DanUp"*/,(MethodInfo *)0x0);
            bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
            (__this_00->fields).PONPLEPGJNA = bVar2;
            __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                        (__this->fields).MOJCKKMAKOE;
            if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<int,_object>__set_Item
                      (__this_01,(__this_00->fields).OLGNPLGBNDJ,(Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_set_Item__
                      );
          }
        }
      } while( true );
    }
    goto LAB_033ae130;
  }
  goto LAB_033adea0;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_033ade40:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_033ade7c;
    }
  }
LAB_033ade58:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033ade7c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_033adea0:
  plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_5079/*"DanUpConditions"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (plVar7 != (long *)0x0) {
    __this_02 = (RaidConfig_NCAGOHHFFFN_o *)thunk_FUN_01bda818(RaidConfig_NCAGOHHFFFN_TypeInfo);
    RaidConfig_NCAGOHHFFFN___ctor(__this_02,(MethodInfo *)0x0);
    lVar12 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10362/*"Position"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (lVar12 != 0) {
      plVar9 = (long *)(**(code **)(*plVar7 + 0x468))
                                 (plVar7,StringLiteral_10362/*"Position"*/,*(undefined8 *)(*plVar7 + 0x470));
      if ((plVar9 == (long *)0x0) ||
         (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
         pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_033ae130;
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13833/*"To"*/,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
      if (__this_02 == (RaidConfig_NCAGOHHFFFN_o *)0x0) goto LAB_033ae130;
      (__this_02->fields).OLGNPLGBNDJ = iVar3;
    }
    lVar12 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11028/*"Rating"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (lVar12 != 0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x468))
                                 (plVar7,StringLiteral_11028/*"Rating"*/,*(undefined8 *)(*plVar7 + 0x470));
      if ((plVar7 == (long *)0x0) ||
         (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
         pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_033ae130;
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13833/*"To"*/,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
      if (__this_02 == (RaidConfig_NCAGOHHFFFN_o *)0x0) goto LAB_033ae130;
      (__this_02->fields).OKAOKINDHOH = iVar3;
    }
    ppJVar10 = &(__this->fields).EBKAKMIFOEB;
    *ppJVar10 = __this_02;
    thunk_FUN_01c20e04(ppJVar10,__this_02);
  }
  plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_7434/*"InactivityChecker"*/,
                              (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (plVar7 == (long *)0x0) {
    return __this;
  }
  __this_03 = (RaidConfig_OJADNDJAKOA_o *)thunk_FUN_01bda818(RaidConfig_OJADNDJAKOA_TypeInfo);
  RaidConfig_OJADNDJAKOA___ctor(__this_03,(MethodInfo *)0x0);
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_2737/*"Active"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12778/*"TRUE"*/,(MethodInfo *)0x0);
    if (__this_03 != (RaidConfig_OJADNDJAKOA_o *)0x0) {
      (__this_03->fields).CCGHBDEINGO = bVar2;
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_13918/*"Treshold"*/,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        (__this_03->fields).NDBJNNEIOLC = iVar3;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_13814/*"Timer"*/,(MethodInfo *)0x0);
          iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
          (__this_03->fields).AOOKMODPLGM = iVar3;
          ppJVar11 = &(__this->fields).MGBLNNPBHGP;
          *ppJVar11 = __this_03;
          thunk_FUN_01c20e04(ppJVar11,__this_03);
          return __this;
        }
      }
    }
  }
LAB_033ae130:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidConfig.DBNJFPILODG JKIIABCPGPH(XmlDocument LKILNGEECIJ)  [RVA 0x32AFE4C]
// RaidConfigParser$$JKIIABCPGPH @ RVA 0x32AFE4C

/* WARNING: Removing unreachable block (ram,0x033b0f30) */
/* WARNING: Removing unreachable block (ram,0x033b05d4) */
/* WARNING: Removing unreachable block (ram,0x033b11e8) */
/* WARNING: Removing unreachable block (ram,0x033b1524) */
/* WARNING: Removing unreachable block (ram,0x033b19b4) */
/* WARNING: Removing unreachable block (ram,0x033b19f0) */

RaidConfig_DBNJFPILODG_o *
RaidConfigParser__JKIIABCPGPH(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  RaidConfig_DBNJFPILODG_o *__this;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  RaidConfig_LDOMJFAAGAB_o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *__this_01;
  RaidConfig_BFPCOCFHFHF_o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  RaidConfig_GEHAFAGNJPJ_o *__this_04;
  System_String_o *pSVar12;
  RaidConfig_BNKFAJEBNFC_o *__this_05;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_String_o *GKBNFBINIIP;
  MGNDHCBAPEN_Color__Color__o *__this_07;
  System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *__this_08;
  long lVar13;
  RaidConfig_LDOMJFAAGAB_array *pJVar14;
  RaidConfig_ONCGGLEAIFH_o *pJVar15;
  System_String_array *pSVar16;
  MGNDHCBAPEN_Color__Color__array *pMVar17;
  ulong uVar18;
  int *piVar19;
  System_Collections_Generic_List_string__o *pSVar20;
  System_Collections_Generic_Dictionary_T__U__o *FBEEEALALMJ;
  System_String_o **ppSVar21;
  float fVar22;
  UnityEngine_Color_o NANHIJPKIAP;
  UnityEngine_Color_o JGGJNLLANAE;
  System_Nullable_Color__Fields local_d8;
  System_Nullable_Color__Fields local_c0;
  System_Nullable_KCFAKHLDKJM__Fields local_a8;
  
                    /* try { // try from 033afe58 to 034afe5b has its CatchHandler @ 033aff28 */
                    /* try { // try from 033afe5c to 034afe93 has its CatchHandler @ 033af8d8 */
  if ((DAT_04567442 & 1) == 0) {
    FUN_01bab630(&RaidConfig_BFPCOCFHFHF_TypeInfo);
                    /* try { // try from 033afe94 to 034afe9b has its CatchHandler @ 033aff44 */
    FUN_01bab630(&RaidConfig_BNKFAJEBNFC_TypeInfo);
    FUN_01bab630(&Method_CAOJHCDPDBH_GKONJMIPMEH<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>__);
                    /* try { // try from 033afeac to 034afec3 has its CatchHandler @ 033b00d0 */
    FUN_01bab630(&RaidConfig_DBNJFPILODG_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033afec4 to 034afeff has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_Add__
                );
    FUN_01bab630(&RaidConfig_GEHAFAGNJPJ_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033aff00 to 034aff03 has its CatchHandler @ 033aff3c */
                    /* try { // try from 033aff04 to 034aff07 has its CatchHandler @ 033aff34 */
                    /* try { // try from 033aff08 to 034aff0b has its CatchHandler @ 033aff2c */
    FUN_01bab630(&RaidConfig_LDOMJFAAGAB_TypeInfo);
                    /* try { // try from 033aff0c to 034aff0f has its CatchHandler @ 033aff24 */
                    /* try { // try from 033aff10 to 034aff13 has its CatchHandler @ 033aff20 */
                    /* try { // try from 033aff14 to 034aff17 has its CatchHandler @ 033aff1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_Add__);
                    /* try { // try from 033aff18 to 034aff5f has its CatchHandler @ 033af8d8 */
                    /* catch() { ... } // from try @ 033aff14 with catch @ 033aff1c */
                    /* catch() { ... } // from try @ 033aff10 with catch @ 033aff20 */
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_Add__);
                    /* catch() { ... } // from try @ 033aff0c with catch @ 033aff24 */
                    /* catch() { ... } // from try @ 033afe58 with catch @ 033aff28 */
                    /* catch() { ... } // from try @ 033aff08 with catch @ 033aff2c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* catch() { ... } // from try @ 033afde0 with catch @ 033aff30 */
                    /* catch() { ... } // from try @ 033aff04 with catch @ 033aff34 */
                    /* catch() { ... } // from try @ 033afd84 with catch @ 033aff38 */
    FUN_01bab630(&Method_MGNDHCBAPEN<Color,_Color>__ctor__);
                    /* catch() { ... } // from try @ 033aff00 with catch @ 033aff3c */
                    /* catch() { ... } // from try @ 033afd30 with catch @ 033aff40 */
                    /* catch() { ... } // from try @ 033afe94 with catch @ 033aff44 */
    FUN_01bab630(&MGNDHCBAPEN<Color,_Color>_TypeInfo);
                    /* catch() { ... } // from try @ 033afe40 with catch @ 033aff48 */
    FUN_01bab630(&Method_System_Nullable<KCFAKHLDKJM>__ctor__);
    FUN_01bab630(&Method_System_Nullable<KCFAKHLDKJM>_get_Value__);
                    /* try { // try from 033aff60 to 034aff63 has its CatchHandler @ 033aff88 */
                    /* try { // try from 033aff64 to 034aff97 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4411/*"ClanRoles"*/);
    FUN_01bab630(&StringLiteral_4386/*"ClanLevels"*/);
                    /* catch() { ... } // from try @ 033aff60 with catch @ 033aff88 */
    FUN_01bab630(&StringLiteral_4408/*"ClanRating"*/);
                    /* try { // try from 033aff98 to 034affab has its CatchHandler @ 033b0140 */
    FUN_01bab630(&StringLiteral_4374/*"ClanAdept"*/);
    FUN_01bab630(&StringLiteral_11023/*"Rank"*/);
                    /* catch() { ... } // from try @ 033afdc8 with catch @ 033affac
                       try { // try from 033affac to 034affc3 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_8661/*"Logo"*/);
                    /* try { // try from 033affc4 to 034affc7 has its CatchHandler @ 033afff0 */
                    /* try { // try from 033affc8 to 034affff has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_4399/*"ClanNovice"*/);
    FUN_01bab630(&StringLiteral_8892/*"MaxPlayers"*/);
    FUN_01bab630(&StringLiteral_8896/*"MaxSymbols"*/);
    FUN_01bab630(&StringLiteral_10246/*"Permissions"*/);
                    /* catch() { ... } // from try @ 033affc4 with catch @ 033afff0 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 033b0000 to 034b0013 has its CatchHandler @ 033b0140 */
    FUN_01bab630(&StringLiteral_10822/*"RaidConfigParser::ParseClanSettings: clan role name undefined: "*/);
    FUN_01bab630(&StringLiteral_4384/*"ClanLeader"*/);
                    /* catch() { ... } // from try @ 033afd6c with catch @ 033b0014
                       try { // try from 033b0014 to 034b002b has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_4484/*"Colors"*/);
    FUN_01bab630(&StringLiteral_4412/*"ClanSettings"*/);
                    /* try { // try from 033b002c to 034b002f has its CatchHandler @ 033b0050 */
                    /* try { // try from 033b0030 to 034b0057 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_10359/*"PosTo"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_4397/*"ClanName"*/);
                    /* catch() { ... } // from try @ 033b002c with catch @ 033b0050 */
                    /* try { // try from 033b0058 to 034b006b has its CatchHandler @ 033b0140 */
    FUN_01bab630(&StringLiteral_18251/*"filename"*/);
    FUN_01bab630(&StringLiteral_7291/*"Icons"*/);
                    /* catch() { ... } // from try @ 033afd18 with catch @ 033b006c
                       try { // try from 033b006c to 034b0087 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_4377/*"ClanCreatePrice"*/);
    FUN_01bab630(&StringLiteral_8894/*"MaxRequests"*/);
                    /* try { // try from 033b0088 to 034b008b has its CatchHandler @ 033b00b0 */
    FUN_01bab630(&StringLiteral_11028/*"Rating"*/);
                    /* try { // try from 033b008c to 034b00b7 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_4395/*"ClanMaxSize"*/);
    FUN_01bab630(&StringLiteral_10434/*"Preset"*/);
    FUN_01bab630(&StringLiteral_3364/*"Backs"*/);
                    /* catch() { ... } // from try @ 033b0088 with catch @ 033b00b0 */
                    /* try { // try from 033b00b8 to 034b00cf has its CatchHandler @ 033b0140 */
    FUN_01bab630(&StringLiteral_4381/*"ClanIcons"*/);
    FUN_01bab630(&StringLiteral_20976/*"shadow"*/);
                    /* catch() { ... } // from try @ 033afeac with catch @ 033b00d0
                       try { // try from 033b00d0 to 034b00e7 has its CatchHandler @ 033af8d8 */
    FUN_01bab630(&StringLiteral_6718/*"GemsValue"*/);
    FUN_01bab630(&StringLiteral_4380/*"ClanDescription"*/);
                    /* try { // try from 033b00e8 to 034b00eb has its CatchHandler @ 033b0114 */
    FUN_01bab630(&StringLiteral_4400/*"ClanOfficer"*/);
                    /* try { // try from 033b00ec to 034b0123 has its CatchHandler @ 033af8d8 */
    DAT_04567442 = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
                    /* catch() { ... } // from try @ 033b00e8 with catch @ 033b0114 */
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_4412/*"ClanSettings"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (RaidConfig_DBNJFPILODG_o *)0x0;
    }
                    /* try { // try from 033b0124 to 034b012b has its CatchHandler @ 033b0140 */
                    /* try { // try from 033b012c to 034b0137 has its CatchHandler @ 033af8d8 */
    __this = (RaidConfig_DBNJFPILODG_o *)thunk_FUN_01bda818(RaidConfig_DBNJFPILODG_TypeInfo);
                    /* try { // try from 033b0138 to 034b013f has its CatchHandler @ 033b0140 */
                    /* catch() { ... } // from try @ 033aff98 with catch @ 033b0140
                       catch() { ... } // from try @ 033b0000 with catch @ 033b0140
                       catch() { ... } // from try @ 033b0058 with catch @ 033b0140
                       catch() { ... } // from try @ 033b00b8 with catch @ 033b0140
                       catch() { ... } // from try @ 033b0124 with catch @ 033b0140
                       catch() { ... } // from try @ 033b0138 with catch @ 033b0140 */
    RaidConfig_DBNJFPILODG___ctor(__this,(MethodInfo *)0x0);
    plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                               (plVar6,StringLiteral_4377/*"ClanCreatePrice"*/,*(undefined8 *)(*plVar6 + 0x470));
    if ((plVar7 != (long *)0x0) &&
       (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
       pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_6718/*"GemsValue"*/,(MethodInfo *)0x0);
      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0x32,(MethodInfo *)0x0);
      if (__this != (RaidConfig_DBNJFPILODG_o *)0x0) {
        (__this->fields).DDBGOGFKEBF = iVar4;
        plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                   (plVar6,StringLiteral_4397/*"ClanName"*/,*(undefined8 *)(*plVar6 + 0x470));
        if ((plVar7 != (long *)0x0) &&
           (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
           pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 033b01e8 to 034b02f3 has its CatchHandler @ 033b01e8
                       catch() { ... } // from try @ 033b01e8 with catch @ 033b01e8
                       catch() { ... } // from try @ 033b0348 with catch @ 033b01e8
                       catch() { ... } // from try @ 033b047c with catch @ 033b01e8
                       catch() { ... } // from try @ 033b0484 with catch @ 033b01e8
                       catch() { ... } // from try @ 033b04b8 with catch @ 033b01e8
                       catch() { ... } // from try @ 033b04f8 with catch @ 033b01e8 */
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_8896/*"MaxSymbols"*/,(MethodInfo *)0x0);
          iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0x14,(MethodInfo *)0x0);
          (__this->fields).NLAKJEHAALI = iVar4;
          plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                     (plVar6,StringLiteral_4380/*"ClanDescription"*/,*(undefined8 *)(*plVar6 + 0x470));
          if ((plVar7 != (long *)0x0) &&
             (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
             pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_8896/*"MaxSymbols"*/,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,200,(MethodInfo *)0x0);
            (__this->fields).IAEGKJLKABO = iVar4;
            plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                       (plVar6,StringLiteral_8894/*"MaxRequests"*/,*(undefined8 *)(*plVar6 + 0x470));
            if ((plVar7 != (long *)0x0) &&
               (pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)),
               pSVar8 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
              pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar8,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
              iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,10,(MethodInfo *)0x0);
              (__this->fields).KDGECNIDNHI = iVar4;
              plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                         (plVar6,StringLiteral_4386/*"ClanLevels"*/,*(undefined8 *)(*plVar6 + 0x470)
                                         );
              if ((plVar7 != (long *)0x0) &&
                 (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x210)),
                 plVar7 != (long *)0x0)) {
                plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                    /* try { // try from 033b02f4 to 034b02fb has its CatchHandler @ 033b049c */
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                do {
                  lVar13 = *plVar7;
                    /* try { // try from 033b032c to 034b0337 has its CatchHandler @ 033b048c */
                  uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                    /* try { // try from 033b0340 to 034b0347 has its CatchHandler @ 033b0488 */
                    /* try { // try from 033b0348 to 034b0473 has its CatchHandler @ 033b01e8 */
                      if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_033b0374;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar10 = (undefined8 *)
                            FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b0374:
                  uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
                  if ((uVar18 & 1) == 0) {
                    plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
                    if (plVar7 == (long *)0x0) goto LAB_033b05c8;
                    lVar13 = *plVar7;
                    uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    if (uVar18 == 0) goto LAB_033b0598;
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    goto LAB_033b0580;
                  }
                  lVar13 = *plVar7;
                  uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar18 != 0) {
                    piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_033b03d4;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  puVar10 = (undefined8 *)
                            FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b03d4:
                  pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
                  if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
                    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64(pSVar11);
                    }
                  }
                  bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
                  if (!bVar3) {
                    __this_00 = (RaidConfig_LDOMJFAAGAB_o *)
                                thunk_FUN_01bda818(RaidConfig_LDOMJFAAGAB_TypeInfo);
                    RaidConfig_LDOMJFAAGAB___ctor(__this_00,(MethodInfo *)0x0);
                    if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
                    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar8,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar9,0,(MethodInfo *)0x0);
                    if (__this_00 == (RaidConfig_LDOMJFAAGAB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    (__this_00->fields).NOPGBJNLFHM = uVar5;
                    /* try { // try from 033b0474 to 034b0477 has its CatchHandler @ 033b0498 */
                    /* try { // try from 033b0478 to 034b047b has its CatchHandler @ 033b0494 */
                    /* try { // try from 033b047c to 034b047f has its CatchHandler @ 033b01e8 */
                    /* try { // try from 033b0480 to 034b0483 has its CatchHandler @ 033b0484 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0480 with catch @ 033b0484
                       try { // try from 033b0484 to 034b04b3 has its CatchHandler @ 033b01e8 */
                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0340 with catch @ 033b0488
                        */
                    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b032c with catch @ 033b048c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0320 with catch @ 033b0490
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0478 with catch @ 033b0494
                        */
                    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar8,StringLiteral_11028/*"Rating"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0474 with catch @ 033b0498
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b02f4 with catch @ 033b049c
                        */
                    uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar9,0,(MethodInfo *)0x0);
                    (__this_00->fields).HHOPNIKFJNE = uVar5;
                    /* try { // try from 033b04b4 to 034b04b7 has its CatchHandler @ 033b04e0 */
                    /* try { // try from 033b04b8 to 034b04ef has its CatchHandler @ 033b01e8 */
                    pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
                    if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar8,StringLiteral_4395/*"ClanMaxSize"*/,(MethodInfo *)0x0);
                    uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar9,0,(MethodInfo *)0x0);
                    (__this_00->fields).MHNNMFJNHOG = uVar5;
                    lVar13 = Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_Add__;
                    __this_01 = (__this->fields).GDIJHLHCEDA;
                    /* catch() { ... } // from try @ 033b04b4 with catch @ 033b04e0 */
                    if (__this_01 ==
                        (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pJVar14 = (__this_01->fields)._items;
                    /* try { // try from 033b04f0 to 034b04f7 has its CatchHandler @ 033b050c */
                    (__this_01->fields)._version = (__this_01->fields)._version + 1;
                    /* try { // try from 033b04f8 to 034b0503 has its CatchHandler @ 033b01e8 */
                    if (pJVar14 == (RaidConfig_LDOMJFAAGAB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    uVar2 = (__this_01->fields)._size;
                    /* try { // try from 033b0504 to 034b050b has its CatchHandler @ 033b050c */
                    if (uVar2 < (uint)pJVar14->max_length) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b04f0 with catch @ 033b050c
                       catch(type#2 @ 00000000) { ... } // from try @ 033b0504 with catch @ 033b050c
                        */
                    /* try { // try from 033b0510 to 034b061b has its CatchHandler @ 033b0510
                       catch() { ... } // from try @ 033b0510 with catch @ 033b0510
                       catch() { ... } // from try @ 033b0664 with catch @ 033b0510
                       catch() { ... } // from try @ 033b078c with catch @ 033b0510
                       catch() { ... } // from try @ 033b0794 with catch @ 033b0510
                       catch() { ... } // from try @ 033b07c4 with catch @ 033b0510
                       catch() { ... } // from try @ 033b0804 with catch @ 033b0510 */
                      (__this_01->fields)._size = uVar2 + 1;
                      pJVar14->m_Items[(int)uVar2] = __this_00;
                      thunk_FUN_01c20e04(pJVar14->m_Items + (int)uVar2,__this_00);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_01,
                                 (Il2CppObject *)__this_00,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b0580:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b05bc;
    }
  }
LAB_033b0598:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b05bc:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b05c8:
  plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_4408/*"ClanRating"*/,*(undefined8 *)(*plVar6 + 0x470));
  if ((plVar7 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                    /* try { // try from 033b061c to 034b0623 has its CatchHandler @ 033b07a8 */
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
                    /* try { // try from 033b065c to 034b0663 has its CatchHandler @ 033b0798 */
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* try { // try from 033b0664 to 034b0783 has its CatchHandler @ 033b0510 */
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b0698;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b0698:
      uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar18 & 1) == 0) {
                    /* catch() { ... } // from try @ 033b07c0 with catch @ 033b07ec */
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_033b0858;
                    /* try { // try from 033b07fc to 034b0803 has its CatchHandler @ 033b0818 */
        lVar13 = *plVar7;
                    /* try { // try from 033b0804 to 034b080f has its CatchHandler @ 033b0510 */
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b0830;
                    /* try { // try from 033b0810 to 034b0817 has its CatchHandler @ 033b0818 */
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b0818;
      }
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b06f8;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b06f8:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
        __this_02 = (RaidConfig_BFPCOCFHFHF_o *)
                    thunk_FUN_01bda818(RaidConfig_BFPCOCFHFHF_TypeInfo);
        RaidConfig_BFPCOCFHFHF___ctor(__this_02,(MethodInfo *)0x0);
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_10359/*"PosTo"*/,(MethodInfo *)0x0);
                    /* try { // try from 033b0784 to 034b0787 has its CatchHandler @ 033b07a4 */
                    /* try { // try from 033b0788 to 034b078b has its CatchHandler @ 033b07a0 */
                    /* try { // try from 033b078c to 034b078f has its CatchHandler @ 033b0510 */
        iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
                    /* try { // try from 033b0790 to 034b0793 has its CatchHandler @ 033b0794 */
        if (__this_02 == (RaidConfig_BFPCOCFHFHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0790 with catch @ 033b0794
                       try { // try from 033b0794 to 034b07bf has its CatchHandler @ 033b0510 */
        (__this_02->fields).OLGNPLGBNDJ = iVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b065c with catch @ 033b0798
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0648 with catch @ 033b079c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0788 with catch @ 033b07a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b0784 with catch @ 033b07a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b061c with catch @ 033b07a8
                        */
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* try { // try from 033b07c0 to 034b07c3 has its CatchHandler @ 033b07ec */
                    /* try { // try from 033b07c4 to 034b07fb has its CatchHandler @ 033b0510 */
        fVar22 = EIABCPKDEBD__GICIEKCGOHA(pSVar9,0.0,(MethodInfo *)0x0);
        (__this_02->fields).JAICMIMBIOA = fVar22;
        __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)
                    (__this->fields).BCEDGEOHECB;
        if (__this_03 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<int,_object>__Add
                  (__this_03,(__this_02->fields).OLGNPLGBNDJ,(Il2CppObject *)__this_02,
                   Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_Add__)
        ;
      }
    } while( true );
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b0818:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b07fc with catch @ 033b0818
                       catch(type#2 @ 00000000) { ... } // from try @ 033b0810 with catch @ 033b0818
                        */
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b084c;
    }
  }
LAB_033b0830:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b084c:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b0858:
  plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_4411/*"ClanRoles"*/,*(undefined8 *)(*plVar6 + 0x470));
  if ((plVar7 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b0924;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b0924:
      uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_033b0c88;
        lVar13 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b0c60;
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b0c48;
      }
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b0984;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b0984:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
        __this_04 = (RaidConfig_GEHAFAGNJPJ_o *)
                    thunk_FUN_01bda818(RaidConfig_GEHAFAGNJPJ_TypeInfo);
        RaidConfig_GEHAFAGNJPJ___ctor(__this_04,(MethodInfo *)0x0);
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_04 == (RaidConfig_GEHAFAGNJPJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppSVar21 = &(__this_04->fields).JIJLBFGKNJK;
        *ppSVar21 = pSVar12;
        thunk_FUN_01c20e04(ppSVar21);
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_8892/*"MaxPlayers"*/,(MethodInfo *)0x0);
        uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar9,0,(MethodInfo *)0x0);
        (__this_04->fields).IAICAGMIHDN = uVar5;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_11023/*"Rank"*/,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
        (__this_04->fields).GKAGCIBKONM = iVar4;
        bVar3 = System_String__op_Equality
                          ((__this_04->fields).JIJLBFGKNJK,StringLiteral_4384/*"ClanLeader"*/,(MethodInfo *)0x0);
        if (bVar3) {
          local_a8.hasValue = false;
          local_a8._1_3_ = 0;
          local_a8.value = 0;
          System_Nullable<Int32Enum>___ctor
                    ((System_Nullable_Int32Enum__o)&local_a8,1,
                     Method_System_Nullable<KCFAKHLDKJM>__ctor__);
LAB_033b0b80:
          (__this_04->fields).PCOINHAKNFK.fields = local_a8;
        }
        else {
          bVar3 = System_String__op_Equality(*ppSVar21,StringLiteral_4400/*"ClanOfficer"*/,(MethodInfo *)0x0);
          if (bVar3) {
            local_a8.hasValue = false;
            local_a8._1_3_ = 0;
            local_a8.value = 0;
            System_Nullable<Int32Enum>___ctor
                      ((System_Nullable_Int32Enum__o)&local_a8,2,
                       Method_System_Nullable<KCFAKHLDKJM>__ctor__);
            goto LAB_033b0b80;
          }
          bVar3 = System_String__op_Equality(*ppSVar21,StringLiteral_4374/*"ClanAdept"*/,(MethodInfo *)0x0);
          if (bVar3) {
            local_a8.hasValue = false;
            local_a8._1_3_ = 0;
            local_a8.value = 0;
            System_Nullable<Int32Enum>___ctor
                      ((System_Nullable_Int32Enum__o)&local_a8,3,
                       Method_System_Nullable<KCFAKHLDKJM>__ctor__);
            goto LAB_033b0b80;
          }
          bVar3 = System_String__op_Equality(*ppSVar21,StringLiteral_4399/*"ClanNovice"*/,(MethodInfo *)0x0);
          if (bVar3) {
            local_a8.hasValue = false;
            local_a8._1_3_ = 0;
            local_a8.value = 0;
            System_Nullable<Int32Enum>___ctor
                      ((System_Nullable_Int32Enum__o)&local_a8,4,
                       Method_System_Nullable<KCFAKHLDKJM>__ctor__);
            goto LAB_033b0b80;
          }
          local_a8.hasValue = false;
          local_a8._1_3_ = 0;
          local_a8.value = 0;
          System_Nullable<Int32Enum>___ctor
                    ((System_Nullable_Int32Enum__o)&local_a8,4,
                     Method_System_Nullable<KCFAKHLDKJM>__ctor__);
          pSVar12 = (__this_04->fields).JIJLBFGKNJK;
          (__this_04->fields).PCOINHAKNFK.fields = local_a8;
          pSVar12 = System_String__Concat(StringLiteral_10822/*"RaidConfigParser::ParseClanSettings: clan role name undefined: "*/,pSVar12,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
        }
        FBEEEALALMJ = (System_Collections_Generic_Dictionary_T__U__o *)(__this->fields).AFAFAFILGCG;
        iVar4 = System_Nullable<Int32Enum>__get_Value
                          ((System_Nullable_Int32Enum__o)&__this_04->fields,
                           Method_System_Nullable<KCFAKHLDKJM>_get_Value__);
        CAOJHCDPDBH__GKONJMIPMEH<Int32Enum,_object>
                  (FBEEEALALMJ,iVar4,(Il2CppObject *)__this_04,
                   Method_CAOJHCDPDBH_GKONJMIPMEH<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>__);
      }
    } while( true );
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b0c48:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b0c7c;
    }
  }
LAB_033b0c60:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b0c7c:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b0c88:
  plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_10246/*"Permissions"*/,*(undefined8 *)(*plVar6 + 0x470));
  if ((plVar7 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b0d54;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b0d54:
      uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_033b0f24;
        lVar13 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b0efc;
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b0ee4;
      }
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b0db4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b0db4:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
        __this_05 = (RaidConfig_BNKFAJEBNFC_o *)
                    thunk_FUN_01bda818(RaidConfig_BNKFAJEBNFC_TypeInfo);
        RaidConfig_BNKFAJEBNFC___ctor(__this_05,(MethodInfo *)0x0);
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (__this_05 == (RaidConfig_BNKFAJEBNFC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_05->fields).JIJLBFGKNJK = pSVar12;
        thunk_FUN_01c20e04();
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_11023/*"Rank"*/,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
        (__this_05->fields).GKAGCIBKONM = iVar4;
        __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).MLONDBMLENH;
        if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (__this_06,(Il2CppObject *)(__this_05->fields).JIJLBFGKNJK,
                   (Il2CppObject *)__this_05,
                   Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_Add__
                  );
      }
    } while( true );
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b0ee4:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b0f18;
    }
  }
LAB_033b0efc:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b0f18:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b0f24:
  plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_4381/*"ClanIcons"*/,*(undefined8 *)(*plVar6 + 0x470));
  if (((plVar6 != (long *)0x0) &&
      (plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                                  (plVar6,StringLiteral_7291/*"Icons"*/,*(undefined8 *)(*plVar6 + 0x470)),
      plVar7 != (long *)0x0)) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b1010;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b1010:
      uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_033b11dc;
        lVar13 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b11b4;
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b119c;
      }
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b1070;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b1070:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
        pJVar15 = (__this->fields).OOFDKPAOGFA;
        if (pJVar15 == (RaidConfig_ONCGGLEAIFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar20 = (pJVar15->fields).KCDBFFCLCOG;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_18251/*"filename"*/,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar12 = OFFIONDOEPM__GJBPBKGAJOC(pSVar12,(MethodInfo *)0x0);
        lVar13 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar16 = (pSVar20->fields)._items;
        (pSVar20->fields)._version = (pSVar20->fields)._version + 1;
        if (pSVar16 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar20->fields)._size;
        if (uVar2 < (uint)pSVar16->max_length) {
          (pSVar20->fields)._size = uVar2 + 1;
          pSVar16->m_Items[(int)uVar2] = pSVar12;
          thunk_FUN_01c20e04();
        }
        else {
                    /* try { // try from 033b1154 to 034b1247 has its CatchHandler @ 033b1154
                       catch() { ... } // from try @ 033b1154 with catch @ 033b1154
                       catch() { ... } // from try @ 033b12cc with catch @ 033b1154
                       catch() { ... } // from try @ 033b1304 with catch @ 033b1154
                       catch() { ... } // from try @ 033b1334 with catch @ 033b1154
                       catch() { ... } // from try @ 033b1374 with catch @ 033b1154 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)pSVar12,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b119c:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b11d0;
    }
  }
LAB_033b11b4:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b11d0:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b11dc:
  plVar7 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_3364/*"Backs"*/,*(undefined8 *)(*plVar6 + 0x470));
  if ((plVar7 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210)),
     plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b12ac;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b12ac:
                    /* try { // try from 033b12b0 to 034b12cb has its CatchHandler @ 033b1310 */
      uVar18 = (*(code *)*puVar10)(plVar7,puVar10[1]);
      if ((uVar18 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_033b1518;
        lVar13 = *plVar7;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b14f0;
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b14d8;
      }
      lVar13 = *plVar7;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
                    /* try { // try from 033b12cc to 034b12f3 has its CatchHandler @ 033b1154 */
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033b12fc to 034b12ff has its CatchHandler @ 033b130c */
                    /* try { // try from 033b1300 to 034b1303 has its CatchHandler @ 033b1308 */
                    /* try { // try from 033b1304 to 034b132f has its CatchHandler @ 033b1154 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1300 with catch @ 033b1308
                        */
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b130c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
                    /* try { // try from 033b12f4 to 034b12fb has its CatchHandler @ 033b1318 */
      puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b130c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b12fc with catch @ 033b130c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b12b0 with catch @ 033b1310
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1248 with catch @ 033b1314
                        */
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar7,puVar10[1]);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b12f4 with catch @ 033b1318
                        */
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033b1330 to 034b1333 has its CatchHandler @ 033b135c */
                    /* try { // try from 033b1334 to 034b136b has its CatchHandler @ 033b1154 */
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
                    /* catch() { ... } // from try @ 033b1330 with catch @ 033b135c */
        pJVar15 = (__this->fields).OOFDKPAOGFA;
        if (pJVar15 == (RaidConfig_ONCGGLEAIFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033b136c to 034b1373 has its CatchHandler @ 033b1388 */
        pSVar20 = (pJVar15->fields).MHLCLANFAAO;
                    /* try { // try from 033b1374 to 034b137f has its CatchHandler @ 033b1154 */
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 033b1380 to 034b1387 has its CatchHandler @ 033b1388 */
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b136c with catch @ 033b1388
                       catch(type#2 @ 00000000) { ... } // from try @ 033b1380 with catch @ 033b1388
                        */
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_18251/*"filename"*/,(MethodInfo *)0x0);
                    /* try { // try from 033b1394 to 034b1487 has its CatchHandler @ 033b1394
                       catch() { ... } // from try @ 033b1394 with catch @ 033b1394
                       catch() { ... } // from try @ 033b150c with catch @ 033b1394
                       catch() { ... } // from try @ 033b1544 with catch @ 033b1394
                       catch() { ... } // from try @ 033b1574 with catch @ 033b1394
                       catch() { ... } // from try @ 033b15b4 with catch @ 033b1394 */
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar12 = OFFIONDOEPM__GJBPBKGAJOC(pSVar12,(MethodInfo *)0x0);
        lVar13 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar16 = (pSVar20->fields)._items;
        (pSVar20->fields)._version = (pSVar20->fields)._version + 1;
        if (pSVar16 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar20->fields)._size;
        if (uVar2 < (uint)pSVar16->max_length) {
          (pSVar20->fields)._size = uVar2 + 1;
          pSVar16->m_Items[(int)uVar2] = pSVar12;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)pSVar12,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        pJVar15 = (__this->fields).OOFDKPAOGFA;
        if (pJVar15 == (RaidConfig_ONCGGLEAIFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar20 = (pJVar15->fields).DOALOOOJNPD;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_20976/*"shadow"*/,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        pSVar12 = OFFIONDOEPM__GJBPBKGAJOC(pSVar12,(MethodInfo *)0x0);
        lVar13 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar20 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar16 = (pSVar20->fields)._items;
        (pSVar20->fields)._version = (pSVar20->fields)._version + 1;
        if (pSVar16 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar20->fields)._size;
        if (uVar2 < (uint)pSVar16->max_length) {
          (pSVar20->fields)._size = uVar2 + 1;
          pSVar16->m_Items[(int)uVar2] = pSVar12;
          thunk_FUN_01c20e04();
                    /* try { // try from 033b1488 to 034b148f has its CatchHandler @ 033b1554 */
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar20,(Il2CppObject *)pSVar12,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_033b1908;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b1870:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b18a4;
    }
  }
LAB_033b1888:
  puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033b18a4:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  return __this;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033b14d8:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033b150c;
    }
  }
LAB_033b14f0:
                    /* try { // try from 033b14f0 to 034b150b has its CatchHandler @ 033b1550 */
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033b150c:
                    /* try { // try from 033b150c to 034b1533 has its CatchHandler @ 033b1394 */
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_033b1518:
                    /* try { // try from 033b1534 to 034b153b has its CatchHandler @ 033b1558 */
                    /* try { // try from 033b153c to 034b153f has its CatchHandler @ 033b154c */
                    /* try { // try from 033b1540 to 034b1543 has its CatchHandler @ 033b1548 */
                    /* try { // try from 033b1544 to 034b156f has its CatchHandler @ 033b1394 */
  plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                             (plVar6,StringLiteral_4484/*"Colors"*/,*(undefined8 *)(*plVar6 + 0x470));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1540 with catch @ 033b1548
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b153c with catch @ 033b154c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b14f0 with catch @ 033b1550
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1488 with catch @ 033b1554
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1534 with catch @ 033b1558
                        */
  if ((plVar6 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
     plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                    /* try { // try from 033b1570 to 034b1573 has its CatchHandler @ 033b159c */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
                    /* try { // try from 033b15ac to 034b15b3 has its CatchHandler @ 033b15c8 */
      lVar13 = *plVar6;
                    /* try { // try from 033b15b4 to 034b15bf has its CatchHandler @ 033b1394 */
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
                    /* try { // try from 033b15c0 to 034b15c7 has its CatchHandler @ 033b15c8 */
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b15ac with catch @ 033b15c8
                       catch(type#2 @ 00000000) { ... } // from try @ 033b15c0 with catch @ 033b15c8
                        */
                    /* try { // try from 033b15cc to 034b16bf has its CatchHandler @ 033b15cc
                       catch() { ... } // from try @ 033b15cc with catch @ 033b15cc
                       catch() { ... } // from try @ 033b1744 with catch @ 033b15cc
                       catch() { ... } // from try @ 033b177c with catch @ 033b15cc
                       catch() { ... } // from try @ 033b17ac with catch @ 033b15cc
                       catch() { ... } // from try @ 033b17ec with catch @ 033b15cc */
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033b15f8;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b15f8:
      uVar18 = (*(code *)*puVar10)(plVar6,puVar10[1]);
      if ((uVar18 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) {
          return __this;
        }
        lVar13 = *plVar6;
        uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar18 == 0) goto LAB_033b1888;
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_033b1870;
      }
      lVar13 = *plVar6;
      uVar18 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar19 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033b1658;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b1658:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar6,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
      if (!bVar3) {
        if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (System_String_o *)
                  (*(pSVar11->klass->vtable)._8_unknown.methodPtr)
                            (pSVar11,(pSVar11->klass->vtable)._8_unknown.method);
                    /* try { // try from 033b16c0 to 034b16c7 has its CatchHandler @ 033b178c */
        bVar3 = System_String__op_Equality(pSVar12,StringLiteral_10434/*"Preset"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_3359/*"Back"*/,(MethodInfo *)0x0);
          pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method);
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 033b1728 to 034b1743 has its CatchHandler @ 033b1788 */
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_8661/*"Logo"*/,(MethodInfo *)0x0);
          GKBNFBINIIP = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
          local_c0.hasValue = false;
          local_c0._1_3_ = 0;
          local_c0.value.fields.r = 0.0;
          local_c0.value.fields.g = 0.0;
          local_c0.value.fields.b = 0.0;
          local_c0.value.fields.a = 0.0;
                    /* try { // try from 033b1744 to 034b176b has its CatchHandler @ 033b15cc */
          NANHIJPKIAP = CFBGPBCDAGA__HPBCENEFAMD
                                  (pSVar12,1.0,(System_Nullable_Color__o *)&local_c0,
                                   (MethodInfo *)0x0);
          local_d8.hasValue = false;
          local_d8._1_3_ = 0;
          local_d8.value.fields.r = 0.0;
          local_d8.value.fields.g = 0.0;
          local_d8.value.fields.b = 0.0;
                    /* try { // try from 033b176c to 034b1773 has its CatchHandler @ 033b1790 */
          local_d8.value.fields.a = 0.0;
                    /* try { // try from 033b1774 to 034b1777 has its CatchHandler @ 033b1784 */
                    /* try { // try from 033b1778 to 034b177b has its CatchHandler @ 033b1780 */
                    /* try { // try from 033b177c to 034b17a7 has its CatchHandler @ 033b15cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1778 with catch @ 033b1780
                        */
          JGGJNLLANAE = CFBGPBCDAGA__HPBCENEFAMD
                                  (GKBNFBINIIP,1.0,(System_Nullable_Color__o *)&local_d8,
                                   (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1774 with catch @ 033b1784
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b1728 with catch @ 033b1788
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b16c0 with catch @ 033b178c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b176c with catch @ 033b1790
                        */
          __this_07 = (MGNDHCBAPEN_Color__Color__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<Color,_Color>_TypeInfo);
                    /* try { // try from 033b17a8 to 034b17ab has its CatchHandler @ 033b17d4 */
                    /* try { // try from 033b17ac to 034b17e3 has its CatchHandler @ 033b15cc */
          MGNDHCBAPEN<Color,_Color>___ctor
                    (__this_07,NANHIJPKIAP,JGGJNLLANAE,Method_MGNDHCBAPEN<Color,_Color>__ctor__);
          lVar13 = Method_System_Collections_Generic_List<MGNDHCBAPEN<Color,_Color>>_Add__;
          pJVar15 = (__this->fields).OOFDKPAOGFA;
          if (pJVar15 == (RaidConfig_ONCGGLEAIFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_08 = (pJVar15->fields).DFIBIHHGIPG;
                    /* catch() { ... } // from try @ 033b17a8 with catch @ 033b17d4 */
          if (__this_08 == (System_Collections_Generic_List_MGNDHCBAPEN_Color__Color___o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar17 = (__this_08->fields)._items;
                    /* try { // try from 033b17e4 to 034b17eb has its CatchHandler @ 033b1800 */
          (__this_08->fields)._version = (__this_08->fields)._version + 1;
                    /* try { // try from 033b17ec to 034b17f7 has its CatchHandler @ 033b15cc */
          if (pMVar17 == (MGNDHCBAPEN_Color__Color__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_08->fields)._size;
                    /* try { // try from 033b17f8 to 034b17ff has its CatchHandler @ 033b1800 */
          if (uVar2 < (uint)pMVar17->max_length) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b17e4 with catch @ 033b1800
                       catch(type#2 @ 00000000) { ... } // from try @ 033b17f8 with catch @ 033b1800
                        */
            (__this_08->fields)._size = uVar2 + 1;
            pMVar17->m_Items[(int)uVar2] = __this_07;
            thunk_FUN_01c20e04(pMVar17->m_Items + (int)uVar2,__this_07);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_08,
                       (Il2CppObject *)__this_07,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    } while( true );
  }
LAB_033b1908:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Color JHMAPMKLHIB(string EFJKPCADGJH)  [RVA 0x32B2158]
// RaidConfigParser$$JHMAPMKLHIB @ RVA 0x32B2158

UnityEngine_Color_o RaidConfigParser__JHMAPMKLHIB(System_String_o *EFJKPCADGJH,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  System_Nullable_Color__Fields local_28;
  
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value.fields.r = 0.0;
  local_28.value.fields.g = 0.0;
  local_28.value.fields.b = 0.0;
  local_28.value.fields.a = 0.0;
  UVar1 = (UnityEngine_Color_Fields)
          CFBGPBCDAGA__HPBCENEFAMD
                    (EFJKPCADGJH,1.0,(System_Nullable_Color__o *)&local_28,(MethodInfo *)0x0);
  return (UnityEngine_Color_o)UVar1;
}


// ===== public static void POCBAMDFNGM(RaidConfig.BEGFIIECDMN IMMNELPBGIF, XmlNode AHDGNOJPPIB)  [RVA 0x32B2184]
// RaidConfigParser$$POCBAMDFNGM @ RVA 0x32B2184

void RaidConfigParser__POCBAMDFNGM
               (RaidConfig_BEGFIIECDMN_o *IMMNELPBGIF,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  NLPJLHOEAOE_o *pNVar6;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar7;
  ADGIHFGIFHO_o *pAVar8;
  System_Xml_XmlNode_o **ppSVar9;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this;
  FPLCEOJCPOD_o *pFVar10;
  ulong uVar11;
  ABCMPMHNMAP_o *pAVar12;
  ADGIHFGIFHO_o **ppAVar13;
  Il2CppClass *PMACBPAMPJA;
  ModelParameters_o *pPVar14;
  System_String_o **ppSVar15;
  System_String_o *pSVar16;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  ulong uVar17;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_44;
  
  if ((DAT_04567443 & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5061/*"DamageConverter"*/);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    FUN_01bab630(&StringLiteral_6922/*"Group"*/);
    FUN_01bab630(&StringLiteral_5255/*"DefaultPerksAspect"*/);
    FUN_01bab630(&StringLiteral_12864/*"Template"*/);
    DAT_04567443 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_44 = 0;
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  lVar3 = FUN_01bab718(string___TypeInfo,2);
  if (lVar3 == 0) goto LAB_033b2614;
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) = StringLiteral_5061/*"DamageConverter"*/;
    thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x20));
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = StringLiteral_5255/*"DefaultPerksAspect"*/;
      thunk_FUN_01c20e04((undefined8 *)(lVar3 + 0x28));
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar17 = 0;
        uVar11 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar17) goto LAB_033b2624;
          pSVar16 = *(System_String_o **)(lVar3 + 0x20 + uVar17 * 8);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033b2614;
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar4,pSVar16,(MethodInfo *)0x0);
          if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
            if (IMMNELPBGIF == (RaidConfig_BEGFIIECDMN_o *)0x0) goto LAB_033b2614;
            __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
                        (IMMNELPBGIF->fields).GJCCGCCOJCO;
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
            goto LAB_033b2614;
            System_Collections_Generic_Dictionary<object,_int>__set_Item
                      (__this_00,(Il2CppObject *)pSVar16,iVar2,
                       Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          }
          uVar11 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_12864/*"Template"*/,(MethodInfo *)0x0);
        pPVar14 = (ModelParameters_o *)0x0;
        if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
          pSVar16 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (pNVar6 == (NLPJLHOEAOE_o *)0x0) goto LAB_033b2614;
          pNVar7 = NLPJLHOEAOE__ADKMBOALAKN(pNVar6,pSVar16,(MethodInfo *)0x0);
          if (pNVar7 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
            pPVar14 = (ModelParameters_o *)0x0;
          }
          else {
            pPVar14 = (pNVar7->fields).BAKIMFMMFMP;
          }
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar6 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((pNVar6 != (NLPJLHOEAOE_o *)0x0) &&
           (pPVar14 = NLPJLHOEAOE__MDEGKNMDKPN(pNVar6,AHDGNOJPPIB,pPVar14,true,(MethodInfo *)0x0),
           pPVar14 != (ModelParameters_o *)0x0)) {
          (*(pPVar14->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                    (pPVar14,(pPVar14->klass->vtable)._7_LBNKPLKIIOP.method);
          pAVar8 = (ADGIHFGIFHO_o *)thunk_FUN_01bda818(ADGIHFGIFHO_TypeInfo);
          ADGIHFGIFHO___ctor(pAVar8,pPVar14,(MethodInfo *)0x0);
          if (IMMNELPBGIF != (RaidConfig_BEGFIIECDMN_o *)0x0) {
            ppAVar13 = &(IMMNELPBGIF->fields).HCOMKFDFPEK;
            *ppAVar13 = pAVar8;
            thunk_FUN_01c20e04(ppAVar13,pAVar8);
            pAVar8 = *ppAVar13;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6922/*"Group"*/,(MethodInfo *)0x0);
              pSVar16 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
              if (pAVar8 != (ADGIHFGIFHO_o *)0x0) {
                ppSVar15 = &(pAVar8->fields).super.LBNOMMMFDJE;
                *ppSVar15 = pSVar16;
                thunk_FUN_01c20e04(ppSVar15,pSVar16);
                pAVar8 = *ppAVar13;
                pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_10999/*"Random"*/,(MethodInfo *)0x0);
                  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                  if (pAVar8 != (ADGIHFGIFHO_o *)0x0) {
                    (pAVar8->fields).super.PPKEAHBFAAM = iVar2;
                    if (*ppAVar13 != (ADGIHFGIFHO_o *)0x0) {
                      ppSVar9 = &((*ppAVar13)->fields).super.JHFENACKNPG;
                      *ppSVar9 = AHDGNOJPPIB;
                      thunk_FUN_01c20e04(ppSVar9,AHDGNOJPPIB);
                      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pAVar12 = GameUtils_TypeInfo->static_fields->EDKELIKNDEP;
                      if ((pAVar12 != (ABCMPMHNMAP_o *)0x0) &&
                         (__this = (pAVar12->fields).ACHJNNOKEDK,
                         __this != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                        System_Collections_Generic_List<object>__GetEnumerator
                                  (&local_88,(System_Collections_Generic_List_object__o *)__this,
                                   Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__
                                  );
                        local_70.fields._index = local_88.fields._index;
                        local_70.fields._version = local_88.fields._version;
                        local_70.fields._list = local_88.fields._list;
                        local_70.fields._current = local_88.fields._current;
                        while( true ) {
                          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                            (&local_70,
                                             Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                                            );
                          if (!bVar1) {
                            System_Collections_Generic_List_Enumerator<object>__Dispose
                                      (&local_70,
                                       Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__
                                      );
                            return;
                          }
                          if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          PMACBPAMPJA = local_70.fields._current[1].klass;
                          local_44 = 0;
                          if (*ppAVar13 == (ADGIHFGIFHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pFVar10 = ((*ppAVar13)->fields).super.NIDLHDFNACM;
                          if (pFVar10 == (FPLCEOJCPOD_o *)0x0) break;
                          bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                                            (pFVar10,(System_String_o *)PMACBPAMPJA,&local_44,true,
                                             false,(MethodInfo *)0x0);
                          if (local_44 != 0) {
                            if (*ppAVar13 == (ADGIHFGIFHO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8(bVar1);
                            }
                            pFVar10 = ((*ppAVar13)->fields).super.ACHJNNOKEDK;
                            if (pFVar10 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            FPLCEOJCPOD__FOOHBJNHOKK
                                      (pFVar10,(System_String_o *)PMACBPAMPJA,local_44,false,
                                       (MethodInfo *)0x0);
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_033b2614:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_033b2624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static RaidConfig.NOPCEDPNNKO FEGPANCOLOL(XmlDocument LKILNGEECIJ)  [RVA 0x32B26B0]
// RaidConfigParser$$FEGPANCOLOL @ RVA 0x32B26B0

/* WARNING: Removing unreachable block (ram,0x033b467c) */
/* WARNING: Removing unreachable block (ram,0x033b4198) */
/* WARNING: Removing unreachable block (ram,0x033b44b0) */
/* WARNING: Removing unreachable block (ram,0x033b45ec) */
/* WARNING: Removing unreachable block (ram,0x033b4670) */

RaidConfig_NOPCEDPNNKO_o *
RaidConfigParser__FEGPANCOLOL(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int32_t iVar7;
  uint32_t uVar8;
  long *plVar9;
  RaidConfig_NOPCEDPNNKO_o *__this;
  long *plVar10;
  undefined8 *puVar11;
  System_Xml_XmlNode_o *pSVar12;
  System_String_o *pSVar13;
  RaidConfig_HJLEKMDIDPO_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar14;
  System_Xml_XmlAttribute_o *pSVar15;
  System_String_o *pSVar16;
  System_Xml_XmlNode_o *pSVar17;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_01;
  RaidConfig_EFAJBOEHPLJ_o *__this_02;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *__this_03;
  GameUtils_HLAKGGFFNAO_o *__this_04;
  RaidConfig_ENBCJNLAHAC_o *__this_05;
  System_DateTime_o SVar18;
  int64_t iVar19;
  int64_t iVar20;
  JOCNCPCOEAC_o *__this_06;
  JOCNCPCOEAC_o **ppJVar21;
  IGNEHHMICKB_o *__this_07;
  IGNEHHMICKB_o **ppIVar22;
  long *plVar23;
  MGNDHCBAPEN_string__int__o *__this_08;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_09;
  MethodInfo_27F61B8 *pMVar24;
  long lVar25;
  RaidConfig_HJLEKMDIDPO_array *pJVar26;
  RaidConfig_EFAJBOEHPLJ_array *pJVar27;
  MGNDHCBAPEN_string__int__array *pMVar28;
  RaidConfig_ENBCJNLAHAC_array *pJVar29;
  ulong uVar30;
  int *piVar31;
  System_String_o **ppSVar32;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_10;
  float fVar33;
  undefined1 auVar34 [16];
  System_Nullable_DateTime__o __this_11;
  System_Nullable_DateTime__o __this_12;
  UnityEngine_Vector2_Fields UVar35;
  System_Nullable_DateTime__Fields local_80;
  System_Nullable_DateTime__Fields local_70;
  
  auVar34._8_8_ = method;
  auVar34._0_8_ = LKILNGEECIJ;
  if ((DAT_04567444 & 1) == 0) {
    FUN_01bab630(&RaidConfig_EFAJBOEHPLJ_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<DPLBMJODBEK>__);
    FUN_01bab630(&RaidConfig_ENBCJNLAHAC_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&RaidConfig_HJLEKMDIDPO_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IGNEHHMICKB_TypeInfo);
    FUN_01bab630(&JOCNCPCOEAC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_EFAJBOEHPLJ>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_Add__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_int>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&RaidConfig_NOPCEDPNNKO_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116/*"Items"*/);
    FUN_01bab630(&StringLiteral_5414/*"DisplayLootEffect"*/);
    FUN_01bab630(&StringLiteral_8672/*"LootContainerName"*/);
    FUN_01bab630(&StringLiteral_5306/*"DescriptionSales"*/);
    FUN_01bab630(&StringLiteral_10071/*"PackLabel"*/);
    FUN_01bab630(&StringLiteral_10519/*"ProgressBarSkew"*/);
    FUN_01bab630(&StringLiteral_2761/*"AddPercent"*/);
    FUN_01bab630(&StringLiteral_12025/*"ShopHide"*/);
    FUN_01bab630(&StringLiteral_7106/*"HintFull"*/);
    FUN_01bab630(&StringLiteral_7346/*"ImageSales"*/);
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    FUN_01bab630(&StringLiteral_11074/*"RealPrice"*/);
    FUN_01bab630(&StringLiteral_10878/*"RaidItems"*/);
    FUN_01bab630(&StringLiteral_8690/*"LotteryDialogType"*/);
    FUN_01bab630(&StringLiteral_10515/*"ProgressBarDojo"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10808/*"RaidChargeDamage"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_6922/*"Group"*/);
    FUN_01bab630(&StringLiteral_22465/*"{255,255,255}"*/);
    FUN_01bab630(&StringLiteral_10081/*"Packs"*/);
    FUN_01bab630(&StringLiteral_10517/*"ProgressBarFullHint"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_8823/*"MapButtonImage"*/);
    FUN_01bab630(&StringLiteral_5456/*"DojoBarBtnOffset"*/);
    FUN_01bab630(&StringLiteral_8421/*"LevelRestrictionMin"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_8420/*"LevelRestrictionMax"*/);
    FUN_01bab630(&StringLiteral_10518/*"ProgressBarHint"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_10068/*"Pack"*/);
    FUN_01bab630(&StringLiteral_10239/*"Perks"*/);
    FUN_01bab630(&StringLiteral_4933/*"CurrencyOnly"*/);
    FUN_01bab630(&StringLiteral_12111/*"ShowProbability"*/);
    FUN_01bab630(&StringLiteral_4925/*"CurrencyCost"*/);
    FUN_01bab630(&StringLiteral_12374/*"StartTime"*/);
    FUN_01bab630(&StringLiteral_6717/*"GemsPrice"*/);
    FUN_01bab630(&StringLiteral_5062/*"DamageDispersionPct"*/);
    FUN_01bab630(&StringLiteral_14182/*"USD"*/);
    FUN_01bab630(&StringLiteral_7104/*"Hint"*/);
    FUN_01bab630(&StringLiteral_2799/*"Alias"*/);
    FUN_01bab630(&StringLiteral_11076/*"RealPriceCurrency"*/);
    FUN_01bab630(&StringLiteral_4554/*"CompositeImage"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_5410/*"DiscountHides"*/);
    FUN_01bab630(&StringLiteral_12004/*"ShopButtonHide"*/);
    FUN_01bab630(&StringLiteral_10520/*"ProgressBarTextColor"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_12027/*"ShopLabel"*/);
    FUN_01bab630(&StringLiteral_9153/*"Model"*/);
    FUN_01bab630(&StringLiteral_10580/*"Purchasable"*/);
    auVar34 = FUN_01bab630(&StringLiteral_4712/*"Cooldown"*/);
    DAT_04567444 = 1;
  }
  local_70 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  local_80 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar9 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_10878/*"RaidItems"*/,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar9 != (long *)0x0) {
      __this = (RaidConfig_NOPCEDPNNKO_o *)thunk_FUN_01bda818(RaidConfig_NOPCEDPNNKO_TypeInfo);
      RaidConfig_NOPCEDPNNKO___ctor(__this,(MethodInfo *)0x0);
      plVar10 = (long *)(**(code **)(*plVar9 + 0x468))
                                  (plVar9,StringLiteral_8116/*"Items"*/,*(undefined8 *)(*plVar9 + 0x470));
      if (plVar10 != (long *)0x0) {
        auVar34 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
        plVar10 = auVar34._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = auVar34._8_8_;
        auVar34 = auVar3 << 0x40;
        if (plVar10 != (long *)0x0) {
          plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar25 = *plVar10;
            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_033b2b98;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b2b98:
            uVar30 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar30 & 1) == 0) {
              plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
              if (plVar10 == (long *)0x0) goto LAB_033b3370;
              lVar25 = *plVar10;
              uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar30 == 0) goto LAB_033b3348;
              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              goto LAB_033b3330;
            }
            lVar25 = *plVar10;
            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar11 = (undefined8 *)(lVar25 + (long)(*piVar31 + 1) * 0x10 + 0x138);
                  goto LAB_033b2bf8;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b2bf8:
            pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar10,puVar11[1]);
            if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pSVar12);
              }
            }
            bVar6 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
            if (!bVar6) {
              if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar13 = (System_String_o *)
                        (*(pSVar12->klass->vtable)._8_unknown.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._8_unknown.method);
              bVar6 = System_String__op_Equality(pSVar13,StringLiteral_4617/*"Consumable"*/,(MethodInfo *)0x0);
              if (bVar6) {
                __this_00 = (RaidConfig_HJLEKMDIDPO_o *)
                            thunk_FUN_01bda818(RaidConfig_HJLEKMDIDPO_TypeInfo);
                RaidConfig_HJLEKMDIDPO___ctor(__this_00,(MethodInfo *)0x0);
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                if (__this_00 == (RaidConfig_HJLEKMDIDPO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                (__this_00->fields).super.JIJLBFGKNJK = pSVar13;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                ppSVar32 = &(__this_00->fields).super.JNGEDEBBMNP;
                *ppSVar32 = pSVar13;
                thunk_FUN_01c20e04(ppSVar32);
                pSVar13 = OFFIONDOEPM__CNLBHLNMCCI(*ppSVar32,(MethodInfo *)0x0);
                bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar13,(MethodInfo *)0x0);
                if (!bVar6) {
                  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar16 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
                  if (pSVar13 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  bVar6 = System_String__StartsWith(pSVar13,pSVar16,(MethodInfo *)0x0);
                  if (!bVar6) {
                    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar16 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
                    pSVar13 = System_String__Concat(pSVar16,pSVar13,(MethodInfo *)0x0);
                  }
                }
                ppSVar32 = &(__this_00->fields).super.APBICPEOMOM;
                *ppSVar32 = pSVar13;
                thunk_FUN_01c20e04(ppSVar32,pSVar13);
                pSVar17 = (System_Xml_XmlNode_o *)
                          (*(pSVar12->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar12,StringLiteral_10239/*"Perks"*/,
                                     (pSVar12->klass->vtable)._51_get_Item.method);
                (__this_00->fields).JJFNABIIBBA = pSVar17;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this_00->fields).BGHFADDGPAD = pSVar13;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_10808/*"RaidChargeDamage"*/,(MethodInfo *)0x0);
                fVar33 = EIABCPKDEBD__GICIEKCGOHA(pSVar15,0.0,(MethodInfo *)0x0);
                (__this_00->fields).IJDAKGKCHLG = fVar33;
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_5062/*"DamageDispersionPct"*/,(MethodInfo *)0x0);
                iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
                (__this_00->fields).JPEIKHCEJBM = iVar7;
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_9153/*"Model"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this_00->fields).HEMGHNOOJPI = pSVar13;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_7106/*"HintFull"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this_00->fields).super.EJEPJCHIGFE = pSVar13;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_4712/*"Cooldown"*/,(MethodInfo *)0x0);
                uVar8 = EIABCPKDEBD__FECKAJHFDJM(pSVar15,0,(MethodInfo *)0x0);
                (__this_00->fields).JDPEHPMKDIF = uVar8;
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_7104/*"Hint"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this_00->fields).super.PCAIPKLGAHP = pSVar13;
                thunk_FUN_01c20e04();
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this_00->fields).BPCADJLKKGA = pSVar13;
                thunk_FUN_01c20e04();
                lVar25 = Method_System_Collections_Generic_List<RaidConfig_HJLEKMDIDPO>_Add__;
                if (__this == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_01 = (__this->fields).GADHINPJDAF;
                if (__this_01 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pJVar26 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pJVar26 == (RaidConfig_HJLEKMDIDPO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pJVar26->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pJVar26->m_Items[(int)uVar2] = __this_00;
                  thunk_FUN_01c20e04(pJVar26->m_Items + (int)uVar2,__this_00);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                bVar6 = System_String__op_Equality(pSVar13,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
                if (bVar6) {
                  __this_02 = (RaidConfig_EFAJBOEHPLJ_o *)
                              thunk_FUN_01bda818(RaidConfig_EFAJBOEHPLJ_TypeInfo);
                  RaidConfig_EFAJBOEHPLJ___ctor(__this_02,(MethodInfo *)0x0);
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  if (__this_02 == (RaidConfig_EFAJBOEHPLJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  (__this_02->fields).super.JIJLBFGKNJK = pSVar13;
                  thunk_FUN_01c20e04();
                  ppSVar32 = &(__this_02->fields).super.JNGEDEBBMNP;
                  *ppSVar32 = (System_String_o *)0x0;
                  thunk_FUN_01c20e04(ppSVar32,0);
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this_02->fields).super.APBICPEOMOM = pSVar13;
                  thunk_FUN_01c20e04();
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this_02->fields).super.KPDPJONADPJ = pSVar13;
                  thunk_FUN_01c20e04();
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_6922/*"Group"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this_02->fields).LKEEMPJJCCC = pSVar13;
                  thunk_FUN_01c20e04();
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_7104/*"Hint"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this_02->fields).super.PCAIPKLGAHP = pSVar13;
                  thunk_FUN_01c20e04();
                  pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                            (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                      (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
                  if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                      (pSVar14,StringLiteral_7106/*"HintFull"*/,(MethodInfo *)0x0);
                  pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                  (__this_02->fields).super.EJEPJCHIGFE = pSVar13;
                  thunk_FUN_01c20e04();
                  lVar25 = Method_System_Collections_Generic_List<RaidConfig_EFAJBOEHPLJ>_Add__;
                  if (__this == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  __this_03 = (__this->fields).LNFJJJOGJKE;
                  if (__this_03 == (System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *)0x0
                     ) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pJVar27 = (__this_03->fields)._items;
                  (__this_03->fields)._version = (__this_03->fields)._version + 1;
                  if (pJVar27 == (RaidConfig_EFAJBOEHPLJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (__this_03->fields)._size;
                  if (uVar2 < (uint)pJVar27->max_length) {
                    (__this_03->fields)._size = uVar2 + 1;
                    pJVar27->m_Items[(int)uVar2] = __this_02;
                    thunk_FUN_01c20e04(pJVar27->m_Items + (int)uVar2,__this_02);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_03,
                               (Il2CppObject *)__this_02,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                  }
                  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  __this_04 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
                  if (__this_04 == (GameUtils_HLAKGGFFNAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  GameUtils_HLAKGGFFNAO__EFOIDADNDPJ(__this_04,pSVar12,(MethodInfo *)0x0);
                }
              }
            }
          } while( true );
        }
        goto LAB_033b4638;
      }
    }
    return (RaidConfig_NOPCEDPNNKO_o *)0x0;
  }
  goto LAB_033b4638;
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar31 = piVar31 + 4;
    if (uVar30 == 0) break;
LAB_033b4448:
    if (*(System_IDisposable_c **)(piVar31 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
      goto LAB_033b447c;
    }
  }
LAB_033b4460:
  puVar11 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_033b447c:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
  return __this;
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar31 = piVar31 + 4;
    if (uVar30 == 0) break;
LAB_033b3330:
    if (*(System_IDisposable_c **)(piVar31 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
      goto LAB_033b3364;
    }
  }
LAB_033b3348:
  puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_033b3364:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_033b3370:
  auVar34 = (**(code **)(*plVar9 + 0x468))
                      (plVar9,StringLiteral_10081/*"Packs"*/,*(undefined8 *)(*plVar9 + 0x470));
  plVar9 = auVar34._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar34._8_8_;
  auVar34 = auVar4 << 0x40;
  if (plVar9 != (long *)0x0) {
    auVar34 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
    plVar9 = auVar34._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar34._8_8_;
    auVar34 = auVar5 << 0x40;
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar25 = *plVar9;
        uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar30 != 0) {
          piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
              goto LAB_033b3430;
            }
            uVar30 = uVar30 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar30 != 0);
        }
        puVar11 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b3430:
        uVar30 = (*(code *)*puVar11)(plVar9,puVar11[1]);
        if ((uVar30 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
          if (plVar9 == (long *)0x0) {
            return __this;
          }
          lVar25 = *plVar9;
          uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar30 == 0) goto LAB_033b4460;
          piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          goto LAB_033b4448;
        }
        lVar25 = *plVar9;
        uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar30 != 0) {
          piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar11 = (undefined8 *)(lVar25 + (long)(*piVar31 + 1) * 0x10 + 0x138);
              goto LAB_033b3490;
            }
            uVar30 = uVar30 - 1;
            piVar31 = piVar31 + 4;
          } while (uVar30 != 0);
        }
        puVar11 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b3490:
        pSVar12 = (System_Xml_XmlNode_o *)(*(code *)*puVar11)(plVar9,puVar11[1]);
        if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
             ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar12);
          }
        }
        bVar6 = EIABCPKDEBD__LGKNNMNPKGD(pSVar12,(MethodInfo *)0x0);
        if (!bVar6) {
          if (pSVar12 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar13 = (System_String_o *)
                    (*(pSVar12->klass->vtable)._8_unknown.methodPtr)
                              (pSVar12,(pSVar12->klass->vtable)._8_unknown.method);
          bVar6 = System_String__op_Equality(pSVar13,StringLiteral_10068/*"Pack"*/,(MethodInfo *)0x0);
          if (bVar6) {
            __this_05 = (RaidConfig_ENBCJNLAHAC_o *)
                        thunk_FUN_01bda818(RaidConfig_ENBCJNLAHAC_TypeInfo);
            RaidConfig_ENBCJNLAHAC___ctor(__this_05,(MethodInfo *)0x0);
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (__this_05 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_05->fields).JIJLBFGKNJK = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_2799/*"Alias"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).JMGIACHBIKG = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar13 = OFFIONDOEPM__CNLBHLNMCCI(pSVar13,(MethodInfo *)0x0);
            ppSVar32 = &(__this_05->fields).KPDPJONADPJ;
            *ppSVar32 = pSVar13;
            thunk_FUN_01c20e04(ppSVar32);
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_7346/*"ImageSales"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar13 = OFFIONDOEPM__CNLBHLNMCCI(pSVar13,(MethodInfo *)0x0);
            bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar13,(MethodInfo *)0x0);
            if (bVar6) {
              pSVar13 = *ppSVar32;
            }
            ppSVar32 = &(__this_05->fields).IEAEDGLMPPK;
            *ppSVar32 = pSVar13;
            thunk_FUN_01c20e04(ppSVar32,pSVar13);
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_8672/*"LootContainerName"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).LEJBNEIJJIF = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_6717/*"GemsPrice"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
            (__this_05->fields).NGMFKGGBHND = iVar7;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_2761/*"AddPercent"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
            (__this_05->fields).BNGEEMBIFJH = iVar7;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_8421/*"LevelRestrictionMin"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
            (__this_05->fields).MLBCPAGCKAH = iVar7;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_8420/*"LevelRestrictionMax"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0x7fffffff,(MethodInfo *)0x0);
            (__this_05->fields).FKHFKAJHLOG = iVar7;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10580/*"Purchasable"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).AIEJIFADLHH = bVar6;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_8690/*"LotteryDialogType"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                              (pSVar15,0,Method_EIABCPKDEBD_CKHGJBKDIID<DPLBMJODBEK>__);
            (__this_05->fields).KMKNJMEDEAH = iVar7;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            pSVar13 = OFFIONDOEPM__CGPGBMMPMDM(pSVar13,(MethodInfo *)0x0);
            ppSVar32 = &(__this_05->fields).BPCADJLKKGA;
            *ppSVar32 = pSVar13;
            thunk_FUN_01c20e04(ppSVar32);
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).BGHFADDGPAD = pSVar13;
            thunk_FUN_01c20e04();
            pSVar13 = HOOAAGABMBL__EFPEJLHDNHB(pSVar12,(MethodInfo *)0x0);
            (__this_05->fields).IIHFLLPKBJI = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_11074/*"RealPrice"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).PNGPGDCGOKD = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_11076/*"RealPriceCurrency"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,StringLiteral_14182/*"USD"*/,(MethodInfo *)0x0);
            (__this_05->fields).KAOKFFDMLGK = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5306/*"DescriptionSales"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar13,(MethodInfo *)0x0);
            if (bVar6) {
              pSVar13 = *ppSVar32;
            }
            ppSVar32 = &(__this_05->fields).IEOMJEPNIBB;
            *ppSVar32 = pSVar13;
            thunk_FUN_01c20e04(ppSVar32,pSVar13);
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_12025/*"ShopHide"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).PCDOKDMDNMB = bVar6;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5410/*"DiscountHides"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).KIDAPFADKEE = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_12374/*"StartTime"*/,(MethodInfo *)0x0);
            pMVar24 = (MethodInfo_27F61B8 *)0x0;
            local_70 = (System_Nullable_DateTime__Fields)
                       EIABCPKDEBD__LDPPNAICGFJ(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            if ((local_70._0_8_ & 0xff) == 0) {
              iVar19 = 0;
            }
            else {
              __this_11.fields.value.fields._dateData =
                   (System_DateTime_Fields)
                   (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
              __this_11.fields._0_8_ = &local_70;
              SVar18 = System_Nullable<DateTime>__get_Value(__this_11,pMVar24);
              if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar19 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar18,(MethodInfo *)0x0);
              if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar20 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
              iVar19 = iVar19 - iVar20;
            }
            (__this_05->fields).NFKHJPMMNLM = iVar19;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
            pMVar24 = (MethodInfo_27F61B8 *)0x0;
            local_80 = (System_Nullable_DateTime__Fields)
                       EIABCPKDEBD__LDPPNAICGFJ(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            if ((local_80._0_8_ & 0xff) == 0) {
              iVar19 = 0;
            }
            else {
              __this_12.fields.value.fields._dateData =
                   (System_DateTime_Fields)
                   (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
              __this_12.fields._0_8_ = &local_80;
              SVar18 = System_Nullable<DateTime>__get_Value(__this_12,pMVar24);
              if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar19 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar18,(MethodInfo *)0x0);
              if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar20 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
              iVar19 = iVar19 - iVar20;
            }
            (__this_05->fields).CEGNAMELGID = iVar19;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5414/*"DisplayLootEffect"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).CBKACDJHFNE = bVar6;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10515/*"ProgressBarDojo"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM
                                (pSVar15,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this_05->fields).ICECFDIHPHN = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_5456/*"DojoBarBtnOffset"*/,(MethodInfo *)0x0);
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
            }
            UVar35 = (UnityEngine_Vector2_Fields)
                     EIABCPKDEBD__FDCFJOINOPB
                               (pSVar15,(UnityEngine_Vector2_o)
                                        (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).
                                        fields,(MethodInfo *)0x0);
            (__this_05->fields).MJPMEGEPHCK.fields = UVar35;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10518/*"ProgressBarHint"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).EGMPFEOGKOF = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10517/*"ProgressBarFullHint"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).DFHEHPGHMLF = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10520/*"ProgressBarTextColor"*/,(MethodInfo *)0x0);
            pSVar16 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            bVar6 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar16,(MethodInfo *)0x0);
            pSVar13 = StringLiteral_22465/*"{255,255,255}"*/;
            if (!bVar6) {
              pSVar13 = pSVar16;
            }
            (__this_05->fields).DPNFGBFFNAJ = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10519/*"ProgressBarSkew"*/,(MethodInfo *)0x0);
            iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
            (__this_05->fields).JIALOHAOPAO = iVar7;
            pSVar17 = (System_Xml_XmlNode_o *)
                      (*(pSVar12->klass->vtable)._51_get_Item.methodPtr)
                                (pSVar12,StringLiteral_8823/*"MapButtonImage"*/,
                                 (pSVar12->klass->vtable)._51_get_Item.method);
            if (pSVar17 != (System_Xml_XmlNode_o *)0x0) {
              __this_06 = (JOCNCPCOEAC_o *)thunk_FUN_01bda818(JOCNCPCOEAC_TypeInfo);
              JOCNCPCOEAC___ctor(__this_06,pSVar17,(MethodInfo *)0x0);
              ppJVar21 = &(__this_05->fields).JHFAAGIPDAJ;
              *ppJVar21 = __this_06;
              thunk_FUN_01c20e04(ppJVar21,__this_06);
            }
            pSVar17 = (System_Xml_XmlNode_o *)
                      (*(pSVar12->klass->vtable)._51_get_Item.methodPtr)
                                (pSVar12,StringLiteral_4554/*"CompositeImage"*/,
                                 (pSVar12->klass->vtable)._51_get_Item.method);
            if (pSVar17 != (System_Xml_XmlNode_o *)0x0) {
              __this_07 = (IGNEHHMICKB_o *)thunk_FUN_01bda818(IGNEHHMICKB_TypeInfo);
              IGNEHHMICKB___ctor(__this_07,pSVar17,(MethodInfo *)0x0);
              ppIVar22 = &(__this_05->fields).BDDFFNDBGHC;
              *ppIVar22 = __this_07;
              thunk_FUN_01c20e04(ppIVar22,__this_07);
            }
            plVar10 = (long *)(*(pSVar12->klass->vtable)._13_get_ChildNodes.methodPtr)
                                        (pSVar12,(pSVar12->klass->vtable)._13_get_ChildNodes.method)
            ;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
LAB_033b3ee4:
            lVar25 = *plVar10;
            uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
            if (uVar30 != 0) {
              piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
                  goto LAB_033b3f30;
                }
                uVar30 = uVar30 - 1;
                piVar31 = piVar31 + 4;
              } while (uVar30 != 0);
            }
            puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_033b3f30:
            uVar30 = (*(code *)*puVar11)(plVar10,puVar11[1]);
            if ((uVar30 & 1) != 0) {
              lVar25 = *plVar10;
              uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar31 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar25 + (long)(*piVar31 + 1) * 0x10 + 0x138);
                    goto LAB_033b3f90;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_033b3f90:
              plVar23 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
              if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar23 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar23 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar23);
              }
              pSVar13 = (System_String_o *)
                        (**(code **)(*plVar23 + 0x1b8))(plVar23,*(undefined8 *)(*plVar23 + 0x1c0));
              bVar6 = System_String__op_Equality(pSVar13,StringLiteral_4925/*"CurrencyCost"*/,(MethodInfo *)0x0);
              if (bVar6) {
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240))
                ;
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0)
                ;
                pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240))
                ;
                if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar14,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                iVar7 = EIABCPKDEBD__EHJNCGCICMP(pSVar15,0,(MethodInfo *)0x0);
                __this_10 = (__this_05->fields).LIJCIBIOOOH;
                __this_08 = (MGNDHCBAPEN_string__int__o *)
                            thunk_FUN_01bda818(MGNDHCBAPEN<string,_int>_TypeInfo);
                MGNDHCBAPEN<object,_int>___ctor
                          ((MGNDHCBAPEN_T1__T2__o *)__this_08,(Il2CppObject *)pSVar13,iVar7,
                           Method_MGNDHCBAPEN<string,_int>__ctor__);
                lVar25 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_Add__;
                if (__this_10 == (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pMVar28 = (__this_10->fields)._items;
                (__this_10->fields)._version = (__this_10->fields)._version + 1;
                if (pMVar28 == (MGNDHCBAPEN_string__int__array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar2 = (__this_10->fields)._size;
                if (uVar2 < (uint)pMVar28->max_length) {
                  (__this_10->fields)._size = uVar2 + 1;
                  pMVar28->m_Items[(int)uVar2] = __this_08;
                  thunk_FUN_01c20e04(pMVar28->m_Items + (int)uVar2,__this_08);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_10,
                             (Il2CppObject *)__this_08,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
                }
              }
              goto LAB_033b3ee4;
            }
            plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
            if (plVar10 != (long *)0x0) {
              lVar25 = *plVar10;
              uVar30 = (ulong)*(ushort *)(lVar25 + 0x12e);
              if (uVar30 != 0) {
                piVar31 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
                do {
                  if (*(System_IDisposable_c **)(piVar31 + -2) == System_IDisposable_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar25 + (long)*piVar31 * 0x10 + 0x138);
                    goto LAB_033b4180;
                  }
                  uVar30 = uVar30 - 1;
                  piVar31 = piVar31 + 4;
                } while (uVar30 != 0);
              }
              puVar11 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_033b4180:
              (*(code *)*puVar11)(plVar10,puVar11[1]);
            }
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_12111/*"ShowProbability"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).NIHFMGMHLBN = bVar6;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_12004/*"ShopButtonHide"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).CBCJKNHJFJL = bVar6;
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_10071/*"PackLabel"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).FPMPKOCHBEB = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_12027/*"ShopLabel"*/,(MethodInfo *)0x0);
            pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this_05->fields).APCNIPADHAO = pSVar13;
            thunk_FUN_01c20e04();
            pSVar14 = (System_Xml_XmlAttributeCollection_o *)
                      (*(pSVar12->klass->vtable)._16_get_Attributes.methodPtr)
                                (pSVar12,(pSVar12->klass->vtable)._16_get_Attributes.method);
            if (pSVar14 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar15 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar14,StringLiteral_4933/*"CurrencyOnly"*/,(MethodInfo *)0x0);
            bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar15,false,(MethodInfo *)0x0);
            (__this_05->fields).MOBGHJBCHFF = bVar6;
            lVar25 = Method_System_Collections_Generic_List<RaidConfig_ENBCJNLAHAC>_Add__;
            if (__this == (RaidConfig_NOPCEDPNNKO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_09 = (__this->fields).NPGALOBDIHL;
            if (__this_09 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pJVar29 = (__this_09->fields)._items;
            (__this_09->fields)._version = (__this_09->fields)._version + 1;
            if (pJVar29 == (RaidConfig_ENBCJNLAHAC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (__this_09->fields)._size;
            if (uVar2 < (uint)pJVar29->max_length) {
              (__this_09->fields)._size = uVar2 + 1;
              pJVar29->m_Items[(int)uVar2] = __this_05;
              thunk_FUN_01c20e04(pJVar29->m_Items + (int)uVar2,__this_05);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_09,
                         (Il2CppObject *)__this_05,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
        }
      } while( true );
    }
  }
LAB_033b4638:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar34._0_8_,auVar34._8_8_);
}


// ===== public static void JFFIPAFJJDK(RaidConfig.DLMLPMIANHI HKKNGGLALNA, XmlNode AHDGNOJPPIB)  [RVA 0x32B4C34]
// RaidConfigParser$$JFFIPAFJJDK @ RVA 0x32B4C34

void RaidConfigParser__JFFIPAFJJDK
               (RaidConfig_DLMLPMIANHI_o *HKKNGGLALNA,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  int32_t iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  float fVar5;
  
  if ((DAT_04567445 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4892/*"CritVerification"*/);
    FUN_01bab630(&StringLiteral_2766/*"Additional"*/);
    FUN_01bab630(&StringLiteral_10477/*"Probability"*/);
    DAT_04567445 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_4892/*"CritVerification"*/,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_10477/*"Probability"*/,(MethodInfo *)0x0);
        fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        if (HKKNGGLALNA != (RaidConfig_DLMLPMIANHI_o *)0x0) {
          (HKKNGGLALNA->fields).ODEJMJFJDAI = fVar5;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_2766/*"Additional"*/,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (HKKNGGLALNA->fields).OCPHBEEPAEG = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

