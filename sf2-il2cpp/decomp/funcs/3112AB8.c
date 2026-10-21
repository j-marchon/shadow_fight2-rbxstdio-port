// PCKJEMMFMKL$$LIHIHHFHAGM @ RVA 0x3112AB8

/* WARNING: Removing unreachable block (ram,0x03212dac) */

void PCKJEMMFMKL__LIHIHHFHAGM
               (PCKJEMMFMKL_o *__this,System_Collections_Generic_IEnumerable_XmlNode__o *OBDMHHJBLKL
               ,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *AFKICLAFDKC;
  PCKJEMMFMKL_OMJBBKMFKIJ_o *pPVar10;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar16;
  
  if ((DAT_04566591 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_13991);
    DAT_04566591 = 1;
  }
  if (OBDMHHJBLKL == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = OBDMHHJBLKL->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar13 = (ulong)uVar1;
  if (uVar13 != 0) {
    piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
        pVVar4 = pSVar11->vtable + *piVar14;
        goto LAB_03212b88;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(OBDMHHJBLKL,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_03212b88:
  plVar5 = (long *)(*pVVar4->methodPtr)(OBDMHHJBLKL,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03212c10;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03212c10:
    uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03212d54;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar15 + -2) ==
            System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03212c6c;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_03212c6c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
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
                       (pSVar8,StringLiteral_13991,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    AFKICLAFDKC = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
    iVar3 = OMMDIMHOHLK__POBLIPFPGPD(AFKICLAFDKC,(MethodInfo *)0x0);
    bVar2 = OMMDIMHOHLK__JKOMBMIBMBL(iVar3,(MethodInfo *)0x0);
    if ((bVar2) &&
       (pPVar10 = PCKJEMMFMKL__NNAIMOIPHEE(__this,iVar3,method_00),
       pPVar10 != (PCKJEMMFMKL_OMJBBKMFKIJ_o *)0x0)) {
      pSVar8 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar8,StringLiteral_8868,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,1,(MethodInfo *)0x0);
      CVar16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar3,(MethodInfo *)0x0);
      (pPVar10->fields).HFBHMJBLLOI.fields = CVar16;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03212d70;
    }
  }
LAB_03212d54:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03212d70:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

