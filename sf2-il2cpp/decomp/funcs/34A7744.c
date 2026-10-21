// LNELHGPOMJM.<>c$$NDKGAMBJAKG @ RVA 0x34A7744

bool LNELHGPOMJM_<>c__NDKGAMBJAKG
               (LNELHGPOMJM___c_o *__this,System_Xml_XmlNode_o *x,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if ((DAT_045684fc & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    __this = (LNELHGPOMJM___c_o *)FUN_01bab630(&StringLiteral_13991);
    DAT_045684fc = 1;
  }
  if (x != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(x->klass->vtable)._16_get_Attributes.methodPtr)
                       (x,(x->klass->vtable)._16_get_Attributes.method);
    __this = (LNELHGPOMJM___c_o *)0x0;
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991,(MethodInfo *)0x0);
      bVar1 = false;
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 035a77b0 to 036a77d7 has its CatchHandler @ 035a7eb8 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(x->klass->vtable)._16_get_Attributes.methodPtr)
                           (x,(x->klass->vtable)._16_get_Attributes.method);
        __this = (LNELHGPOMJM___c_o *)0x0;
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035a77f0;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
        bVar1 = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
      }
      return bVar1;
    }
  }
LAB_035a77f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

