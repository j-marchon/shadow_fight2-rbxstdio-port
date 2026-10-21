// IIHMKHNLJKD$$BKCFPHNEONL @ RVA 0x31D1474

/* WARNING: Removing unreachable block (ram,0x032d1834) */

void IIHMKHNLJKD__BKCFPHNEONL
               (IIHMKHNLJKD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *value;
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar11;
  int64_t CJNHFNHJHPE;
  undefined8 *puVar12;
  MethodInfo *method_00;
  System_Collections_IEnumerator_c *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0 [2];
  
  if ((DAT_04566cac & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Clear__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4834);
    FUN_01bab630(&StringLiteral_13814);
    FUN_01bab630(&StringLiteral_4830);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566cac = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).FODILKIIDCE;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Clear
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Clear__);
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar6 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar13 = pSVar6->klass;
    uVar2._0_1_ = (pSVar13->_2).rank;
    uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar13->vtable + *piVar16;
          goto LAB_032d15c0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d15c0:
    uVar15 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar15 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_032d17c0;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    pSVar13 = pSVar6->klass;
    uVar3._0_1_ = (pSVar13->_2).rank;
    uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
    uVar15 = (ulong)uVar3;
    if (uVar15 != 0) {
      piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar13->vtable + (*piVar16 + 1);
          goto LAB_032d1620;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d1620:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar8);
    }
    pSVar9 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar9,StringLiteral_7230,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    value = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar4) {
      pIVar11 = IIHMKHNLJKD__FFKFEHOIJCG(__this,value,method_00);
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_4834,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      if (pIVar11 == (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (pIVar11->fields).MNPHGAIJEGI.fields = CVar18;
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_4830,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      (pIVar11->fields).ADHFHEJFJPK.fields = CVar18;
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_13814,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__HNIGPBMJJOL(pSVar10,0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                (local_a0,CJNHFNHJHPE,(MethodInfo *)0x0);
      (pIVar11->fields).IGLJEOFJJHE.fields.hiddenValue = local_a0[0].fields.hiddenValue;
      (pIVar11->fields).IGLJEOFJJHE.fields.currentCryptoKey = local_a0[0].fields.currentCryptoKey;
      (pIVar11->fields).IGLJEOFJJHE.fields.fakeValueActive = local_a0[0].fields.fakeValueActive;
      (pIVar11->fields).IGLJEOFJJHE.fields.inited = local_a0[0].fields.inited;
      *(undefined6 *)&(pIVar11->fields).IGLJEOFJJHE.fields.field_0x1a = local_a0[0].fields._26_6_;
      (pIVar11->fields).IGLJEOFJJHE.fields.fakeValue = local_a0[0].fields.fakeValue;
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_032d17dc;
    }
  }
LAB_032d17c0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d17dc:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  return;
}

