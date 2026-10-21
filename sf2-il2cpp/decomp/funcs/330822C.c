// NOGMFKIFAGJ$$HNIHOIAMDPC @ RVA 0x330822C

void NOGMFKIFAGJ__HNIHOIAMDPC
               (NOGMFKIFAGJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* catch() { ... } // from try @ 03408210 with catch @ 03408234 */
                    /* try { // try from 0340823c to 03508243 has its CatchHandler @ 03408258 */
                    /* try { // try from 03408244 to 0350824f has its CatchHandler @ 034080e0 */
  if ((DAT_04567770 & 1) == 0) {
                    /* try { // try from 03408250 to 03508257 has its CatchHandler @ 03408258 */
    FUN_01bab630(&StringLiteral_9327);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340823c with catch @ 03408258
                       catch(type#2 @ 00000000) { ... } // from try @ 03408250 with catch @ 03408258
                        */
    FUN_01bab630(&StringLiteral_1);
    DAT_04567770 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

