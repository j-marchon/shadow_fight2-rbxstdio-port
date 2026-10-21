// MGJNNCKDJCP$$OPANNCEJFML @ RVA 0x35C4148

/* WARNING: Removing unreachable block (ram,0x036c454c) */

void MGJNNCKDJCP__OPANNCEJFML
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *KGLJICLJHEL;
  HEFOANCOHDC_o *pHVar8;
  KINHGEBKOEG_o *__this_00;
  System_String_o **ppSVar9;
  MGJNNCKDJCP_o *__this_01;
  NFGLEDADCGL_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  long lVar10;
  ACHLOMELAJE_o *pAVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04568f5c & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KINHGEBKOEG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_14589);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04568f5c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_036c4288;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c4288:
        uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar12 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_036c44d8;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_036c44c0;
        }
        lVar10 = *plVar4;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_036c42e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c42e8:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,StringLiteral_1,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_8409,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method
                           );
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar6,StringLiteral_14589,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        uVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar7,0,(MethodInfo *)0x0);
        pHVar8 = MGJNNCKDJCP__KGOJHBCOGBA((MGJNNCKDJCP_o *)(ulong)uVar3,KGLJICLJHEL,method_00);
        if (pHVar8 != (HEFOANCOHDC_o *)0x0) {
          __this_00 = (KINHGEBKOEG_o *)thunk_FUN_01bda818(KINHGEBKOEG_TypeInfo);
          KINHGEBKOEG___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (KINHGEBKOEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppSVar9 = &(__this_00->fields).JIJLBFGKNJK;
          *ppSVar9 = KGLJICLJHEL;
          __this_01 = (MGJNNCKDJCP_o *)thunk_FUN_01c20e04(ppSVar9,KGLJICLJHEL);
          (__this_00->fields).NOPGBJNLFHM = iVar2;
          (__this_00->fields).AEIJFFBOBCP = uVar3;
          MGJNNCKDJCP__BIMCJEPIKFI(__this_01,AHDGNOJPPIB_00,__this_00,in_x3);
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
          pAVar11 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar11 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_02 = (pAVar11->fields).CKJAGLDEMAE;
          if (__this_02 == (NFGLEDADCGL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          NFGLEDADCGL__DMCFMJJKIDN(__this_02,__this_00,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_036c44c0:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_036c44f4;
    }
  }
LAB_036c44d8:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036c44f4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

