// NLHMCOFIBKF$$HNIHOIAMDPC @ RVA 0x3164C8C

void NLHMCOFIBKF__HNIHOIAMDPC
               (NLHMCOFIBKF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045668ad & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6614);
    FUN_01bab630(&StringLiteral_8803);
    FUN_01bab630(&StringLiteral_9075);
    FUN_01bab630(&StringLiteral_10488);
    FUN_01bab630(&StringLiteral_5196);
    DAT_045668ad = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6614,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).IFAEOOBNDDH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10488,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields).CNBNMBNHICL = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_8803,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          (__this->fields).NELHKLHDOIJ = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_9075,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this->fields).NCACECOAKAA = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_5196,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              ppSVar4 = &(__this->fields).GCDAAJGEOIB;
              *ppSVar4 = pSVar3;
              thunk_FUN_01c20e04(ppSVar4,pSVar3);
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

