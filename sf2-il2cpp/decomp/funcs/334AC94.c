// APGFNOPIODP$$HNIHOIAMDPC @ RVA 0x334AC94

void APGFNOPIODP__HNIHOIAMDPC
               (APGFNOPIODP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_045679f2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5069);
    DAT_045679f2 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_5069,(MethodInfo *)0x0);
      fVar1 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x5c = fVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

