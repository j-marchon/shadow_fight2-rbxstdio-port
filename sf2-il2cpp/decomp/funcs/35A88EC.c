// LNMCGOLABEK$$HNIHOIAMDPC @ RVA 0x35A88EC

void LNMCGOLABEK__HNIHOIAMDPC
               (LNMCGOLABEK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  FOKJBDHLIMG_o *__this_01;
  HEFOANCOHDC_o *pHVar1;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  System_Xml_XmlNode_o *KDMPIDEEPMP;
  HEFOANCOHDC_o **ppHVar2;
  
  if ((DAT_04568e2b & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568e2b = 1;
  }
  AJNNHGGLGIF__GAJGEHFDCJE((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,method);
  AJNNHGGLGIF__FEEFOMDIENJ((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,method);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this_01 != (FOKJBDHLIMG_o *)0x0) {
        pHVar1 = FOKJBDHLIMG__JMMDGEOBMOC(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
        ppHVar2 = &(__this->fields).LENFGEAJDMN;
        *ppHVar2 = pHVar1;
        thunk_FUN_01c20e04(ppHVar2,pHVar1);
        pHVar1 = *ppHVar2;
        if (pHVar1 != (HEFOANCOHDC_o *)0x0) {
          GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11876,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          KDMPIDEEPMP = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11030,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          pHVar1 = HEFOANCOHDC__FAOBHLCDKJI(pHVar1,GHKNNCLBPEO,KDMPIDEEPMP,(MethodInfo *)0x0);
          *ppHVar2 = pHVar1;
          thunk_FUN_01c20e04(ppHVar2,pHVar1);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

