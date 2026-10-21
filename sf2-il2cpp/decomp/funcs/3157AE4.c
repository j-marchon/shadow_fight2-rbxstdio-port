// MPLCLLIIECE$$HNIHOIAMDPC @ RVA 0x3157AE4

void MPLCLLIIECE__HNIHOIAMDPC
               (MPLCLLIIECE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ANGBPBINHBL;
  Il2CppObject **ppIVar1;
  NILLKLHKLHG_o *pNVar2;
  
  if ((DAT_0456684b & 1) == 0) {
    FUN_01bab630(&StringLiteral_9653);
                    /* try { // try from 03257b0c to 03357b33 has its CatchHandler @ 03258078 */
    FUN_01bab630(&StringLiteral_1);
    DAT_0456684b = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9653,(MethodInfo *)0x0);
                    /* try { // try from 03257b68 to 03357b93 has its CatchHandler @ 03258074 */
      ANGBPBINHBL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super.MBEHOEALEMP;
      if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
        NILLKLHKLHG__HNIHOIAMDPC(pNVar2,ANGBPBINHBL,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super.MBEHOEALEMP;
        if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
          ppIVar1 = &(pNVar2->fields).KAEBCKDNFHH;
          *ppIVar1 = (Il2CppObject *)__this;
          thunk_FUN_01c20e04(ppIVar1,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

