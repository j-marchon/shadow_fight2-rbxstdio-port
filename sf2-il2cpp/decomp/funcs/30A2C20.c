// IGFGDDANEPE$$OEMBIADDDEE @ RVA 0x30A2C20

void IGFGDDANEPE__OEMBIADDDEE(IGFGDDANEPE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04566154 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5837);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04566154 = 1;
  }
  (__this->fields).OFIKEBGDMBE = CJNHFNHJHPE;
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_5837,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_5837,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).DMLGJFCNNJF;
        if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
          if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_5837,(MethodInfo *)0x0),
             pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
            puVar1 = &StringLiteral_1606;
            if (!CJNHFNHJHPE) {
              puVar1 = &StringLiteral_1567;
            }
                    /* WARNING: Could not recover jumptable at 0x031a2d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

