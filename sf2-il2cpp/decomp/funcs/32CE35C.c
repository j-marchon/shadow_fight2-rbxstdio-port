// LFDEBALJBHC$$.ctor @ RVA 0x32CE35C

void LFDEBALJBHC___ctor(LFDEBALJBHC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  LFDEBALJBHC_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04567537 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567537 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x12,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      __this_01 = (LFDEBALJBHC_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      iVar1 = LFDEBALJBHC__IHLKNJDGOMK(__this_01,(System_String_o *)__this_01,method_00);
      (__this->fields).OCJFODFLMPL = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

