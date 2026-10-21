// HOOAAGABMBL$$PHKPGHEINHB @ RVA 0x30E85E0

HEFOANCOHDC_o * HOOAAGABMBL__PHKPGHEINHB(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  FOKJBDHLIMG_o *__this;
  HEFOANCOHDC_o *__this_00;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  System_Xml_XmlNode_o *KDMPIDEEPMP;
  System_String_o **ppSVar5;
  
  if ((DAT_04566407 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_5304);
    DAT_04566407 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this != (FOKJBDHLIMG_o *)0x0) {
        __this_00 = FOKJBDHLIMG__JMMDGEOBMOC(__this,pSVar4,(MethodInfo *)0x0);
        if (__this_00 != (HEFOANCOHDC_o *)0x0) {
                    /* try { // try from 031e86dc to 032e86e3 has its CatchHandler @ 031e87b4 */
                    /* try { // try from 031e86f0 to 032e86f3 has its CatchHandler @ 031e87b0 */
          GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11876,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          KDMPIDEEPMP = (System_Xml_XmlNode_o *)
                        (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                  (AHDGNOJPPIB,StringLiteral_11030,
                                   (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (GHKNNCLBPEO != (System_Xml_XmlNode_o *)0x0 ||
              KDMPIDEEPMP != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031e872c to 032e8757 has its CatchHandler @ 031e87b8 */
            __this_00 = HEFOANCOHDC__FAOBHLCDKJI
                                  (__this_00,GHKNNCLBPEO,KDMPIDEEPMP,(MethodInfo *)0x0);
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031e87b8;
                    /* try { // try from 031e8758 to 032e8763 has its CatchHandler @ 031e87ac */
                    /* try { // try from 031e8768 to 032e8773 has its CatchHandler @ 031e87a8 */
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5304,(MethodInfo *)0x0);
                    /* try { // try from 031e8774 to 032e87cf has its CatchHandler @ 031e848c */
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
            if (!bVar1) {
              if (__this_00 == (HEFOANCOHDC_o *)0x0) goto LAB_031e87b8;
              ppSVar5 = &(__this_00->fields).BPCADJLKKGA;
              *ppSVar5 = pSVar4;
              thunk_FUN_01c20e04(ppSVar5,pSVar4);
            }
          }
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e8768 with catch @ 031e87a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e8758 with catch @ 031e87ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e86f0 with catch @ 031e87b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e86dc with catch @ 031e87b4
                        */
        return __this_00;
      }
    }
  }
LAB_031e87b8:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e872c with catch @ 031e87b8
                        */
  FUN_01bab8c8();
}

