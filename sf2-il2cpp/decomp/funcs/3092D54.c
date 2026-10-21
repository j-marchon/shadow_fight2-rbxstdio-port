// CJMPPFAJNBH$$HNIHOIAMDPC @ RVA 0x3092D54

void CJMPPFAJNBH__HNIHOIAMDPC
               (CJMPPFAJNBH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  
  if ((DAT_045660b5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3862);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14891);
    DAT_045660b5 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar3 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).HEIPEMAFCLG = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14891,(MethodInfo *)0x0);
        fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).EOLDGEJPLJK = fVar5;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3862,(MethodInfo *)0x0);
          pSVar3 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).CHKJLPPEFDI;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          LPACFIDMJOM__INECGHKFPAL(JHMENEKPIBO,(__this->fields).ACHJNNOKEDK,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

