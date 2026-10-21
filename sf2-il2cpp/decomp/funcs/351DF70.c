// MFEIFNFICGK$$HNIHOIAMDPC @ RVA 0x351DF70

void MFEIFNFICGK__HNIHOIAMDPC
               (MFEIFNFICGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_045689a7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10202);
    DAT_045689a7 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xd,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10202,(MethodInfo *)0x0);
      fVar1 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      (__this->fields)._KFFNNOLMECN_k__BackingField = fVar1;
                    /* try { // try from 0361e000 to 0371e003 has its CatchHandler @ 0361e044 */
                    /* try { // try from 0361e004 to 0371e007 has its CatchHandler @ 0361e040 */
                    /* try { // try from 0361e008 to 0371e00b has its CatchHandler @ 0361e03c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361e00c to 0371e00f has its CatchHandler @ 0361e02c */
  FUN_01bab8c8();
}

