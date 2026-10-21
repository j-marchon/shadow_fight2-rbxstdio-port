// PFOMHOLCODE$$COFDAOKFPAB @ RVA 0x334D590

/* WARNING: Removing unreachable block (ram,0x0344da2c) */
/* WARNING: Removing unreachable block (ram,0x0344da78) */
/* WARNING: Removing unreachable block (ram,0x0344dab0) */

void PFOMHOLCODE__COFDAOKFPAB
               (PFOMHOLCODE_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  PFOMHOLCODE_AJMCKEHMEOD_o **ppPVar1;
  byte bVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  LCKCDEKNLOA_o *pLVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  PFOMHOLCODE_AJMCKEHMEOD_o *pPVar14;
  System_String_o **ppSVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_04567a13 & 1) == 0) {
    FUN_01bab630(&PFOMHOLCODE_AJMCKEHMEOD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0344d5f0 to 0354d5f3 has its CatchHandler @ 0344d5f8 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 0344d5f4 to 0354d617 has its CatchHandler @ 0344d3d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344d5f0 with catch @ 0344d5f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344d53c with catch @ 0344d5fc
                        */
    FUN_01bab630(&StringLiteral_12880);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344d528 with catch @ 0344d600
                        */
    FUN_01bab630(&StringLiteral_2804);
    FUN_01bab630(&StringLiteral_9830);
                    /* try { // try from 0344d618 to 0354d61b has its CatchHandler @ 0344d644 */
                    /* try { // try from 0344d61c to 0354d653 has its CatchHandler @ 0344d3d4 */
    FUN_01bab630(&StringLiteral_9795);
    FUN_01bab630(&StringLiteral_7528);
    FUN_01bab630(&StringLiteral_1);
                    /* catch() { ... } // from try @ 0344d618 with catch @ 0344d644 */
    FUN_01bab630(&StringLiteral_12081);
    FUN_01bab630(&StringLiteral_1606);
                    /* try { // try from 0344d654 to 0354d65b has its CatchHandler @ 0344d670 */
                    /* try { // try from 0344d65c to 0354d667 has its CatchHandler @ 0344d3d4 */
    FUN_01bab630(&StringLiteral_1567);
    DAT_04567a13 = 1;
  }
                    /* try { // try from 0344d668 to 0354d66f has its CatchHandler @ 0344d670 */
  auVar16 = thunk_FUN_01bda818(PFOMHOLCODE_AJMCKEHMEOD_TypeInfo);
  pPVar14 = auVar16._0_8_;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0344d654 with catch @ 0344d670
                       catch(type#2 @ 00000000) { ... } // from try @ 0344d668 with catch @ 0344d670
                        */
                    /* try { // try from 0344d674 to 0354d9db has its CatchHandler @ 0344d674
                       catch() { ... } // from try @ 0344d674 with catch @ 0344d674
                       catch() { ... } // from try @ 0344dadc with catch @ 0344d674
                       catch() { ... } // from try @ 0344df6c with catch @ 0344d674
                       catch() { ... } // from try @ 0344e014 with catch @ 0344d674 */
  PFOMHOLCODE_AJMCKEHMEOD___ctor(pPVar14,auVar16._8_8_);
  ppPVar1 = &(__this->fields).KDCIFIDLLKH;
  (__this->fields).KDCIFIDLLKH = pPVar14;
  thunk_FUN_01c20e04(ppPVar1,pPVar14);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pPVar14 = (__this->fields).KDCIFIDLLKH;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_7528,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
      if (pPVar14 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
        ppSVar15 = &(pPVar14->fields).HOKHAHEGMAB;
        *ppSVar15 = pSVar6;
        thunk_FUN_01c20e04(ppSVar15,pSVar6);
        pPVar14 = *ppPVar1;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_12880,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
          if (pPVar14 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
            ppSVar15 = &(pPVar14->fields).ABCHAOKFLGL;
            *ppSVar15 = pSVar6;
            thunk_FUN_01c20e04(ppSVar15,pSVar6);
            pPVar14 = *ppPVar1;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_12081,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
              if (pPVar14 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
                ppSVar15 = &(pPVar14->fields).CMKKMKONDHG;
                *ppSVar15 = pSVar6;
                thunk_FUN_01c20e04(ppSVar15,pSVar6);
                pPVar14 = *ppPVar1;
                pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                   (NPLGCIFGFOK,
                                    (NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_2804,(MethodInfo *)0x0);
                  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1567,(MethodInfo *)0x0);
                  bVar3 = System_String__op_Equality(pSVar6,StringLiteral_1606,(MethodInfo *)0x0);
                  if (pPVar14 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
                    (pPVar14->fields).NAMPJLCANNG = bVar3;
                    plVar7 = (long *)(*(NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.methodPtr)
                                               (NPLGCIFGFOK,
                                                (NPLGCIFGFOK->klass->vtable)._13_get_ChildNodes.
                                                method);
                    if (plVar7 != (long *)0x0) {
                      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))
                                                 (plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
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
                              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                              goto LAB_0344d88c;
                            }
                            uVar12 = uVar12 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar12 != 0);
                        }
                        puVar8 = (undefined8 *)
                                 FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0344d88c:
                        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                        if ((uVar12 & 1) == 0) {
                          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
                          if (plVar7 == (long *)0x0) goto LAB_0344da20;
                          lVar11 = *plVar7;
                          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                          if (uVar12 == 0) goto LAB_0344d9f8;
                    /* try { // try from 0344d9dc to 0354da03 has its CatchHandler @ 0344df88 */
                          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          goto LAB_0344d9e0;
                        }
                        lVar11 = *plVar7;
                        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                        if (uVar12 != 0) {
                          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                              goto LAB_0344d8ec;
                            }
                            uVar12 = uVar12 - 1;
                            piVar13 = piVar13 + 4;
                          } while (uVar12 != 0);
                        }
                        puVar8 = (undefined8 *)
                                 FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0344d8ec:
                        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                        if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
                           (*(System_Xml_XmlNode_c **)
                             (*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01babc64(plVar9);
                        }
                        pSVar6 = (System_String_o *)
                                 (**(code **)(*plVar9 + 0x1b8))
                                           (plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
                        bVar3 = System_String__op_Equality
                                          (pSVar6,StringLiteral_9830,(MethodInfo *)0x0);
                        if (bVar3) {
                          if (*ppPVar1 == (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          (*(__this->klass->vtable)._10_IEFEBMICIHN.methodPtr)
                                    (__this,plVar9,((*ppPVar1)->fields).GBLCPIFNBJJ,
                                     (__this->klass->vtable)._10_IEFEBMICIHN.method);
                        }
                        else {
                          bVar3 = System_String__op_Equality
                                            (pSVar6,StringLiteral_9795,(MethodInfo *)0x0);
                          if (bVar3) {
                            if (*ppPVar1 == (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_01bab8c8();
                            }
                            (*(__this->klass->vtable)._10_IEFEBMICIHN.methodPtr)
                                      (__this,plVar9,((*ppPVar1)->fields).HHMNHKJGJPG,
                                       (__this->klass->vtable)._10_IEFEBMICIHN.method);
                          }
                        }
                      } while( true );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0344daa4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0344d9e0:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0344da14;
    }
  }
LAB_0344d9f8:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0344da14:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0344da20:
                    /* try { // try from 0344da38 to 0354da5f has its CatchHandler @ 0344df84 */
  if ((*ppPVar1 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) &&
     (pLVar10 = ((*ppPVar1)->fields).GBLCPIFNBJJ, pLVar10 != (LCKCDEKNLOA_o *)0x0)) {
    LCKCDEKNLOA__LEOHNCOCKCI(pLVar10,(MethodInfo *)0x0);
    if ((*ppPVar1 != (PFOMHOLCODE_AJMCKEHMEOD_o *)0x0) &&
       (pLVar10 = ((*ppPVar1)->fields).HHMNHKJGJPG, pLVar10 != (LCKCDEKNLOA_o *)0x0)) {
      LCKCDEKNLOA__LEOHNCOCKCI(pLVar10,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0344daa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

