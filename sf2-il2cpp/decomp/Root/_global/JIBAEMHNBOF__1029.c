// TypeDefIndex 1029
// Namespace: 
// public class JIBAEMHNBOF : IEJKLPPLHMO
// Fields:
//   private readonly List<JIBAEMHNBOF.HHCLGENAOLA> LIDLGDLCMEE; // 0x10

// ===== private static bool BCLJHFNMAID(NCCFNKMICGK NLFMDIGKNGP)  [RVA 0x30C9244]
// JIBAEMHNBOF$$BCLJHFNMAID @ RVA 0x30C9244

bool JIBAEMHNBOF__BCLJHFNMAID(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  VirtualInvokeData *pVVar4;
  NCCFNKMICGK_c *pNVar5;
  ulong uVar6;
  int32_t *piVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662cc & 1) == 0) {
    auVar8 = FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662cc = 1;
  }
  if (NLFMDIGKNGP == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pNVar5 = NLFMDIGKNGP->klass;
  uVar1._0_1_ = (pNVar5->_2).rank;
  uVar1._1_1_ = (pNVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar4 = pNVar5->vtable + (*piVar7 + 4);
        goto LAB_031c92cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,4);
LAB_031c92cc:
  bVar3 = (*pVVar4->methodPtr)(NLFMDIGKNGP,pVVar4->method);
  if ((bVar3 & 1) != 0) {
    pNVar5 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar5->_2).rank;
    uVar2._1_1_ = (pNVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pNVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar4 = pNVar5->vtable + (*piVar7 + 7);
          goto LAB_031c9330;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,7);
LAB_031c9330:
    (*pVVar4->methodPtr)(NLFMDIGKNGP,1,pVVar4->method);
  }
  return (bool)(bVar3 & 1);
}


// ===== private void MEMCFFLLBMA()  [RVA 0x30C9354]
// JIBAEMHNBOF$$MEMCFFLLBMA @ RVA 0x30C9354

void JIBAEMHNBOF__MEMCFFLLBMA(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JENJDCENCHA;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KCJCIJHMEJF_o *pKVar7;
  
  if ((DAT_045662cd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5201);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5202);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662cd = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
    pKVar4 = pKVar7->klass;
    uVar1._0_1_ = (pKVar4->_2).rank;
    uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
          pVVar3 = pKVar4->vtable + (*piVar6 + 4);
          goto LAB_031c947c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,4);
LAB_031c947c:
    (*pVVar3->methodPtr)(pKVar7,pVVar3->method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5201,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5202,(MethodInfo *)0x0)
    ;
    JENJDCENCHA = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    bVar2 = PHLKGOCKIGP__COOGOEJJHMK(JENJDCENCHA,(MethodInfo *)0x0);
    method_00 = extraout_x1_02;
    if (bVar2) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_031c9504;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuests(__this_00,(MethodInfo *)0x0);
      method_00 = extraout_x1_03;
    }
    JIBAEMHNBOF__MJLBCAGDDFG(__this,method_00);
    return;
  }
LAB_031c9504:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string MLPLFLEBFKG(string CBIADCOKAIP, Func<NCCFNKMICGK, bool> EAMPBFPLNDK, string KECGMKNCOKG, bool ANJPPPCEJBI, Action OONPOLJKBGG)  [RVA 0x30C9858]
// JIBAEMHNBOF$$MLPLFLEBFKG @ RVA 0x30C9858

/* WARNING: Removing unreachable block (ram,0x031ca278) */
/* WARNING: Removing unreachable block (ram,0x031c9f00) */
/* WARNING: Removing unreachable block (ram,0x031ca1c4) */

System_String_o *
JIBAEMHNBOF__MLPLFLEBFKG
          (System_String_o *CBIADCOKAIP,System_Func_NCCFNKMICGK__bool__o *EAMPBFPLNDK,
          System_String_o *KECGMKNCOKG,bool ANJPPPCEJBI,System_Action_o *OONPOLJKBGG,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  JIBAEMHNBOF_MKKCMLMNOBF_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__bool__o *predicate;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  Il2CppObject *pIVar10;
  ACHLOMELAJE_o *__this_01;
  System_Byte_array *pSVar11;
  System_Byte_array *pSVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  KCJCIJHMEJF_c *pKVar16;
  Il2CppClass *pIVar17;
  long lVar18;
  System_Object_array *pSVar19;
  ulong uVar20;
  int32_t *piVar21;
  int *piVar22;
  KCJCIJHMEJF_o *pKVar23;
  JIBAEMHNBOF_MKKCMLMNOBF_Fields *pJVar24;
  
  if ((DAT_045662ce & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5203);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5204);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5205);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5206);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5207);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5208);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5209);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5210);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5211);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5212);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_MKKCMLMNOBF_DPEEMJHNEFK__);
    FUN_01bab630(&JIBAEMHNBOF_MKKCMLMNOBF_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662ce = 1;
  }
  __this = (JIBAEMHNBOF_MKKCMLMNOBF_o *)thunk_FUN_01bda818(JIBAEMHNBOF_MKKCMLMNOBF_TypeInfo);
  JIBAEMHNBOF_MKKCMLMNOBF___ctor(__this,(MethodInfo *)0x0);
  if (__this == (JIBAEMHNBOF_MKKCMLMNOBF_o *)0x0) goto LAB_031ca264;
  pJVar24 = &__this->fields;
  pJVar24->offerName = CBIADCOKAIP;
  thunk_FUN_01c20e04(pJVar24,CBIADCOKAIP);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  bVar5 = PCOEHCPGBBG__EDHHJAMCOJH(pJVar24->offerName,(MethodInfo *)0x0);
  if (bVar5) {
    if (ANJPPPCEJBI) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045662dd == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045662dd = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar23 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
      if (pKVar23 != (KCJCIJHMEJF_o *)0x0) {
        pKVar16 = pKVar23->klass;
        uVar1._0_1_ = (pKVar16->_2).rank;
        uVar1._1_1_ = (pKVar16->_2).minimumAlignment;
        uVar20 = (ulong)uVar1;
        if (uVar20 != 0) {
          piVar21 = &((pKVar16->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
                (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
              pVVar6 = pKVar16->vtable + (*piVar21 + 9);
              goto LAB_031c9c58;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar23,KCJCIJHMEJF_TypeInfo,9);
LAB_031c9c58:
        plVar7 = (long *)(*pVVar6->methodPtr)(pKVar23,pVVar6->method);
        if (plVar7 != (long *)0x0) {
          lVar18 = *plVar7;
          uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar20 != 0) {
            piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerable_NCCFNKMICGK__c **)(piVar22 + -2) ==
                  System_Collections_Generic_IEnumerable<NCCFNKMICGK>_TypeInfo) {
                puVar8 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_031c9cc0;
              }
              uVar20 = uVar20 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar20 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01b81914(plVar7,System_Collections_Generic_IEnumerable<NCCFNKMICGK>_TypeInfo,
                                0);
LAB_031c9cc0:
          plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar18 = *plVar7;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar22 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_031c9d40;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_031c9d40:
            uVar20 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            if ((uVar20 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_031c9f04;
              lVar18 = *plVar7;
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar20 == 0) goto LAB_031c9ecc;
              piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              goto LAB_031c9eb4;
            }
            lVar18 = *plVar7;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_NCCFNKMICGK__c **)(piVar22 + -2) ==
                    System_Collections_Generic_IEnumerator<NCCFNKMICGK>_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_031c9d9c;
                }
                uVar20 = uVar20 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar20 != 0);
            }
            puVar8 = (undefined8 *)
                     FUN_01b81914(plVar7,
                                  System_Collections_Generic_IEnumerator<NCCFNKMICGK>_TypeInfo,0);
