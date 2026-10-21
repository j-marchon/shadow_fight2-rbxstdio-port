// OICHGEFJHDF$$HNIHOIAMDPC @ RVA 0x3489648

void OICHGEFJHDF__HNIHOIAMDPC
               (OICHGEFJHDF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  CCLKPGBIBOP_o **ppCVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_Action_o *pSVar6;
  LCKCDEKNLOA_o *pLVar7;
  
  if ((DAT_045683cb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_OICHGEFJHDF_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_10068);
    FUN_01bab630(&StringLiteral_10521);
    FUN_01bab630(&StringLiteral_5840);
    DAT_045683cb = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_10068,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10521,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).HPIMKAKCJMM = pSVar3;
        thunk_FUN_01c20e04();
        ppCVar4 = &(__this->fields).KJAPDIOFGHP;
        *ppCVar4 = (CCLKPGBIBOP_o *)0x0;
        thunk_FUN_01c20e04(ppCVar4,0);
        pSVar5 = (System_Xml_XmlNode_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                           (NPLGCIFGFOK,StringLiteral_12524,
                            (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar7 = (__this->fields).JLAFBNCHHFO;
        pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar5,pLVar7,pSVar6,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlNode_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                           (NPLGCIFGFOK,StringLiteral_5840,
                            (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar7 = (__this->fields).NBOGMHIMLEC;
        pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar5,pLVar7,pSVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

