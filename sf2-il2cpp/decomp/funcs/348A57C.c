// PMAECPJOCHA$$HNIHOIAMDPC @ RVA 0x348A57C

void PMAECPJOCHA__HNIHOIAMDPC
               (PMAECPJOCHA_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045683d5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10318);
    FUN_01bab630(&StringLiteral_1606);
    DAT_045683d5 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_10318,(MethodInfo *)0x0);
    if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0358a658;
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10318,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1606,(MethodInfo *)0x0);
    }
    if (__this != (PMAECPJOCHA_o *)0x0) {
      ppSVar4 = &(__this->fields).CMEAHLHBGMN;
      *ppSVar4 = pSVar3;
      thunk_FUN_01c20e04(ppSVar4);
      return;
    }
  }
LAB_0358a658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

