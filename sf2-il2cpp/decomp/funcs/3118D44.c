// MLLHFIDIHPA$$HNIHOIAMDPC @ RVA 0x3118D44

void MLLHFIDIHPA__HNIHOIAMDPC
               (MLLHFIDIHPA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_045665d1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3760);
    FUN_01bab630(&StringLiteral_12788);
    FUN_01bab630(&StringLiteral_8095);
    DAT_045665d1 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_12788,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).DPDEAEJBFKA = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8095,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).MHDJAEILAJL = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3760,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
          (__this->fields).IFJHFNKOFDE = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

