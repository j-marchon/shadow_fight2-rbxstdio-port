// PFOFJCIOLOG$$HNIHOIAMDPC @ RVA 0x3104084

void PFOFJCIOLOG__HNIHOIAMDPC
               (PFOFJCIOLOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  float fVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_148;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_130;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  if ((DAT_045664e4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_3202);
    FUN_01bab630(&StringLiteral_15220);
    FUN_01bab630(&StringLiteral_3400);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8668);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_6584);
    FUN_01bab630(&StringLiteral_7357);
    FUN_01bab630(&StringLiteral_7048);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_11888);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_13918);
    FUN_01bab630(&StringLiteral_6580);
    FUN_01bab630(&StringLiteral_4895);
    DAT_045664e4 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_13918,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,fVar6,
                   (MethodInfo *)0x0);
        local_70.fakeValueActive = local_90.fakeValueActive;
        local_70.inited = local_90.inited;
        local_70._18_2_ = local_90._18_2_;
        local_70.hiddenValueOldByte4.fields = local_90.hiddenValueOldByte4.fields;
        local_70.fakeValue = local_90.fakeValue;
        local_70.currentCryptoKey = local_90.currentCryptoKey;
        local_70.hiddenValue = local_90.hiddenValue;
        (__this->fields).NDBJNNEIOLC.fields.fakeValueActive = local_90.fakeValueActive;
        (__this->fields).NDBJNNEIOLC.fields.inited = local_90.inited;
        *(undefined2 *)&(__this->fields).NDBJNNEIOLC.fields.field_0x12 = local_90._18_2_;
        (__this->fields).NDBJNNEIOLC.fields.hiddenValueOldByte4 =
             (CodeStage_AntiCheat_Common_ACTkByte4_o)local_90.hiddenValueOldByte4.fields;
        (__this->fields).NDBJNNEIOLC.fields.fakeValue = local_90.fakeValue;
        (__this->fields).NDBJNNEIOLC.fields.currentCryptoKey = local_90.currentCryptoKey;
        (__this->fields).NDBJNNEIOLC.fields.hiddenValue = local_90.hiddenValue;
        plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                   (AHDGNOJPPIB,StringLiteral_6580,
                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (plVar2 != (long *)0x0) {
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
            CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_b0,fVar6,
                       (MethodInfo *)0x0);
            local_90.fakeValueActive = local_b0.fakeValueActive;
            local_90.inited = local_b0.inited;
            local_90._18_2_ = local_b0._18_2_;
            local_90.hiddenValueOldByte4.fields = local_b0.hiddenValueOldByte4.fields;
            local_90.fakeValue = local_b0.fakeValue;
            local_90.currentCryptoKey = local_b0.currentCryptoKey;
            local_90.hiddenValue = local_b0.hiddenValue;
            (__this->fields).EPHGDGHNALB.fields.fakeValueActive = local_b0.fakeValueActive;
            (__this->fields).EPHGDGHNALB.fields.inited = local_b0.inited;
            *(undefined2 *)&(__this->fields).EPHGDGHNALB.fields.field_0x12 = local_b0._18_2_;
            (__this->fields).EPHGDGHNALB.fields.hiddenValueOldByte4 =
                 (CodeStage_AntiCheat_Common_ACTkByte4_o)local_b0.hiddenValueOldByte4.fields;
            (__this->fields).EPHGDGHNALB.fields.fakeValue = local_b0.fakeValue;
            (__this->fields).EPHGDGHNALB.fields.currentCryptoKey = local_b0.currentCryptoKey;
            (__this->fields).EPHGDGHNALB.fields.hiddenValue = local_b0.hiddenValue;
            plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                       (AHDGNOJPPIB,StringLiteral_8668,
                                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
            if (plVar2 != (long *)0x0) {
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_6584,(MethodInfo *)0x0);
                iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  (iVar1,(MethodInfo *)0x0);
                (__this->fields).NHODKNHNCCJ.fields = CVar7;
                plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                           (AHDGNOJPPIB,StringLiteral_14870,
                                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                if (plVar2 != (long *)0x0) {
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
                    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                    (__this->fields).GNCBIPJFEGB = pSVar5;
                    thunk_FUN_01c20e04();
                    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                               (AHDGNOJPPIB,StringLiteral_11888,
                                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
                    if (plVar2 != (long *)0x0) {
                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                               (**(code **)(*plVar2 + 0x238))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x240));
                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
                        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                        (__this->fields).HCOENCEAHCN = pSVar5;
                        thunk_FUN_01c20e04();
                        plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                   (AHDGNOJPPIB,StringLiteral_11888,
                                                    (AHDGNOJPPIB->klass->vtable)._51_get_Item.method
                                                   );
                        if (plVar2 != (long *)0x0) {
                          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                   (**(code **)(*plVar2 + 0x238))
                                             (plVar2,*(undefined8 *)(*plVar2 + 0x240));
                          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
                            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                            CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                                    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                              (iVar1,(MethodInfo *)0x0);
                            (__this->fields).IGEOOKAJICM.fields = CVar7;
                            plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                                       (AHDGNOJPPIB,StringLiteral_4895,
                                                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                        method);
                            if (plVar2 != (long *)0x0) {
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar2 + 0x238))
                                                 (plVar2,*(undefined8 *)(*plVar2 + 0x240));
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_3400,(MethodInfo *)0x0);
                                fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                           &local_d0,fVar6,(MethodInfo *)0x0);
                                local_b0.fakeValueActive = local_d0.fakeValueActive;
                                local_b0.inited = local_d0.inited;
                                local_b0._18_2_ = local_d0._18_2_;
                                local_b0.hiddenValueOldByte4.fields =
                                     local_d0.hiddenValueOldByte4.fields;
                                local_b0.fakeValue = local_d0.fakeValue;
                                local_b0.currentCryptoKey = local_d0.currentCryptoKey;
                                local_b0.hiddenValue = local_d0.hiddenValue;
                                (__this->fields).OLKKIOMIEOF.fields.fakeValueActive =
                                     local_d0.fakeValueActive;
                                (__this->fields).OLKKIOMIEOF.fields.inited = local_d0.inited;
                                *(undefined2 *)&(__this->fields).OLKKIOMIEOF.fields.field_0x12 =
                                     local_d0._18_2_;
                                (__this->fields).OLKKIOMIEOF.fields.hiddenValueOldByte4 =
                                     (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                     local_d0.hiddenValueOldByte4.fields;
                                (__this->fields).OLKKIOMIEOF.fields.fakeValue = local_d0.fakeValue;
                                (__this->fields).OLKKIOMIEOF.fields.currentCryptoKey =
                                     local_d0.currentCryptoKey;
                                (__this->fields).OLKKIOMIEOF.fields.hiddenValue =
                                     local_d0.hiddenValue;
                                plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                   methodPtr)(AHDGNOJPPIB,StringLiteral_4895,
                                                              (AHDGNOJPPIB->klass->vtable).
                                                              _51_get_Item.method);
                                if (plVar2 != (long *)0x0) {
                                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                           (**(code **)(*plVar2 + 0x238))
                                                     (plVar2,*(undefined8 *)(*plVar2 + 0x240));
                                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar3,StringLiteral_3202,(MethodInfo *)0x0)
                                    ;
                                    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                                                       (pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                                    (__this->fields).KKMLMEOCFFP = pSVar5;
                                    thunk_FUN_01c20e04();
                                    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                       methodPtr)(AHDGNOJPPIB,StringLiteral_7048,
                                                                  (AHDGNOJPPIB->klass->vtable).
                                                                  _51_get_Item.method);
                                    if (plVar2 != (long *)0x0) {
                                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                               (**(code **)(*plVar2 + 0x238))
                                                         (plVar2,*(undefined8 *)(*plVar2 + 0x240));
                                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                           (pSVar3,StringLiteral_3400,
                                                            (MethodInfo *)0x0);
                                        fVar6 = EIABCPKDEBD__GICIEKCGOHA
                                                          (pSVar4,0.0,(MethodInfo *)0x0);
                                        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                                  ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o
                                                  *)&local_f0,fVar6,(MethodInfo *)0x0);
                                        local_d0.fakeValueActive = local_f0.fakeValueActive;
                                        local_d0.inited = local_f0.inited;
                                        local_d0._18_2_ = local_f0._18_2_;
                                        local_d0.hiddenValueOldByte4.fields =
                                             local_f0.hiddenValueOldByte4.fields;
                                        local_d0.fakeValue = local_f0.fakeValue;
                                        local_d0.currentCryptoKey = local_f0.currentCryptoKey;
                                        local_d0.hiddenValue = local_f0.hiddenValue;
                                        (__this->fields).ILJNIDDODBI.fields.fakeValueActive =
                                             local_f0.fakeValueActive;
                                        (__this->fields).ILJNIDDODBI.fields.inited = local_f0.inited
                                        ;
                                        *(undefined2 *)
                                         &(__this->fields).ILJNIDDODBI.fields.field_0x12 =
                                             local_f0._18_2_;
                                        (__this->fields).ILJNIDDODBI.fields.hiddenValueOldByte4 =
                                             (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                             local_f0.hiddenValueOldByte4.fields;
                                        (__this->fields).ILJNIDDODBI.fields.fakeValue =
                                             local_f0.fakeValue;
                                        (__this->fields).ILJNIDDODBI.fields.currentCryptoKey =
                                             local_f0.currentCryptoKey;
                                        (__this->fields).ILJNIDDODBI.fields.hiddenValue =
                                             local_f0.hiddenValue;
                                        plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item
                                                           .methodPtr)(AHDGNOJPPIB,
                                                                       StringLiteral_7048,
                                                                       (AHDGNOJPPIB->klass->vtable).
                                                                       _51_get_Item.method);
                                        if (plVar2 != (long *)0x0) {
                                          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(*plVar2 + 0x238))
                                                             (plVar2,*(undefined8 *)
                                                                      (*plVar2 + 0x240));
                                          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar3,StringLiteral_3202,
                                                                (MethodInfo *)0x0);
                                            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                                                               (pSVar4,StringLiteral_1,
                                                                (MethodInfo *)0x0);
                                            (__this->fields).OEIPHLBBKIK = pSVar5;
                                            thunk_FUN_01c20e04();
                                            plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable).
                                                               _51_get_Item.methodPtr)
                                                                       (AHDGNOJPPIB,
                                                                        StringLiteral_7357,
                                                                        (AHDGNOJPPIB->klass->vtable)
                                                                        ._51_get_Item.method);
                                            if (plVar2 != (long *)0x0) {
                                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                       (**(code **)(*plVar2 + 0x238))
                                                                 (plVar2,*(undefined8 *)
                                                                          (*plVar2 + 0x240));
                                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0) {
                                                pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_15021,
                                                             (MethodInfo *)0x0);
                                                fVar6 = EIABCPKDEBD__GICIEKCGOHA
                                                                  (pSVar4,0.0,(MethodInfo *)0x0);
                                                CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                                          ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o
                                                  *)&local_110,fVar6,(MethodInfo *)0x0);
                                                local_f0.fakeValueActive = local_110.fakeValueActive
                                                ;
                                                local_f0.inited = local_110.inited;
                                                local_f0._18_2_ = local_110._18_2_;
                                                local_f0.hiddenValueOldByte4.fields =
                                                     local_110.hiddenValueOldByte4.fields;
                                                local_f0.fakeValue = local_110.fakeValue;
                                                local_f0.currentCryptoKey =
                                                     local_110.currentCryptoKey;
                                                local_f0.hiddenValue = local_110.hiddenValue;
                                                (__this->fields).OODLJOMIOIB.fields.fakeValueActive
                                                     = local_110.fakeValueActive;
                                                (__this->fields).OODLJOMIOIB.fields.inited =
                                                     local_110.inited;
                                                *(undefined2 *)
                                                 &(__this->fields).OODLJOMIOIB.fields.field_0x12 =
                                                     local_110._18_2_;
                                                (__this->fields).OODLJOMIOIB.fields.
                                                hiddenValueOldByte4 =
                                                     (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                                     local_110.hiddenValueOldByte4.fields;
                                                (__this->fields).OODLJOMIOIB.fields.fakeValue =
                                                     local_110.fakeValue;
                                                (__this->fields).OODLJOMIOIB.fields.currentCryptoKey
                                                     = local_110.currentCryptoKey;
                                                (__this->fields).OODLJOMIOIB.fields.hiddenValue =
                                                     local_110.hiddenValue;
                                                plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable).
                                                                   _51_get_Item.methodPtr)
                                                                           (AHDGNOJPPIB,
                                                                            StringLiteral_7357,
                                                                            (AHDGNOJPPIB->klass->
                                                                            vtable)._51_get_Item.
                                                                            method);
                                                if (plVar2 != (long *)0x0) {
                                                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                           (**(code **)(*plVar2 + 0x238))
                                                                     (plVar2,*(undefined8 *)
                                                                              (*plVar2 + 0x240));
                                                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_15134,
                                                             (MethodInfo *)0x0);
                                                  fVar6 = EIABCPKDEBD__GICIEKCGOHA
                                                                    (pSVar4,0.0,(MethodInfo *)0x0);
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o
                                                  *)&local_130,fVar6,(MethodInfo *)0x0);
                                                  local_110.fakeValueActive =
                                                       local_130.fakeValueActive;
                                                  local_110.inited = local_130.inited;
                                                  local_110._18_2_ = local_130._18_2_;
                                                  local_110.hiddenValueOldByte4.fields =
                                                       local_130.hiddenValueOldByte4.fields;
                                                  local_110.fakeValue = local_130.fakeValue;
                                                  local_110.currentCryptoKey =
                                                       local_130.currentCryptoKey;
                                                  local_110.hiddenValue = local_130.hiddenValue;
                                                  (__this->fields).AEAGLGINLHN.fields.
                                                  fakeValueActive = local_130.fakeValueActive;
                                                  (__this->fields).AEAGLGINLHN.fields.inited =
                                                       local_130.inited;
                                                  *(undefined2 *)
                                                   &(__this->fields).AEAGLGINLHN.fields.field_0x12 =
                                                       local_130._18_2_;
                                                  (__this->fields).AEAGLGINLHN.fields.
                                                  hiddenValueOldByte4 =
                                                       (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                                       local_130.hiddenValueOldByte4.fields;
                                                  (__this->fields).AEAGLGINLHN.fields.fakeValue =
                                                       local_130.fakeValue;
                                                  (__this->fields).AEAGLGINLHN.fields.
                                                  currentCryptoKey = local_130.currentCryptoKey;
                                                  (__this->fields).AEAGLGINLHN.fields.hiddenValue =
                                                       local_130.hiddenValue;
                                                  plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable).
                                                                     _51_get_Item.methodPtr)
                                                                             (AHDGNOJPPIB,
                                                                              StringLiteral_7357,
                                                                              (AHDGNOJPPIB->klass->
                                                                              vtable)._51_get_Item.
                                                                              method);
                                                  if (plVar2 != (long *)0x0) {
                                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                             (**(code **)(*plVar2 + 0x238))
                                                                       (plVar2,*(undefined8 *)
                                                                                (*plVar2 + 0x240));
                                                    if (pSVar3 != (
                                                  System_Xml_XmlAttributeCollection_o *)0x0) {
                                                    pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_15220,
                                                             (MethodInfo *)0x0);
                                                  fVar6 = EIABCPKDEBD__GICIEKCGOHA
                                                                    (pSVar4,0.0,(MethodInfo *)0x0);
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                                            ((
                                                  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o
                                                  *)&local_148,fVar6,(MethodInfo *)0x0);
                                                  (__this->fields).NHNHGHHIJAA.fields.
                                                  fakeValueActive = local_148.fakeValueActive;
                                                  (__this->fields).NHNHGHHIJAA.fields.inited =
                                                       local_148.inited;
                                                  *(undefined2 *)
                                                   &(__this->fields).NHNHGHHIJAA.fields.field_0x12 =
                                                       local_148._18_2_;
                                                  (__this->fields).NHNHGHHIJAA.fields.
                                                  hiddenValueOldByte4 =
                                                       (CodeStage_AntiCheat_Common_ACTkByte4_o)
                                                       local_148.hiddenValueOldByte4.fields;
                                                  (__this->fields).NHNHGHHIJAA.fields.fakeValue =
                                                       local_148.fakeValue;
                                                  (__this->fields).NHNHGHHIJAA.fields.
                                                  currentCryptoKey = local_148.currentCryptoKey;
                                                  (__this->fields).NHNHGHHIJAA.fields.hiddenValue =
                                                       local_148.hiddenValue;
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

