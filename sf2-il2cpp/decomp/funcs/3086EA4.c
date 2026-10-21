// FMOACLJMJKF$$PDPCAGPGGOE @ RVA 0x3086EA4

/* WARNING: Removing unreachable block (ram,0x0318755c) */
/* WARNING: Removing unreachable block (ram,0x0318754c) */
/* WARNING: Removing unreachable block (ram,0x0318737c) */

void FMOACLJMJKF__PDPCAGPGGOE
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *a_00;
  long *plVar7;
  long *plVar8;
  System_String_o *b;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  
  if ((DAT_0456602a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12811);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12818);
    FUN_01bab630(&StringLiteral_12807);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456602a = 1;
  }
  if (((((KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) ||
        (plVar3 = (long *)(*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                                    (KENFFDHLNDA,StringLiteral_12818,
                                     (KENFFDHLNDA->klass->vtable)._51_get_Item.method),
        plVar3 == (long *)0x0)) ||
       (JHMENEKPIBO = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar3 + 0x468))
                                (plVar3,StringLiteral_12811,*(undefined8 *)(*plVar3 + 0x470)),
       JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0)) ||
      ((plVar3 = (long *)(*(JGHIJMJNJLE->klass->vtable)._51_get_Item.methodPtr)
                                   (JGHIJMJNJLE,StringLiteral_12818,
                                    (JGHIJMJNJLE->klass->vtable)._51_get_Item.method),
       plVar3 == (long *)0x0 ||
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                   (plVar3,StringLiteral_12811,*(undefined8 *)(*plVar3 + 0x470)),
       plVar3 == (long *)0x0)))) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03187048;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03187048:
    uVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03187458;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_031870a8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031870a8:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (JOHFLOEABJL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    a = (System_String_o *)
        (*(JOHFLOEABJL->klass->vtable)._8_unknown.methodPtr)
                  (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_unknown.method);
    bVar2 = System_String__op_Inequality(a,StringLiteral_12807,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(JOHFLOEABJL->klass->vtable)._16_get_Attributes.methodPtr)
                         (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
      a_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
      plVar7 = (long *)(*(KENFFDHLNDA->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (KENFFDHLNDA,(KENFFDHLNDA->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        do {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_031871cc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_031871cc:
          uVar10 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          uVar12 = uVar10 & 0xffffffff;
          if ((uVar10 & 1) == 0) {
            uVar12 = 0;
            goto LAB_031872ec;
          }
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03187230;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03187230:
          plVar8 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
          if (plVar8 != (long *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(plVar8);
            }
          }
          bVar2 = System_String__op_Inequality(a,StringLiteral_12807,(MethodInfo *)0x0);
        } while (bVar2);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
        b = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(a_00,b,(MethodInfo *)0x0);
      } while (!bVar2);
LAB_031872ec:
      plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_03187360;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03187360:
        (*(code *)*puVar4)(plVar7,puVar4[1]);
      }
      if ((uVar12 & 1) == 0) {
        EIABCPKDEBD__DGPOFACHGMP(JHMENEKPIBO,JOHFLOEABJL,(MethodInfo *)0x0);
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03187474;
    }
  }
LAB_03187458:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03187474:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

