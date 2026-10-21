// LJAPFDJNGGA$$HNIHOIAMDPC @ RVA 0x34315CC

void LJAPFDJNGGA__HNIHOIAMDPC
               (LJAPFDJNGGA_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568170 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5694);
    FUN_01bab630(&StringLiteral_7610);
    FUN_01bab630(&StringLiteral_12838);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568170 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_12838,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).EEACPKHFLAM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5694,(MethodInfo *)0x0);
        (__this->fields).PBKPFBNFIHH = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03531778;
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_5694,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
          (__this->fields).NBGPKFHLCOG = bVar1;
        }
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7610,(MethodInfo *)0x0);
          (__this->fields).IIBFFJPIBHG = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03531778;
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_7610,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
            (__this->fields).DJAALDCHPOJ = bVar1;
          }
          return;
        }
      }
    }
  }
LAB_03531778:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

