// IJIPGGOAGBO$$.ctor @ RVA 0x33E0DE0

void IJIPGGOAGBO___ctor(IJIPGGOAGBO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04567e9d & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    DAT_04567e9d = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x17,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).super.field_0x15 = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

