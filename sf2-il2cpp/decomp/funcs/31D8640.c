// EDIHAKCJAMI$$HNIHOIAMDPC @ RVA 0x31D8640

void EDIHAKCJAMI__HNIHOIAMDPC
               (EDIHAKCJAMI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  FFJHOBJFOLI_o *pFVar5;
  
  if ((DAT_04566cfd & 1) == 0) {
    FUN_01bab630(&StringLiteral_8438);
    FUN_01bab630(&StringLiteral_5089);
    FUN_01bab630(&StringLiteral_8439);
    FUN_01bab630(&StringLiteral_5092);
    DAT_04566cfd = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pFVar5 = (__this->fields).KGDFAPCDMPE;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8438,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
        (pFVar5->fields).FNHHIEKCLPI = iVar2;
        pFVar5 = (__this->fields).KGDFAPCDMPE;
        if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
          iVar1 = (pFVar5->fields).FNHHIEKCLPI;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_5092,(MethodInfo *)0x0);
            iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
            (pFVar5->fields).IAEPIMJNGNJ = iVar2 + iVar1;
            pFVar5 = (__this->fields).KGDFAPCDMPE;
            if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
              iVar1 = (pFVar5->fields).IAEPIMJNGNJ;
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_5089,(MethodInfo *)0x0);
                iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                (pFVar5->fields).BADGBPKKAMP = iVar2 + iVar1;
                pFVar5 = (__this->fields).KGDFAPCDMPE;
                if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
                  iVar1 = (pFVar5->fields).BADGBPKKAMP;
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_8439,(MethodInfo *)0x0);
                    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                    (pFVar5->fields).MJDFEDKPMOP = iVar2 + iVar1;
                    pFVar5 = (__this->fields).KGDFAPCDMPE;
                    if (pFVar5 != (FFJHOBJFOLI_o *)0x0) {
                      (__this->fields).PJDAFHGHKIE =
                           255.0 / (float)((pFVar5->fields).IAEPIMJNGNJ -
                                          (pFVar5->fields).FNHHIEKCLPI);
                      (__this->fields).JGIBNAHJPGC =
                           255.0 / (float)((pFVar5->fields).MJDFEDKPMOP -
                                          (pFVar5->fields).BADGBPKKAMP);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

