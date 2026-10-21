// HFLNADKHFLG$$GFFMEMGCOAG @ RVA 0x33C362C

/* WARNING: Removing unreachable block (ram,0x034c3acc) */
/* WARNING: Removing unreachable block (ram,0x034c3c88) */

void HFLNADKHFLG__GFFMEMGCOAG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  int local_64;
  
  auVar14._8_8_ = method;
  auVar14._0_8_ = LKILNGEECIJ;
  if ((DAT_04567dde & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3160);
    FUN_01bab630(&StringLiteral_7634);
    FUN_01bab630(&StringLiteral_9222);
    FUN_01bab630(&StringLiteral_9225);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    auVar14 = FUN_01bab630(&StringLiteral_7230);
    DAT_04567dde = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    auVar14 = (*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                        (LKILNGEECIJ,StringLiteral_9225,
                         (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    plVar6 = auVar14._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar14._8_8_;
    auVar14 = auVar2 << 0x40;
    if (plVar6 != (long *)0x0) {
      auVar14 = (**(code **)(*plVar6 + 0x468))
                          (plVar6,StringLiteral_9222,*(undefined8 *)(*plVar6 + 0x470));
      plVar6 = auVar14._0_8_;
      local_64 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar14._8_8_;
      auVar14 = auVar3 << 0x40;
      if (plVar6 != (long *)0x0) {
        auVar14 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
        plVar6 = auVar14._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar14._8_8_;
        auVar14 = auVar4 << 0x40;
        if (plVar6 != (long *)0x0) {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            lVar11 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_034c37dc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c37dc:
            uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar12 & 1) == 0) {
              plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
              if (plVar6 == (long *)0x0) {
                return;
              }
              lVar11 = *plVar6;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 == 0) goto LAB_034c3b98;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_034c3b80;
            }
            lVar11 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_034c383c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c383c:
            plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar11 = *plVar8;
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
               (*(System_Xml_XmlNode_c **)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
            plVar8 = (long *)(**(code **)(lVar11 + 0x468))
                                       (plVar8,StringLiteral_7634,*(undefined8 *)(lVar11 + 0x470));
            if (plVar8 != (long *)0x0) {
              plVar8 = (long *)(**(code **)(*plVar8 + 0x208))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x210));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
LAB_034c38bc:
              lVar11 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_034c3908;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c3908:
              uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              if ((uVar12 & 1) != 0) {
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                      goto LAB_034c3968;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar7 = (undefined8 *)
                         FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3968:
                plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(System_Xml_XmlNode_c **)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(plVar9);
                }
                __this = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
                if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                        (__this,StringLiteral_13991,(MethodInfo *)0x0);
                pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
                bVar5 = System_String__op_Equality(pSVar10,StringLiteral_3160,(MethodInfo *)0x0);
                if (bVar5) {
                  pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                  lVar11 = *plVar9;
                  bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                  if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                     (*(System_Xml_XmlElement_c **)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8)
                      != System_Xml_XmlElement_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01babc64(plVar9);
                  }
                  (**(code **)(lVar11 + 0x558))
                            (plVar9,StringLiteral_7230,pSVar10,*(undefined8 *)(lVar11 + 0x560));
                  local_64 = local_64 + 1;
                }
                goto LAB_034c38bc;
              }
              plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
              if (plVar8 != (long *)0x0) {
                lVar11 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_034c3abc;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar7 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_034c3abc:
                (*(code *)*puVar7)(plVar8,puVar7[1]);
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar14._0_8_,auVar14._8_8_);
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_034c3b80:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_034c3bb4;
    }
  }
LAB_034c3b98:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_034c3bb4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

