// EIABCPKDEBD$$GDAEOIJNJMO @ RVA 0x3133EC8

void EIABCPKDEBD__GDAEOIJNJMO
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *node;
  
                    /* try { // try from 03233ec8 to 03333ecb has its CatchHandler @ 03233f90 */
                    /* try { // try from 03233ed4 to 03333ed7 has its CatchHandler @ 03233f84 */
                    /* try { // try from 03233ed8 to 03333ee3 has its CatchHandler @ 032331f0 */
                    /* try { // try from 03233ee4 to 03333ee7 has its CatchHandler @ 03233f44 */
  if ((JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(PNOCDIDLLLM,(MethodInfo *)0x0), bVar1)) {
                    /* catch() { ... } // from try @ 03233ee4 with catch @ 03233f44 */
                    /* catch() { ... } // from try @ 03233d04 with catch @ 03233f48 */
                    /* catch() { ... } // from try @ 03233cd8 with catch @ 03233f4c */
    return;
  }
                    /* try { // try from 03233ef0 to 03333ef3 has its CatchHandler @ 03233f40 */
                    /* try { // try from 03233efc to 03333eff has its CatchHandler @ 03233f3c */
  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03233f00 to 03333f17 has its CatchHandler @ 032331f0 */
  if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    node = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,PNOCDIDLLLM,(MethodInfo *)0x0);
    if (node == (System_Xml_XmlAttribute_o *)0x0) {
      return;
    }
                    /* try { // try from 03233f18 to 03333f27 has its CatchHandler @ 03233f28 */
                    /* catch() { ... } // from try @ 03233f18 with catch @ 03233f28 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03233d34 with catch @ 03233f34 */
                    /* catch() { ... } // from try @ 03233d28 with catch @ 03233f38 */
                    /* catch() { ... } // from try @ 03233efc with catch @ 03233f3c */
                    /* catch() { ... } // from try @ 03233ef0 with catch @ 03233f40 */
      System_Xml_XmlAttributeCollection__Remove(pSVar2,node,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

