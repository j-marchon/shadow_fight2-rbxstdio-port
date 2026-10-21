// AHIBJNBMCEH$$HNIHOIAMDPC @ RVA 0x3000C94

void AHIBJNBMCEH__HNIHOIAMDPC
               (AHIBJNBMCEH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565b27 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10877);
    DAT_04565b27 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10877,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).GJNGIKHEJJC;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

