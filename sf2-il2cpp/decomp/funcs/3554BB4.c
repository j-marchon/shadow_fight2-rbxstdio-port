// FPLOLKHJIAF$$HNIHOIAMDPC @ RVA 0x3554BB4

void FPLOLKHJIAF__HNIHOIAMDPC
               (FPLOLKHJIAF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 03654bb4 to 03754bbf has its CatchHandler @ 03654dc4 */
  if ((DAT_04568b60 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10072);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b60 = 1;
  }
  NIAFDKHDBMA__HNIHOIAMDPC((NIAFDKHDBMA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03654c0c to 03754c13 has its CatchHandler @ 03654dfc */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03654c28 to 03754c2b has its CatchHandler @ 03654de8 */
                    /* try { // try from 03654c2c to 03754c37 has its CatchHandler @ 03654df8 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10072,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).GMILEGDKKPL;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03654c48 to 03754c4b has its CatchHandler @ 03654de4 */
                    /* try { // try from 03654c4c to 03754c53 has its CatchHandler @ 03654df4 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

