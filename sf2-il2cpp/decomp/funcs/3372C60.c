// DICFMPEJCCB$$HNIHOIAMDPC @ RVA 0x3372C60

void DICFMPEJCCB__HNIHOIAMDPC
               (DICFMPEJCCB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *htmlString;
  
                    /* try { // try from 03472c60 to 03572c67 has its CatchHandler @ 03472ee0 */
  if ((DAT_04567b36 & 1) == 0) {
    FUN_01bab630(&StringLiteral_688);
    FUN_01bab630(&StringLiteral_4476);
    DAT_04567b36 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03472cb0 to 03572cbb has its CatchHandler @ 03472ed4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03472cd0 to 03572ce7 has its CatchHandler @ 03472ef4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_4476,(MethodInfo *)0x0);
      htmlString = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_688,(MethodInfo *)0x0);
      UnityEngine_ColorUtility__TryParseHtmlString
                (htmlString,(UnityEngine_Color_o *)&(__this->fields).super.field_0x54,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

