// CGALNIOABHK$$MNEAHFKOHKI @ RVA 0x3446AF4

void CGALNIOABHK__MNEAHFKOHKI
               (ECENNHNBAME_o *NLEBDPHNIDI,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PNGKLCHKPEO_o *__this_00;
  float CJNHFNHJHPE;
  
  if ((DAT_0456823d & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_10362);
    FUN_01bab630(&StringLiteral_2963);
    DAT_0456823d = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    CJNHFNHJHPE = 0.0;
  }
  else {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546c04;
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this,StringLiteral_2963,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
    AHDGNOJPPIB_00 =
         (System_Xml_XmlNode_o *)
         (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                   (AHDGNOJPPIB,StringLiteral_10362,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                   );
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
      PNGKLCHKPEO___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
      if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) goto LAB_03546c04;
      (NLEBDPHNIDI->fields).JCKNGNJBIIF = __this_00;
      thunk_FUN_01c20e04(&(NLEBDPHNIDI->fields).JCKNGNJBIIF,__this_00);
      goto LAB_03546be8;
    }
  }
  if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
LAB_03546be8:
    ECENNHNBAME__CEPCEKHLKDN(NLEBDPHNIDI,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03546c04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

