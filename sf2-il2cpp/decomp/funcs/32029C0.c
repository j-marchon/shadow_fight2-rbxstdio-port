// NLPJLHOEAOE$$AFDFEKELDMO @ RVA 0x32029C0

/* WARNING: Removing unreachable block (ram,0x03302dc8) */
/* WARNING: Removing unreachable block (ram,0x03302d4c) */

void NLPJLHOEAOE__AFDFEKELDMO(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  ACHLOMELAJE_o *pAVar5;
  int64_t iVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  int64_t iVar9;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Xml_XmlDocument_o *pSVar10;
  long lVar11;
  System_Xml_XmlNode_c *pSVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_04566e3e & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14648);
    FUN_01bab630(&StringLiteral_7230);
    DAT_04566e3e = 1;
    method = extraout_x1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo,method);
  }
  bVar2 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (!bVar2) {
    return;
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    iVar6 = ACHLOMELAJE__IMLCNMCBEEN(pAVar5,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
      iVar3 = NLPJLHOEAOE__FFHLPMINJII(__this,method_00);
      pSVar10 = (__this->fields).OFIPPHJGMNK;
      if (pSVar10 != (System_Xml_XmlDocument_o *)0x0) {
        plVar7 = (long *)(*(pSVar10->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar10,StringLiteral_14648,
                                    (pSVar10->klass->vtable)._51_get_Item.method);
        if (plVar7 != (long *)0x0) {
          plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
          if (plVar7 == (long *)0x0) goto LAB_03302dc0;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar11 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_03302bd4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03302bd4:
            uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            if ((uVar13 & 1) == 0) {
              pAVar5 = (ACHLOMELAJE_o *)0x0;
              goto LAB_03302cc8;
            }
            lVar11 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_03302c34;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03302c34:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
            if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar12 = AHDGNOJPPIB->klass;
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar12->_2).naturalAligment < bVar1) ||
               ((pSVar12->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB);
            }
            __this_00 = (System_Xml_XmlAttributeCollection_o *)
                        (*(pSVar12->vtable)._16_get_Attributes.methodPtr)
                                  (AHDGNOJPPIB,(pSVar12->vtable)._16_get_Attributes.method);
            if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this_00,StringLiteral_7230,(MethodInfo *)0x0);
            method_01 = (MethodInfo *)0x0;
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
          } while (iVar3 != iVar4);
          pAVar5 = NLPJLHOEAOE__MCAIOFGHPKH(__this,AHDGNOJPPIB,method_01);
LAB_03302cc8:
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 != (long *)0x0) {
            lVar11 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
                  puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_03302d34;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03302d34:
            (*(code *)*puVar8)(plVar7,puVar8[1]);
          }
          if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
             (iVar9 = ACHLOMELAJE__IMLCNMCBEEN(pAVar5,(MethodInfo *)0x0),
             (float)iVar9 == (float)iVar6)) {
            ACHLOMELAJE__HEHFNBKGJLP(pAVar5,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
  }
LAB_03302dc0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

