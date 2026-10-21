// IGFGDDANEPE$$DOOKHLFKCAI @ RVA 0x30A4DA0

void IGFGDDANEPE__DOOKHLFKCAI(IGFGDDANEPE_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  int64_t local_28;
  
  local_28 = CJNHFNHJHPE;
  if ((DAT_04566168 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5292);
    DAT_04566168 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,CJNHFNHJHPE,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  bVar1 = (__this->fields).MMNCAIGLMJB;
  (__this->fields).MCCADBLBPMN.fields.fakeValueActive = local_70.fields.fakeValueActive;
  (__this->fields).MCCADBLBPMN.fields.inited = local_70.fields.inited;
  *(undefined6 *)&(__this->fields).MCCADBLBPMN.fields.field_0x1a = local_70.fields._26_6_;
  (__this->fields).MCCADBLBPMN.fields.fakeValue = local_70.fields.fakeValue;
  (__this->fields).MCCADBLBPMN.fields.hiddenValue = local_70.fields.hiddenValue;
  (__this->fields).MCCADBLBPMN.fields.currentCryptoKey = local_70.fields.currentCryptoKey;
  if (bVar1 == false) {
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_5292,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_5292,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_5292,(MethodInfo *)0x0);
      pSVar5 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

