// JLHAELMHHJL$$HNIHOIAMDPC @ RVA 0x324A6B0

void JLHAELMHHJL__HNIHOIAMDPC
               (JLHAELMHHJL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar5;
  LCKCDEKNLOA_o *pLVar6;
  
  if ((DAT_045670ec & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_JLHAELMHHJL_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_5414);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_10072);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_1);
    DAT_045670ec = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10072,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).MOMNHMKOKAN = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5414,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
        (__this->fields).ANDGLMBKCKK = bVar1;
        NPLGCIFGFOK_00 =
             (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_12524,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        NPLGCIFGFOK_01 =
             (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_5840,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
        pLVar6 = (__this->fields).FNOJIPMNDPJ;
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB
                  ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar6,pSVar5,(MethodInfo *)0x0);
        pLVar6 = (__this->fields).FNGNIKNIEMM;
        pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        BOFEMGGNODC__KIBBEDPGMBB
                  ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar6,pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

