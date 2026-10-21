// NLPJLHOEAOE$$CDFDLPCIFCC @ RVA 0x32060D8

/* WARNING: Removing unreachable block (ram,0x033064dc) */

bool NLPJLHOEAOE__CDFDLPCIFCC(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  LPAPAMPGDFN_o *__this_00;
  System_String_o *pSVar6;
  System_Xml_XmlDocument_o *pSVar7;
  System_Xml_XmlNode_o *__this_01;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  System_Xml_XmlAttributeCollection_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  undefined8 *puVar13;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar14;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  byte bVar20;
  
  if ((DAT_04566e1f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5549);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_14648);
    FUN_01bab630(&StringLiteral_13974);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566e1f = 1;
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
    method = extraout_x1_02;
  }
  pAVar14 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar14 == (ACHLOMELAJE_o *)0x0) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
    }
    pSVar6 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
    pSVar7 = GIAMPEGMNHE__IBJOMPOLPCC
                       (pSVar6,StringLiteral_21892,0,true,true,false,(MethodInfo *)0x0);
    iVar4 = NLPJLHOEAOE__FFHLPMINJII(__this,method_00);
    if ((pSVar7 != (System_Xml_XmlDocument_o *)0x0) &&
       (__this_01 = (System_Xml_XmlNode_o *)
                    (*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar7,StringLiteral_14648,
                               (pSVar7->klass->vtable)._51_get_Item.method),
       __this_01 != (System_Xml_XmlNode_o *)0x0)) {
      pSVar8 = System_Xml_XmlNode__GetEnumerator(__this_01,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        pSVar15 = pSVar8->klass;
        uVar1._0_1_ = (pSVar15->_2).rank;
        uVar1._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar1;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar9 = pSVar15->vtable + *piVar18;
              goto LAB_033062ec;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_033062ec:
        uVar17 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if ((uVar17 & 1) == 0) {
          bVar20 = 0;
          bVar3 = false;
          goto LAB_03306434;
        }
        pSVar15 = pSVar8->klass;
        uVar2._0_1_ = (pSVar15->_2).rank;
        uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar2;
        if (uVar17 != 0) {
          piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar9 = pSVar15->vtable + (*piVar18 + 1);
              goto LAB_0330634c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1)
        ;
LAB_0330634c:
        plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar20 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar10 + 0x130) < bVar20) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar20 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar10);
        }
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_7230,(MethodInfo *)0x0);
        iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar12,0,(MethodInfo *)0x0);
      } while (iVar4 != iVar5);
      pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
      if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar11,StringLiteral_13974,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(pSVar6,StringLiteral_5549,(MethodInfo *)0x0);
      bVar20 = 1;
LAB_03306434:
      plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
      if (plVar10 != (long *)0x0) {
        lVar16 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0330649c;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0330649c:
        (*(code *)*puVar13)(plVar10,puVar13[1]);
      }
                    /* try { // try from 033064b8 to 03406543 has its CatchHandler @ 033064b8
                       catch() { ... } // from try @ 033064b8 with catch @ 033064b8
                       catch() { ... } // from try @ 0330655c with catch @ 033064b8
                       catch() { ... } // from try @ 033065a0 with catch @ 033064b8
                       catch() { ... } // from try @ 033065d0 with catch @ 033064b8 */
      return (bool)(bVar20 & bVar3);
    }
  }
  else {
    __this_00 = (pAVar14->fields).LMCDOMHENMC;
    if (__this_00 != (LPAPAMPGDFN_o *)0x0) {
      bVar3 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

