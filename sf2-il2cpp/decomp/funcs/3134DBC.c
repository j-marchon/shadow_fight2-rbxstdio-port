// EIABCPKDEBD$$IBHCCPKMJKI @ RVA 0x3134DBC

System_Xml_XmlAttribute_o *
EIABCPKDEBD__IBHCCPKMJKI
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return (System_Xml_XmlAttribute_o *)0x0;
  }
  __this = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

