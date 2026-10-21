// OEBAPDOPOBH$$HNIHOIAMDPC @ RVA 0x3237914

void OEBAPDOPOBH__HNIHOIAMDPC
               (OEBAPDOPOBH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  CCLKPGBIBOP_o **ppCVar2;
  
  if ((DAT_04567034 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10068);
    DAT_04567034 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10068,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar1;
      thunk_FUN_01c20e04();
      ppCVar2 = &(__this->fields).KJAPDIOFGHP;
      *ppCVar2 = (CCLKPGBIBOP_o *)0x0;
      thunk_FUN_01c20e04(ppCVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

