// PKIOGLDBKOI$$HNIHOIAMDPC @ RVA 0x343AAF0

void PKIOGLDBKOI__HNIHOIAMDPC
               (PKIOGLDBKOI_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  int32_t iVar2;
  
  if ((DAT_045681cc & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_3160);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_7903);
    FUN_01bab630(&StringLiteral_1);
    DAT_045681cc = 1;
  }
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_3160,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 4;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3508,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 5;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7903,(MethodInfo *)0x0);
        if (!bVar1) {
          (__this->fields).PHCPDFIBHGH = 0;
          return;
        }
        iVar2 = 6;
      }
    }
    (__this->fields).PHCPDFIBHGH = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

