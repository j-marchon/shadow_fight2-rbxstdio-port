// PEJCGNNAPHG$$HNIHOIAMDPC @ RVA 0x335FB94

void PEJCGNNAPHG__HNIHOIAMDPC
               (PEJCGNNAPHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_04567a7b & 1) == 0) {
    FUN_01bab630(&StringLiteral_5271);
    FUN_01bab630(&StringLiteral_13776);
    FUN_01bab630(&StringLiteral_5769);
    FUN_01bab630(&StringLiteral_8908);
    DAT_04567a7b = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8908,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x34 = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5769,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).GHDKCEAMEHP = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_13776,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).NKILLLENJMM = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5271,(MethodInfo *)0x0);
            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).BJIKPLGMOMI = fVar3;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

