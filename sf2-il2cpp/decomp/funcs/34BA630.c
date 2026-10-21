// IFEDMCHPFIM$$HNIHOIAMDPC @ RVA 0x34BA630

void IFEDMCHPFIM__HNIHOIAMDPC
               (IFEDMCHPFIM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_045685c3 & 1) == 0) {
    FUN_01bab630(&IFEDMCHPFIM_FOPNKJCFBLG_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_4968);
    FUN_01bab630(&StringLiteral_12067);
    DAT_045685c3 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12067,(MethodInfo *)0x0);
      local_48.klass = (System_Enum_c *)IFEDMCHPFIM_FOPNKJCFBLG_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = 0;
      pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,pSVar3,(MethodInfo *)0x0);
      (__this->fields).GALKDPHFALN = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_4968,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).HAPAKNHBJCO;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

