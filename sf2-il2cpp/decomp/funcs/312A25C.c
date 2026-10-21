// MBALPICJBHF$$HNIHOIAMDPC @ RVA 0x312A25C

void MBALPICJBHF__HNIHOIAMDPC
               (MBALPICJBHF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04566689 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2857);
    FUN_01bab630(&StringLiteral_10183);
    FUN_01bab630(&StringLiteral_6601);
    FUN_01bab630(&StringLiteral_2858);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_6600);
    FUN_01bab630(&StringLiteral_5640);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566689 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar4 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).BGHFADDGPAD = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10183,(MethodInfo *)0x0);
        iVar1 = GIAMPEGMNHE__NANCFCIGNEE(pSVar3,0,(MethodInfo *)0x0);
        CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
        (__this->fields).LCLBBHFEHDC.fields = CVar6;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5640,(MethodInfo *)0x0);
          iVar1 = GIAMPEGMNHE__NANCFCIGNEE(pSVar3,0,(MethodInfo *)0x0);
          CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            (iVar1,(MethodInfo *)0x0);
          (__this->fields).EOOHODKJDHH.fields = CVar6;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_2857,(MethodInfo *)0x0);
            fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,fVar5,
                       (MethodInfo *)0x0);
            local_40.fakeValueActive = local_60.fakeValueActive;
            local_40.inited = local_60.inited;
            local_40._18_2_ = local_60._18_2_;
            local_40.hiddenValueOldByte4.fields = local_60.hiddenValueOldByte4.fields;
            local_40.fakeValue = local_60.fakeValue;
            local_40.currentCryptoKey = local_60.currentCryptoKey;
            local_40.hiddenValue = local_60.hiddenValue;
            (__this->fields).CKHKAPNMEKL.fields.fakeValueActive = local_60.fakeValueActive;
            (__this->fields).CKHKAPNMEKL.fields.inited = local_60.inited;
            *(undefined2 *)&(__this->fields).CKHKAPNMEKL.fields.field_0x12 = local_60._18_2_;
            (__this->fields).CKHKAPNMEKL.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_60.hiddenValueOldByte4.fields;
            (__this->fields).CKHKAPNMEKL.fields.fakeValue = local_60.fakeValue;
            (__this->fields).CKHKAPNMEKL.fields.currentCryptoKey = local_60.currentCryptoKey;
            (__this->fields).CKHKAPNMEKL.fields.hiddenValue = local_60.hiddenValue;
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_2858,(MethodInfo *)0x0);
              fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,fVar5,
                         (MethodInfo *)0x0);
              local_60.fakeValueActive = local_80.fakeValueActive;
              local_60.inited = local_80.inited;
              local_60._18_2_ = local_80._18_2_;
              local_60.hiddenValueOldByte4.fields = local_80.hiddenValueOldByte4.fields;
              local_60.fakeValue = local_80.fakeValue;
              local_60.currentCryptoKey = local_80.currentCryptoKey;
              local_60.hiddenValue = local_80.hiddenValue;
              (__this->fields).IBBCABGOAMN.fields.fakeValueActive = local_80.fakeValueActive;
              (__this->fields).IBBCABGOAMN.fields.inited = local_80.inited;
              *(undefined2 *)&(__this->fields).IBBCABGOAMN.fields.field_0x12 = local_80._18_2_;
              (__this->fields).IBBCABGOAMN.fields.hiddenValueOldByte4 =
                   (CodeStage_AntiCheat_Common_ACTkByte4_o)local_80.hiddenValueOldByte4.fields;
              (__this->fields).IBBCABGOAMN.fields.fakeValue = local_80.fakeValue;
              (__this->fields).IBBCABGOAMN.fields.currentCryptoKey = local_80.currentCryptoKey;
              (__this->fields).IBBCABGOAMN.fields.hiddenValue = local_80.hiddenValue;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_6600,(MethodInfo *)0x0);
                fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a0,fVar5,
                           (MethodInfo *)0x0);
                local_80.fakeValueActive = local_a0.fakeValueActive;
                local_80.inited = local_a0.inited;
                local_80._18_2_ = local_a0._18_2_;
                local_80.hiddenValueOldByte4.fields = local_a0.hiddenValueOldByte4.fields;
                local_80.fakeValue = local_a0.fakeValue;
                local_80.currentCryptoKey = local_a0.currentCryptoKey;
                local_80.hiddenValue = local_a0.hiddenValue;
                (__this->fields).JPKGOALFABP.fields.fakeValueActive = local_a0.fakeValueActive;
                (__this->fields).JPKGOALFABP.fields.inited = local_a0.inited;
                *(undefined2 *)&(__this->fields).JPKGOALFABP.fields.field_0x12 = local_a0._18_2_;
                (__this->fields).JPKGOALFABP.fields.hiddenValueOldByte4 =
                     (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a0.hiddenValueOldByte4.fields;
                (__this->fields).JPKGOALFABP.fields.fakeValue = local_a0.fakeValue;
                (__this->fields).JPKGOALFABP.fields.currentCryptoKey = local_a0.currentCryptoKey;
                (__this->fields).JPKGOALFABP.fields.hiddenValue = local_a0.hiddenValue;
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_6601,(MethodInfo *)0x0);
                  fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b8,fVar5,
                             (MethodInfo *)0x0);
                  (__this->fields).LGABGEDDHDO.fields.fakeValueActive = local_b8.fakeValueActive;
                  (__this->fields).LGABGEDDHDO.fields.inited = local_b8.inited;
                  *(undefined2 *)&(__this->fields).LGABGEDDHDO.fields.field_0x12 = local_b8._18_2_;
                  (__this->fields).LGABGEDDHDO.fields.hiddenValueOldByte4 =
                       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b8.hiddenValueOldByte4.fields;
                  (__this->fields).LGABGEDDHDO.fields.fakeValue = local_b8.fakeValue;
                  (__this->fields).LGABGEDDHDO.fields.currentCryptoKey = local_b8.currentCryptoKey;
                  (__this->fields).LGABGEDDHDO.fields.hiddenValue = local_b8.hiddenValue;
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

