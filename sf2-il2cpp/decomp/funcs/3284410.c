// CPJDJFPABGI$$HNIHOIAMDPC @ RVA 0x3284410

void CPJDJFPABGI__HNIHOIAMDPC
               (CPJDJFPABGI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_045672a7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12880);
    FUN_01bab630(&StringLiteral_1);
    DAT_045672a7 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12880,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).PMHMOJGEAAN = pSVar1;
      thunk_FUN_01c20e04();
      CPJDJFPABGI__JGIDNDELBPG(__this,NPLGCIFGFOK,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

