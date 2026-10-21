// EIABCPKDEBD$$CDDKCDCLNOP @ RVA 0x3134FE0

System_Xml_XmlAttribute_o *
EIABCPKDEBD__CDDKCDCLNOP
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlAttributeCollection_o *__this_00;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlDocument_o *)
             (*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      node = System_Xml_XmlDocument__CreateAttribute(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03235038 to 0333503f has its CatchHandler @ 032350c4 */
        System_Xml_XmlAttributeCollection__Prepend(__this_00,node,(MethodInfo *)0x0);
                    /* try { // try from 03235048 to 0333504f has its CatchHandler @ 032350bc */
        return node;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