LAB_031c9d9c:
            plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            if ((EAMPBFPLNDK != (System_Func_NCCFNKMICGK__bool__o *)0x0) &&
               (uVar20 = (*(code *)(EAMPBFPLNDK->fields).super.super.invoke_impl)
                                   ((EAMPBFPLNDK->fields).super.super.method_code,plVar9,
                                    (EAMPBFPLNDK->fields).super.super.method), (uVar20 & 1) != 0)) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              lVar18 = *plVar9;
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar20 != 0) {
                piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(NCCFNKMICGK_c **)(piVar22 + -2) == NCCFNKMICGK_TypeInfo) {
                    puVar8 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
                    goto LAB_031c9e1c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar20 != 0);
              }
              puVar8 = (undefined8 *)FUN_01b81914(plVar9,NCCFNKMICGK_TypeInfo,2);
LAB_031c9e1c:
              pIVar10 = (Il2CppObject *)(*(code *)*puVar8)(plVar9,puVar8[1]);
              lVar18 = Method_System_Collections_Generic_List<string>_Add__;
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar19 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pSVar19 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar4 = (__this_00->fields)._size;
              if (uVar4 < (uint)pSVar19->max_length) {
                (__this_00->fields)._size = uVar4 + 1;
                pSVar19->m_Items[(int)uVar4] = pIVar10;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,pIVar10,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
            }
          } while( true );
        }
      }
      goto LAB_031ca264;
    }
    goto LAB_031c9f04;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar23 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar23 == (KCJCIJHMEJF_o *)0x0) goto LAB_031ca264;
  pKVar16 = pKVar23->klass;
  uVar2._0_1_ = (pKVar16->_2).rank;
  uVar2._1_1_ = (pKVar16->_2).minimumAlignment;
  uVar20 = (ulong)uVar2;
  if (uVar20 != 0) {
    piVar21 = &((pKVar16->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar6 = pKVar16->vtable + (*piVar21 + 9);
        goto LAB_031c9b84;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pKVar23,KCJCIJHMEJF_TypeInfo,9);
LAB_031c9b84:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar6->methodPtr)(pKVar23,pVVar6->method);
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  pIVar10 = System_Linq_Enumerable__FirstOrDefault<object>
                      (source,predicate,Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__)
  ;
  if (((EAMPBFPLNDK == (System_Func_NCCFNKMICGK__bool__o *)0x0) || (pIVar10 == (Il2CppObject *)0x0))
     || (uVar20 = (*(code *)(EAMPBFPLNDK->fields).super.super.invoke_impl)
                            ((EAMPBFPLNDK->fields).super.super.method_code,pIVar10,
                             (EAMPBFPLNDK->fields).super.super.method), (uVar20 & 1) == 0))
  goto LAB_031c9f04;
  pIVar17 = pIVar10->klass;
  uVar3._0_1_ = (pIVar17->_2).rank;
  uVar3._1_1_ = (pIVar17->_2).minimumAlignment;
  uVar20 = (ulong)uVar3;
  if (uVar20 != 0) {
    piVar21 = &((pIVar17->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar21 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar6 = pIVar17->vtable + (*piVar21 + 2);
        goto LAB_031ca1f0;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar10,NCCFNKMICGK_TypeInfo,2);
LAB_031ca1f0:
  pIVar10 = (Il2CppObject *)(*pVVar6->methodPtr)(pIVar10,pVVar6->method);
  lVar18 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031ca264;
  pSVar19 = (__this_00->fields)._items;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pSVar19 == (System_Object_array *)0x0) goto LAB_031ca264;
  uVar4 = (__this_00->fields)._size;
  if (uVar4 < (uint)pSVar19->max_length) {
    (__this_00->fields)._size = uVar4 + 1;
    pSVar19->m_Items[(int)uVar4] = pIVar10;
    thunk_FUN_01c20e04();
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              (__this_00,pIVar10,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
  }
  goto LAB_031c9f08;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar22 = piVar22 + 4;
    if (uVar20 == 0) break;
LAB_031c9eb4:
    if (*(System_IDisposable_c **)(piVar22 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_031c9ee8;
    }
  }
LAB_031c9ecc:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_031c9ee8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_031c9f04:
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031ca264;
LAB_031c9f08:
  if ((__this_00->fields)._size < 1) {
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5209,(MethodInfo *)0x0)
    ;
    pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar12,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5210,(MethodInfo *)0x0)
    ;
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5211,(MethodInfo *)0x0)
    ;
    pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar12,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5212,(MethodInfo *)0x0)
    ;
    pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat(pSVar13,KECGMKNCOKG,pSVar14,(MethodInfo *)0x0);
    return pSVar13;
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
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,true,(MethodInfo *)0x0);
    if (OONPOLJKBGG != (System_Action_o *)0x0) {
      (*(code *)(OONPOLJKBGG->fields).super.super.invoke_impl)
                ((OONPOLJKBGG->fields).super.super.method_code,
                 (OONPOLJKBGG->fields).super.super.method);
    }
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5203,(MethodInfo *)0x0)
    ;
    pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar12,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5204,(MethodInfo *)0x0)
    ;
    pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5205,(MethodInfo *)0x0)
    ;
    pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar12,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5206,(MethodInfo *)0x0)
    ;
    pSVar14 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
    pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar11,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5207,(MethodInfo *)0x0)
    ;
    pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar12,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5208,(MethodInfo *)0x0)
    ;
    pSVar15 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
    pSVar15 = System_String__Join(pSVar15,(System_Collections_Generic_IEnumerable_string__o *)
                                          __this_00,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat(pSVar13,KECGMKNCOKG,pSVar14,pSVar15,(MethodInfo *)0x0);
    return pSVar13;
  }
LAB_031ca264:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool EOHJJEHOHDO(NCCFNKMICGK NLFMDIGKNGP)  [RVA 0x30CA348]
// JIBAEMHNBOF$$EOHJJEHOHDO @ RVA 0x30CA348

