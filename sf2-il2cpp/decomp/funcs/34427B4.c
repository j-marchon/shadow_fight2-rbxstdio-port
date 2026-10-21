// LFDIILCDADL$$HNIHOIAMDPC @ RVA 0x34427B4

void LFDIILCDADL__HNIHOIAMDPC
               (LFDIILCDADL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
                    /* try { // try from 035427b8 to 03642817 has its CatchHandler @ 0354244c */
  if ((DAT_04568233 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3426);
    DAT_04568233 = 1;
  }
                    /* catch() { ... } // from try @ 035426a4 with catch @ 03542808 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03542818 to 0364282b has its CatchHandler @ 035428b4 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03542794 with catch @ 0354282c
                       try { // try from 0354282c to 0364285b has its CatchHandler @ 0354244c */
                    /* catch() { ... } // from try @ 035427a4 with catch @ 03542830 */
                    /* catch() { ... } // from try @ 03542778 with catch @ 03542838 */
                    /* catch() { ... } // from try @ 03542760 with catch @ 0354283c */
                    /* catch() { ... } // from try @ 0354276c with catch @ 03542840 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3426,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03542750 with catch @ 03542844 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).NDAOFIJFOFL = pSVar3;
                    /* try { // try from 0354285c to 0364285f has its CatchHandler @ 03542888 */
      thunk_FUN_01c20e04();
                    /* try { // try from 03542860 to 03642897 has its CatchHandler @ 0354244c */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0354285c with catch @ 03542888 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6584,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03542898 to 0364289f has its CatchHandler @ 035428b4 */
                    /* try { // try from 035428a0 to 036428ab has its CatchHandler @ 0354244c */
        (__this->fields).HCNMEPDPNKC = fVar4 / 60.0;
                    /* try { // try from 035428ac to 036428b3 has its CatchHandler @ 035428b4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03542818 with catch @ 035428b4
                       catch() { ... } // from try @ 03542898 with catch @ 035428b4
                       catch() { ... } // from try @ 035428ac with catch @ 035428b4 */
  FUN_01bab8c8();
}

