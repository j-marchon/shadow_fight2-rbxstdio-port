// IBKEPOJPLBG$$HNIHOIAMDPC @ RVA 0x34CCA18

void IBKEPOJPLBG__HNIHOIAMDPC
               (IBKEPOJPLBG_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* catch() { ... } // from try @ 035cc9f8 with catch @ 035cca18 */
                    /* catch() { ... } // from try @ 035cc9f4 with catch @ 035cca1c */
                    /* catch() { ... } // from try @ 035cc938 with catch @ 035cca20 */
                    /* catch() { ... } // from try @ 035cc910 with catch @ 035cca24 */
                    /* catch() { ... } // from try @ 035cc9f0 with catch @ 035cca28 */
                    /* catch() { ... } // from try @ 035cc8a8 with catch @ 035cca2c */
                    /* catch() { ... } // from try @ 035cc84c with catch @ 035cca30 */
  if ((DAT_0456867d & 1) == 0) {
                    /* catch() { ... } // from try @ 035cc9e8 with catch @ 035cca34 */
    FUN_01bab630(&StringLiteral_5701);
                    /* try { // try from 035cca44 to 036cca47 has its CatchHandler @ 035cca58 */
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_1);
                    /* catch() { ... } // from try @ 035cca44 with catch @ 035cca58 */
    DAT_0456867d = 1;
  }
                    /* try { // try from 035cca60 to 036ccac7 has its CatchHandler @ 035ccadc */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8095,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).MLPKGJACOFA = pSVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 035ccac8 to 036ccad3 has its CatchHandler @ 035cc780 */
                    /* try { // try from 035ccad4 to 036ccadb has its CatchHandler @ 035ccadc */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 035cca60 with catch @ 035ccadc
                       catch() { ... } // from try @ 035ccad4 with catch @ 035ccadc */
                    /* try { // try from 035ccae0 to 036ccbf7 has its CatchHandler @ 035ccae0
                       catch() { ... } // from try @ 035ccae0 with catch @ 035ccae0
                       catch() { ... } // from try @ 035ccd1c with catch @ 035ccae0
                       catch() { ... } // from try @ 035cce68 with catch @ 035ccae0
                       catch() { ... } // from try @ 035cce70 with catch @ 035ccae0
                       catch() { ... } // from try @ 035ccf5c with catch @ 035ccae0 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5701,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).HIHHACDOFBF;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

