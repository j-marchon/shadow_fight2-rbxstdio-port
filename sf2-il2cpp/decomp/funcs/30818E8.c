// CDBANCEFAAK$$HNIHOIAMDPC @ RVA 0x30818E8

void CDBANCEFAAK__HNIHOIAMDPC
               (CDBANCEFAAK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565ffa & 1) == 0) {
    FUN_01bab630(&StringLiteral_3105);
    FUN_01bab630(&StringLiteral_3103);
    FUN_01bab630(&StringLiteral_3104);
    DAT_04565ffa = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3103,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,245.0,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3104,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JDIMEBGEJFE.fields.x = fVar3;
        (__this->fields).JDIMEBGEJFE.fields.y = fVar4;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3105,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,90.0,(MethodInfo *)0x0);
          (__this->fields).GBJHFDKDAIB = fVar3;
                    /* try { // try from 03181a10 to 03281d9b has its CatchHandler @ 03181a10
                       catch() { ... } // from try @ 03181a10 with catch @ 03181a10
                       catch() { ... } // from try @ 03181e24 with catch @ 03181a10
                       catch() { ... } // from try @ 03181e70 with catch @ 03181a10
                       catch() { ... } // from try @ 03181f18 with catch @ 03181a10 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

