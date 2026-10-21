// EMMFFOGMNAB$$BKCFPHNEONL @ RVA 0x33A81AC

/* WARNING: Removing unreachable block (ram,0x034a8c80) */
/* WARNING: Removing unreachable block (ram,0x034a8c6c) */
/* WARNING: Removing unreachable block (ram,0x034a89f0) */

Core_Configs_Models_ServiceZonesConfig_o *
EMMFFOGMNAB__BKCFPHNEONL(EMMFFOGMNAB_o *__this,System_Xml_XmlNode_o *MBMJEJKKFOE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_Collections_IEnumerable_o *pSVar7;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar8;
  System_Func_XmlNode__bool__o **ppSVar9;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long *plVar15;
  MethodInfo *method_00;
  MethodInfo *value;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  Core_Configs_Models_ServiceZone_o *__this_02;
  System_Collections_Generic_IReadOnlyDictionary_string__string__o **ppSVar18;
  Core_Configs_Models_ServiceZonesConfig_o *__this_03;
  System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o **ppSVar19;
  MethodInfo *pMVar20;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar21;
  long lVar22;
  ulong uVar23;
  int32_t *piVar24;
  int *piVar25;
  System_Func_XmlNode__bool__o *pSVar26;
  float fVar27;
  int32_t local_68;
  int32_t local_64;
  
  if ((DAT_04567cfc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ServiceZone>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ServiceZone>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_ServiceZone>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_ServiceZone_TypeInfo);
    FUN_01bab630(&Core_Configs_Models_ServiceZonesConfig_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_EMMFFOGMNAB_<>c_CCKMIFBKMPK__);
    FUN_01bab630(&Method_EMMFFOGMNAB_<>c_NDKGAMBJAKG__);
    FUN_01bab630(&EMMFFOGMNAB_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_7138);
    FUN_01bab630(&StringLiteral_5325);
    FUN_01bab630(&StringLiteral_11323);
    FUN_01bab630(&StringLiteral_2752);
    FUN_01bab630(&StringLiteral_7293);
    FUN_01bab630(&StringLiteral_5326);
    DAT_04567cfc = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_ServiceZone>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_ServiceZone>__ctor__);
  if (MBMJEJKKFOE != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(MBMJEJKKFOE->klass->vtable)._16_get_Attributes.methodPtr)
                       (MBMJEJKKFOE,(MBMJEJKKFOE->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_2752,(MethodInfo *)0x0);
      fVar27 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,1.0,(MethodInfo *)0x0);
      pSVar7 = (System_Collections_IEnumerable_o *)
               (*(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.methodPtr)
                         (MBMJEJKKFOE,(MBMJEJKKFOE->klass->vtable)._13_get_ChildNodes.method);
      pSVar8 = System_Linq_Enumerable__Cast<object>
                         (pSVar7,Method_System_Linq_Enumerable_Cast<XmlNode>__);
      if ((EMMFFOGMNAB_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EMMFFOGMNAB_<>c_TypeInfo);
      }
      pSVar26 = EMMFFOGMNAB_<>c_TypeInfo->static_fields->__9__0_0;
      if (pSVar26 == (System_Func_XmlNode__bool__o *)0x0) {
        if ((EMMFFOGMNAB_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EMMFFOGMNAB_<>c_TypeInfo);
        }
        pSVar26 = (System_Func_XmlNode__bool__o *)
                  thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar9 = &EMMFFOGMNAB_<>c_TypeInfo->static_fields->__9__0_0;
        *ppSVar9 = pSVar26;
        thunk_FUN_01c20e04(ppSVar9,pSVar26);
      }
      pSVar10 = System_Linq_Enumerable__Where<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                           (System_Func_TSource__bool__o *)pSVar26,
                           Method_System_Linq_Enumerable_Where<XmlNode>__);
      if (pSVar10 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
        pSVar21 = pSVar10->klass;
        uVar1._0_1_ = (pSVar21->_2).rank;
        uVar1._1_1_ = (pSVar21->_2).minimumAlignment;
        uVar23 = (ulong)uVar1;
        if (uVar23 != 0) {
          piVar24 = &((pSVar21->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar24 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
              pVVar11 = pSVar21->vtable + *piVar24;
              goto LAB_034a84b8;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        pVVar11 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_034a84b8:
        plVar12 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar23 != 0) {
            piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_034a853c;
              }
              uVar23 = uVar23 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar23 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a853c:
          uVar23 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar23 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_034a8b84;
            lVar22 = *plVar12;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 == 0) goto LAB_034a8b4c;
            piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            goto LAB_034a8b34;
          }
          lVar22 = *plVar12;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar23 != 0) {
            piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar25 + -2) ==
                  System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
                puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_034a859c;
              }
              uVar23 = uVar23 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar23 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01b81914(plVar12,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0)
          ;
