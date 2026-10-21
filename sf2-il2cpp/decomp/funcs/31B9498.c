// IFKFDFGNMMN$$BIDIELKCDJD @ RVA 0x31B9498

/* WARNING: Removing unreachable block (ram,0x032b9918) */

void IFKFDFGNMMN__BIDIELKCDJD
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  JFMLOEMEKLI_array *pJVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  JFMLOEMEKLI_o *__this_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  JFMLOEMEKLI_array **ppJVar12;
  uint uVar13;
  
  if ((DAT_04566bd1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JFMLOEMEKLI___TypeInfo);
    FUN_01bab630(&JFMLOEMEKLI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7135);
    FUN_01bab630(&StringLiteral_6666);
    FUN_01bab630(&StringLiteral_8596);
    FUN_01bab630(&StringLiteral_14777);
    FUN_01bab630(&StringLiteral_5592);
    FUN_01bab630(&StringLiteral_5256);
    DAT_04566bd1 = 1;
  }
  if (((CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) &&
      (plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                  (CJPHHMIHOGD,StringLiteral_6666,
                                   (CJPHHMIHOGD->klass->vtable)._51_get_Item.method),
      plVar3 != (long *)0x0)) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_7135,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0xb,(MethodInfo *)0x0);
    (__this->fields).EPAKCIKBOCC = iVar2;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14777,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,3,(MethodInfo *)0x0);
      (__this->fields).EDGHFNKLFPJ = iVar2;
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5256,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        (__this->fields).HGCDOLJKPKL = iVar2;
        pJVar6 = (JFMLOEMEKLI_array *)
                 FUN_01bab718(JFMLOEMEKLI___TypeInfo,
                              (__this->fields).EDGHFNKLFPJ * (__this->fields).EPAKCIKBOCC);
        ppJVar12 = &(__this->fields).DFIBPGKOKEG;
        *ppJVar12 = pJVar6;
        thunk_FUN_01c20e04(ppJVar12,pJVar6);
        plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                   (CJPHHMIHOGD,StringLiteral_8596,
                                    (CJPHHMIHOGD->klass->vtable)._51_get_Item.method);
        if (plVar3 == (long *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_5592,(MethodInfo *)0x0);
          return;
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar13 = 0;
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_032b971c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b971c:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_032b9864;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032b984c;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_032b977c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b977c:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            pJVar6 = *ppJVar12;
            __this_00 = (JFMLOEMEKLI_o *)thunk_FUN_01bda818(JFMLOEMEKLI_TypeInfo);
            JFMLOEMEKLI___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (pJVar6 == (JFMLOEMEKLI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((__this_00 != (JFMLOEMEKLI_o *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(__this_00,(((pJVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((uint)pJVar6->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pJVar6->m_Items[(int)uVar13] = __this_00;
            thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar13,__this_00);
            uVar13 = uVar13 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_032b984c:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032b9880;
    }
  }
LAB_032b9864:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032b9880:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
}

