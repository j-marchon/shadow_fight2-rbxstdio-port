// ACBCKKIEOCE$$HNIHOIAMDPC @ RVA 0x3582FD4

void ACBCKKIEOCE__HNIHOIAMDPC
               (ACBCKKIEOCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  FFJHOBJFOLI_o *pFVar9;
  float fVar10;
  
  if ((DAT_04568ce0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12937);
    FUN_01bab630(&StringLiteral_6202);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_6587);
    FUN_01bab630(&StringLiteral_11456);
    FUN_01bab630(&StringLiteral_14946);
    FUN_01bab630(&StringLiteral_7289);
    FUN_01bab630(&StringLiteral_6201);
    FUN_01bab630(&StringLiteral_7340);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6588);
    DAT_04568ce0 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_11456,(MethodInfo *)0x0);
      (__this->fields).DEKCPPOJFEH = pSVar6;
      thunk_FUN_01c20e04();
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14946,(MethodInfo *)0x0);
        fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).AHNCOKJAGPN;
        pSVar6 = *ppSVar8;
        *(float *)&(__this->fields).super.field_0x5c = fVar10;
        pSVar6 = System_String__Concat(pSVar6,StringLiteral_12937,(MethodInfo *)0x0);
        *ppSVar8 = pSVar6;
        thunk_FUN_01c20e04(ppSVar8,pSVar6);
        pSVar6 = *ppSVar8;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_7340,(MethodInfo *)0x0);
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
          *ppSVar8 = pSVar6;
          thunk_FUN_01c20e04(ppSVar8,pSVar6);
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_7289,(MethodInfo *)0x0);
            bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar5,(MethodInfo *)0x0);
            if (!bVar2) {
              ppSVar8 = &(__this->fields).APBICPEOMOM;
              pSVar6 = System_String__Concat(*ppSVar8,StringLiteral_12937,(MethodInfo *)0x0);
              *ppSVar8 = pSVar6;
              thunk_FUN_01c20e04(ppSVar8,pSVar6);
              pSVar6 = *ppSVar8;
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_036833dc;
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_7289,(MethodInfo *)0x0);
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
              pSVar6 = System_String__Concat(pSVar6,pSVar7,(MethodInfo *)0x0);
              *ppSVar8 = pSVar6;
              thunk_FUN_01c20e04(ppSVar8,pSVar6);
            }
            pFVar9 = (__this->fields).FFBMBKHHLPO;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6587,(MethodInfo *)0x0);
              iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
              if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                (pFVar9->fields).FNHHIEKCLPI = iVar3;
                pFVar9 = (__this->fields).FFBMBKHHLPO;
                if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                  iVar1 = (pFVar9->fields).FNHHIEKCLPI;
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_6201,(MethodInfo *)0x0);
                    iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                    (pFVar9->fields).IAEPIMJNGNJ = iVar3 + iVar1;
                    pFVar9 = (__this->fields).FFBMBKHHLPO;
                    if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                      iVar1 = (pFVar9->fields).IAEPIMJNGNJ;
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_6588,(MethodInfo *)0x0);
                        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                        (pFVar9->fields).BADGBPKKAMP = iVar3 + iVar1;
                        pFVar9 = (__this->fields).FFBMBKHHLPO;
                        if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                          iVar1 = (pFVar9->fields).BADGBPKKAMP;
                          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar4,StringLiteral_6202,(MethodInfo *)0x0);
                            iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                            (pFVar9->fields).MJDFEDKPMOP = iVar3 + iVar1;
                            pFVar9 = (__this->fields).FFBMBKHHLPO;
                            if (pFVar9 != (FFJHOBJFOLI_o *)0x0) {
                              (__this->fields).PJDAFHGHKIE =
                                   255.0 / (float)((pFVar9->fields).IAEPIMJNGNJ -
                                                  (pFVar9->fields).FNHHIEKCLPI);
                              (__this->fields).JGIBNAHJPGC =
                                   255.0 / (float)((pFVar9->fields).MJDFEDKPMOP -
                                                  (pFVar9->fields).BADGBPKKAMP);
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
LAB_036833dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

