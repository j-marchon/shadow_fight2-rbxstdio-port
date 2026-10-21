// ELMGFLNCPAB$$HNIHOIAMDPC @ RVA 0x35037F8

void ELMGFLNCPAB__HNIHOIAMDPC
               (ELMGFLNCPAB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603794 with catch @ 036037f8
                        */
                    /* try { // try from 03603810 to 03703813 has its CatchHandler @ 03603834 */
  if ((DAT_04568878 & 1) == 0) {
                    /* try { // try from 03603814 to 0370383b has its CatchHandler @ 03603700 */
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<ELMGFLNCPAB_CENJCOHIIJK>__);
    FUN_01bab630(&StringLiteral_7467);
                    /* catch() { ... } // from try @ 03603810 with catch @ 03603834 */
    FUN_01bab630(&StringLiteral_11809);
                    /* try { // try from 0360383c to 03703843 has its CatchHandler @ 03603858 */
    FUN_01bab630(&StringLiteral_8233);
                    /* try { // try from 03603844 to 0370384f has its CatchHandler @ 03603700 */
    DAT_04568878 = 1;
  }
                    /* try { // try from 03603850 to 03703857 has its CatchHandler @ 03603858 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360383c with catch @ 03603858
                       catch(type#2 @ 00000000) { ... } // from try @ 03603850 with catch @ 03603858
                        */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11809,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (pSVar4,2,Method_EIABCPKDEBD_CKHGJBKDIID<ELMGFLNCPAB_CENJCOHIIJK>__);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_7467,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
        (__this->fields).AJFBKLNHMDG = iVar2;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036038f8 to 03703a13 has its CatchHandler @ 036038f8
                       catch() { ... } // from try @ 036038f8 with catch @ 036038f8
                       catch() { ... } // from try @ 03603a98 with catch @ 036038f8
                       catch() { ... } // from try @ 03603ae8 with catch @ 036038f8
                       catch() { ... } // from try @ 03603b24 with catch @ 036038f8
                       catch() { ... } // from try @ 03603b60 with catch @ 036038f8 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8233,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)&(__this->fields).FANDONIBLKC = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

