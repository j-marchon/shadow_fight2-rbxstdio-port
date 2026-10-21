// GDLJOHLHGIP$$HNIHOIAMDPC @ RVA 0x310272C

void GDLJOHLHGIP__HNIHOIAMDPC
               (GDLJOHLHGIP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664ce & 1) == 0) {
    FUN_01bab630(&StringLiteral_3262);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664ce = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03202790 to 03302797 has its CatchHandler @ 0320282c */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03202798 to 0330279b has its CatchHandler @ 03202818 */
                    /* try { // try from 0320279c to 0330279f has its CatchHandler @ 0320233c */
                    /* try { // try from 032027a0 to 033027a3 has its CatchHandler @ 03202800 */
                    /* try { // try from 032027a4 to 033027ab has its CatchHandler @ 0320233c */
                    /* try { // try from 032027ac to 033027af has its CatchHandler @ 032027f4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_3262,(MethodInfo *)0x0);
                    /* try { // try from 032027b0 to 033027b3 has its CatchHandler @ 032027f0 */
                    /* try { // try from 032027b4 to 033027b7 has its CatchHandler @ 03202804 */
                    /* try { // try from 032027b8 to 033027bb has its CatchHandler @ 032027d8 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).BHLFBMLDHBE;
                    /* try { // try from 032027bc to 033027bf has its CatchHandler @ 032027d4 */
      *ppSVar2 = pSVar1;
                    /* try { // try from 032027c0 to 033027c3 has its CatchHandler @ 032027d0 */
                    /* try { // try from 032027c4 to 033027c7 has its CatchHandler @ 03202804 */
                    /* try { // try from 032027c8 to 033027cb has its CatchHandler @ 032027cc */
                    /* catch() { ... } // from try @ 032027c8 with catch @ 032027cc
                       try { // try from 032027cc to 03302843 has its CatchHandler @ 0320233c */
                    /* catch() { ... } // from try @ 032027c0 with catch @ 032027d0 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032027bc with catch @ 032027d4 */
  FUN_01bab8c8();
}

