// EKGDLIKHEMA$$INOKKGKNDAH @ RVA 0x33312FC

void EKGDLIKHEMA__INOKKGKNDAH(EKGDLIKHEMA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04567907 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9788);
    FUN_01bab630(&StringLiteral_18196);
    FUN_01bab630(&StringLiteral_21605);
    DAT_04567907 = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).LDBJGDMBCKM = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9788,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_9788,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9788,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_18196;
          if ((__this->fields).LDBJGDMBCKM != false) {
            puVar1 = &StringLiteral_21605;
          }
                    /* WARNING: Could not recover jumptable at 0x034313e8. Too many branches */
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

