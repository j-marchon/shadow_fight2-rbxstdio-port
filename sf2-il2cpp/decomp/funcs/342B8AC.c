// KJAKJNJODKL$$HNIHOIAMDPC @ RVA 0x342B8AC

void KJAKJNJODKL__HNIHOIAMDPC
               (KJAKJNJODKL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_38;
  
  if ((DAT_04568138 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_5067);
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_5266);
    FUN_01bab630(&StringLiteral_11996);
    FUN_01bab630(&StringLiteral_4893);
    FUN_01bab630(&StringLiteral_5066);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568138 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5266,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields)._MELJNLOGJOJ_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3508,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
        (__this->fields)._AALKLBINCHG_k__BackingField = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4893,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
          (__this->fields)._BJHDPDBPMAL_k__BackingField = iVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_11996,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
            (__this->fields)._HOKBMPLNBLK_k__BackingField = iVar1;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2968,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
              (__this->fields)._ILIDNOINMBF_k__BackingField = pSVar4;
              thunk_FUN_01c20e04();
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_5067,(MethodInfo *)0x0);
                fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,fVar5,
                           (MethodInfo *)0x0);
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValueActive =
                     local_38.fakeValueActive;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.inited = local_38.inited;
                *(undefined2 *)&(__this->fields)._HKKHAPKFAHP_k__BackingField.fields.field_0x12 =
                     local_38._18_2_;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValueOldByte4 =
                     (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.fakeValue = local_38.fakeValue;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.currentCryptoKey =
                     local_38.currentCryptoKey;
                (__this->fields)._HKKHAPKFAHP_k__BackingField.fields.hiddenValue =
                     local_38.hiddenValue;
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_5066,(MethodInfo *)0x0);
                  fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,-1.0,(MethodInfo *)0x0);
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_38,fVar5,
                             (MethodInfo *)0x0);
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValueActive =
                       local_38.fakeValueActive;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.inited = local_38.inited;
                  *(undefined2 *)&(__this->fields)._DILGBCPIAOG_k__BackingField.fields.field_0x12 =
                       local_38._18_2_;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValueOldByte4 =
                       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_38.hiddenValueOldByte4.fields;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.fakeValue =
                       local_38.fakeValue;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.currentCryptoKey =
                       local_38.currentCryptoKey;
                  (__this->fields)._DILGBCPIAOG_k__BackingField.fields.hiddenValue =
                       local_38.hiddenValue;
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

