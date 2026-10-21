// FCNNPBIIEOK$$FKKLOIFLEOG @ RVA 0x32AE264

/* WARNING: Removing unreachable block (ram,0x033ae69c) */

JMDPBFOCHHP_KJLILNPHJHI_o *
FCNNPBIIEOK__FKKLOIFLEOG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int32_t iVar4;
  long *plVar5;
  JMDPBFOCHHP_KJLILNPHJHI_o *__this;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar7;
  JMDPBFOCHHP_BGJBFFKJHHD_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = method;
  auVar13._0_8_ = LKILNGEECIJ;
  if ((DAT_0456743e & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_BGJBFFKJHHD_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_set_Item__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_KJLILNPHJHI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3538);
    FUN_01bab630(&StringLiteral_2714);
    FUN_01bab630(&StringLiteral_2720);
    FUN_01bab630(&StringLiteral_9327);
    auVar13 = FUN_01bab630(&StringLiteral_7230);
    DAT_0456743e = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar5 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_2720,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar5 == (long *)0x0) {
      return (JMDPBFOCHHP_KJLILNPHJHI_o *)0x0;
    }
    __this = (JMDPBFOCHHP_KJLILNPHJHI_o *)thunk_FUN_01bda818(JMDPBFOCHHP_KJLILNPHJHI_TypeInfo);
    JMDPBFOCHHP_KJLILNPHJHI___ctor(__this,(MethodInfo *)0x0);
    auVar13 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    plVar5 = auVar13._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar13._8_8_;
    auVar13 = auVar2 << 0x40;
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_033ae410;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ae410:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) {
            return __this;
          }
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_033ae61c;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_033ae604;
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_033ae470;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ae470:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
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
          pSVar7 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar7,StringLiteral_2714,(MethodInfo *)0x0);
          if (bVar3) {
            __this_00 = (JMDPBFOCHHP_BGJBFFKJHHD_o *)
                        thunk_FUN_01bda818(JMDPBFOCHHP_BGJBFFKJHHD_TypeInfo);
            JMDPBFOCHHP_BGJBFFKJHHD___ctor(__this_00,(MethodInfo *)0x0);
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_9327,(MethodInfo *)0x0);
            pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,(System_String_o *)0x0,(MethodInfo *)0x0);
            if (__this_00 == (JMDPBFOCHHP_BGJBFFKJHHD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (__this_00->fields).JIJLBFGKNJK = pSVar7;
            thunk_FUN_01c20e04();
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_7230,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            (__this_00->fields).IGLHCNLNIPK = iVar4;
            pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar8,StringLiteral_3538,(MethodInfo *)0x0);
            iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar9,0,(MethodInfo *)0x0);
            (__this_00->fields).DBDIDOBPFMC = iVar4;
            if (__this == (JMDPBFOCHHP_KJLILNPHJHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields).EHGOHNHDKPP;
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Collections_Generic_Dictionary<object,_object>__set_Item
                      (__this_01,(Il2CppObject *)(__this_00->fields).JIJLBFGKNJK,
                       (Il2CppObject *)__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BGJBFFKJHHD>_set_Item__
                      );
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar13._0_8_,auVar13._8_8_);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_033ae604:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033ae640;
    }
  }
LAB_033ae61c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033ae640:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return __this;
}

