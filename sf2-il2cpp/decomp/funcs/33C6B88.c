// MEMHEPBAJJA$$MKMMMFKKADG @ RVA 0x33C6B88

void MEMHEPBAJJA__MKMMMFKKADG(MEMHEPBAJJA_o *__this,System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04567df4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6396);
    DAT_04567df4 = 1;
  }
  pSVar1 = LCOODJKAICL__DDGMDKMKBHH(LFGKEPCBPKF,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).JHFENACKNPG;
  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_6396,(MethodInfo *)0x0);
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).JHFENACKNPG,StringLiteral_6396,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).JHFENACKNPG;
    if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6396,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar3,pSVar1,(pSVar3->klass->vtable)._10_set_Value.method);
        ppSVar5 = &(__this->fields).KBCOHMPJELJ;
        *ppSVar5 = pSVar1;
        thunk_FUN_01c20e04(ppSVar5,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

