// FCNNPBIIEOK$$INOFNLPJAHG @ RVA 0x32AB6E0

/* WARNING: Removing unreachable block (ram,0x033aba18) */

JMDPBFOCHHP_EJICJNOEGGE_o *
FCNNPBIIEOK__INOFNLPJAHG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = LKILNGEECIJ;
  if ((DAT_0456743b & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_EJICJNOEGGE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11343);
    FUN_01bab630(&StringLiteral_9327);
    auVar10 = FUN_01bab630(&StringLiteral_8095);
    DAT_0456743b = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_11343,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar4 == (long *)0x0) {
      return (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0;
    }
    __this = (JMDPBFOCHHP_EJICJNOEGGE_o *)thunk_FUN_01bda818(JMDPBFOCHHP_EJICJNOEGGE_TypeInfo);
    JMDPBFOCHHP_EJICJNOEGGE___ctor(__this,(MethodInfo *)0x0);
    auVar10 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    plVar4 = auVar10._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar10._8_8_;
    auVar10 = auVar2 << 0x40;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_033ab848;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ab848:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return __this;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_033ab9ac;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033ab994;
        }
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_033ab8a8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ab8a8:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
             ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JHMENEKPIBO);
          }
        }
        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(JHMENEKPIBO,(MethodInfo *)0x0);
        if (!bVar3) {
          if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar6,StringLiteral_8095,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (System_Xml_XmlAttributeCollection_o *)
                        (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                  (JHMENEKPIBO,
                                   (JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (__this == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            JMDPBFOCHHP_EJICJNOEGGE__AGACILCHJGI(__this,pSVar6,(MethodInfo *)0x0);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_033ab994:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_033ab9d0;
    }
  }
LAB_033ab9ac:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033ab9d0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return __this;
}

