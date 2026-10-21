// KFDKHMMJMOM$$HNIHOIAMDPC @ RVA 0x32A59B8

void KFDKHMMJMOM__HNIHOIAMDPC
               (KFDKHMMJMOM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 033a59c0 to 034a5a57 has its CatchHandler @ 033a59c0
                       catch() { ... } // from try @ 033a59c0 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5a80 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5ad0 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5af8 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5b38 with catch @ 033a59c0 */
  if ((DAT_045673ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_045673ee = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).FDGJPLBDOIA;
      *ppSVar2 = pSVar1;
                    /* try { // try from 033a5a58 to 034a5a5f has its CatchHandler @ 033a5ad8 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

