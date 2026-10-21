// IGFGDDANEPE$$FDAILKOHIKF @ RVA 0x30A3DCC

void IGFGDDANEPE__FDAILKOHIKF(IGFGDDANEPE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  int32_t local_24;
  
  local_24 = CJNHFNHJHPE;
  if ((DAT_0456615e & 1) == 0) {
    FUN_01bab630(&StringLiteral_5294);
    DAT_0456615e = 1;
  }
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  bVar1 = (__this->fields).MMNCAIGLMJB;
  (__this->fields).NOBPPMJKPLM.fields = CVar6;
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
                       (pSVar3,StringLiteral_5294,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).DMLGJFCNNJF,StringLiteral_5294,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_5294,(MethodInfo *)0x0);
      pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
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

