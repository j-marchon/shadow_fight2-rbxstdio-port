// EJALJLHMDHM$$HNIHOIAMDPC @ RVA 0x30FD518

void EJALJLHMDHM__HNIHOIAMDPC
               (EJALJLHMDHM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar5;
  int32_t iVar6;
  LCKCDEKNLOA_o *pLVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_045664a2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EJALJLHMDHM_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_4465);
    FUN_01bab630(&StringLiteral_11072);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_11452);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_1);
    DAT_045664a2 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).DEKCPPOJFEH = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4921,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      ppSVar8 = &(__this->fields).IJONCLJPNDO;
      *ppSVar8 = pSVar4;
      thunk_FUN_01c20e04(ppSVar8,pSVar4);
      bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_4465,(MethodInfo *)0x0);
      if (bVar1) {
        iVar6 = 1;
      }
      else {
        bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_11452,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality(*ppSVar8,StringLiteral_11072,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          (__this->fields).ONHENDPPLDI = 3;
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
          pLVar7 = (__this->fields).FNOJIPMNDPJ;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          BOFEMGGNODC__KIBBEDPGMBB
                    ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar7,pSVar5,(MethodInfo *)0x0);
          pLVar7 = (__this->fields).FNGNIKNIEMM;
          pSVar5 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          BOFEMGGNODC__KIBBEDPGMBB
                    ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar7,pSVar5,(MethodInfo *)0x0);
          return;
        }
        iVar6 = 2;
      }
      (__this->fields).ONHENDPPLDI = iVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

