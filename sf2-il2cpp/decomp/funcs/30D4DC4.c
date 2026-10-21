// JIGBNLJHKJO$$HNIHOIAMDPC @ RVA 0x30D4DC4

void JIGBNLJHKJO__HNIHOIAMDPC
               (JIGBNLJHKJO_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Action_o *pSVar5;
  LCKCDEKNLOA_o *pLVar6;
  
  if ((DAT_04566324 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    FUN_01bab630(&StringLiteral_12305);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_6354);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_7952);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566324 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6354,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).PHCEGHOBMDB = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12305,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).GGFGFBHPKEC = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_7952,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).EEGMAGDJMAI = pSVar3;
          thunk_FUN_01c20e04();
          pSVar4 = (System_Xml_XmlNode_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                             (NPLGCIFGFOK,StringLiteral_12524,
                              (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
          pLVar6 = (__this->fields).PGLINMCHKGC;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar4,pLVar6,pSVar5,(MethodInfo *)0x0);
          pSVar4 = (System_Xml_XmlNode_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                             (NPLGCIFGFOK,StringLiteral_5840,
                              (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
          pLVar6 = (__this->fields).EBAHJECPAHA;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar4,pLVar6,pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

