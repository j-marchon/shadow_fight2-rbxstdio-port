// CALLBECPAIA$$.ctor @ RVA 0x30E30C0

void CALLBECPAIA___ctor(CALLBECPAIA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_045663ca & 1) == 0) {
    FUN_01bab630(&StringLiteral_5766);
    FUN_01bab630(&StringLiteral_5765);
    FUN_01bab630(&StringLiteral_10327);
    FUN_01bab630(&StringLiteral_10328);
    FUN_01bab630(&StringLiteral_5767);
    FUN_01bab630(&StringLiteral_10326);
    FUN_01bab630(&StringLiteral_11029);
    DAT_045663ca = 1;
  }
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x21,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10326,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      (__this->fields).JOBMIFFFCLB = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5765,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).PCFDLFAJOLE = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10327,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).GOOJGDKIINN = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5766,(MethodInfo *)0x0);
            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).MGNDAIOKHLN = fVar3;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_10328,(MethodInfo *)0x0);
              fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              (__this->fields).GIIKEFKEBIK = fVar3;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_5767,(MethodInfo *)0x0);
                fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                (__this->fields).EDPIKHAEGJB = fVar3;
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_11029,(MethodInfo *)0x0);
                  fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                  (__this->fields).PMAJGIMDOEA = fVar3;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