LAB_034a859c:
          plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
          if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_7293,(MethodInfo *)0x0);
          iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      thunk_FUN_01bda818(
                                        System_Collections_Generic_Dictionary<string,_string>_TypeInfo
                                        );
          System_Collections_Generic_Dictionary<object,_object>___ctor
                    (__this_01,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__)
          ;
          pSVar7 = (System_Collections_IEnumerable_o *)
                   (**(code **)(*plVar14 + 0x208))(plVar14,*(undefined8 *)(*plVar14 + 0x210));
          pSVar8 = System_Linq_Enumerable__Cast<object>
                             (pSVar7,Method_System_Linq_Enumerable_Cast<XmlNode>__);
          if ((EMMFFOGMNAB_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(EMMFFOGMNAB_<>c_TypeInfo);
          }
          pSVar26 = EMMFFOGMNAB_<>c_TypeInfo->static_fields->__9__0_1;
          if (pSVar26 == (System_Func_XmlNode__bool__o *)0x0) {
            if ((EMMFFOGMNAB_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(EMMFFOGMNAB_<>c_TypeInfo);
            }
            pSVar26 = (System_Func_XmlNode__bool__o *)
                      thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            ppSVar9 = &EMMFFOGMNAB_<>c_TypeInfo->static_fields->__9__0_1;
            *ppSVar9 = pSVar26;
            thunk_FUN_01c20e04(ppSVar9,pSVar26);
          }
          pSVar10 = System_Linq_Enumerable__Where<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                               (System_Func_TSource__bool__o *)pSVar26,
                               Method_System_Linq_Enumerable_Where<XmlNode>__);
          if (pSVar10 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar21 = pSVar10->klass;
          uVar2._0_1_ = (pSVar21->_2).rank;
          uVar2._1_1_ = (pSVar21->_2).minimumAlignment;
          uVar23 = (ulong)uVar2;
          if (uVar23 != 0) {
            piVar24 = &((pSVar21->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar24 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
                pVVar11 = pSVar21->vtable + *piVar24;
                goto LAB_034a8734;
              }
              uVar23 = uVar23 - 1;
              piVar24 = piVar24 + 4;
            } while (uVar23 != 0);
          }
          pVVar11 = (VirtualInvokeData *)
                    FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0)
          ;
LAB_034a8734:
          plVar14 = (long *)(*pVVar11->methodPtr)(pSVar10,pVVar11->method);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
LAB_034a8748:
          lVar22 = *plVar14;
          uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar23 != 0) {
            piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar25 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                goto LAB_034a8794;
              }
              uVar23 = uVar23 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar23 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a8794:
          uVar23 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar23 & 1) != 0) {
            lVar22 = *plVar14;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 != 0) {
              piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar25 + -2) ==
                    System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_034a87f0;
                }
                uVar23 = uVar23 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar23 != 0);
            }
            puVar13 = (undefined8 *)
                      FUN_01b81914(plVar14,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,
                                   0);
