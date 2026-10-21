// MPFCDEPCALP$$HNIHOIAMDPC @ RVA 0x30362DC

void MPFCDEPCALP__HNIHOIAMDPC
               (MPFCDEPCALP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565d43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3105);
    FUN_01bab630(&StringLiteral_3103);
                    /* try { // try from 03136314 to 0323631f has its CatchHandler @ 031366b4 */
    FUN_01bab630(&StringLiteral_3104);
    DAT_04565d43 = 1;
  }
                    /* try { // try from 03136330 to 03236333 has its CatchHandler @ 031366d8 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03136344 to 0323634f has its CatchHandler @ 031366b0 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03136360 to 0323636b has its CatchHandler @ 031366ac */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3103,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,100.0,(MethodInfo *)0x0);
                    /* try { // try from 03136380 to 03236383 has its CatchHandler @ 031366c8 */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3104,(MethodInfo *)0x0);
                    /* try { // try from 031363b0 to 032363b7 has its CatchHandler @ 0313662c */
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JDIMEBGEJFE.fields.x = fVar3;
        (__this->fields).JDIMEBGEJFE.fields.y = fVar4;
                    /* try { // try from 031363c0 to 032363d3 has its CatchHandler @ 031366d0 */
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3105,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,90.0,(MethodInfo *)0x0);
          (__this->fields).GBJHFDKDAIB = fVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03136408 to 0323640f has its CatchHandler @ 031366d4 */
  FUN_01bab8c8();
}

