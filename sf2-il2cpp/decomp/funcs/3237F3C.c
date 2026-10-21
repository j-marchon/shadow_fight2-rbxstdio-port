// LBMBHDPPOOH$$HNIHOIAMDPC @ RVA 0x3237F3C

void LBMBHDPPOOH__HNIHOIAMDPC
               (LBMBHDPPOOH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567037 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14613);
    FUN_01bab630(&StringLiteral_1322);
    FUN_01bab630(&StringLiteral_3105);
    FUN_01bab630(&StringLiteral_3103);
    FUN_01bab630(&StringLiteral_12838);
    FUN_01bab630(&StringLiteral_3104);
    FUN_01bab630(&StringLiteral_12163);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04567037 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12838,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).PKBMGDECOPP = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14613,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567,(MethodInfo *)0x0);
        (__this->fields).PADCNCJAKBF = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3103,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567,(MethodInfo *)0x0);
          (__this->fields).BILMLBCCEAC = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_3104,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567,(MethodInfo *)0x0);
            (__this->fields).JEJFDHNBDDO = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_3105,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567,(MethodInfo *)0x0);
              (__this->fields).PIJNAPJJGJD = pSVar3;
              thunk_FUN_01c20e04();
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_12163,(MethodInfo *)0x0);
                pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1322,(MethodInfo *)0x0);
                ppSVar4 = &(__this->fields).CJBJHFDNPHN;
                *ppSVar4 = pSVar3;
                thunk_FUN_01c20e04(ppSVar4,pSVar3);
                return;
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

