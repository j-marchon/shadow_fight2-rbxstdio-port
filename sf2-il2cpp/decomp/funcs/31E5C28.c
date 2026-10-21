// PNGKLCHKPEO$$EOHMFJFFFIN @ RVA 0x31E5C28

void PNGKLCHKPEO__EOHMFJFFFIN
               (PNGKLCHKPEO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  FKGKLILLOBG_o *pFVar6;
  FKGKLILLOBG_o **ppFVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_04566d5e & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&StringLiteral_11994);
    FUN_01bab630(&StringLiteral_4334);
    FUN_01bab630(&StringLiteral_6575);
    FUN_01bab630(&StringLiteral_10451);
    FUN_01bab630(&StringLiteral_3359);
    FUN_01bab630(&StringLiteral_10150);
    FUN_01bab630(&StringLiteral_9697);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9638);
    FUN_01bab630(&StringLiteral_11995);
    DAT_04566d5e = 1;
  }
  pSVar5 = StringLiteral_9638;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_10305,(MethodInfo *)0x0);
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_9638,(MethodInfo *)0x0);
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
  if (__this != (PNGKLCHKPEO_o *)0x0) {
    (__this->fields).LOAFPIOGJAF = iVar2;
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttribute_o *)0x0;
    }
    else {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9697,(MethodInfo *)0x0);
    }
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
    iVar2 = CMCJGLAABFO__ENNCOIHDFKP(1,pSVar5,(MethodInfo *)0x0);
    (__this->fields).AKBDFFLEINL = iVar2;
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttribute_o *)0x0;
    }
    else {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10150,(MethodInfo *)0x0);
    }
    pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
    ppSVar8 = &(__this->fields).HLMDCHDDELG;
    *ppSVar8 = pSVar5;
    thunk_FUN_01c20e04(ppSVar8,pSVar5);
    if ((__this->fields).AKBDFFLEINL == 3) {
      bVar1 = System_String__op_Equality
                        ((__this->fields).HLMDCHDDELG,StringLiteral_3359,(MethodInfo *)0x0);
      (__this->fields).GCOJOACAHJA = bVar1;
    }
    (__this->fields).JNLOFJLAOFM = 1;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_6575,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar5,StringLiteral_10451,(MethodInfo *)0x0);
        if (bVar1) {
          (__this->fields).JNLOFJLAOFM = 2;
        }
      }
    }
    if (((__this->fields).LOAFPIOGJAF | 2U) == 6) {
      if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
         pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_032e6008;
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_4334,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).HLKOPFFIMPF = pSVar5;
      thunk_FUN_01c20e04();
    }
    else if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
      pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
      FKGKLILLOBG___ctor(pFVar6,(System_String_o *)0x0,0.0,(MethodInfo *)0x0);
      ppFVar7 = &(__this->fields).PHBEOHIEDOP;
      *ppFVar7 = pFVar6;
      thunk_FUN_01c20e04(ppFVar7,pFVar6);
      pSVar5 = (System_String_o *)0x0;
      goto LAB_032e5f9c;
    }
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11994,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
      FKGKLILLOBG___ctor(pFVar6,pSVar5,0.0,(MethodInfo *)0x0);
      ppFVar7 = &(__this->fields).PHBEOHIEDOP;
      *ppFVar7 = pFVar6;
      thunk_FUN_01c20e04(ppFVar7,pFVar6);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11995,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
LAB_032e5f9c:
        pFVar6 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
        FKGKLILLOBG___ctor(pFVar6,pSVar5,0.0,(MethodInfo *)0x0);
        ppFVar7 = &(__this->fields).KIFDEDHNJCA;
        *ppFVar7 = pFVar6;
        thunk_FUN_01c20e04(ppFVar7,pFVar6);
        return;
      }
    }
  }
LAB_032e6008:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

