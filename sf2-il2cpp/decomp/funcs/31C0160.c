// DCEAMLCCDHH$$.ctor @ RVA 0x31C0160

void DCEAMLCCDHH___ctor(DCEAMLCCDHH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  System_Nullable_Color__Fields local_60;
  System_Nullable_Color__Fields local_48;
  
  if ((DAT_04566c14 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>__ctor__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_4476);
    FUN_01bab630(&StringLiteral_10360);
    FUN_01bab630(&StringLiteral_11717);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11428);
    FUN_01bab630(&StringLiteral_11716);
    FUN_01bab630(&StringLiteral_10361);
    FUN_01bab630(&StringLiteral_10168);
    DAT_04566c14 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10168,(MethodInfo *)0x0);
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
      }
      pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,pSVar3,(MethodInfo *)0x0);
      (__this->fields)._MLEPHDNBABJ_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_10360,(MethodInfo *)0x0);
          fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_10361,(MethodInfo *)0x0);
            fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.x = fVar4;
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.y = fVar5;
            (__this->fields)._ABODODGIMOO_k__BackingField.fields.z = 0.0;
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_11428,(MethodInfo *)0x0);
              fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
              (__this->fields)._HBNMFCBCBMD_k__BackingField = fVar4;
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_11716,(MethodInfo *)0x0);
                fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_11717,(MethodInfo *)0x0);
                  fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.x = fVar4;
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.y = fVar5;
                  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.z = 1.0;
                  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar1,StringLiteral_4476,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)0x0;
                    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                                       (pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
                    local_48.hasValue = false;
                    local_48._1_3_ = 0;
                    local_48.value.fields.r = 0.0;
                    local_48.value.fields.g = 0.0;
                    local_48.value.fields.b = 0.0;
                    local_48.value.fields.a = 0.0;
                    UVar6.fields.b = 1.0;
                    UVar6.fields.a = 1.0;
                    UVar6.fields.r = 1.0;
                    UVar6.fields.g = 1.0;
                    System_Nullable<Color>___ctor
                              ((System_Nullable_Color__o *)&local_48,UVar6,
                               Method_System_Nullable<Color>__ctor__);
                    local_60.value.fields.g = local_48.value.fields.g;
                    local_60.value.fields.b = local_48.value.fields.b;
                    local_60.hasValue = local_48.hasValue;
                    local_60._1_3_ = local_48._1_3_;
                    local_60.value.fields.r = local_48.value.fields.r;
                    local_60.value.fields.a = local_48.value.fields.a;
                    UVar6 = CFBGPBCDAGA__HPBCENEFAMD
                                      (pSVar3,1.0,(System_Nullable_Color__o *)&local_60,method_00);
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = UVar6.fields.r;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = UVar6.fields.g;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = UVar6.fields.b;
                    (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = UVar6.fields.a;
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

