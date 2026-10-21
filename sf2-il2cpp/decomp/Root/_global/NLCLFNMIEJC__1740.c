// TypeDefIndex 1740
// Namespace: 
// public static class NLCLFNMIEJC
// Fields:

// ===== public static List<OPHDIHJPHDE> GGEDMGGBCHN(LocalDailyConfig PCMFDDODKED)  [RVA 0x31DB624]
// NLCLFNMIEJC$$GGEDMGGBCHN @ RVA 0x31DB624

System_Collections_Generic_List_OPHDIHJPHDE__o *
NLCLFNMIEJC__GGEDMGGBCHN(Core_Configs_Models_LocalDailyConfig_o *PCMFDDODKED,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *__this;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Int32_array *pSVar6;
  System_Collections_Generic_IReadOnlyList_LocalDailyQuestInfo__o *source_00;
  System_Func_LocalDailyQuestInfo__int__o **ppSVar7;
  System_Linq_IOrderedEnumerable_TSource__o *source_01;
  System_Collections_Generic_List_TSource__o *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___c *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o *pSVar12;
  System_Func_LocalDailyQuestInfo__int__o *keySelector;
  int32_t local_34;
  
  if ((DAT_04566d15 & 1) == 0) {
    FUN_01bab630(&System_Action<LocalDailyQuestInfo>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<LocalDailyQuestInfo>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<LocalDailyQuestInfo>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<LocalDailyQuestInfo,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<LocalDailyQuestInfo>__);
    FUN_01bab630(&System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
                );
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&Method_NLCLFNMIEJC_OCDPFLPEGDO_NKGBPHDHEPA__);
    FUN_01bab630(&NLCLFNMIEJC_OCDPFLPEGDO_TypeInfo);
    FUN_01bab630(&Method_NLCLFNMIEJC_<>c_ICINMCJLNIA__);
    FUN_01bab630(&NLCLFNMIEJC_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8585/*"LocalDailyHelper SelectQuest sequence not exists : "*/);
    DAT_04566d15 = 1;
    method = extraout_x1;
  }
  local_34 = 0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(NLCLFNMIEJC_OCDPFLPEGDO_TypeInfo,method);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  __this = (Il2CppClass *)thunk_FUN_01bda818(System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = __this;
    thunk_FUN_01c20e04(pIVar4,__this);
    if ((PCMFDDODKED != (Core_Configs_Models_LocalDailyConfig_o *)0x0) &&
       (pSVar12 = (PCMFDDODKED->fields)._LocalDailyQuestsInfoBySequence_k__BackingField,
       pSVar12 !=
       (System_Collections_Generic_IReadOnlyDictionary_int__List_LocalDailyQuestInfo___o *)0x0)) {
      pSVar9 = pSVar12->klass;
      uVar1._0_1_ = (pSVar9->_2).rank;
      uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
             ) {
            pVVar5 = pSVar9->vtable + (*piVar11 + 3);
            goto LAB_032db7e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar12,
                            System_Collections_Generic_IReadOnlyDictionary<int,_List<LocalDailyQuestInfo>>_TypeInfo
                            ,3);
LAB_032db7e0:
      source = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar5->methodPtr)(pSVar12,pVVar5->method);
      pSVar6 = System_Linq_Enumerable__ToArray<int>
                         (source,Method_System_Linq_Enumerable_ToArray<int>__);
      if (pSVar6 != (System_Int32_array *)0x0) {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        uVar3 = LIIFLGALGNK__HLMBDJOGONJ((int32_t)pSVar6->max_length,(MethodInfo *)0x0);
        if (uVar3 < (uint)pSVar6->max_length) {
          local_34 = pSVar6->m_Items[(int)uVar3];
          source_00 = Core_Configs_Models_LocalDailyConfigExtension__GetLocalDailyQuestInfos
                                (PCMFDDODKED,local_34,(MethodInfo *)0x0);
          bVar2 = System_Linq_Enumerable__Any<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                             Method_System_Linq_Enumerable_Any<LocalDailyQuestInfo>__);
          if (bVar2) {
            if ((NLCLFNMIEJC_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            keySelector = NLCLFNMIEJC_<>c_TypeInfo->static_fields->__9__0_0;
            if (keySelector == (System_Func_LocalDailyQuestInfo__int__o *)0x0) {
              if ((NLCLFNMIEJC_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              keySelector = (System_Func_LocalDailyQuestInfo__int__o *)
                            thunk_FUN_01bda818(System_Func<LocalDailyQuestInfo,_int>_TypeInfo);
              System_Func<object,_int>___ctor();
              ppSVar7 = &NLCLFNMIEJC_<>c_TypeInfo->static_fields->__9__0_0;
              *ppSVar7 = keySelector;
              thunk_FUN_01c20e04(ppSVar7,keySelector);
            }
            source_01 = System_Linq_Enumerable__OrderBy<object,_int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                                   (System_Func_TSource__TKey__o *)keySelector,
                                   Method_System_Linq_Enumerable_OrderBy<LocalDailyQuestInfo,_int>__
                                  );
            NMMKGIMBHFF = System_Linq_Enumerable__ToList<object>
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                                     Method_System_Linq_Enumerable_ToList<LocalDailyQuestInfo>__);
            CPECAEHDDDB = (System_Action_T__o *)
                          thunk_FUN_01bda818(System_Action<LocalDailyQuestInfo>_TypeInfo);
            System_Action<object>___ctor();
            DFPABHGJPJJ__NHDPECDJBGO<object>
                      ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
                       Method_DFPABHGJPJJ_NHDPECDJBGO<LocalDailyQuestInfo>__);
          }
          else {
            pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat(StringLiteral_8585/*"LocalDailyHelper SelectQuest sequence not exists : "*/,pSVar8,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          }
          return (System_Collections_Generic_List_OPHDIHJPHDE__o *)pIVar4->klass;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static OPHDIHJPHDE FDCPNKPLOID(XmlNode AHDGNOJPPIB)  [RVA 0x31DB9D0]
// NLCLFNMIEJC$$FDCPNKPLOID @ RVA 0x31DB9D0

OPHDIHJPHDE_o * NLCLFNMIEJC__FDCPNKPLOID(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool DCHJNCLIMGP;
  int32_t OGPGLGPMEPD;
  int32_t DFIBGGDJPLM;
  System_Xml_XmlAttribute_o *pSVar2;
  OPHDIHJPHDE_o *__this;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d16 & 1) == 0) {
    FUN_01bab630(&OPHDIHJPHDE_TypeInfo);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    auVar3 = FUN_01bab630(&StringLiteral_4371/*"Claimed"*/);
    DAT_04566d16 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar4 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar4._8_8_;
    auVar3 = auVar5 << 0x40;
    if (auVar4._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (auVar4._0_8_,StringLiteral_7293/*"Id"*/,(MethodInfo *)0x0);
      OGPGLGPMEPD = EIABCPKDEBD__EHJNCGCICMP(pSVar2,-1,(MethodInfo *)0x0);
      auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar5._8_8_;
      auVar3 = auVar4 << 0x40;
      if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (auVar5._0_8_,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
        DFIBGGDJPLM = EIABCPKDEBD__EHJNCGCICMP(pSVar2,0,(MethodInfo *)0x0);
        auVar5 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = auVar5._8_8_;
        auVar3 = auVar1 << 0x40;
        if (auVar5._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (auVar5._0_8_,StringLiteral_4371/*"Claimed"*/,(MethodInfo *)0x0);
          DCHJNCLIMGP = EIABCPKDEBD__FMBMNDIGLIG(pSVar2,false,(MethodInfo *)0x0);
          __this = (OPHDIHJPHDE_o *)thunk_FUN_01bda818(OPHDIHJPHDE_TypeInfo);
          OPHDIHJPHDE___ctor(__this,OGPGLGPMEPD,DFIBGGDJPLM,DCHJNCLIMGP,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static void LCOGFACJLDA(XmlNode AHDGNOJPPIB, FMOAMIIOKNP EHBFEFHLLBB)  [RVA 0x31DBB20]
// NLCLFNMIEJC$$LCOGFACJLDA @ RVA 0x31DBB20

/* WARNING: Removing unreachable block (ram,0x032dbef8) */

void NLCLFNMIEJC__LCOGFACJLDA
               (System_Xml_XmlNode_o *AHDGNOJPPIB,FMOAMIIOKNP_o *EHBFEFHLLBB,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlElement_o *pSVar7;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar13;
  undefined1 local_70 [4];
  undefined4 local_6c;
  int64_t local_68;
  
  if ((DAT_04566d17 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_5106/*"Data"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    FUN_01bab630(&StringLiteral_11310/*"ResetTimer"*/);
    FUN_01bab630(&StringLiteral_4371/*"Claimed"*/);
    DAT_04566d17 = 1;
  }
  local_6c = 0;
  local_70[0] = 0;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    (*(AHDGNOJPPIB->klass->vtable)._49_RemoveAll.methodPtr)
              (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._49_RemoveAll.method);
    pSVar2 = EIABCPKDEBD__DGJFLNGMBKG(AHDGNOJPPIB,StringLiteral_11310/*"ResetTimer"*/,(MethodInfo *)0x0);
    if (EHBFEFHLLBB != (FMOAMIIOKNP_o *)0x0) {
      local_68 = (EHBFEFHLLBB->fields)._EPMGDFKEOOJ_k__BackingField;
      pSVar3 = System_Int64__ToString((int64_t)&local_68,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        pSVar13 = (EHBFEFHLLBB->fields)._APDMACJCLEG_k__BackingField;
        if (pSVar13 != (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)0x0) {
          pSVar8 = pSVar13->klass;
          uVar1._0_1_ = (pSVar8->_2).rank;
          uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
          uVar10 = (ulong)uVar1;
          if (uVar10 != 0) {
            piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo) {
                pVVar4 = pSVar8->vtable + *piVar11;
                goto LAB_032dbc98;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar4 = (VirtualInvokeData *)
                   FUN_01b81914(pSVar13,System_Collections_Generic_IEnumerable<OPHDIHJPHDE>_TypeInfo
                                ,0);
LAB_032dbc98:
          plVar5 = (long *)(*pVVar4->methodPtr)(pSVar13,pVVar4->method);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_032dbd30;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032dbd30:
            uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar5;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_032dbe9c;
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032dbe84;
            }
            lVar9 = *plVar5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_OPHDIHJPHDE__c **)(piVar12 + -2) ==
                    System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_032dbd8c;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)
                     FUN_01b81914(plVar5,
                                  System_Collections_Generic_IEnumerator<OPHDIHJPHDE>_TypeInfo,0);
LAB_032dbd8c:
            lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            pSVar7 = EIABCPKDEBD__BHPIHHJHELJ(AHDGNOJPPIB,StringLiteral_5106/*"Data"*/,(MethodInfo *)0x0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_6c = *(undefined4 *)(lVar9 + 0x10);
            pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            if (pSVar7 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_7293/*"Id"*/,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
            local_6c = *(undefined4 *)(lVar9 + 0x14);
            pSVar3 = System_Int32__ToString((int32_t)&local_6c,(MethodInfo *)0x0);
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_4824/*"Count"*/,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
            local_70[0] = *(undefined1 *)(lVar9 + 0x18);
            if ((bool_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar3 = System_Boolean__ToString(SUB81(local_70,0),(MethodInfo *)0x0);
            (*(pSVar7->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar7,StringLiteral_4371/*"Claimed"*/,pSVar3,
                       (pSVar7->klass->vtable)._66_SetAttribute.method);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_032dbe84:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_032dbeb8;
    }
  }
LAB_032dbe9c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032dbeb8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public static void BONNGEGNMLF(FMOAMIIOKNP EHBFEFHLLBB, LocalDailyConfig PCMFDDODKED)  [RVA 0x31DBFC8]
// NLCLFNMIEJC$$BONNGEGNMLF @ RVA 0x31DBFC8

void NLCLFNMIEJC__BONNGEGNMLF
               (FMOAMIIOKNP_o *EHBFEFHLLBB,Core_Configs_Models_LocalDailyConfig_o *PCMFDDODKED,
               MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_T__o *CPECAEHDDDB;
  System_Collections_Generic_IEnumerable_T__o *NMMKGIMBHFF;
  
  if ((DAT_04566d18 & 1) == 0) {
    FUN_01bab630(&System_Action<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<OPHDIHJPHDE>__);
    FUN_01bab630(&Method_NLCLFNMIEJC_HLAIBENHPAA_BILDNJMJBGL__);
    FUN_01bab630(&NLCLFNMIEJC_HLAIBENHPAA_TypeInfo);
    DAT_04566d18 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NLCLFNMIEJC_HLAIBENHPAA_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)PCMFDDODKED;
    thunk_FUN_01c20e04(__this + 1,PCMFDDODKED);
    if (EHBFEFHLLBB != (FMOAMIIOKNP_o *)0x0) {
      NMMKGIMBHFF = (System_Collections_Generic_IEnumerable_T__o *)
                    (EHBFEFHLLBB->fields)._APDMACJCLEG_k__BackingField;
      CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<OPHDIHJPHDE>_TypeInfo);
      System_Action<object>___ctor();
      DFPABHGJPJJ__NHDPECDJBGO<object>
                (NMMKGIMBHFF,CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<OPHDIHJPHDE>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static FMOAMIIOKNP KKBFNNGJOLN(XmlNode AHDGNOJPPIB)  [RVA 0x31DC0B4]
// NLCLFNMIEJC$$KKBFNNGJOLN @ RVA 0x31DC0B4

/* WARNING: Removing unreachable block (ram,0x032dc400) */

FMOAMIIOKNP_o * NLCLFNMIEJC__KKBFNNGJOLN(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  int64_t NMECKCPAKAA;
  System_Collections_Generic_List_object__o *__this;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  OPHDIHJPHDE_o *item;
  FMOAMIIOKNP_o *__this_00;
  System_Xml_XmlNode_c *method_00;
  long lVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566d19 & 1) == 0) {
    FUN_01bab630(&FMOAMIIOKNP_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    auVar10 = FUN_01bab630(&StringLiteral_11310/*"ResetTimer"*/);
    DAT_04566d19 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    auVar11 = (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                        (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    auVar10 = auVar3 << 0x40;
    if (auVar11._0_8_ != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (auVar11._0_8_,StringLiteral_11310/*"ResetTimer"*/,(MethodInfo *)0x0);
      NMECKCPAKAA = EIABCPKDEBD__HNIGPBMJJOL(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<OPHDIHJPHDE>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this,Method_System_Collections_Generic_List<OPHDIHJPHDE>__ctor__);
      auVar10 = (*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
      plVar4 = auVar10._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar10._8_8_;
      auVar10 = auVar11 << 0x40;
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_032dc23c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032dc23c:
          uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar8 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) goto LAB_032dc3ac;
            lVar6 = *plVar4;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 == 0) goto LAB_032dc384;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_032dc36c;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_032dc29c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032dc29c:
          auVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          AHDGNOJPPIB_00 = auVar10._0_8_;
          method_00 = auVar10._8_8_;
          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
               (method_00 = System_Xml_XmlNode_TypeInfo,
               (AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
               (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
          }
          item = NLCLFNMIEJC__FDCPNKPLOID(AHDGNOJPPIB_00,(MethodInfo *)method_00);
          lVar6 = Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_032dc36c:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_032dc3a0;
    }
  }
LAB_032dc384:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032dc3a0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_032dc3ac:
  __this_00 = (FMOAMIIOKNP_o *)thunk_FUN_01bda818(FMOAMIIOKNP_TypeInfo);
  FMOAMIIOKNP___ctor(__this_00,NMECKCPAKAA,
                     (System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *)__this,
                     (MethodInfo *)0x0);
  return __this_00;
}

