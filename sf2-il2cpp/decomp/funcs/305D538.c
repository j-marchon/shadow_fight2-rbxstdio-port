// ACHLOMELAJE$$KKGJHKGPNBM @ RVA 0x305D538

/* WARNING: Removing unreachable block (ram,0x0315da74) */

void ACHLOMELAJE__KKGJHKGPNBM(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  AJDHCLBLGMI_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar11;
  int64_t iVar12;
  MethodInfo *extraout_x1;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  AJDHCLBLGMI_Fields *pAVar16;
  System_Collections_Generic_Dictionary_object__object__o *pSVar17;
  undefined1 auVar18 [16];
  
  if ((DAT_04565ea3 & 1) == 0) {
    FUN_01bab630(&AJDHCLBLGMI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_ContainsKey__);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<DPJEINFKCGA>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10587);
    FUN_01bab630(&StringLiteral_8558);
    FUN_01bab630(&StringLiteral_22386);
    FUN_01bab630(&StringLiteral_12357);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_2818);
    FUN_01bab630(&StringLiteral_22391);
    FUN_01bab630(&StringLiteral_12392);
    DAT_04565ea3 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).BEODHLHLHDD;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    auVar18 = (*(pSVar4->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._13_get_ChildNodes.method);
    method = auVar18._8_8_;
    plVar5 = auVar18._0_8_;
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0315d6c8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0315d6c8:
        uVar14 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar14 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar5;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_0315d9f8;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0315d9e0;
        }
        lVar13 = *plVar5;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0315d728;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315d728:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 != (long *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar7);
          }
        }
        __this_00 = (AJDHCLBLGMI_o *)thunk_FUN_01bda818(AJDHCLBLGMI_TypeInfo);
        AJDHCLBLGMI___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                            (pSVar10,(MethodInfo *)0x0);
        if (__this_00 == (AJDHCLBLGMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar16 = &__this_00->fields;
        pAVar16->JIJLBFGKNJK = pCVar11;
        thunk_FUN_01c20e04(pAVar16);
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_12392,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar9,0,Method_EIABCPKDEBD_CKHGJBKDIID<DPJEINFKCGA>__);
        (__this_00->fields).ICBBFDJOHHF = iVar3;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_10587,(MethodInfo *)0x0);
        iVar12 = EIABCPKDEBD__HNIGPBMJJOL(pSVar9,0,(MethodInfo *)0x0);
        (__this_00->fields).PJHEOJENEGI = iVar12;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_2818,(MethodInfo *)0x0);
        bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar9,false,(MethodInfo *)0x0);
        (__this_00->fields).HNLMCGFEAJB = bVar2;
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_12357,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
        (__this_00->fields).MMLIJBKEBHC = iVar3;
        if ((iVar3 == 0) && (1 < (__this_00->fields).ICBBFDJOHHF + 1U)) {
          pSVar10 = System_String__Format
                              (StringLiteral_22386,StringLiteral_8558,
                               (Il2CppObject *)pAVar16->JIJLBFGKNJK,(MethodInfo *)0x0);
          KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
          (__this_00->fields).MMLIJBKEBHC = 1;
        }
        pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).DINIOGDLEHP;
        pSVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                            (pAVar16->JIJLBFGKNJK,(MethodInfo *)0x0);
        if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (pSVar17,(Il2CppObject *)pSVar10,
                           Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_ContainsKey__
                          );
        if (bVar2) {
          pSVar10 = System_String__Format
                              (StringLiteral_22391,StringLiteral_8558,
                               (Il2CppObject *)pAVar16->JIJLBFGKNJK,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
        }
        else {
          pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).DINIOGDLEHP;
          pSVar10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                              (pAVar16->JIJLBFGKNJK,(MethodInfo *)0x0);
          if (pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar17,(Il2CppObject *)pSVar10,(Il2CppObject *)__this_00,
                     Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_Add__);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0315d9e0:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0315da14;
    }
  }
LAB_0315d9f8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0315da14:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

