// FDGBGINGEBP$$AJJLBBCJAAL @ RVA 0x318BEEC

/* WARNING: Removing unreachable block (ram,0x0328c61c) */
/* WARNING: Removing unreachable block (ram,0x0328c644) */

System_String_o *
FDGBGINGEBP__AJJLBBCJAAL(FDGBGINGEBP_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  Il2CppObject *__this_00;
  System_Byte_array *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  Nekki_Utils_GlobalTimer_o *pNVar9;
  VirtualInvokeData *pVVar10;
  System_DateTime_o OLFIPBLKDAH;
  int64_t AKDMKFILNFN;
  MethodInfo *method_00;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar11;
  Il2CppClass *pIVar12;
  System_Action_T__o *CPECAEHDDDB;
  long *plVar13;
  undefined8 *puVar14;
  OPHDIHJPHDE_o *__this_01;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar15;
  void *pvVar16;
  long lVar17;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar18;
  ulong uVar19;
  int32_t *piVar20;
  int *piVar21;
  KEIAEKNFNNA_o *__this_02;
  System_String_o *pSVar22;
  Il2CppObject *pIVar23;
  int iVar24;
  undefined1 auVar25 [16];
  uint64_t local_48;
  
  if ((DAT_04566a13 & 1) == 0) {
    FUN_01bab630(&System_Action<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4977);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4978);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4979);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4980);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4981);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4982);
    FUN_01bab630(&Method_FDGBGINGEBP_BBPPDHBMBNC_IMEDHACBLGP__);
    FUN_01bab630(&FDGBGINGEBP_BBPPDHBMBNC_TypeInfo);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<OPHDIHJPHDE>__);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04566a13 = 1;
  }
  local_48 = 0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FDGBGINGEBP_BBPPDHBMBNC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_0328c630;
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (OPAEPDIIOEB->max_length == 0) {
    if (__this_02 == (KEIAEKNFNNA_o *)0x0) goto LAB_0328c630;
  }
  else {
    if ((int)OPAEPDIIOEB->max_length == 0) goto LAB_0328c634;
    pSVar22 = OPAEPDIIOEB->m_Items[0];
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4977,(MethodInfo *)0x0)
    ;
    pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar7,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4978,(MethodInfo *)0x0)
    ;
    pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar22,pSVar8,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_02 == (KEIAEKNFNNA_o *)0x0) goto LAB_0328c630;
      KEIAEKNFNNA__PBGLGLCDHKF(__this_02,(MethodInfo *)0x0);
    }
    if ((int)OPAEPDIIOEB->max_length < 2) {
LAB_0328c114:
      if (__this_02 == (KEIAEKNFNNA_o *)0x0) goto LAB_0328c630;
    }
    else {
      pSVar22 = OPAEPDIIOEB->m_Items[0];
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4979,
                 (MethodInfo *)0x0);
      pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar7,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4980,
                 (MethodInfo *)0x0);
      pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar22,pSVar8,(MethodInfo *)0x0);
      uVar1 = (uint)OPAEPDIIOEB->max_length;
      if (!bVar3) {
        if (uVar1 == 0) goto LAB_0328c634;
        pSVar22 = OPAEPDIIOEB->m_Items[0];
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4981,
                   (MethodInfo *)0x0);
        pSVar7 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar7,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4982,
                   (MethodInfo *)0x0);
        pSVar8 = OMHODMCHILE__NPKGDBHJKCK(pSVar6,pSVar7,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality(pSVar22,pSVar8,(MethodInfo *)0x0);
        if (bVar3) {
          if ((uint)OPAEPDIIOEB->max_length < 2) goto LAB_0328c634;
          iVar5 = PCOEHCPGBBG__JBGCINPPLAC(OPAEPDIIOEB->m_Items[1],0,(MethodInfo *)0x0);
          if (0 < iVar5) {
            if ((__this_02 == (KEIAEKNFNNA_o *)0x0) ||
               (pSVar11 = KEIAEKNFNNA__CFGOMKKHOML(__this_02,(MethodInfo *)0x0),
               pSVar11 == (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0))
            goto LAB_0328c630;
            pSVar15 = pSVar11->klass;
            uVar2._0_1_ = (pSVar15->_2).rank;
            uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
            uVar19 = (ulong)uVar2;
            if (uVar19 != 0) {
              piVar20 = &((pSVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar20 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
                  pVVar10 = pSVar15->vtable + *piVar20;
                  goto LAB_0328c480;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar11,
                                   System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo,0);
LAB_0328c480:
            plVar13 = (long *)(*pVVar10->methodPtr)(pSVar11,pVVar10->method);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar17 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar14 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_0328c4f0;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar14 = (undefined8 *)
                        FUN_01b81914(plVar13,System_Collections_IEnumerator_TypeInfo,0);
LAB_0328c4f0:
              uVar19 = (*(code *)*puVar14)(plVar13,puVar14[1]);
              if ((uVar19 & 1) == 0) break;
              lVar17 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar21 + -2) ==
                      System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
                    puVar14 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_0328c54c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar14 = (undefined8 *)
                        FUN_01b81914(plVar13,
                                     System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,0)
              ;
LAB_0328c54c:
              __this_01 = (OPHDIHJPHDE_o *)(*(code *)*puVar14)(plVar13,puVar14[1]);
              if (__this_01 == (OPHDIHJPHDE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pCVar18 = (__this_01->fields)._DMCIAIBPJGN_k__BackingField;
              if (pCVar18 == (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar24 = (pCVar18->fields)._AdsTargetCount_k__BackingField -
                       (__this_01->fields)._PKGCKALOMOF_k__BackingField;
              if (iVar5 <= iVar24) {
                iVar24 = iVar5;
              }
              if (0 < iVar24) {
                iVar5 = iVar5 - iVar24;
                do {
                  OPHDIHJPHDE__IIDDCHPCAPP(__this_01,(MethodInfo *)0x0);
                  iVar24 = iVar24 + -1;
                } while (iVar24 != 0);
              }
            } while (0 < iVar5);
            if (plVar13 != (long *)0x0) {
              lVar17 = *plVar13;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 != 0) {
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
                    puVar14 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_0328c604;
                  }
                  uVar19 = uVar19 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar19 != 0);
              }
              puVar14 = (undefined8 *)FUN_01b81914(plVar13,System_IDisposable_TypeInfo,0);
LAB_0328c604:
              (*(code *)*puVar14)(plVar13,puVar14[1]);
            }
            KEIAEKNFNNA__OPIPNIPKEKA(__this_02,(MethodInfo *)0x0);
          }
        }
        goto LAB_0328c114;
      }
      if (uVar1 < 2) {
LAB_0328c634:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      iVar4 = PCOEHCPGBBG__JBGCINPPLAC(OPAEPDIIOEB->m_Items[1],0,(MethodInfo *)0x0);
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
      }
      pNVar9 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
      if (pNVar9 == (Nekki_Utils_GlobalTimer_o *)0x0) goto LAB_0328c630;
      if ((pNVar9->fields).GAPAJLLHGHO == false) {
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48 = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
      }
      else {
        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar9 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
        if (pNVar9 == (Nekki_Utils_GlobalTimer_o *)0x0) goto LAB_0328c630;
        local_48 = (uint64_t)Nekki_Utils_GlobalTimer__get_Now(pNVar9,(MethodInfo *)0x0);
      }
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_DateTime_TypeInfo);
      }
      OLFIPBLKDAH = System_DateTime__AddMinutes
                              ((System_DateTime_o)&local_48,(double)iVar4,(MethodInfo *)0x0);
      if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
      }
      AKDMKFILNFN = Nekki_Utils_GlobalTimer__TotalSeconds(OLFIPBLKDAH,(MethodInfo *)0x0);
      if (__this_02 == (KEIAEKNFNNA_o *)0x0) goto LAB_0328c630;
      KEIAEKNFNNA__ANAJBOCEMEF(__this_02,AKDMKFILNFN,(MethodInfo *)0x0);
    }
    KEIAEKNFNNA__MGNAAFCFIEH(__this_02,(MethodInfo *)0x0);
    FDGBGINGEBP__FPEEMMAPFCH(method_00);
  }
  pSVar11 = KEIAEKNFNNA__CFGOMKKHOML(__this_02,(MethodInfo *)0x0);
  pIVar12 = (Il2CppClass *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)pIVar12,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    pIVar23 = __this_00 + 1;
    pIVar23->klass = pIVar12;
    auVar25 = thunk_FUN_01c20e04(pIVar23,pIVar12);
    pIVar12 = pIVar23->klass;
    pSVar8 = FDGBGINGEBP__IGMDDJFPIJL(auVar25._0_8_,auVar25._8_8_);
    if (pIVar12 != (Il2CppClass *)0x0) {
      System_Text_StringBuilder__AppendLine
                ((System_Text_StringBuilder_o *)pIVar12,pSVar8,(MethodInfo *)0x0);
      CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OPHDIHJPHDE>_TypeInfo);
      System_Action<object>___ctor();
      DFPABHGJPJJ__NHDPECDJBGO<object>
                ((System_Collections_Generic_IEnumerable_T__o *)pSVar11,CPECAEHDDDB,
                 Method_DFPABHGJPJJ_NHDPECDJBGO<OPHDIHJPHDE>__);
      pIVar12 = __this_00[1].klass;
      if (pIVar12 != (Il2CppClass *)0x0) {
        pvVar16 = (pIVar12->_1).image;
        pSVar8 = (System_String_o *)
                 (**(code **)((long)pvVar16 + 0x168))
                           (pIVar12,*(undefined8 *)((long)pvVar16 + 0x170));
        return pSVar8;
      }
    }
  }
LAB_0328c630:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

