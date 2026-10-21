// MGNPHCAAEIO$$IHFMJJAPNPJ @ RVA 0x3404604

void MGNPHCAAEIO__IHFMJJAPNPJ(System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  DFONLJGONFN_o *pDVar3;
  float fVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_a8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_0456800a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_5471);
    FUN_01bab630(&StringLiteral_2993);
    FUN_01bab630(&StringLiteral_8452);
    DAT_0456800a = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568079 == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568079 = '\x01';
    method = extraout_x1_01;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    pDVar3 = MGNPHCAAEIO_TypeInfo->static_fields->BDOBGMIFOAC;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                       (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_2993,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,fVar4,
                 (MethodInfo *)0x0);
      local_50.hiddenValueOldByte4.fields = local_70.hiddenValueOldByte4.fields;
      local_50.fakeValue = local_70.fakeValue;
      local_50.currentCryptoKey = local_70.currentCryptoKey;
      local_50.hiddenValue = local_70.hiddenValue;
      local_50.fakeValueActive = local_70.fakeValueActive;
      local_50.inited = local_70.inited;
      local_50._18_2_ = local_70._18_2_;
      if (pDVar3 != (DFONLJGONFN_o *)0x0) {
        (pDVar3->fields).GOBFFOHNAFL.fields.fakeValueActive = local_70.fakeValueActive;
        (pDVar3->fields).GOBFFOHNAFL.fields.inited = local_70.inited;
        *(undefined2 *)&(pDVar3->fields).GOBFFOHNAFL.fields.field_0x12 = local_70._18_2_;
        (pDVar3->fields).GOBFFOHNAFL.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)local_70.hiddenValueOldByte4.fields;
        (pDVar3->fields).GOBFFOHNAFL.fields.fakeValue = local_70.fakeValue;
        (pDVar3->fields).GOBFFOHNAFL.fields.currentCryptoKey = local_70.currentCryptoKey;
        (pDVar3->fields).GOBFFOHNAFL.fields.hiddenValue = local_70.hiddenValue;
        if (DAT_04568079 == '\0') {
          FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
          DAT_04568079 = '\x01';
        }
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pDVar3 = MGNPHCAAEIO_TypeInfo->static_fields->BDOBGMIFOAC;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                           (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_5471,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,fVar4,
                     (MethodInfo *)0x0);
          local_70.hiddenValueOldByte4.fields = local_90.hiddenValueOldByte4.fields;
          local_70.fakeValue = local_90.fakeValue;
          local_70.currentCryptoKey = local_90.currentCryptoKey;
          local_70.hiddenValue = local_90.hiddenValue;
          local_70.fakeValueActive = local_90.fakeValueActive;
          local_70.inited = local_90.inited;
          local_70._18_2_ = local_90._18_2_;
          if (pDVar3 != (DFONLJGONFN_o *)0x0) {
            (pDVar3->fields).CHGOIPBCBDO.fields.fakeValueActive = local_90.fakeValueActive;
            (pDVar3->fields).CHGOIPBCBDO.fields.inited = local_90.inited;
            *(undefined2 *)&(pDVar3->fields).CHGOIPBCBDO.fields.field_0x12 = local_90._18_2_;
            (pDVar3->fields).CHGOIPBCBDO.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValueOldByte4.fields;
            (pDVar3->fields).CHGOIPBCBDO.fields.fakeValue = local_90.fakeValue;
            (pDVar3->fields).CHGOIPBCBDO.fields.currentCryptoKey = local_90.currentCryptoKey;
            (pDVar3->fields).CHGOIPBCBDO.fields.hiddenValue = local_90.hiddenValue;
            if (DAT_04568079 == '\0') {
              FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
              DAT_04568079 = '\x01';
            }
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar3 = MGNPHCAAEIO_TypeInfo->static_fields->BDOBGMIFOAC;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_8452,(MethodInfo *)0x0);
              fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_a8,fVar4,
                         (MethodInfo *)0x0);
              local_90.hiddenValueOldByte4.fields = local_a8.hiddenValueOldByte4.fields;
              local_90.fakeValue = local_a8.fakeValue;
              local_90.currentCryptoKey = local_a8.currentCryptoKey;
              local_90.hiddenValue = local_a8.hiddenValue;
              local_90.fakeValueActive = local_a8.fakeValueActive;
              local_90.inited = local_a8.inited;
              local_90._18_2_ = local_a8._18_2_;
              if (pDVar3 != (DFONLJGONFN_o *)0x0) {
                (pDVar3->fields).FFLNNBLKCCB.fields.fakeValueActive = local_a8.fakeValueActive;
                (pDVar3->fields).FFLNNBLKCCB.fields.inited = local_a8.inited;
                *(undefined2 *)&(pDVar3->fields).FFLNNBLKCCB.fields.field_0x12 = local_a8._18_2_;
                (pDVar3->fields).FFLNNBLKCCB.fields.hiddenValueOldByte4 =
                     (CodeStage_AntiCheat_Common_ACTkByte4_o)local_a8.hiddenValueOldByte4.fields;
                (pDVar3->fields).FFLNNBLKCCB.fields.fakeValue = local_a8.fakeValue;
                (pDVar3->fields).FFLNNBLKCCB.fields.currentCryptoKey = local_a8.currentCryptoKey;
                (pDVar3->fields).FFLNNBLKCCB.fields.hiddenValue = local_a8.hiddenValue;
                return;
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

