// EIABCPKDEBD$$NHPDFFAIJMF @ RVA 0x3133F64

System_Xml_XmlAttribute_o *
EIABCPKDEBD__NHPDFFAIJMF
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *HNAHOFOCGJM,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  
                    /* catch() { ... } // from try @ 03233d6c with catch @ 03233f68 */
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ebc with catch @ 03233f94 */
                    /* catch() { ... } // from try @ 03233b34 with catch @ 03233f98 */
    return (System_Xml_XmlAttribute_o *)0x0;
  }
                    /* catch() { ... } // from try @ 03233c00 with catch @ 03233f7c */
  __this = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03233bbc with catch @ 03233f80 */
  if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ed4 with catch @ 03233f84 */
                    /* catch() { ... } // from try @ 03233c04 with catch @ 03233f88 */
                    /* catch() { ... } // from try @ 03233c18 with catch @ 03233f8c */
                    /* catch() { ... } // from try @ 03233ec8 with catch @ 03233f90 */
    pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,HNAHOFOCGJM,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03233eb0 with catch @ 03233f9c */
  FUN_01bab8c8();
}