bool JIBAEMHNBOF__EOHJJEHOHDO(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  VirtualInvokeData *pVVar5;
  AJDHCLBLGMI_o *MOAIKBONJAE;
  NCCFNKMICGK_c *pNVar6;
  ulong uVar7;
  int32_t *piVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662cf & 1) == 0) {
    auVar9 = FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662cf = 1;
  }
  if (NLFMDIGKNGP != (NCCFNKMICGK_o *)0x0) {
    pNVar6 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar6->_2).rank;
    uVar2._1_1_ = (pNVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pNVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar5 = pNVar6->vtable + (*piVar8 + 1);
          goto LAB_031ca3d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca3d0:
    auVar10 = (*pVVar5->methodPtr)(NLFMDIGKNGP,pVVar5->method);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar10._8_8_;
    auVar9 = auVar4 << 0x40;
    if (auVar10._0_8_ != 0) {
      uVar1 = *(uint *)(auVar10._0_8_ + 0x18) & 0xfffffffe;
      if (uVar1 == 4) {
        pNVar6 = NLFMDIGKNGP->klass;
        uVar3._0_1_ = (pNVar6->_2).rank;
        uVar3._1_1_ = (pNVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar3;
        if (uVar7 != 0) {
          piVar8 = &((pNVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar5 = pNVar6->vtable + (*piVar8 + 1);
              goto LAB_031ca440;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca440:
        MOAIKBONJAE = (AJDHCLBLGMI_o *)(*pVVar5->methodPtr)(NLFMDIGKNGP,pVVar5->method);
        FIKPNGLBKGN__DGLJCGNHLIG(MOAIKBONJAE,(MethodInfo *)0x0);
      }
      return uVar1 == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
}


// ===== public void .ctor()  [RVA 0x30CA46C]
// JIBAEMHNBOF$$.ctor @ RVA 0x30CA46C

void JIBAEMHNBOF___ctor(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662d0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    DAT_045662d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>__ctor__);
  (__this->fields).LIDLGDLCMEE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x30CA4F4]
// JIBAEMHNBOF$$DLKKPFHKIPB @ RVA 0x30CA4F4

System_Collections_Generic_IEnumerable_string__o *
JIBAEMHNBOF__DLKKPFHKIPB(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045662d1 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5213);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5214);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045662d1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5213,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5214,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool JOIKLHPDACN(NCCFNKMICGK NLFMDIGKNGP)  [RVA 0x30CA664]
// JIBAEMHNBOF$$JOIKLHPDACN @ RVA 0x30CA664

/* WARNING: Removing unreachable block (ram,0x031caa08) */
/* WARNING: Removing unreachable block (ram,0x031cabd4) */

bool JIBAEMHNBOF__JOIKLHPDACN(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  VirtualInvokeData *pVVar12;
  AJDHCLBLGMI_o *MOAIKBONJAE;
  undefined8 *puVar13;
  long *plVar14;
  NCCFNKMICGK_c *pNVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int32_t *piVar19;
  System_String_o *pSVar20;
  HEEEDKBOAKM_o *__this;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar21._8_8_ = method;
  auVar21._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662d2 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    auVar21 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662d2 = 1;
  }
  if (NLFMDIGKNGP != (NCCFNKMICGK_o *)0x0) {
    pNVar15 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar15->_2).rank;
    uVar2._1_1_ = (pNVar15->_2).minimumAlignment;
    uVar17 = (ulong)uVar2;
    if (uVar17 != 0) {
      piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar12 = pNVar15->vtable + (*piVar19 + 1);
          goto LAB_031ca740;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca740:
    auVar22 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar22._8_8_;
    auVar21 = auVar8 << 0x40;
    if (auVar22._0_8_ != 0) {
      iVar1 = *(int *)(auVar22._0_8_ + 0x18);
      if (iVar1 != 0) {
        pNVar15 = NLFMDIGKNGP->klass;
        uVar3._0_1_ = (pNVar15->_2).rank;
        uVar3._1_1_ = (pNVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar3;
        if (uVar17 != 0) {
          piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar12 = pNVar15->vtable + (*piVar19 + 1);
              goto LAB_031ca7a8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca7a8:
        MOAIKBONJAE = (AJDHCLBLGMI_o *)(*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
        FIKPNGLBKGN__DGLJCGNHLIG(MOAIKBONJAE,(MethodInfo *)0x0);
      }
      pNVar15 = NLFMDIGKNGP->klass;
      bVar9 = iVar1 != 0;
      uVar4._0_1_ = (pNVar15->_2).rank;
      uVar4._1_1_ = (pNVar15->_2).minimumAlignment;
      uVar17 = (ulong)uVar4;
      if (uVar17 != 0) {
        piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar12 = pNVar15->vtable + *piVar19;
            goto LAB_031ca810;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,0);
LAB_031ca810:
      auVar21 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
      plVar14 = auVar21._0_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auVar21._8_8_;
      auVar21 = auVar22 << 0x40;
      if (plVar14 != (long *)0x0) {
        lVar16 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerable_POGBKGFBOLC__c **)(piVar18 + -2) ==
                System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_031ca878;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01b81914(plVar14,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,
                               0);
LAB_031ca878:
        plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar16 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_031ca8f8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_031ca8f8:
          uVar17 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar17 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_031ca9fc;
            lVar16 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 == 0) goto LAB_031ca9d4;
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_031ca9bc;
          }
          lVar16 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar18 + -2) ==
                  System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_031ca954;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01b81914(plVar14,
                                 System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0);
LAB_031ca954:
          lVar16 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar20 = *(System_String_o **)(lVar16 + 0x10);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          bVar10 = NLPJLHOEAOE__OMFGGNJKKAJ(pSVar20,1,true,(MethodInfo *)0x0);
          bVar9 = (bool)(bVar9 | bVar10);
        } while( true );
      }
    }
  }
  goto LAB_031cabcc;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_031ca9bc:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_031ca9f0;
    }
  }
LAB_031ca9d4:
  puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_031ca9f0:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_031ca9fc:
  pNVar15 = NLFMDIGKNGP->klass;
  uVar5._0_1_ = (pNVar15->_2).rank;
  uVar5._1_1_ = (pNVar15->_2).minimumAlignment;
  uVar17 = (ulong)uVar5;
  if (uVar17 != 0) {
    piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar12 = pNVar15->vtable + (*piVar19 + 2);
        goto LAB_031caa5c;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,2);
LAB_031caa5c:
  pSVar20 = (System_String_o *)(*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  bVar10 = NLPJLHOEAOE__OMFGGNJKKAJ(pSVar20,1,true,(MethodInfo *)0x0);
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo);
  }
  pNVar15 = NLFMDIGKNGP->klass;
  __this = ACHLOMELAJE_TypeInfo->static_fields->HAEGJFPKIAD;
  uVar6._0_1_ = (pNVar15->_2).rank;
  uVar6._1_1_ = (pNVar15->_2).minimumAlignment;
  uVar17 = (ulong)uVar6;
  if (uVar17 != 0) {
    piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar12 = pNVar15->vtable + (*piVar19 + 8);
        goto LAB_031cab10;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cab10:
  auVar21 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
  if ((auVar21._0_8_ != 0) && (__this != (HEEEDKBOAKM_o *)0x0)) {
    bVar11 = HEEEDKBOAKM__KJAJIPLCDDN
                       (__this,*(System_String_o **)(auVar21._0_8_ + 0x70),(MethodInfo *)0x0);
    if ((bVar9 == false && !bVar10) && !bVar11) {
      bVar9 = false;
    }
    else {
      pNVar15 = NLFMDIGKNGP->klass;
      uVar7._0_1_ = (pNVar15->_2).rank;
      uVar7._1_1_ = (pNVar15->_2).minimumAlignment;
      uVar17 = (ulong)uVar7;
      if (uVar17 != 0) {
        piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar12 = pNVar15->vtable + (*piVar19 + 7);
            goto LAB_031cab98;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,7);
LAB_031cab98:
      (*pVVar12->methodPtr)(NLFMDIGKNGP,0,pVVar12->method);
      bVar9 = true;
    }
    return bVar9;
  }
LAB_031cabcc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar21._0_8_,auVar21._8_8_);
}


