// OICCPAIHLMK$$HNIHOIAMDPC @ RVA 0x332D610

void OICCPAIHLMK__HNIHOIAMDPC
               (OICCPAIHLMK_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d604 with catch @ 0342d610
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d5b0 with catch @ 0342d614
                        */
  if ((DAT_045678e8 & 1) == 0) {
                    /* try { // try from 0342d62c to 0352d62f has its CatchHandler @ 0342d650 */
                    /* try { // try from 0342d630 to 0352d657 has its CatchHandler @ 0342d51c */
    FUN_01bab630(&StringLiteral_10636);
    FUN_01bab630(&StringLiteral_10594);
    FUN_01bab630(&StringLiteral_9327);
                    /* catch() { ... } // from try @ 0342d62c with catch @ 0342d650 */
                    /* try { // try from 0342d658 to 0352d65f has its CatchHandler @ 0342d674 */
    FUN_01bab630(&StringLiteral_10070);
                    /* try { // try from 0342d660 to 0352d66b has its CatchHandler @ 0342d51c */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 0342d66c to 0352d673 has its CatchHandler @ 0342d674 */
    DAT_045678e8 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342d658 with catch @ 0342d674
                       catch(type#2 @ 00000000) { ... } // from try @ 0342d66c with catch @ 0342d674
                        */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).LAJBAKDJEKM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10594,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).FBCLCJAHCHI = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_10636,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).OPONPIJGOKL = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10070,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
            (__this->fields).DJGLFLMFKOE = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

