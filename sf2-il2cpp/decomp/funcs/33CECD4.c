// OHFEMEPFLLI$$HNIHOIAMDPC @ RVA 0x33CECD4

void OHFEMEPFLLI__HNIHOIAMDPC
               (OHFEMEPFLLI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  bool_conflict *pbVar5;
  
                    /* try { // try from 034cece0 to 035cece7 has its CatchHandler @ 034cf45c */
  if ((DAT_04567e4a & 1) == 0) {
                    /* try { // try from 034cecf8 to 035ced03 has its CatchHandler @ 034cf458 */
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_19993);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 034ced18 to 035ced1f has its CatchHandler @ 034cf4dc */
    FUN_01bab630(&StringLiteral_13847);
    DAT_04567e4a = 1;
  }
                    /* try { // try from 034ced30 to 035ced37 has its CatchHandler @ 034cf4ac */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 034ced54 to 035ced57 has its CatchHandler @ 034cf468 */
                    /* try { // try from 034ced5c to 035ced63 has its CatchHandler @ 034cf4a8 */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13847,(MethodInfo *)0x0);
                    /* try { // try from 034ced78 to 035cee03 has its CatchHandler @ 034cf4f0 */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(pSVar4,StringLiteral_19993,5,(MethodInfo *)0x0);
        (__this->fields).super.field_0x51 = bVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
          pbVar5 = &(__this->fields).LOEKILNCFAJ;
          *(System_String_o **)pbVar5 = pSVar4;
          thunk_FUN_01c20e04(pbVar5,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

