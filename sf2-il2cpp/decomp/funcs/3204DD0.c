// NLPJLHOEAOE$$JKLPNLPAODO @ RVA 0x3204DD0

/* WARNING: Removing unreachable block (ram,0x03305104) */
/* WARNING: Removing unreachable block (ram,0x03305374) */

System_Xml_XmlNode_o *
NLPJLHOEAOE__JKLPNLPAODO
          (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *FPFMEBABIJB,System_Xml_XmlNode_o *AHDGNOJPPIB
          ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_String_o *name;
  System_String_o *b;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *a;
  undefined8 uVar8;
  System_Xml_XmlNode_o *pSVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04566e18 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_3544);
    FUN_01bab630(&StringLiteral_10239);
    __this = (NLPJLHOEAOE_o *)FUN_01bab630(&StringLiteral_3215);
    DAT_04566e18 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    __this = (NLPJLHOEAOE_o *)0x0;
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03304ee8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
                    /* try { // try from 03304ec8 to 03405073 has its CatchHandler @ 03304ec8
                       catch() { ... } // from try @ 03304ec8 with catch @ 03304ec8
                       catch() { ... } // from try @ 033050fc with catch @ 03304ec8
                       catch() { ... } // from try @ 033051d4 with catch @ 03304ec8
                       catch() { ... } // from try @ 0330525c with catch @ 03304ec8
                       catch() { ... } // from try @ 03305268 with catch @ 03304ec8 */
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03304ee8:
        uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar11 & 1) == 0) {
                    /* try { // try from 03305094 to 0340509b has its CatchHandler @ 033051a4 */
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) goto LAB_033050f8;
                    /* try { // try from 0330509c to 034050a3 has its CatchHandler @ 033051a0 */
          lVar10 = *plVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 033050ac to 034050b7 has its CatchHandler @ 0330519c */
          if (uVar11 == 0) goto LAB_033050d0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_033050b8;
        }
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03304f48;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03304f48:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar5);
        }
        name = (System_String_o *)
               (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        b = (System_String_o *)
            (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if (FPFMEBABIJB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                 (*(FPFMEBABIJB->klass->vtable)._16_get_Attributes.methodPtr)
                           (FPFMEBABIJB,(FPFMEBABIJB->klass->vtable)._16_get_Attributes.method);
        if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar6,name,(MethodInfo *)0x0);
        if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
          pSVar7 = EIABCPKDEBD__HBGAGFJBGKD(FPFMEBABIJB,name,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03305074 to 0340507b has its CatchHandler @ 03305194 */
          (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar7,b,(pSVar7->klass->vtable)._10_set_Value.method);
        }
        else {
          pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                   (*(FPFMEBABIJB->klass->vtable)._16_get_Attributes.methodPtr)
                             (FPFMEBABIJB,(FPFMEBABIJB->klass->vtable)._16_get_Attributes.method);
          if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar6,name,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          a = (System_String_o *)
              (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
          bVar2 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar6 = (System_Xml_XmlAttributeCollection_o *)
                     (*(FPFMEBABIJB->klass->vtable)._16_get_Attributes.methodPtr)
                               (FPFMEBABIJB,(FPFMEBABIJB->klass->vtable)._16_get_Attributes.method);
            if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar6,name,(MethodInfo *)0x0);
            if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar7,b,(pSVar7->klass->vtable)._10_set_Value.method);
          }
        }
      } while( true );
    }
  }
LAB_0330536c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_033050b8:
                    /* try { // try from 033050b8 to 034050bf has its CatchHandler @ 03305198 */
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033050ec;
    }
  }
