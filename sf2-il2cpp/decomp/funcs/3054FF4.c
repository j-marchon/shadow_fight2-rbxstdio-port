// NHBBOEHHEKG$$HOIKEDLOBJE @ RVA 0x3054FF4

/* WARNING: Removing unreachable block (ram,0x031565dc) */
/* WARNING: Removing unreachable block (ram,0x031565c4) */
/* WARNING: Removing unreachable block (ram,0x0315659c) */
/* WARNING: Removing unreachable block (ram,0x0315658c) */
/* WARNING: Removing unreachable block (ram,0x031565b4) */

void NHBBOEHHEKG__HOIKEDLOBJE
               (NHBBOEHHEKG_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,GMGALNFPLPA_o *HPACPFLKHPK,
               System_String_o *HGDBMAGKALN,MEHKKHFBNLM_o *DPOMBGDLHCJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *s;
  GMGALNFPLPA_o *DMMLPNCPPHD;
  MGNDHCBAPEN_float__float__o *pMVar6;
  long *plVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  MEHKKHFBNLM_o *method_00;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  method_00 = DPOMBGDLHCJ;
  if ((DAT_04565e6d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12140);
    FUN_01bab630(&StringLiteral_10208);
    FUN_01bab630(&StringLiteral_12352);
    FUN_01bab630(&StringLiteral_12292);
    FUN_01bab630(&StringLiteral_13916);
    FUN_01bab630(&StringLiteral_9994);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_9807);
    FUN_01bab630(&StringLiteral_9995);
    FUN_01bab630(&StringLiteral_11428);
    FUN_01bab630(&StringLiteral_11078);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_5616);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_11079);
    DAT_04565e6d = 1;
  }
  if ((ELOCKFLGKNO == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03155170:
  do {
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_031551bc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031551bc:
    uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar12 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_031562dc;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      goto LAB_031562c4;
    }
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0315521c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315521c:
    JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
       ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JHMENEKPIBO);
    }
    s = (System_String_o *)
        (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                  (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
    uVar3 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
    if (uVar3 < 0x9b72ef05) {
      if (uVar3 < 0xa6b8021) {
        if (uVar3 == 0x232777f) {
          bVar2 = System_String__op_Equality(s,StringLiteral_11428,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_12352,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (HPACPFLKHPK->fields).CMMGIKGFNOF = fVar15;
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_9807,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            GMGALNFPLPA__EJCNFEDPCOP(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
            plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                       (JHMENEKPIBO,
                                        (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0))
            ;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_03155d90;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155d90:
              uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if ((uVar12 & 1) == 0) goto LAB_03155ee4;
              lVar11 = *plVar7;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_03155df0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03155df0:
              plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
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
                                  (pSVar9,StringLiteral_10208,(MethodInfo *)0x0);
              fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_14694,(MethodInfo *)0x0);
              fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
              if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar9,StringLiteral_5616,(MethodInfo *)0x0);
              fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
              GMGALNFPLPA__CGDANJBIKGL(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
            } while( true );
          }
        }
        else if ((uVar3 == 0xa6b8020) &&
                (bVar2 = System_String__op_Equality(s,StringLiteral_12292,(MethodInfo *)0x0), bVar2)
                ) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_15021,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03156578 to 032565cf has its CatchHandler @ 0315662c */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_15134,(MethodInfo *)0x0);
          fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GMGALNFPLPA__ICBFBLDJMIM(HPACPFLKHPK,fVar15,fVar16,(MethodInfo *)0x0);
        }
      }
      else if (uVar3 == 0x8cb9ad17) {
        bVar2 = System_String__op_Equality(s,StringLiteral_13916,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_9807,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GMGALNFPLPA__IFHBIJJJPEG(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
          plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
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
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_03155aa8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155aa8:
            uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar12 & 1) == 0) goto LAB_03155bfc;
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_03155b08;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03155b08:
            plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
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
                                (pSVar9,StringLiteral_10208,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_14694,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_5616,(MethodInfo *)0x0);
            fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            GMGALNFPLPA__FHPMJKKELEN(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
          } while( true );
        }
      }
      else if ((uVar3 == 0x9b72ef04) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_9994,(MethodInfo *)0x0), bVar2)) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9807,(MethodInfo *)0x0);
        fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
        if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GMGALNFPLPA__IEJFHDGIKJG(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
        plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (JHMENEKPIBO,
                                    (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
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
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03155440;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03155440:
          uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if ((uVar12 & 1) == 0) goto LAB_031556a4;
          lVar11 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_031554a0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_031554a0:
          plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
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
                              (pSVar9,StringLiteral_10208,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_14694,(MethodInfo *)0x0);
          fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_5616,(MethodInfo *)0x0);
          fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          GMGALNFPLPA__DEPAPJCFOLJ(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
        } while( true );
      }
    }
    else if (uVar3 < 0xa1c5e65b) {
      if (uVar3 == 0x9c72f097) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9995,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (pSVar9,StringLiteral_9807,(MethodInfo *)0x0);
          fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
          if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GMGALNFPLPA__JDHHCOGPMOM(HPACPFLKHPK,fVar15,(MethodInfo *)0x0);
          plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (JHMENEKPIBO,
                                      (JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
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
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_031557fc;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_031557fc:
            uVar12 = (*(code *)*puVar5)(plVar7,puVar5[1]);
            if ((uVar12 & 1) == 0) goto LAB_03155950;
            lVar11 = *plVar7;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0315585c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0315585c:
            plVar8 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
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
                                (pSVar9,StringLiteral_10208,(MethodInfo *)0x0);
            fVar15 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_14694,(MethodInfo *)0x0);
            fVar16 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
            if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                                (pSVar9,StringLiteral_5616,(MethodInfo *)0x0);
            fVar14 = EIABCPKDEBD__GICIEKCGOHA(pSVar10,0.0,(MethodInfo *)0x0);
            GMGALNFPLPA__KPPJNBBDFAL(HPACPFLKHPK,fVar15,fVar16,fVar14,(MethodInfo *)0x0);
          } while( true );
        }
      }
      else if ((uVar3 == 0xa1c5e65a) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_12140,(MethodInfo *)0x0), bVar2))
      {
        DMMLPNCPPHD = NHBBOEHHEKG__IPDANBHLKLG
                                (__this,JHMENEKPIBO,HGDBMAGKALN,DPOMBGDLHCJ,(MethodInfo *)method_00)
        ;
        if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GMGALNFPLPA__ACHCKILJGJK(HPACPFLKHPK,DMMLPNCPPHD,(MethodInfo *)0x0);
      }
    }
    else if (uVar3 == 0xde216af0) {
      bVar2 = System_String__op_Equality(s,StringLiteral_11079,(MethodInfo *)0x0);
      if (bVar2) {
        pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(JHMENEKPIBO,0.0,0.0,(MethodInfo *)0x0);
        if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GMGALNFPLPA__HPONNCNPPNC(HPACPFLKHPK,pMVar6,(MethodInfo *)0x0);
      }
    }
    else if ((uVar3 == 0xdf216c83) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_11078,(MethodInfo *)0x0), bVar2)) {
      pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(JHMENEKPIBO,0.0,0.0,(MethodInfo *)0x0);
      if (HPACPFLKHPK == (GMGALNFPLPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      GMGALNFPLPA__HNODMGDOOAI(HPACPFLKHPK,pMVar6,(MethodInfo *)0x0);
    }
  } while( true );
LAB_03155950:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_031559d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_031559d0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_03155bfc:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155c7c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155c7c:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_031556a4:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155724;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155724:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
LAB_03155ee4:
  plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03155f64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03155f64:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  goto LAB_03155170;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_031562c4:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_031562f8;
    }
  }
LAB_031562dc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031562f8:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

