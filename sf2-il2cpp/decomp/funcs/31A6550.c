// ICCLONHCNBL$$HNIHOIAMDPC @ RVA 0x31A6550

void ICCLONHCNBL__HNIHOIAMDPC
               (ICCLONHCNBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566b10 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2799);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566b10 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 032a65bc to 033a65bf has its CatchHandler @ 032a65e8 */
                    /* try { // try from 032a65c0 to 033a65c7 has its CatchHandler @ 032a65e4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_2799,(MethodInfo *)0x0);
                    /* try { // try from 032a65c8 to 033a65cb has its CatchHandler @ 032a6320 */
                    /* try { // try from 032a65cc to 033a65cf has its CatchHandler @ 032a65d8 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).FHPNAJENHNG;
                    /* try { // try from 032a65d0 to 033a65ff has its CatchHandler @ 032a6320 */
      *ppSVar2 = pSVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65cc with catch @ 032a65d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a6514 with catch @ 032a65dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a64c4 with catch @ 032a65e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65c0 with catch @ 032a65e4
                        */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65bc with catch @ 032a65e8
                        */
  FUN_01bab8c8();
}