// ===== private bool NEPDNLGMMHI(NCCFNKMICGK NLFMDIGKNGP, Nullable<long> PNEIGGOFIOA)  [RVA 0x30CAC94]
// JIBAEMHNBOF$$NEPDNLGMMHI @ RVA 0x30CAC94

bool JIBAEMHNBOF__NEPDNLGMMHI
               (JIBAEMHNBOF_o *__this,NCCFNKMICGK_o *NLFMDIGKNGP,System_Nullable_long__o PNEIGGOFIOA
               ,MethodInfo *method)

{
  uint length;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  int32_t iVar11;
  JIBAEMHNBOF_NJKPKDGNLEF_o *__this_00;
  VirtualInvokeData *pVVar12;
  long lVar13;
  int64_t OOGPLJBADCD;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *b;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar14;
  System_Func_NCCFNKMICGK__bool__o **ppSVar15;
  System_Action_NCCFNKMICGK__o **ppSVar16;
  System_Func_TSource__bool__o *predicate;
  System_Func_NCCFNKMICGK__int__o **ppSVar17;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo_27F8710 *method_02;
  NCCFNKMICGK_c *pNVar18;
  KCJCIJHMEJF_c *pKVar19;
  ulong uVar20;
  ulong uVar21;
  int32_t *piVar22;
  JIBAEMHNBOF_NJKPKDGNLEF_Fields *pJVar23;
  GEIHBHEDJJM_o *__this_01;
  System_String_o *a;
  KCJCIJHMEJF_o *pKVar24;
  System_Func_NCCFNKMICGK__bool__o *predicate_00;
  System_Action_NCCFNKMICGK__o *CPECAEHDDDB;
  System_Func_NCCFNKMICGK__int__o *selector;
  NCCFNKMICGK_o *pNVar25;
  System_Nullable_long__o __this_02;
  ulong local_70;
  int64_t iStack_68;
  
  iStack_68 = PNEIGGOFIOA.fields.value;
  uVar21 = PNEIGGOFIOA.fields._0_8_;
  local_70 = uVar21;
  if ((DAT_045662d3 & 1) == 0) {
    FUN_01bab630(&System_Action<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5215);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5216);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<NCCFNKMICGK,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_int>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Clear__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_NJKPKDGNLEF_AJACKBJCLOG__);
    FUN_01bab630(&JIBAEMHNBOF_NJKPKDGNLEF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<long>_get_Value__);
    FUN_01bab630(&Method_JIBAEMHNBOF_<>c_JGGMNIALIBF__);
    FUN_01bab630(&Method_JIBAEMHNBOF_<>c_LEFEHLFGNHL__);
    FUN_01bab630(&Method_JIBAEMHNBOF_<>c_OFGONBICNNL__);
    FUN_01bab630(&JIBAEMHNBOF_<>c_TypeInfo);
    DAT_045662d3 = 1;
  }
  __this_00 = (JIBAEMHNBOF_NJKPKDGNLEF_o *)thunk_FUN_01bda818(JIBAEMHNBOF_NJKPKDGNLEF_TypeInfo);
  JIBAEMHNBOF_NJKPKDGNLEF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JIBAEMHNBOF_NJKPKDGNLEF_o *)0x0) {
    pJVar23 = &__this_00->fields;
    pJVar23->offer = NLFMDIGKNGP;
    thunk_FUN_01c20e04(pJVar23,NLFMDIGKNGP);
    JIBAEMHNBOF__JOIKLHPDACN(pJVar23->offer,method_00);
    pNVar25 = pJVar23->offer;
    if (pNVar25 != (NCCFNKMICGK_o *)0x0) {
      pNVar18 = pNVar25->klass;
      uVar1._0_1_ = (pNVar18->_2).rank;
      uVar1._1_1_ = (pNVar18->_2).minimumAlignment;
      uVar20 = (ulong)uVar1;
      if (uVar20 != 0) {
        piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar12 = pNVar18->vtable + (*piVar22 + 8);
            goto LAB_031cae6c;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25,NCCFNKMICGK_TypeInfo,8);
LAB_031cae6c:
      lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
      if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x248), lVar13 != 0)) {
        length = *(uint *)(lVar13 + 0x18);
        method_01 = (MethodInfo *)(ulong)length;
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (0 < (int)length) {
          System_Array__Clear(*(System_Array_o **)(lVar13 + 0x10),0,length,(MethodInfo *)0x0);
        }
        if ((uVar21 & 0xff) != 0) {
          JIBAEMHNBOF__JILPBOBHBJH(__this,pJVar23->offer,method_01);
          pNVar25 = pJVar23->offer;
          if (pNVar25 == (NCCFNKMICGK_o *)0x0) goto LAB_031cb5fc;
          pNVar18 = pNVar25->klass;
          uVar2._0_1_ = (pNVar18->_2).rank;
          uVar2._1_1_ = (pNVar18->_2).minimumAlignment;
          uVar21 = (ulong)uVar2;
          if (uVar21 != 0) {
            piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar12 = pNVar18->vtable + (*piVar22 + 8);
                goto LAB_031caf14;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25,NCCFNKMICGK_TypeInfo,8);
LAB_031caf14:
          lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
          if ((lVar13 == 0) || (*(GEIHBHEDJJM_o **)(lVar13 + 0x250) == (GEIHBHEDJJM_o *)0x0))
          goto LAB_031cb5fc;
          GEIHBHEDJJM__KFMNMGGDHFD(*(GEIHBHEDJJM_o **)(lVar13 + 0x250),0,(MethodInfo *)0x0);
          pNVar25 = pJVar23->offer;
          if (pNVar25 == (NCCFNKMICGK_o *)0x0) goto LAB_031cb5fc;
          pNVar18 = pNVar25->klass;
          uVar3._0_1_ = (pNVar18->_2).rank;
          uVar3._1_1_ = (pNVar18->_2).minimumAlignment;
          uVar21 = (ulong)uVar3;
          if (uVar21 != 0) {
            piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar12 = pNVar18->vtable + (*piVar22 + 8);
                goto LAB_031caf90;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25,NCCFNKMICGK_TypeInfo,8);
LAB_031caf90:
          lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
          if ((lVar13 == 0) || (*(GEIHBHEDJJM_o **)(lVar13 + 600) == (GEIHBHEDJJM_o *)0x0))
          goto LAB_031cb5fc;
          method_02 = (MethodInfo_27F8710 *)0x0;
          GEIHBHEDJJM__KFMNMGGDHFD(*(GEIHBHEDJJM_o **)(lVar13 + 600),0,(MethodInfo *)0x0);
          pNVar25 = pJVar23->offer;
          if (pNVar25 == (NCCFNKMICGK_o *)0x0) goto LAB_031cb5fc;
          pNVar18 = pNVar25->klass;
          uVar4._0_1_ = (pNVar18->_2).rank;
          uVar4._1_1_ = (pNVar18->_2).minimumAlignment;
          uVar21 = (ulong)uVar4;
          if (uVar21 != 0) {
            piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar12 = pNVar18->vtable + (*piVar22 + 8);
                goto LAB_031cb00c;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          method_02 = (MethodInfo_27F8710 *)0x8;
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25);
LAB_031cb00c:
          lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
          if (lVar13 == 0) goto LAB_031cb5fc;
          __this_01 = *(GEIHBHEDJJM_o **)(lVar13 + 0x260);
          __this_02.fields.value = Method_System_Nullable<long>_get_Value__;
          __this_02.fields._0_8_ = &local_70;
          OOGPLJBADCD = System_Nullable<long>__get_Value(__this_02,method_02);
          if (__this_01 == (GEIHBHEDJJM_o *)0x0) goto LAB_031cb5fc;
          GEIHBHEDJJM__KFMNMGGDHFD(__this_01,OOGPLJBADCD,(MethodInfo *)0x0);
        }
        pNVar25 = pJVar23->offer;
        if (pNVar25 != (NCCFNKMICGK_o *)0x0) {
          pNVar18 = pNVar25->klass;
          uVar5._0_1_ = (pNVar18->_2).rank;
          uVar5._1_1_ = (pNVar18->_2).minimumAlignment;
          uVar21 = (ulong)uVar5;
          if (uVar21 != 0) {
            piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar12 = pNVar18->vtable + (*piVar22 + 8);
                goto LAB_031cb0a0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25,NCCFNKMICGK_TypeInfo,8);
LAB_031cb0a0:
          lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
          if (lVar13 != 0) {
            a = *(System_String_o **)(lVar13 + 0x38);
            MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)MOPNMEHIMFJ,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5215,
                       (MethodInfo *)0x0);
            LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)LFINFBNOLFG,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5216,
                       (MethodInfo *)0x0);
            b = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
            bVar10 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
            if (!bVar10) {
              return true;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_045662dd == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_045662dd = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pKVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
            if (pKVar24 != (KCJCIJHMEJF_o *)0x0) {
              pKVar19 = pKVar24->klass;
              uVar6._0_1_ = (pKVar19->_2).rank;
              uVar6._1_1_ = (pKVar19->_2).minimumAlignment;
              uVar21 = (ulong)uVar6;
              if (uVar21 != 0) {
                piVar22 = &((pKVar19->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                      (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
                    pVVar12 = pKVar19->vtable + (*piVar22 + 0xb);
                    goto LAB_031cb1d8;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              pVVar12 = (VirtualInvokeData *)FUN_01b81914(pKVar24,KCJCIJHMEJF_TypeInfo,0xb);
LAB_031cb1d8:
              pSVar14 = (System_Collections_Generic_IEnumerable_TSource__o *)
                        (*pVVar12->methodPtr)(pKVar24,pVVar12->method);
              if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
              }
              predicate_00 = JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_0;
              if (predicate_00 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
                if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
                }
                predicate_00 = (System_Func_NCCFNKMICGK__bool__o *)
                               thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                System_Func<object,_bool>___ctor();
                ppSVar15 = &JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_0;
                *ppSVar15 = predicate_00;
                thunk_FUN_01c20e04(ppSVar15,predicate_00);
              }
              pSVar14 = System_Linq_Enumerable__Where<object>
                                  (pSVar14,(System_Func_TSource__bool__o *)predicate_00,
                                   Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
              if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
              }
              CPECAEHDDDB = JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_1;
              if (CPECAEHDDDB == (System_Action_NCCFNKMICGK__o *)0x0) {
                if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
                }
                CPECAEHDDDB = (System_Action_NCCFNKMICGK__o *)
                              thunk_FUN_01bda818(System_Action<NCCFNKMICGK>_TypeInfo);
                System_Action<object>___ctor();
                ppSVar16 = &JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_1;
                *ppSVar16 = CPECAEHDDDB;
                thunk_FUN_01c20e04(ppSVar16,CPECAEHDDDB);
              }
              DFPABHGJPJJ__NHDPECDJBGO<object>
                        ((System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                         (System_Action_T__o *)CPECAEHDDDB,
                         Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
              pNVar25 = pJVar23->offer;
              if (pNVar25 != (NCCFNKMICGK_o *)0x0) {
                pNVar18 = pNVar25->klass;
                uVar7._0_1_ = (pNVar18->_2).rank;
                uVar7._1_1_ = (pNVar18->_2).minimumAlignment;
                uVar21 = (ulong)uVar7;
                if (uVar21 != 0) {
                  piVar22 = &((pNVar18->_1).interfaceOffsets)->offset;
                  do {
                    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                        (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                      pVVar12 = pNVar18->vtable + (*piVar22 + 1);
                      goto LAB_031cb37c;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                pVVar12 = (VirtualInvokeData *)FUN_01b81914(pNVar25,NCCFNKMICGK_TypeInfo,1);
LAB_031cb37c:
                lVar13 = (*pVVar12->methodPtr)(pNVar25,pVVar12->method);
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                }
                if (DAT_045662dd == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_045662dd = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pKVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
                if (pKVar24 != (KCJCIJHMEJF_o *)0x0) {
                  pKVar19 = pKVar24->klass;
                  uVar8._0_1_ = (pKVar19->_2).rank;
                  uVar8._1_1_ = (pKVar19->_2).minimumAlignment;
                  uVar21 = (ulong)uVar8;
                  if (uVar21 != 0) {
                    piVar22 = &((pKVar19->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
                        pVVar12 = pKVar19->vtable + (*piVar22 + 0xb);
                        goto LAB_031cb42c;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  pVVar12 = (VirtualInvokeData *)FUN_01b81914(pKVar24,KCJCIJHMEJF_TypeInfo,0xb);
LAB_031cb42c:
                  pSVar14 = (System_Collections_Generic_IEnumerable_TSource__o *)
                            (*pVVar12->methodPtr)(pKVar24,pVVar12->method);
                  predicate = (System_Func_TSource__bool__o *)
                              thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                  System_Func<object,_bool>___ctor();
                  pSVar14 = System_Linq_Enumerable__Where<object>
                                      (pSVar14,predicate,
                                       Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
                  if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
                  }
                  selector = JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_3;
                  if (selector == (System_Func_NCCFNKMICGK__int__o *)0x0) {
                    if ((JIBAEMHNBOF_<>c_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(JIBAEMHNBOF_<>c_TypeInfo);
                    }
                    selector = (System_Func_NCCFNKMICGK__int__o *)
                               thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_int>_TypeInfo);
                    System_Func<object,_int>___ctor();
                    ppSVar17 = &JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9__15_3;
                    *ppSVar17 = selector;
                    thunk_FUN_01c20e04(ppSVar17,selector);
                  }
                  source = System_Linq_Enumerable__Select<object,_int>
                                     (pSVar14,(System_Func_TSource__TResult__o *)selector,
                                      Method_System_Linq_Enumerable_Select<NCCFNKMICGK,_int>__);
                  iVar11 = System_Linq_Enumerable__Min
                                     ((System_Collections_Generic_IEnumerable_int__o *)source,
                                      (MethodInfo *)0x0);
                  if (lVar13 != 0) {
                    *(int32_t *)(lVar13 + 0x2c) = iVar11;
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    if (DAT_045662dd == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_045662dd = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pKVar24 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
                    if (pKVar24 != (KCJCIJHMEJF_o *)0x0) {
                      pKVar19 = pKVar24->klass;
                      pNVar25 = pJVar23->offer;
                      uVar9._0_1_ = (pKVar19->_2).rank;
                      uVar9._1_1_ = (pKVar19->_2).minimumAlignment;
                      uVar21 = (ulong)uVar9;
                      if (uVar21 != 0) {
                        piVar22 = &((pKVar19->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar22 + -2))->interfaceType ==
                              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
                            pVVar12 = pKVar19->vtable + (*piVar22 + 1);
                            goto LAB_031cb5c8;
                          }
                          uVar21 = uVar21 - 1;
                          piVar22 = piVar22 + 4;
                        } while (uVar21 != 0);
                      }
                      pVVar12 = (VirtualInvokeData *)FUN_01b81914(pKVar24,KCJCIJHMEJF_TypeInfo,1);
LAB_031cb5c8:
                      (*pVVar12->methodPtr)(pKVar24,pNVar25,pVVar12->method);
                      return true;
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
LAB_031cb5fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AJJLBBCJAAL(string[] BFPCMHPBAGL)  [RVA 0x30CBAA8]
// JIBAEMHNBOF$$AJJLBBCJAAL @ RVA 0x30CBAA8

/* WARNING: Type propagation algorithm not settling */

System_String_o *
JIBAEMHNBOF__AJJLBBCJAAL(JIBAEMHNBOF_o *__this,System_String_array *BFPCMHPBAGL,MethodInfo *method)

{
  bool bVar1;
  JIBAEMHNBOF_EJBBFEBGOGF_o *__this_00;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Func_NCCFNKMICGK__bool__o *EAMPBFPLNDK;
  System_Action_o *OONPOLJKBGG;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  System_String_array *pSVar5;
  System_RuntimeFieldHandle_Fields *pSVar6;
  System_String_o *pSVar7;
  System_String_array **ppSVar8;
  
  if ((DAT_045662d4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5217);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5218);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5219);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5220);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5221);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5222);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5223);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5224);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5225);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5226);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5227);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5228);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5229);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5230);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5231);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5232);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_EJBBFEBGOGF_IMEDHACBLGP__);
    FUN_01bab630(&JIBAEMHNBOF_EJBBFEBGOGF_TypeInfo);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_BCLJHFNMAID__);
    FUN_01bab630(&Method_JIBAEMHNBOF_EOHJJEHOHDO__);
    FUN_01bab630(&Method_JIBAEMHNBOF_JOIKLHPDACN__);
    FUN_01bab630(&Method_JIBAEMHNBOF_MEMCFFLLBMA__);
    DAT_045662d4 = 1;
  }
  __this_00 = (JIBAEMHNBOF_EJBBFEBGOGF_o *)thunk_FUN_01bda818(JIBAEMHNBOF_EJBBFEBGOGF_TypeInfo);
  JIBAEMHNBOF_EJBBFEBGOGF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (JIBAEMHNBOF_EJBBFEBGOGF_o *)0x0) {
LAB_031cc160:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this_00->fields).__4__this = __this;
  thunk_FUN_01c20e04(&__this_00->fields,__this);
  ppSVar8 = &(__this_00->fields).p_args;
  *ppSVar8 = BFPCMHPBAGL;
  thunk_FUN_01c20e04(ppSVar8,BFPCMHPBAGL);
  pSVar5 = *ppSVar8;
  if (pSVar5 == (System_String_array *)0x0) goto LAB_031cc160;
  if (pSVar5->max_length == 0) {
    pSVar4 = ILEHGDDFOJP__JCHOLNEFBLD((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
    return pSVar4;
  }
  if ((int)pSVar5->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  pSVar7 = pSVar5->m_Items[0];
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5217,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5218,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar7,pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    JIBAEMHNBOF__FNABCKFEOCH((JIBAEMHNBOF_o *)(ulong)bVar1,method_00);
    pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(1,*ppSVar8,(MethodInfo *)0x0);
    EAMPBFPLNDK = (System_Func_NCCFNKMICGK__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5225,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar6 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5226;
  }
  else {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5219,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5220,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar7,pSVar4,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5221,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5222,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar7,pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(1,*ppSVar8,(MethodInfo *)0x0);
        EAMPBFPLNDK = (System_Func_NCCFNKMICGK__bool__o *)
                      thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5229,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5230,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        bVar1 = true;
        OONPOLJKBGG = (System_Action_o *)0x0;
      }
      else {
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5223,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5224,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar7,pSVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = ILEHGDDFOJP__FNHHLCOFCBI((IEJKLPPLHMO_o *)__this,(MethodInfo *)0x0);
          return pSVar4;
        }
        pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(1,(__this_00->fields).p_args,(MethodInfo *)0x0);
        EAMPBFPLNDK = (System_Func_NCCFNKMICGK__bool__o *)
                      thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5231,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5232,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        OONPOLJKBGG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        bVar1 = false;
      }
      goto LAB_031cbec0;
    }
    pSVar4 = AJAMDCEKAFE__LFCNNAGLPHO(1,*ppSVar8,(MethodInfo *)0x0);
    EAMPBFPLNDK = (System_Func_NCCFNKMICGK__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5227,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    pSVar6 = (System_RuntimeFieldHandle_Fields *)
             &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5228;
  }
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,(System_RuntimeFieldHandle_o)pSVar6->value,(MethodInfo *)0x0);
  pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  OONPOLJKBGG = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  bVar1 = true;
