// OCHEHJACAPI$$HNIHOIAMDPC @ RVA 0x32C6DDC

void OCHEHJACAPI__HNIHOIAMDPC
               (OCHEHJACAPI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  PICIKPNGDBE_o *__this_01;
  System_String_o **ppSVar2;
  
  if ((DAT_045674ed & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 033c6e10 to 034c6eef has its CatchHandler @ 033c6e10
                       catch() { ... } // from try @ 033c6e10 with catch @ 033c6e10
                       catch() { ... } // from try @ 033c6f58 with catch @ 033c6e10
                       catch() { ... } // from try @ 033c6fa0 with catch @ 033c6e10
                       catch() { ... } // from try @ 033c6fcc with catch @ 033c6e10
                       catch() { ... } // from try @ 033c6ffc with catch @ 033c6e10 */
    DAT_045674ed = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JIJLBFGKNJK;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      __this_01 = (__this->fields).super.DKGMKMJDMPC;
      if (__this_01 != (PICIKPNGDBE_o *)0x0) {
        PICIKPNGDBE__HNIHOIAMDPC
                  (__this_01,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
                   (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

