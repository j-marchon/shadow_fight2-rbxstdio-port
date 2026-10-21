// JBBABEFDNOL$$HNIHOIAMDPC @ RVA 0x3026D20

void JBBABEFDNOL__HNIHOIAMDPC
               (JBBABEFDNOL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565c96 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    DAT_04565c96 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03126d74 to 03226d77 has its CatchHandler @ 03126d8c */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03126d78 to 03226d7b has its CatchHandler @ 03126d84 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03126d7c to 03226d7f has its CatchHandler @ 03126d80 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d7c with catch @ 03126d80
                       try { // try from 03126d80 to 03226daf has its CatchHandler @ 031269b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d78 with catch @ 03126d84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b44 with catch @ 03126d88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126d74 with catch @ 03126d8c
                        */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126bbc with catch @ 03126d90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b30 with catch @ 03126d94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03126b8c with catch @ 03126d98
                        */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03126db0 to 03226db3 has its CatchHandler @ 03126dd4 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03126db4 to 03226ddb has its CatchHandler @ 031269b8 */
  FUN_01bab8c8();
}

