// CCAEOJMALLA$$.ctor @ RVA 0x34423E4

void CCAEOJMALLA___ctor(CCAEOJMALLA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568230 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568230 = 1;
  }
  ppSVar2 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar2 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar2);
                    /* try { // try from 0354244c to 03642593 has its CatchHandler @ 0354244c
                       catch() { ... } // from try @ 0354244c with catch @ 0354244c
                       catch() { ... } // from try @ 035425ac with catch @ 0354244c
                       catch() { ... } // from try @ 035426a8 with catch @ 0354244c
                       catch() { ... } // from try @ 035427b8 with catch @ 0354244c
                       catch() { ... } // from try @ 0354282c with catch @ 0354244c
                       catch() { ... } // from try @ 03542860 with catch @ 0354244c
                       catch() { ... } // from try @ 035428a0 with catch @ 0354244c */
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x19,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

