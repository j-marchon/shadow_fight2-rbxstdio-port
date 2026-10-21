// MIKDEPBOGDN$$HNIHOIAMDPC @ RVA 0x3096750

void MIKDEPBOGDN__HNIHOIAMDPC
               (MIKDEPBOGDN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045660db & 1) == 0) {
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_1);
    DAT_045660db = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
  if ((__this_00 != (PICIKPNGDBE_o *)0x0) &&
     (PICIKPNGDBE__HNIHOIAMDPC
                (__this_00,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
                 (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0),
     AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JBNGADJBDHB;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

