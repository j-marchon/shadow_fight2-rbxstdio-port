// EIABCPKDEBD$$DGJFLNGMBKG @ RVA 0x3134AF4

System_Xml_XmlAttribute_o *
EIABCPKDEBD__DGJFLNGMBKG
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  MethodInfo *method_00;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
      if (pSVar1 != (System_Xml_XmlAttribute_o *)0x0) {
        return pSVar1;
      }
      pSVar1 = EIABCPKDEBD__HBGAGFJBGKD(JHMENEKPIBO,BMEDCFOKBDH,method_00);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

