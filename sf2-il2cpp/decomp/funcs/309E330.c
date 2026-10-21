// FOKJBDHLIMG$$FBBGALKOPNG @ RVA 0x309E330

HEFOANCOHDC_o *
FOKJBDHLIMG__FBBGALKOPNG
          (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,System_Xml_XmlNode_o *AHDGNOJPPIB,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  HEFOANCOHDC_o *pHVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *value;
  System_String_o **ppSVar6;
  
  if ((DAT_0456612c & 1) == 0) {
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_1);
    __this = (FOKJBDHLIMG_o *)FUN_01bab630(&StringLiteral_5304);
    DAT_0456612c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11876,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    __this = (FOKJBDHLIMG_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11030,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
      pHVar3 = HEFOANCOHDC__FAOBHLCDKJI
                         (EIKFGOCCOIE,GHKNNCLBPEO,(System_Xml_XmlNode_o *)__this,(MethodInfo *)0x0);
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      __this = (FOKJBDHLIMG_o *)0x0;
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5304,(MethodInfo *)0x0);
        value = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        __this = (FOKJBDHLIMG_o *)0x0;
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                    /* try { // try from 0319e478 to 0329e5db has its CatchHandler @ 0319e478
                       catch() { ... } // from try @ 0319e478 with catch @ 0319e478
                       catch() { ... } // from try @ 0319e68c with catch @ 0319e478
                       catch() { ... } // from try @ 0319e6bc with catch @ 0319e478
                       catch() { ... } // from try @ 0319e7cc with catch @ 0319e478
                       catch() { ... } // from try @ 0319e850 with catch @ 0319e478
                       catch() { ... } // from try @ 0319e880 with catch @ 0319e478 */
          bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          __this = (FOKJBDHLIMG_o *)(ulong)bVar1;
          if (bVar1) {
            if (pHVar3 != (HEFOANCOHDC_o *)0x0) {
LAB_0319e4a0:
              (pHVar3->fields).AEIJFFBOBCP = iVar2;
              return pHVar3;
            }
          }
          else if (pHVar3 != (HEFOANCOHDC_o *)0x0) {
            ppSVar6 = &(pHVar3->fields).BPCADJLKKGA;
            *ppSVar6 = value;
            thunk_FUN_01c20e04(ppSVar6,value);
            goto LAB_0319e4a0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

