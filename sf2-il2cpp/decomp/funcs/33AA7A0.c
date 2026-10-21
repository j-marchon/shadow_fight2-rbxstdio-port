// OLKPEJMEBPJ$$DPLIHJEANGE @ RVA 0x33AA7A0

void OLKPEJMEBPJ__DPLIHJEANGE(OLKPEJMEBPJ_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04567d11 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_7076);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04567d11 = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).BFPMONAEFGM = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_7076,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_7076,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_7076,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_1567;
          if ((__this->fields).BFPMONAEFGM != false) {
            puVar1 = &StringLiteral_1606;
          }
                    /* WARNING: Could not recover jumptable at 0x034aa88c. Too many branches */
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

