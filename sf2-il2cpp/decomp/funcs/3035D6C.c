// EAAHMDAMHNI$$HNIHOIAMDPC @ RVA 0x3035D6C

void EAAHMDAMHNI__HNIHOIAMDPC
               (EAAHMDAMHNI_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04565d3f & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<EAAHMDAMHNI_IAAALIOLGOC>__);
    FUN_01bab630(&StringLiteral_9577);
                    /* try { // try from 03135da8 to 03235e17 has its CatchHandler @ 03135da8
                       catch() { ... } // from try @ 03135da8 with catch @ 03135da8
                       catch() { ... } // from try @ 03135e2c with catch @ 03135da8
                       catch() { ... } // from try @ 03135ea0 with catch @ 03135da8 */
    FUN_01bab630(&StringLiteral_9968);
    DAT_04565d3f = 1;
  }
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9577,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
      (__this->fields).ADAOAMNHANG = bVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03135e18 to 03235e23 has its CatchHandler @ 03135e64 */
                    /* try { // try from 03135e28 to 03235e2b has its CatchHandler @ 03135e60 */
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9968,(MethodInfo *)0x0);
                    /* try { // try from 03135e2c to 03235e7b has its CatchHandler @ 03135da8 */
        iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar4,2,Method_EIABCPKDEBD_CKHGJBKDIID<EAAHMDAMHNI_IAAALIOLGOC>__);
        (__this->fields).GCOAKFIEAAL = iVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

