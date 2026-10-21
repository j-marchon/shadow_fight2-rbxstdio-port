// NBCALFOIEAA$$HNIHOIAMDPC @ RVA 0x33B84DC

void NBCALFOIEAA__HNIHOIAMDPC
               (NBCALFOIEAA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  MGNDHCBAPEN_float__float__o *pMVar5;
  System_String_o **ppSVar6;
  float fVar7;
  undefined8 uVar8;
  
                    /* try { // try from 034b84e4 to 035b850f has its CatchHandler @ 034b8310 */
  if ((DAT_04567d8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_20588);
                    /* try { // try from 034b8510 to 035b8513 has its CatchHandler @ 034b851c */
    FUN_01bab630(&StringLiteral_9544);
                    /* try { // try from 034b8514 to 035b8543 has its CatchHandler @ 034b8310 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8470 with catch @ 034b8518
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8510 with catch @ 034b851c
                        */
    FUN_01bab630(&StringLiteral_11820);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b84c0 with catch @ 034b8520
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8454 with catch @ 034b8524
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8474 with catch @ 034b8528
                        */
    FUN_01bab630(&StringLiteral_15134);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8444 with catch @ 034b852c
                        */
    FUN_01bab630(&StringLiteral_11833);
    FUN_01bab630(&StringLiteral_15021);
                    /* try { // try from 034b8544 to 035b8547 has its CatchHandler @ 034b8568 */
                    /* try { // try from 034b8548 to 035b856f has its CatchHandler @ 034b8310 */
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3270);
    DAT_04567d8a = 1;
  }
                    /* catch() { ... } // from try @ 034b8544 with catch @ 034b8568 */
                    /* try { // try from 034b8570 to 035b8577 has its CatchHandler @ 034b858c */
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034b8578 to 035b8583 has its CatchHandler @ 034b8310 */
                    /* try { // try from 034b8584 to 035b858b has its CatchHandler @ 034b858c */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034b8570 with catch @ 034b858c
                       catch(type#2 @ 00000000) { ... } // from try @ 034b8584 with catch @ 034b858c
                        */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9544,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).PCNGAEBMNDH = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3270,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        pMVar5 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,-100000.0,100000.0,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15021,(MethodInfo *)0x0);
        if (bVar1) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_034b8710;
          fVar7 = (pMVar5->fields).DOKHHBGJICA;
          (__this->fields).HNJEMFFEBBH = (pMVar5->fields).PHPELPFMOII;
          (__this->fields).GJPJBEBEFDA = fVar7;
        }
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15134,(MethodInfo *)0x0);
        if (bVar1) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_034b8710;
          uVar8 = NEON_rev64(pMVar5->fields,4);
          (__this->fields).EMCONLBCHAB = (float)(int)uVar8;
          (__this->fields).ODJMFPBPLNH = (float)(int)((ulong)uVar8 >> 0x20);
        }
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11833,(MethodInfo *)0x0);
          fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,3.0,(MethodInfo *)0x0);
          (__this->fields).NJCALEBCLKL = fVar7;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_11820,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_20588,(MethodInfo *)0x0);
            ppSVar6 = &(__this->fields).JIODFODFHNC;
            *ppSVar6 = pSVar4;
            thunk_FUN_01c20e04(ppSVar6,pSVar4);
            return;
          }
        }
      }
    }
  }
LAB_034b8710:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