LAB_033050d0:
                    /* try { // try from 033050d0 to 034050e7 has its CatchHandler @ 03305190 */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033050ec:
                    /* try { // try from 033050f4 to 034050fb has its CatchHandler @ 0330518c */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_033050f8:
                    /* try { // try from 033050fc to 034051bb has its CatchHandler @ 03304ec8 */
  __this = (NLPJLHOEAOE_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_8116,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (__this != (NLPJLHOEAOE_o *)0x0) {
    if (FPFMEBABIJB == (System_Xml_XmlNode_o *)0x0) goto LAB_0330536c;
    lVar10 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                       (FPFMEBABIJB,StringLiteral_8116,
                        (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
    if (lVar10 != 0) {
      uVar8 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                        (FPFMEBABIJB,StringLiteral_8116,
                         (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
      (*(FPFMEBABIJB->klass->vtable)._25_RemoveChild.methodPtr)
                (FPFMEBABIJB,uVar8,(FPFMEBABIJB->klass->vtable)._25_RemoveChild.method);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033050f4 with catch @ 0330518c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033050d0 with catch @ 03305190
                        */
    pSVar9 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_8116,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03305074 with catch @ 03305194
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033050b8 with catch @ 03305198
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033050ac with catch @ 0330519c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0330509c with catch @ 033051a0
                        */
    EIABCPKDEBD__DGPOFACHGMP(FPFMEBABIJB,pSVar9,(MethodInfo *)0x0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03305094 with catch @ 033051a4
                        */
                    /* try { // try from 033051bc to 034051d3 has its CatchHandler @ 03305260 */
  __this = (NLPJLHOEAOE_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_10239,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (__this != (NLPJLHOEAOE_o *)0x0) {
    if (FPFMEBABIJB == (System_Xml_XmlNode_o *)0x0) goto LAB_0330536c;
                    /* try { // try from 033051d4 to 0340524b has its CatchHandler @ 03304ec8 */
    lVar10 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                       (FPFMEBABIJB,StringLiteral_10239,
                        (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
    if (lVar10 != 0) {
      uVar8 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                        (FPFMEBABIJB,StringLiteral_10239,
                         (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
      (*(FPFMEBABIJB->klass->vtable)._25_RemoveChild.methodPtr)
                (FPFMEBABIJB,uVar8,(FPFMEBABIJB->klass->vtable)._25_RemoveChild.method);
    }
    pSVar9 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10239,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    EIABCPKDEBD__DGPOFACHGMP(FPFMEBABIJB,pSVar9,(MethodInfo *)0x0);
  }
                    /* try { // try from 0330524c to 0340525b has its CatchHandler @ 03305260 */
                    /* try { // try from 0330525c to 03405263 has its CatchHandler @ 03304ec8 */
  __this = (NLPJLHOEAOE_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_3215,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    /* catch() { ... } // from try @ 033051bc with catch @ 03305260
                       catch() { ... } // from try @ 0330524c with catch @ 03305260 */
  if (__this != (NLPJLHOEAOE_o *)0x0) {
                    /* try { // try from 03305264 to 03405267 has its CatchHandler @ 03305270 */
    if (FPFMEBABIJB == (System_Xml_XmlNode_o *)0x0) goto LAB_0330536c;
                    /* try { // try from 03305268 to 03405273 has its CatchHandler @ 03304ec8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03305264 with catch @ 03305270
                        */
                    /* try { // try from 03305274 to 03405377 has its CatchHandler @ 03305274
                       catch() { ... } // from try @ 03305274 with catch @ 03305274
                       catch() { ... } // from try @ 033055d0 with catch @ 03305274
                       catch() { ... } // from try @ 03305690 with catch @ 03305274
                       catch() { ... } // from try @ 03305744 with catch @ 03305274
                       catch() { ... } // from try @ 03305774 with catch @ 03305274
                       catch() { ... } // from try @ 033057fc with catch @ 03305274
                       catch() { ... } // from try @ 03305820 with catch @ 03305274 */
    lVar10 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                       (FPFMEBABIJB,StringLiteral_3215,
                        (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
    if (lVar10 != 0) {
      uVar8 = (*(FPFMEBABIJB->klass->vtable)._51_get_Item.methodPtr)
                        (FPFMEBABIJB,StringLiteral_3215,
                         (FPFMEBABIJB->klass->vtable)._51_get_Item.method);
      (*(FPFMEBABIJB->klass->vtable)._25_RemoveChild.methodPtr)
                (FPFMEBABIJB,uVar8,(FPFMEBABIJB->klass->vtable)._25_RemoveChild.method);
    }
    pSVar9 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_3215,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    EIABCPKDEBD__DGPOFACHGMP(FPFMEBABIJB,pSVar9,(MethodInfo *)0x0);
  }
  lVar10 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_3544,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
  if (lVar10 != 0) {
    pSVar9 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_3544,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    EIABCPKDEBD__DGPOFACHGMP(FPFMEBABIJB,pSVar9,(MethodInfo *)0x0);
  }
  return FPFMEBABIJB;
}

