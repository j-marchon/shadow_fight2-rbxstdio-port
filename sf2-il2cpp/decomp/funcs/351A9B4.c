// KGAGPHANJAO$$HNIHOIAMDPC @ RVA 0x351A9B4

void KGAGPHANJAO__HNIHOIAMDPC
               (KGAGPHANJAO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04568975 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12408);
    DAT_04568975 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12408,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,1,(MethodInfo *)0x0);
      (__this->fields).CDPHMKOHKKH = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

