// DDOFLCBMJNB$$HNIHOIAMDPC @ RVA 0x33A1F30

void DDOFLCBMJNB__HNIHOIAMDPC
               (DDOFLCBMJNB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567cc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9830);
    FUN_01bab630(&StringLiteral_13847);
    DAT_04567cc0 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13847,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_9830,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).EPANJLBKHHC;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