LAB_034a87f0:
            plVar15 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_7138,(MethodInfo *)0x0);
            pMVar20 = (MethodInfo *)0x0;
            method_00 = (MethodInfo *)
                        EIABCPKDEBD__JPKEHIBGOEM
                                  (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            bVar3 = EMMFFOGMNAB__NMDCPICIHAL
                              ((EMMFFOGMNAB_o *)method_00,(System_String_o *)method_00,pMVar20);
            if (bVar3) {
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_11323,(MethodInfo *)0x0);
              value = (MethodInfo *)
                      EIABCPKDEBD__JPKEHIBGOEM
                                (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              bVar3 = System_String__IsNullOrWhiteSpace((System_String_o *)value,(MethodInfo *)0x0);
              pMVar20 = method_00;
              if ((bVar3) ||
                 (bVar3 = EMMFFOGMNAB__NMDCPICIHAL
                                    ((EMMFFOGMNAB_o *)0x0,(System_String_o *)value,method_00),
                 pMVar20 = value, bVar3)) {
                if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                System_Collections_Generic_Dictionary<object,_object>__set_Item
                          (__this_01,(Il2CppObject *)method_00,(Il2CppObject *)pMVar20,
                           Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
              }
              else {
                pSVar16 = LOHCAIACKLI__AHFEHPEEIDJ((System_String_o *)value,(MethodInfo *)0x0);
                local_68 = iVar4;
                pIVar17 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_68);
                pSVar16 = System_String__Format
                                    (StringLiteral_5326,(Il2CppObject *)pSVar16,pIVar17,
                                     (MethodInfo *)0x0);
                KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar16,(MethodInfo *)0x0);
              }
            }
            else {
              pSVar16 = LOHCAIACKLI__AHFEHPEEIDJ((System_String_o *)method_00,(MethodInfo *)0x0);
              local_64 = iVar4;
              pIVar17 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
              pSVar16 = System_String__Format
                                  (StringLiteral_5325,(Il2CppObject *)pSVar16,pIVar17,
                                   (MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar16,(MethodInfo *)0x0);
            }
            goto LAB_034a8748;
          }
          if (plVar14 != (long *)0x0) {
            lVar22 = *plVar14;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar23 != 0) {
              piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
                  puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_034a89d8;
                }
                uVar23 = uVar23 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar23 != 0);
            }
            puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_034a89d8:
            (*(code *)*puVar13)(plVar14,puVar13[1]);
          }
          __this_02 = (Core_Configs_Models_ServiceZone_o *)
                      thunk_FUN_01bda818(Core_Configs_Models_ServiceZone_TypeInfo);
          Core_Configs_Models_ServiceZone___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Core_Configs_Models_ServiceZone_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppSVar18 = &(__this_02->fields)._Hosts_k__BackingField;
          *ppSVar18 = (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)__this_01;
          (__this_02->fields)._Id_k__BackingField = iVar4;
          thunk_FUN_01c20e04(ppSVar18,__this_01);
          if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<int,_object>__set_Item
                    (__this_00,(__this_02->fields)._Id_k__BackingField,(Il2CppObject *)__this_02,
                     Method_System_Collections_Generic_Dictionary<int,_ServiceZone>_set_Item__);
        } while( true );
      }
    }
    goto LAB_034a8c7c;
  }
  fVar27 = 1.0;
  goto LAB_034a8b84;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar25 = piVar25 + 4;
    if (uVar23 == 0) break;
LAB_034a8b34:
    if (*(System_IDisposable_c **)(piVar25 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
      goto LAB_034a8b68;
    }
  }
LAB_034a8b4c:
  puVar13 = (undefined8 *)FUN_01b81914(plVar12,System_IDisposable_TypeInfo,0);
LAB_034a8b68:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_034a8b84:
  __this_03 = (Core_Configs_Models_ServiceZonesConfig_o *)
              thunk_FUN_01bda818(Core_Configs_Models_ServiceZonesConfig_TypeInfo);
  Core_Configs_Models_ServiceZonesConfig___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Core_Configs_Models_ServiceZonesConfig_o *)0x0) {
    (__this_03->fields)._AdaptiveTimeoutMultiplier_k__BackingField = fVar27;
    ppSVar19 = &(__this_03->fields)._Zones_k__BackingField;
    *ppSVar19 = (System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o *)__this_00;
    thunk_FUN_01c20e04(ppSVar19,__this_00);
    return __this_03;
  }
LAB_034a8c7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

