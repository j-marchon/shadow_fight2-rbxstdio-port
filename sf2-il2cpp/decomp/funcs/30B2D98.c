// EDELKOLBNDG$$HNIHOIAMDPC @ RVA 0x30B2D98

void EDELKOLBNDG__HNIHOIAMDPC
               (EDELKOLBNDG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *a;
  MethodInfo *method_00;
  undefined4 uVar5;
  
  if ((DAT_045661ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_4657);
    FUN_01bab630(&StringLiteral_11733);
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_11996);
    FUN_01bab630(&StringLiteral_10347);
    FUN_01bab630(&StringLiteral_4893);
    FUN_01bab630(&StringLiteral_13991);
    DAT_045661ee = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) goto LAB_031b30a4;
  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031b30a4;
  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar3,StringLiteral_13991,(MethodInfo *)0x0);
  a = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_4657,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_4657,(MethodInfo *)0x0);
  if (bVar1) {
    uVar5 = 0;
LAB_031b2eac:
    *(undefined4 *)&(__this->fields).super.field_0x5c = uVar5;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_11733,(MethodInfo *)0x0);
    if (bVar1) {
      uVar5 = 1;
      goto LAB_031b2eac;
    }
  }
  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_8868,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
    (__this->fields).HEMMCIFBAMJ = iVar2;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10347,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      (__this->fields).LOPAIPGFFCF = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_3508,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
        (__this->fields).OOJIBEJEEGF = (bool_conflict)(~bVar1 & 1);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_3508,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 1) = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_4893,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
            (__this->fields).NDMADLNDJBH = (bool_conflict)(~bVar1 & 1);
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_4893,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
              *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 2) = bVar1;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_11996,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                (__this->fields).FBJJIFINMNN = (bool_conflict)(~bVar1 & 1);
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_11996,(MethodInfo *)0x0);
                  method_00 = (MethodInfo *)0x0;
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
                  *(bool *)((long)&(__this->fields).IKEDHPAPFDA + 3) = bVar1;
                  EDELKOLBNDG__LOGLPMMHIED(__this,AHDGNOJPPIB,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031b30a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

