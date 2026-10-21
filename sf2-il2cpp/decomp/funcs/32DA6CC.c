// NOMBKAHPOHM$$HNIHOIAMDPC @ RVA 0x32DA6CC

void NOMBKAHPOHM__HNIHOIAMDPC
               (NOMBKAHPOHM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *ACCIHBHMFPN;
  PKHMIGFEJCL_o *pPVar5;
  MethodInfo *method_00;
  
                    /* try { // try from 033da6d4 to 034da73b has its CatchHandler @ 033da750 */
  if ((DAT_045675b1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9936);
    FUN_01bab630(&StringLiteral_9566);
    DAT_045675b1 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,method);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033da73c to 034da747 has its CatchHandler @ 033d9edc */
                    /* try { // try from 033da748 to 034da74f has its CatchHandler @ 033da750 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 033da6d4 with catch @ 033da750
                       catch() { ... } // from try @ 033da748 with catch @ 033da750 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13991,(MethodInfo *)0x0);
      ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      iVar2 = NOMBKAHPOHM__CNOMHMIIEAB(ACCIHBHMFPN,method_00);
      *(int32_t *)&(__this->fields).KGLJICLJHEL = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
        pPVar5 = (PKHMIGFEJCL_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0)
        ;
        (__this->fields).BFNEODDCGLC = pPVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9936,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)((long)&(__this->fields).KGLJICLJHEL + 4) = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9566,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            *(bool *)((long)&(__this->fields).KGLJICLJHEL + 5) = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

