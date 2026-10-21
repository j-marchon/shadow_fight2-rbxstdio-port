// OBOBEOMMECI$$HNIHOIAMDPC @ RVA 0x3526BDC

void OBOBEOMMECI__HNIHOIAMDPC
               (OBOBEOMMECI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *GKKCICEBFMO;
  MethodInfo *method_00;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_228;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_210;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_1f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_1d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_1b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_190;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_170;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_150;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_130;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04568a02 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4331);
    FUN_01bab630(&StringLiteral_3400);
    FUN_01bab630(&StringLiteral_7060);
    FUN_01bab630(&StringLiteral_2992);
    FUN_01bab630(&StringLiteral_5425);
    FUN_01bab630(&StringLiteral_7122);
    FUN_01bab630(&StringLiteral_8776);
    FUN_01bab630(&StringLiteral_9103);
    FUN_01bab630(&StringLiteral_4835);
    FUN_01bab630(&StringLiteral_8452);
    FUN_01bab630(&StringLiteral_5065);
    FUN_01bab630(&StringLiteral_5762);
    FUN_01bab630(&StringLiteral_6198);
    FUN_01bab630(&StringLiteral_4576);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_2977);
    FUN_01bab630(&StringLiteral_11991);
    DAT_04568a02 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_3400,(MethodInfo *)0x0);
    fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,fVar3,
               (MethodInfo *)0x0);
    local_50.fakeValueActive = local_70.fakeValueActive;
    local_50.inited = local_70.inited;
    local_50._18_2_ = local_70._18_2_;
    local_50.hiddenValueOldByte4.fields = local_70.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_70.fakeValue;
    local_50.currentCryptoKey = local_70.currentCryptoKey;
    local_50.hiddenValue = local_70.hiddenValue;
    (__this->fields).DHDPEBOFPPN.fields.fakeValueActive = local_70.fakeValueActive;
    (__this->fields).DHDPEBOFPPN.fields.inited = local_70.inited;
    *(undefined2 *)&(__this->fields).DHDPEBOFPPN.fields.field_0x12 = local_70._18_2_;
    (__this->fields).DHDPEBOFPPN.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_70.hiddenValueOldByte4.fields;
    (__this->fields).DHDPEBOFPPN.fields.fakeValue = local_70.fakeValue;
    (__this->fields).DHDPEBOFPPN.fields.currentCryptoKey = local_70.currentCryptoKey;
    (__this->fields).DHDPEBOFPPN.fields.hiddenValue = local_70.hiddenValue;
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_4835,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,fVar3,
                 (MethodInfo *)0x0);
      local_70.fakeValueActive = local_90.fakeValueActive;
      local_70.inited = local_90.inited;
      local_70._18_2_ = local_90._18_2_;
      local_70.hiddenValueOldByte4.fields = local_90.hiddenValueOldByte4.fields;
      local_70.fakeValue = local_90.fakeValue;
      local_70.currentCryptoKey = local_90.currentCryptoKey;
      local_70.hiddenValue = local_90.hiddenValue;
      (__this->fields).CGPOOLKBOKD.fields.fakeValueActive = local_90.fakeValueActive;
      (__this->fields).CGPOOLKBOKD.fields.inited = local_90.inited;
      *(undefined2 *)&(__this->fields).CGPOOLKBOKD.fields.field_0x12 = local_90._18_2_;
      (__this->fields).CGPOOLKBOKD.fields.hiddenValueOldByte4 =
           (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValueOldByte4.fields;
      (__this->fields).CGPOOLKBOKD.fields.fakeValue = local_90.fakeValue;
      (__this->fields).CGPOOLKBOKD.fields.currentCryptoKey = local_90.currentCryptoKey;
      (__this->fields).CGPOOLKBOKD.fields.hiddenValue = local_90.hiddenValue;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5065,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,fVar3,
                   (MethodInfo *)0x0);
        local_90.fakeValueActive = local_b0.fakeValueActive;
        local_90.inited = local_b0.inited;
        local_90._18_2_ = local_b0._18_2_;
        local_90.hiddenValueOldByte4.fields = local_b0.hiddenValueOldByte4.fields;
        local_90.fakeValue = local_b0.fakeValue;
        local_90.currentCryptoKey = local_b0.currentCryptoKey;
        local_90.hiddenValue = local_b0.hiddenValue;
        (__this->fields).BJAPLLKBIKE.fields.fakeValueActive = local_b0.fakeValueActive;
        (__this->fields).BJAPLLKBIKE.fields.inited = local_b0.inited;
        *(undefined2 *)&(__this->fields).BJAPLLKBIKE.fields.field_0x12 = local_b0._18_2_;
        (__this->fields).BJAPLLKBIKE.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b0.hiddenValueOldByte4.fields;
        (__this->fields).BJAPLLKBIKE.fields.fakeValue = local_b0.fakeValue;
        (__this->fields).BJAPLLKBIKE.fields.currentCryptoKey = local_b0.currentCryptoKey;
        (__this->fields).BJAPLLKBIKE.fields.hiddenValue = local_b0.hiddenValue;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_7060,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_d0,fVar3,
                     (MethodInfo *)0x0);
          local_b0.fakeValueActive = local_d0.fakeValueActive;
          local_b0.inited = local_d0.inited;
          local_b0._18_2_ = local_d0._18_2_;
          local_b0.hiddenValueOldByte4.fields = local_d0.hiddenValueOldByte4.fields;
          local_b0.fakeValue = local_d0.fakeValue;
          local_b0.currentCryptoKey = local_d0.currentCryptoKey;
          local_b0.hiddenValue = local_d0.hiddenValue;
          (__this->fields).CNIEFJOIKCE.fields.fakeValueActive = local_d0.fakeValueActive;
          (__this->fields).CNIEFJOIKCE.fields.inited = local_d0.inited;
          *(undefined2 *)&(__this->fields).CNIEFJOIKCE.fields.field_0x12 = local_d0._18_2_;
          (__this->fields).CNIEFJOIKCE.fields.hiddenValueOldByte4 =
               (CodeStage_AntiCheat_Common_ACTkByte4_o)local_d0.hiddenValueOldByte4.fields;
          (__this->fields).CNIEFJOIKCE.fields.fakeValue = local_d0.fakeValue;
          (__this->fields).CNIEFJOIKCE.fields.currentCryptoKey = local_d0.currentCryptoKey;
          (__this->fields).CNIEFJOIKCE.fields.hiddenValue = local_d0.hiddenValue;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5762,(MethodInfo *)0x0);
            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_f0,fVar3,
                       (MethodInfo *)0x0);
            local_d0.fakeValueActive = local_f0.fakeValueActive;
            local_d0.inited = local_f0.inited;
            local_d0._18_2_ = local_f0._18_2_;
            local_d0.hiddenValueOldByte4.fields = local_f0.hiddenValueOldByte4.fields;
            local_d0.fakeValue = local_f0.fakeValue;
            local_d0.currentCryptoKey = local_f0.currentCryptoKey;
            local_d0.hiddenValue = local_f0.hiddenValue;
            (__this->fields).GHDFDNHOHFJ.fields.fakeValueActive = local_f0.fakeValueActive;
            (__this->fields).GHDFDNHOHFJ.fields.inited = local_f0.inited;
            *(undefined2 *)&(__this->fields).GHDFDNHOHFJ.fields.field_0x12 = local_f0._18_2_;
            (__this->fields).GHDFDNHOHFJ.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_f0.hiddenValueOldByte4.fields;
            (__this->fields).GHDFDNHOHFJ.fields.fakeValue = local_f0.fakeValue;
            (__this->fields).GHDFDNHOHFJ.fields.currentCryptoKey = local_f0.currentCryptoKey;
            (__this->fields).GHDFDNHOHFJ.fields.hiddenValue = local_f0.hiddenValue;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_2977,(MethodInfo *)0x0);
              fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_110,fVar3,
                         (MethodInfo *)0x0);
              local_f0.fakeValueActive = local_110.fakeValueActive;
              local_f0.inited = local_110.inited;
              local_f0._18_2_ = local_110._18_2_;
              local_f0.hiddenValueOldByte4.fields = local_110.hiddenValueOldByte4.fields;
              local_f0.fakeValue = local_110.fakeValue;
              local_f0.currentCryptoKey = local_110.currentCryptoKey;
              local_f0.hiddenValue = local_110.hiddenValue;
              (__this->fields).NJBFEHPHCPJ.fields.fakeValueActive = local_110.fakeValueActive;
              (__this->fields).NJBFEHPHCPJ.fields.inited = local_110.inited;
              *(undefined2 *)&(__this->fields).NJBFEHPHCPJ.fields.field_0x12 = local_110._18_2_;
              (__this->fields).NJBFEHPHCPJ.fields.hiddenValueOldByte4 =
                   (CodeStage_AntiCheat_Common_ACTkByte4_o)local_110.hiddenValueOldByte4.fields;
              (__this->fields).NJBFEHPHCPJ.fields.fakeValue = local_110.fakeValue;
              (__this->fields).NJBFEHPHCPJ.fields.currentCryptoKey = local_110.currentCryptoKey;
              (__this->fields).NJBFEHPHCPJ.fields.hiddenValue = local_110.hiddenValue;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_4331,(MethodInfo *)0x0);
                fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,fVar3,
                           (MethodInfo *)0x0);
                local_110.fakeValueActive = local_130.fakeValueActive;
                local_110.inited = local_130.inited;
                local_110._18_2_ = local_130._18_2_;
                local_110.hiddenValueOldByte4.fields = local_130.hiddenValueOldByte4.fields;
                local_110.fakeValue = local_130.fakeValue;
                local_110.currentCryptoKey = local_130.currentCryptoKey;
                local_110.hiddenValue = local_130.hiddenValue;
                (__this->fields).CADHHHNFIDC.fields.fakeValueActive = local_130.fakeValueActive;
                (__this->fields).CADHHHNFIDC.fields.inited = local_130.inited;
                *(undefined2 *)&(__this->fields).CADHHHNFIDC.fields.field_0x12 = local_130._18_2_;
                (__this->fields).CADHHHNFIDC.fields.hiddenValueOldByte4 =
                     (CodeStage_AntiCheat_Common_ACTkByte4_o)local_130.hiddenValueOldByte4.fields;
                (__this->fields).CADHHHNFIDC.fields.fakeValue = local_130.fakeValue;
                (__this->fields).CADHHHNFIDC.fields.currentCryptoKey = local_130.currentCryptoKey;
                (__this->fields).CADHHHNFIDC.fields.hiddenValue = local_130.hiddenValue;
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_8776,(MethodInfo *)0x0);
                  fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_150,fVar3,
                             (MethodInfo *)0x0);
                  local_130.fakeValueActive = local_150.fakeValueActive;
                  local_130.inited = local_150.inited;
                  local_130._18_2_ = local_150._18_2_;
                  local_130.hiddenValueOldByte4.fields = local_150.hiddenValueOldByte4.fields;
                  local_130.fakeValue = local_150.fakeValue;
                  local_130.currentCryptoKey = local_150.currentCryptoKey;
                  local_130.hiddenValue = local_150.hiddenValue;
                  (__this->fields).ABOMKALPIEL.fields.fakeValueActive = local_150.fakeValueActive;
                  (__this->fields).ABOMKALPIEL.fields.inited = local_150.inited;
                  *(undefined2 *)&(__this->fields).ABOMKALPIEL.fields.field_0x12 = local_150._18_2_;
                  (__this->fields).ABOMKALPIEL.fields.hiddenValueOldByte4 =
                       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_150.hiddenValueOldByte4.fields;
                  (__this->fields).ABOMKALPIEL.fields.fakeValue = local_150.fakeValue;
                  (__this->fields).ABOMKALPIEL.fields.currentCryptoKey = local_150.currentCryptoKey;
                  (__this->fields).ABOMKALPIEL.fields.hiddenValue = local_150.hiddenValue;
                  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar1,StringLiteral_9103,(MethodInfo *)0x0);
                    fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_170,fVar3
                               ,(MethodInfo *)0x0);
                    local_150.fakeValueActive = local_170.fakeValueActive;
                    local_150.inited = local_170.inited;
                    local_150._18_2_ = local_170._18_2_;
                    local_150.hiddenValueOldByte4.fields = local_170.hiddenValueOldByte4.fields;
                    local_150.fakeValue = local_170.fakeValue;
                    local_150.currentCryptoKey = local_170.currentCryptoKey;
                    local_150.hiddenValue = local_170.hiddenValue;
                    (__this->fields).OBOANBKDOIN.fields.fakeValueActive = local_170.fakeValueActive;
                    (__this->fields).OBOANBKDOIN.fields.inited = local_170.inited;
                    *(undefined2 *)&(__this->fields).OBOANBKDOIN.fields.field_0x12 =
                         local_170._18_2_;
                    (__this->fields).OBOANBKDOIN.fields.hiddenValueOldByte4 =
                         (CodeStage_AntiCheat_Common_ACTkByte4_o)
                         local_170.hiddenValueOldByte4.fields;
                    (__this->fields).OBOANBKDOIN.fields.fakeValue = local_170.fakeValue;
                    (__this->fields).OBOANBKDOIN.fields.currentCryptoKey =
                         local_170.currentCryptoKey;
                    (__this->fields).OBOANBKDOIN.fields.hiddenValue = local_170.hiddenValue;
                    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar1,StringLiteral_7122,(MethodInfo *)0x0);
                      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_190,
                                 fVar3,(MethodInfo *)0x0);
                      local_170.fakeValueActive = local_190.fakeValueActive;
                      local_170.inited = local_190.inited;
                      local_170._18_2_ = local_190._18_2_;
                      local_170.hiddenValueOldByte4.fields = local_190.hiddenValueOldByte4.fields;
                      local_170.fakeValue = local_190.fakeValue;
                      local_170.currentCryptoKey = local_190.currentCryptoKey;
                      local_170.hiddenValue = local_190.hiddenValue;
                      (__this->fields).NHKNFMFFAAF.fields.fakeValueActive =
                           local_190.fakeValueActive;
                      (__this->fields).NHKNFMFFAAF.fields.inited = local_190.inited;
                      *(undefined2 *)&(__this->fields).NHKNFMFFAAF.fields.field_0x12 =
                           local_190._18_2_;
                      (__this->fields).NHKNFMFFAAF.fields.hiddenValueOldByte4 =
                           (CodeStage_AntiCheat_Common_ACTkByte4_o)
                           local_190.hiddenValueOldByte4.fields;
                      (__this->fields).NHKNFMFFAAF.fields.fakeValue = local_190.fakeValue;
                      (__this->fields).NHKNFMFFAAF.fields.currentCryptoKey =
                           local_190.currentCryptoKey;
                      (__this->fields).NHKNFMFFAAF.fields.hiddenValue = local_190.hiddenValue;
                      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar1,StringLiteral_5425,(MethodInfo *)0x0);
                        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_1b0,
                                   fVar3,(MethodInfo *)0x0);
                        local_190.fakeValueActive = local_1b0.fakeValueActive;
                        local_190.inited = local_1b0.inited;
                        local_190._18_2_ = local_1b0._18_2_;
                        local_190.hiddenValueOldByte4.fields = local_1b0.hiddenValueOldByte4.fields;
                        local_190.fakeValue = local_1b0.fakeValue;
                        local_190.currentCryptoKey = local_1b0.currentCryptoKey;
                        local_190.hiddenValue = local_1b0.hiddenValue;
                        (__this->fields).HAFJEMKLDNH.fields.fakeValueActive =
                             local_1b0.fakeValueActive;
                        (__this->fields).HAFJEMKLDNH.fields.inited = local_1b0.inited;
                        *(undefined2 *)&(__this->fields).HAFJEMKLDNH.fields.field_0x12 =
                             local_1b0._18_2_;
                        (__this->fields).HAFJEMKLDNH.fields.hiddenValueOldByte4 =
                             (CodeStage_AntiCheat_Common_ACTkByte4_o)
                             local_1b0.hiddenValueOldByte4.fields;
                        (__this->fields).HAFJEMKLDNH.fields.fakeValue = local_1b0.fakeValue;
                        (__this->fields).HAFJEMKLDNH.fields.currentCryptoKey =
                             local_1b0.currentCryptoKey;
                        (__this->fields).HAFJEMKLDNH.fields.hiddenValue = local_1b0.hiddenValue;
                        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar1,StringLiteral_11991,(MethodInfo *)0x0);
                          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_1d0
                                     ,fVar3,(MethodInfo *)0x0);
                          local_1b0.fakeValueActive = local_1d0.fakeValueActive;
                          local_1b0.inited = local_1d0.inited;
                          local_1b0._18_2_ = local_1d0._18_2_;
                          local_1b0.hiddenValueOldByte4.fields =
                               local_1d0.hiddenValueOldByte4.fields;
                          local_1b0.fakeValue = local_1d0.fakeValue;
                          local_1b0.currentCryptoKey = local_1d0.currentCryptoKey;
                          local_1b0.hiddenValue = local_1d0.hiddenValue;
                          (__this->fields).KENACCCGOJE.fields.fakeValueActive =
                               local_1d0.fakeValueActive;
                          (__this->fields).KENACCCGOJE.fields.inited = local_1d0.inited;
                          *(undefined2 *)&(__this->fields).KENACCCGOJE.fields.field_0x12 =
                               local_1d0._18_2_;
                          (__this->fields).KENACCCGOJE.fields.hiddenValueOldByte4 =
                               (CodeStage_AntiCheat_Common_ACTkByte4_o)
                               local_1d0.hiddenValueOldByte4.fields;
                          (__this->fields).KENACCCGOJE.fields.fakeValue = local_1d0.fakeValue;
                          (__this->fields).KENACCCGOJE.fields.currentCryptoKey =
                               local_1d0.currentCryptoKey;
                          (__this->fields).KENACCCGOJE.fields.hiddenValue = local_1d0.hiddenValue;
                          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar1,StringLiteral_4576,(MethodInfo *)0x0);
                            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                       &local_1f0,fVar3,(MethodInfo *)0x0);
                            local_1d0.fakeValueActive = local_1f0.fakeValueActive;
                            local_1d0.inited = local_1f0.inited;
                            local_1d0._18_2_ = local_1f0._18_2_;
                            local_1d0.hiddenValueOldByte4.fields =
                                 local_1f0.hiddenValueOldByte4.fields;
                            local_1d0.fakeValue = local_1f0.fakeValue;
                            local_1d0.currentCryptoKey = local_1f0.currentCryptoKey;
                            local_1d0.hiddenValue = local_1f0.hiddenValue;
                            (__this->fields).MCBNABGJNLF.fields.fakeValueActive =
                                 local_1f0.fakeValueActive;
                            (__this->fields).MCBNABGJNLF.fields.inited = local_1f0.inited;
                            *(undefined2 *)&(__this->fields).MCBNABGJNLF.fields.field_0x12 =
                                 local_1f0._18_2_;
                            (__this->fields).MCBNABGJNLF.fields.hiddenValueOldByte4 =
                                 (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                 local_1f0.hiddenValueOldByte4.fields;
                            (__this->fields).MCBNABGJNLF.fields.fakeValue = local_1f0.fakeValue;
                            (__this->fields).MCBNABGJNLF.fields.currentCryptoKey =
                                 local_1f0.currentCryptoKey;
                            (__this->fields).MCBNABGJNLF.fields.hiddenValue = local_1f0.hiddenValue;
                            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar1,StringLiteral_8452,(MethodInfo *)0x0);
                              fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                         &local_210,fVar3,(MethodInfo *)0x0);
                              local_1f0.fakeValueActive = local_210.fakeValueActive;
                              local_1f0.inited = local_210.inited;
                              local_1f0._18_2_ = local_210._18_2_;
                              local_1f0.hiddenValueOldByte4.fields =
                                   local_210.hiddenValueOldByte4.fields;
                              local_1f0.fakeValue = local_210.fakeValue;
                              local_1f0.currentCryptoKey = local_210.currentCryptoKey;
                              local_1f0.hiddenValue = local_210.hiddenValue;
                              (__this->fields).HCCNJLKGJGH.fields.fakeValueActive =
                                   local_210.fakeValueActive;
                              (__this->fields).HCCNJLKGJGH.fields.inited = local_210.inited;
                              *(undefined2 *)&(__this->fields).HCCNJLKGJGH.fields.field_0x12 =
                                   local_210._18_2_;
                              (__this->fields).HCCNJLKGJGH.fields.hiddenValueOldByte4 =
                                   (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                   local_210.hiddenValueOldByte4.fields;
                              (__this->fields).HCCNJLKGJGH.fields.fakeValue = local_210.fakeValue;
                              (__this->fields).HCCNJLKGJGH.fields.currentCryptoKey =
                                   local_210.currentCryptoKey;
                              (__this->fields).HCCNJLKGJGH.fields.hiddenValue =
                                   local_210.hiddenValue;
                              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar1,StringLiteral_2992,(MethodInfo *)0x0);
                                fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                           &local_228,fVar3,(MethodInfo *)0x0);
                                local_210.fakeValueActive = local_228.fakeValueActive;
                                local_210.inited = local_228.inited;
                                local_210._18_2_ = local_228._18_2_;
                                local_210.hiddenValueOldByte4.fields =
                                     local_228.hiddenValueOldByte4.fields;
                                local_210.fakeValue = local_228.fakeValue;
                                local_210.currentCryptoKey = local_228.currentCryptoKey;
                                local_210.hiddenValue = local_228.hiddenValue;
                                (__this->fields).AELCAEHIJDE.fields.fakeValueActive =
                                     local_228.fakeValueActive;
                                (__this->fields).AELCAEHIJDE.fields.inited = local_228.inited;
                                *(undefined2 *)&(__this->fields).AELCAEHIJDE.fields.field_0x12 =
                                     local_228._18_2_;
                                (__this->fields).AELCAEHIJDE.fields.hiddenValueOldByte4 =
                                     (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                     local_228.hiddenValueOldByte4.fields;
                                (__this->fields).AELCAEHIJDE.fields.fakeValue = local_228.fakeValue;
                                (__this->fields).AELCAEHIJDE.fields.currentCryptoKey =
                                     local_228.currentCryptoKey;
                                (__this->fields).AELCAEHIJDE.fields.hiddenValue =
                                     local_228.hiddenValue;
                                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr
                                         )(AHDGNOJPPIB,
                                           (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar1,StringLiteral_6198,(MethodInfo *)0x0);
                                  method_00 = (MethodInfo *)0x0;
                                  GKKCICEBFMO = EIABCPKDEBD__JPKEHIBGOEM
                                                          (pSVar2,StringLiteral_1,(MethodInfo *)0x0)
                                  ;
                                  OBOBEOMMECI__IJEKBANNOMC(__this,GKKCICEBFMO,method_00);
                                  OBOBEOMMECI__FBNPDNHPPIA(__this,AHDGNOJPPIB,method_00);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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

