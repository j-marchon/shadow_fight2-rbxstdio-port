// FJFMOEDIMLC$$HNIHOIAMDPC @ RVA 0x32C5064

void FJFMOEDIMLC__HNIHOIAMDPC
               (FJFMOEDIMLC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  
  if ((DAT_04567528 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8598);
    FUN_01bab630(&StringLiteral_12226);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567528 = 1;
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(NPLGCIFGFOK->klass->vtable)._8_unknown.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._8_unknown.method);
    (__this->fields).super.LEMICKEFMOJ = pSVar2;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8598,(MethodInfo *)0x0);
      pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      uVar1 = BOFEMGGNODC__FOLPIHAMEJE(pSVar2,method_00);
      (__this->fields).super.EPPJLCHLIDH = uVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12226,(MethodInfo *)0x0);
        pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar5 = &(__this->fields).super.BNCJPLDMJMH;
        *ppSVar5 = pSVar2;
        thunk_FUN_01c20e04(ppSVar5,pSVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

