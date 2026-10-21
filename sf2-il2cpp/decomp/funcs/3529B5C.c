// MNKGBNEMPCI$$HNIHOIAMDPC @ RVA 0x3529B5C

void MNKGBNEMPCI__HNIHOIAMDPC
               (MNKGBNEMPCI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58 [2];
  
  if ((DAT_04568a14 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202);
    FUN_01bab630(&StringLiteral_3400);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a14 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3202,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).NEFMLODIKPE = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3400,(MethodInfo *)0x0);
          CJNHFNHJHPE = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_58,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          (__this->fields).DHDPEBOFPPN.fields.fakeValueActive = local_58[0].fakeValueActive;
          (__this->fields).DHDPEBOFPPN.fields.inited = local_58[0].inited;
          *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12 = local_58[0]._18_2_;
          (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_58[0].hiddenValueOldByte4.fields;
          (__this->fields).DHDPEBOFPPN.fields.fakeValue = local_58[0].fakeValue;
          (__this->fields).DHDPEBOFPPN.fields.currentCryptoKey = local_58[0].currentCryptoKey;
          (__this->fields).DHDPEBOFPPN.fields.hiddenValue = local_58[0].hiddenValue;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

