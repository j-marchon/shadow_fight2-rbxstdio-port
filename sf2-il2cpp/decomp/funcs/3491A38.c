// FKMBNOGKHBO$$HNIHOIAMDPC @ RVA 0x3491A38

void FKMBNOGKHBO__HNIHOIAMDPC
               (FKMBNOGKHBO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* try { // try from 03591a44 to 03691a47 has its CatchHandler @ 03591aac */
                    /* try { // try from 03591a48 to 03691a77 has its CatchHandler @ 035918b0 */
  if ((DAT_04568423 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12788);
    FUN_01bab630(&StringLiteral_6504);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 03591a78 to 03691a7b has its CatchHandler @ 03591ab8 */
                    /* try { // try from 03591a7c to 03691a83 has its CatchHandler @ 03591ab4 */
    DAT_04568423 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
                    /* try { // try from 03591a90 to 03691aa7 has its CatchHandler @ 03591b20 */
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03591aa8 to 03691ad3 has its CatchHandler @ 035918b0 */
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a44 with catch @ 03591aac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a7c with catch @ 03591ab4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a78 with catch @ 03591ab8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03591a24 with catch @ 03591abc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035919e4 with catch @ 03591ac0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035919cc with catch @ 03591ac4
                        */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12788,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 03591ad4 to 03691ad7 has its CatchHandler @ 03591afc */
                    /* try { // try from 03591ad8 to 03691b03 has its CatchHandler @ 035918b0 */
      (__this->fields).NBMALGBGMIG = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03591ad4 with catch @ 03591afc */
                    /* try { // try from 03591b04 to 03691b0b has its CatchHandler @ 03591b20 */
                    /* try { // try from 03591b0c to 03691b17 has its CatchHandler @ 035918b0 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6504,(MethodInfo *)0x0);
                    /* try { // try from 03591b18 to 03691b1f has its CatchHandler @ 03591b20 */
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).MNEOMBIFDHF;
        *ppSVar4 = pSVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03591a90 with catch @ 03591b20
                       catch(type#2 @ 00000000) { ... } // from try @ 03591b04 with catch @ 03591b20
                       catch(type#2 @ 00000000) { ... } // from try @ 03591b18 with catch @ 03591b20
                        */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

