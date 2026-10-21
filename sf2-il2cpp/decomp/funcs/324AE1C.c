// HFCOLPLEANG$$.ctor @ RVA 0x324AE1C

void HFCOLPLEANG___ctor(HFCOLPLEANG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  int64_t iVar4;
  float fVar5;
  
  if ((DAT_045670f1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_14738);
    DAT_045670f1 = 1;
  }
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  (__this->fields).super.NOBEFHEECKJ = 2;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
      (__this->fields).super.field_0x6 = bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__HNIGPBMJJOL(pSVar3,0,(MethodInfo *)0x0);
        *(int64_t *)&(__this->fields).LFACAEPBLCM = iVar4;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14738,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          *(float *)&(__this->fields).PCNEDMAJMOJ = fVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