LAB_031cbec0:
  pSVar4 = JIBAEMHNBOF__MLPLFLEBFKG(pSVar4,EAMPBFPLNDK,pSVar7,bVar1,OONPOLJKBGG,in_x5);
  return pSVar4;
}


// ===== private void BGNGHFFFHNA(NCCFNKMICGK NLFMDIGKNGP, JIBAEMHNBOF.HHCLGENAOLA MOAIKBONJAE)  [RVA 0x30CC3F4]
// JIBAEMHNBOF$$BGNGHFFFHNA @ RVA 0x30CC3F4

void JIBAEMHNBOF__BGNGHFFFHNA
               (JIBAEMHNBOF_o *__this,NCCFNKMICGK_o *NLFMDIGKNGP,
               JIBAEMHNBOF_HHCLGENAOLA_o *MOAIKBONJAE,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  NCCFNKMICGK_c *pNVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045662d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Clear__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662d5 = 1;
  }
  if (NLFMDIGKNGP == (NCCFNKMICGK_o *)0x0) {
    return;
  }
  pNVar8 = NLFMDIGKNGP->klass;
  uVar1._0_1_ = (pNVar8->_2).rank;
  uVar1._1_1_ = (pNVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar6 = pNVar8->vtable + (*piVar10 + 8);
        goto LAB_031cc4a4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc4a4:
  lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x248), lVar7 != 0)) {
    length = *(int32_t *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar7 + 0x10),0,length,(MethodInfo *)0x0);
    }
    pNVar8 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar8->_2).rank;
    uVar2._1_1_ = (pNVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar6 = pNVar8->vtable + (*piVar10 + 8);
          goto LAB_031cc530;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc530:
    lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
    if (((lVar7 != 0) && (MOAIKBONJAE != (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0)) &&
       (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x248) !=
        (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__AddRange
                (*(System_Collections_Generic_List_object__o **)(lVar7 + 0x248),
                 (System_Collections_Generic_IEnumerable_T__o *)(MOAIKBONJAE->fields).JJEDHODDHMF,
                 Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
      pNVar8 = NLFMDIGKNGP->klass;
      uVar3._0_1_ = (pNVar8->_2).rank;
      uVar3._1_1_ = (pNVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar6 = pNVar8->vtable + (*piVar10 + 8);
            goto LAB_031cc5b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc5b0:
      lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
      if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 0x260) != (GEIHBHEDJJM_o *)0x0)) {
        GEIHBHEDJJM__KFMNMGGDHFD
                  (*(GEIHBHEDJJM_o **)(lVar7 + 0x260),(MOAIKBONJAE->fields).ENBNOOPELIP,
                   (MethodInfo *)0x0);
        pNVar8 = NLFMDIGKNGP->klass;
        uVar4._0_1_ = (pNVar8->_2).rank;
        uVar4._1_1_ = (pNVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar4;
        if (uVar9 != 0) {
          piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar6 = pNVar8->vtable + (*piVar10 + 8);
              goto LAB_031cc624;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc624:
        lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
        if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 0x250) != (GEIHBHEDJJM_o *)0x0)) {
          GEIHBHEDJJM__KFMNMGGDHFD
                    (*(GEIHBHEDJJM_o **)(lVar7 + 0x250),(MOAIKBONJAE->fields).OFNEAFGINLC,
                     (MethodInfo *)0x0);
          pNVar8 = NLFMDIGKNGP->klass;
          uVar5._0_1_ = (pNVar8->_2).rank;
          uVar5._1_1_ = (pNVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar5;
          if (uVar9 != 0) {
            piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar6 = pNVar8->vtable + (*piVar10 + 8);
                goto LAB_031cc698;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cc698:
          lVar7 = (*pVVar6->methodPtr)(NLFMDIGKNGP,pVVar6->method);
          if ((lVar7 != 0) && (*(GEIHBHEDJJM_o **)(lVar7 + 600) != (GEIHBHEDJJM_o *)0x0)) {
            GEIHBHEDJJM__KFMNMGGDHFD
                      (*(GEIHBHEDJJM_o **)(lVar7 + 600),(MOAIKBONJAE->fields).DEELCMCEILO,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x30CC6C8]
// JIBAEMHNBOF$$ECKDICODLME @ RVA 0x30CC6C8

bool JIBAEMHNBOF__ECKDICODLME(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  return false;
}


// ===== private void MJLBCAGDDFG()  [RVA 0x30C9508]
// JIBAEMHNBOF$$MJLBCAGDDFG @ RVA 0x30C9508

void JIBAEMHNBOF__MJLBCAGDDFG(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  JIBAEMHNBOF_CCLKFPLCOEI_o *__this_00;
  System_Func_TSource__bool__o *predicate;
  JIBAEMHNBOF_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *pSVar4;
  KCJCIJHMEJF_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  KCJCIJHMEJF_o *pKVar8;
  JIBAEMHNBOF_CCLKFPLCOEI_Fields *pJVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045662d6 & 1) == 0) {
    FUN_01bab630(&Method_JIBAEMHNBOF_CCLKFPLCOEI_OOBFKMDCNBI__);
    FUN_01bab630(&JIBAEMHNBOF_CCLKFPLCOEI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_get_Current__
                );
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662d6 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).LIDLGDLCMEE;
  if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
    if ((pSVar4->fields)._size == 0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_045662dd == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045662dd = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pKVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
    if (pKVar8 != (KCJCIJHMEJF_o *)0x0) {
      pKVar5 = pKVar8->klass;
      uVar1._0_1_ = (pKVar5->_2).rank;
      uVar1._1_1_ = (pKVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
            pVVar3 = pKVar5->vtable + (*piVar7 + 9);
            goto LAB_031c9694;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar8,KCJCIJHMEJF_TypeInfo,9);
LAB_031c9694:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar3->methodPtr)(pKVar8,pVVar3->method);
      pSVar4 = (__this->fields).LIDLGDLCMEE;
      if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar4,
                   Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_MoveNext__
                                 ), bVar2) {
          __this_00 = (JIBAEMHNBOF_CCLKFPLCOEI_o *)
                      thunk_FUN_01bda818(JIBAEMHNBOF_CCLKFPLCOEI_TypeInfo);
          JIBAEMHNBOF_CCLKFPLCOEI___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (JIBAEMHNBOF_CCLKFPLCOEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar9 = &__this_00->fields;
          pJVar9->offerData = (JIBAEMHNBOF_HHCLGENAOLA_o *)local_80.fields._current;
          thunk_FUN_01c20e04(pJVar9);
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
          method_00 = (MethodInfo *)0x0;
          System_Func<object,_bool>___ctor();
          __this_01 = (JIBAEMHNBOF_o *)
                      System_Linq_Enumerable__FirstOrDefault<object>
                                (source,predicate,
                                 Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
          JIBAEMHNBOF__BGNGHFFFHNA(__this_01,(NCCFNKMICGK_o *)__this_01,pJVar9->offerData,method_00)
          ;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<JIBAEMHNBOF_HHCLGENAOLA>_Dispose__
                  );
        pSVar4 = (__this->fields).LIDLGDLCMEE;
        if (pSVar4 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
          length = (pSVar4->fields)._size;
          (pSVar4->fields)._size = 0;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (length < 1) {
            return;
          }
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JILPBOBHBJH(NCCFNKMICGK NLFMDIGKNGP)  [RVA 0x30CB600]
// JIBAEMHNBOF$$JILPBOBHBJH @ RVA 0x30CB600

void JIBAEMHNBOF__JILPBOBHBJH(JIBAEMHNBOF_o *__this,NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  int32_t length;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  JIBAEMHNBOF_PJCFOJCHHHH_o *__this_00;
  System_Predicate_T__o *match;
  JIBAEMHNBOF_HHCLGENAOLA_o *__this_01;
  VirtualInvokeData *pVVar7;
  long lVar8;
  System_String_o *pSVar9;
  JIBAEMHNBOF_HHCLGENAOLA_array *pJVar10;
  NCCFNKMICGK_c *pNVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *pSVar14;
  System_String_o **ppSVar15;
  JIBAEMHNBOF_PJCFOJCHHHH_Fields *pJVar16;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_02;
  NCCFNKMICGK_o *pNVar17;
  
  if ((DAT_045662d7 & 1) == 0) {
    FUN_01bab630(&JIBAEMHNBOF_HHCLGENAOLA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Find__);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&Method_JIBAEMHNBOF_PJCFOJCHHHH_OKEGDDNIIOA__);
    FUN_01bab630(&JIBAEMHNBOF_PJCFOJCHHHH_TypeInfo);
    FUN_01bab630(&System_Predicate<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    DAT_045662d7 = 1;
  }
  __this_00 = (JIBAEMHNBOF_PJCFOJCHHHH_o *)thunk_FUN_01bda818(JIBAEMHNBOF_PJCFOJCHHHH_TypeInfo);
  JIBAEMHNBOF_PJCFOJCHHHH___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JIBAEMHNBOF_PJCFOJCHHHH_o *)0x0) {
    pJVar16 = &__this_00->fields;
    pJVar16->offer = NLFMDIGKNGP;
    thunk_FUN_01c20e04(pJVar16,NLFMDIGKNGP);
    if (pJVar16->offer == (NCCFNKMICGK_o *)0x0) {
      return;
    }
    pSVar14 = (__this->fields).LIDLGDLCMEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<JIBAEMHNBOF_HHCLGENAOLA>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar14 != (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0) {
      __this_01 = (JIBAEMHNBOF_HHCLGENAOLA_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)pSVar14,match,
                             Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Find__)
      ;
      if (__this_01 == (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) {
        __this_01 = (JIBAEMHNBOF_HHCLGENAOLA_o *)
                    thunk_FUN_01bda818(JIBAEMHNBOF_HHCLGENAOLA_TypeInfo);
        JIBAEMHNBOF_HHCLGENAOLA___ctor(__this_01,(MethodInfo *)0x0);
        pNVar17 = pJVar16->offer;
        if (pNVar17 == (NCCFNKMICGK_o *)0x0) goto LAB_031cbaa4;
        pNVar11 = pNVar17->klass;
        uVar1._0_1_ = (pNVar11->_2).rank;
        uVar1._1_1_ = (pNVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar1;
        if (uVar12 != 0) {
          piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar7 = pNVar11->vtable + (*piVar13 + 2);
              goto LAB_031cb7bc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,2);
LAB_031cb7bc:
        pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(pNVar17,pVVar7->method);
        if (__this_01 == (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) goto LAB_031cbaa4;
        (__this_01->fields).FCENJIHACAA = pSVar9;
        thunk_FUN_01c20e04();
        lVar8 = Method_System_Collections_Generic_List<JIBAEMHNBOF_HHCLGENAOLA>_Add__;
        pSVar14 = (__this->fields).LIDLGDLCMEE;
        if (pSVar14 == (System_Collections_Generic_List_JIBAEMHNBOF_HHCLGENAOLA__o *)0x0)
        goto LAB_031cbaa4;
        pJVar10 = (pSVar14->fields)._items;
        (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
        if (pJVar10 == (JIBAEMHNBOF_HHCLGENAOLA_array *)0x0) goto LAB_031cbaa4;
        uVar6 = (pSVar14->fields)._size;
        if (uVar6 < (uint)pJVar10->max_length) {
          (pSVar14->fields)._size = uVar6 + 1;
          pJVar10->m_Items[(int)uVar6] = __this_01;
          thunk_FUN_01c20e04(pJVar10->m_Items + (int)uVar6,__this_01);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
      __this_02 = (__this_01->fields).JJEDHODDHMF;
      if (__this_02 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
        length = (__this_02->fields)._size;
        (__this_02->fields)._size = 0;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,length,
                              (MethodInfo *)0x0);
          __this_02 = (__this_01->fields).JJEDHODDHMF;
        }
        pNVar17 = pJVar16->offer;
        if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
          pNVar11 = pNVar17->klass;
          uVar2._0_1_ = (pNVar11->_2).rank;
          uVar2._1_1_ = (pNVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                goto LAB_031cb8d0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb8d0:
          lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
          if ((lVar8 != 0) && (__this_02 != (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0))
          {
            System_Collections_Generic_List<object>__AddRange
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       *(System_Collections_Generic_IEnumerable_T__o **)(lVar8 + 0x248),
                       Method_System_Collections_Generic_List<LEGDPJHPEOB>_AddRange__);
            pNVar17 = pJVar16->offer;
            if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
              pNVar11 = pNVar17->klass;
              uVar3._0_1_ = (pNVar11->_2).rank;
              uVar3._1_1_ = (pNVar11->_2).minimumAlignment;
              uVar12 = (ulong)uVar3;
              if (uVar12 != 0) {
                piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                      (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                    goto LAB_031cb954;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb954:
              lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
              if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 0x260) != (GEIHBHEDJJM_o *)0x0)) {
                pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                   (*(GEIHBHEDJJM_o **)(lVar8 + 0x260),(MethodInfo *)0x0);
                (__this_01->fields).ENBNOOPELIP = pSVar9;
                thunk_FUN_01c20e04();
                pNVar17 = pJVar16->offer;
                if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
                  pNVar11 = pNVar17->klass;
                  uVar4._0_1_ = (pNVar11->_2).rank;
                  uVar4._1_1_ = (pNVar11->_2).minimumAlignment;
                  uVar12 = (ulong)uVar4;
                  if (uVar12 != 0) {
                    piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                        pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                        goto LAB_031cb9dc;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cb9dc:
                  lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
                  if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 0x250) != (GEIHBHEDJJM_o *)0x0))
                  {
                    pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                       (*(GEIHBHEDJJM_o **)(lVar8 + 0x250),(MethodInfo *)0x0);
                    (__this_01->fields).OFNEAFGINLC = pSVar9;
                    thunk_FUN_01c20e04();
                    pNVar17 = pJVar16->offer;
                    if (pNVar17 != (NCCFNKMICGK_o *)0x0) {
                      pNVar11 = pNVar17->klass;
                      uVar5._0_1_ = (pNVar11->_2).rank;
                      uVar5._1_1_ = (pNVar11->_2).minimumAlignment;
                      uVar12 = (ulong)uVar5;
                      if (uVar12 != 0) {
                        piVar13 = &((pNVar11->_1).interfaceOffsets)->offset;
                        do {
                          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                            pVVar7 = pNVar11->vtable + (*piVar13 + 8);
                            goto LAB_031cba64;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pNVar17,NCCFNKMICGK_TypeInfo,8);
LAB_031cba64:
                      lVar8 = (*pVVar7->methodPtr)(pNVar17,pVVar7->method);
                      if ((lVar8 != 0) && (*(GEIHBHEDJJM_o **)(lVar8 + 600) != (GEIHBHEDJJM_o *)0x0)
                         ) {
                        pSVar9 = GEIHBHEDJJM__CNKOOLDMAGC
                                           (*(GEIHBHEDJJM_o **)(lVar8 + 600),(MethodInfo *)0x0);
                        ppSVar15 = &(__this_01->fields).DEELCMCEILO;
                        *ppSVar15 = pSVar9;
                        thunk_FUN_01c20e04(ppSVar15,pSVar9);
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
LAB_031cbaa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x30CC6D0]
// JIBAEMHNBOF$$IGMDDJFPIJL @ RVA 0x30CC6D0

System_String_o * JIBAEMHNBOF__IGMDDJFPIJL(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045662d8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy512___field_2);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5233);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045662d8 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5233,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x200);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy512___field_2,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private bool FNABCKFEOCH()  [RVA 0x30CC168]
// JIBAEMHNBOF$$FNABCKFEOCH @ RVA 0x30CC168

bool JIBAEMHNBOF__FNABCKFEOCH(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar6;
  
  if ((DAT_045662d9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5234);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5235);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5236);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5237);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662d9 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5234,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5235,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
    pMVar5 = ACHLOMELAJE__HKIEGNBOFCD(pAVar6,pSVar4,0,(MethodInfo *)0x0);
    if ((pMVar5 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) ||
       (iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pMVar5->fields).JAICMIMBIOA,0,(MethodInfo *)0x0),
       iVar1 == 0)) {
      return false;
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5236,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5237,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__HEMDIAFAMAO(pAVar6,pSVar4,false,0,(MethodInfo *)0x0);
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
      pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar6,true,(MethodInfo *)0x0);
        return true;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x30CC780]
// JIBAEMHNBOF$$KCBILPIAPHN @ RVA 0x30CC780

int32_t JIBAEMHNBOF__KCBILPIAPHN(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  return 0;
}

