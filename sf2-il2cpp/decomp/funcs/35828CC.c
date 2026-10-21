// CAAGJEKMDOA$$HNIHOIAMDPC @ RVA 0x35828CC

void CAAGJEKMDOA__HNIHOIAMDPC
               (CAAGJEKMDOA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 036828c4 with catch @ 036828d4 */
                    /* try { // try from 036828e4 to 03782953 has its CatchHandler @ 03682968 */
  if ((DAT_04568cdd & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_8667);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10072);
    FUN_01bab630(&StringLiteral_14831);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_14834);
    DAT_04568cdd = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03682954 to 0378295f has its CatchHandler @ 03682230 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03682960 to 03782967 has its CatchHandler @ 03682968 */
                    /* catch() { ... } // from try @ 036828e4 with catch @ 03682968
                       catch() { ... } // from try @ 03682960 with catch @ 03682968 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0368296c to 03782bdb has its CatchHandler @ 0368296c
                       catch() { ... } // from try @ 0368296c with catch @ 0368296c
                       catch() { ... } // from try @ 03682c68 with catch @ 0368296c
                       catch() { ... } // from try @ 03682c9c with catch @ 0368296c
                       catch() { ... } // from try @ 03682cc4 with catch @ 0368296c
                       catch() { ... } // from try @ 03682cf4 with catch @ 0368296c */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).NPFMOEOIEKM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14834,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,1.0,(MethodInfo *)0x0);
        (__this->fields).DFNFFGCKNCM = fVar6;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8667,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).NDNEMFBCJFC = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_14831,(MethodInfo *)0x0);
            (__this->fields).LLNHEOEJFCF = pSVar3 == (System_Xml_XmlAttribute_o *)0x0;
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
            (__this->fields).BFGKDFNOBIH = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_10072,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              ppSVar5 = &(__this->fields)._IMJDKOBJMAJ_k__BackingField;
              *ppSVar5 = pSVar4;
              thunk_FUN_01c20e04(ppSVar5,pSVar4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

