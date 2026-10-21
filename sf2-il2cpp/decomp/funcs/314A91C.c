// ECAJEFMDDMA$$HNIHOIAMDPC @ RVA 0x314A91C

void ECAJEFMDDMA__HNIHOIAMDPC
               (ECAJEFMDDMA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_045667b3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8602);
    FUN_01bab630(&StringLiteral_2816);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_7590);
    FUN_01bab630(&StringLiteral_11237);
    FUN_01bab630(&StringLiteral_7076);
    FUN_01bab630(&StringLiteral_1567);
    DAT_045667b3 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8602,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
      (__this->fields).super.field_0x52 = bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).MLLMBEEDACP = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7590,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).super.field_0x53 = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_7076,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1567,(MethodInfo *)0x0);
            *(System_String_o **)&(__this->fields).LOEKILNCFAJ = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                               (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_11237,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
              (__this->fields).DEKCPPOJFEH = pSVar4;
              thunk_FUN_01c20e04();
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                                 (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_2816,(MethodInfo *)0x0);
                pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1567,(MethodInfo *)0x0);
                ppSVar5 = &(__this->fields).PPMPPALDABM;
                *ppSVar5 = pSVar4;
                thunk_FUN_01c20e04(ppSVar5,pSVar4);
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

