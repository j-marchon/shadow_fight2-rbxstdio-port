// CPAJCJHOLEJ$$HNIHOIAMDPC @ RVA 0x3129980

void CPAJCJHOLEJ__HNIHOIAMDPC
               (CPAJCJHOLEJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  System_Nullable_Vector2__o SVar8;
  
  if ((DAT_04566687 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&StringLiteral_9816);
    FUN_01bab630(&StringLiteral_11422);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_12369);
    FUN_01bab630(&StringLiteral_9638);
    FUN_01bab630(&StringLiteral_8005);
    FUN_01bab630(&StringLiteral_3159);
    DAT_04566687 = 1;
  }
  pSVar5 = StringLiteral_9638;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03229c0c;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_10305,(MethodInfo *)0x0);
    pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_9638,(MethodInfo *)0x0);
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
  if (((__this != (CPAJCJHOLEJ_o *)0x0) &&
      ((__this->fields).LOAFPIOGJAF = iVar2, AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_11422,(MethodInfo *)0x0);
    pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
    (__this->fields).OEIHJCIGMEE = pSVar5;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_3159,(MethodInfo *)0x0);
      pSVar5 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).PKNGDBGLNEO = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12369,(MethodInfo *)0x0);
        fVar6 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar4,0.0,(MethodInfo *)0x0);
        (__this->fields).DLBNEPHLCOO = fVar6;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9816,(MethodInfo *)0x0);
          SVar8 = GIAMPEGMNHE__JHLNBAHDGPI(pSVar4,(MethodInfo *)0x0);
          if ((SVar8.fields._0_8_ & 0xff) == 0) {
            if (DAT_0455fa75 == '\0') {
              FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
              DAT_0455fa75 = '\x01';
            }
            UVar7 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
          }
          else {
            UVar7 = (UnityEngine_Vector2_Fields)SVar8.fields.value.fields;
          }
          (__this->fields).MFHFOFFEDJB.fields = UVar7;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_8005,(MethodInfo *)0x0);
            bVar1 = GIAMPEGMNHE__FAEBPLENEGK(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).NGMDFNDFLFL = bVar1;
            return;
          }
        }
      }
    }
  }
LAB_03229c0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

