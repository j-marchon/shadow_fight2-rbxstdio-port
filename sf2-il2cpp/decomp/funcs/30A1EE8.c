// HDKIINEJFCF$$HNIHOIAMDPC @ RVA 0x30A1EE8

void HDKIINEJFCF__HNIHOIAMDPC
               (HDKIINEJFCF_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_Xml_XmlNode_o *NPLGCIFGFOK_00;
  System_Xml_XmlNode_o *NPLGCIFGFOK_01;
  System_Action_o *pSVar4;
  LCKCDEKNLOA_o *pLVar5;
  
  if ((DAT_0456614a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HDKIINEJFCF_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_12226);
    FUN_01bab630(&StringLiteral_5840);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456614a = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13991,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).JDNKKGPNHPB = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).DEKCPPOJFEH = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14694,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).PCNEDMAJMOJ = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_12226,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
            (__this->fields).FPGPCNBKBDB = pSVar3;
            thunk_FUN_01c20e04();
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
            pLVar5 = (__this->fields).KFJLNJDDGDO;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            BOFEMGGNODC__KIBBEDPGMBB
                      ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_00,pLVar5,pSVar4,(MethodInfo *)0x0);
            pLVar5 = (__this->fields).MJMJIDBBMON;
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            BOFEMGGNODC__KIBBEDPGMBB
                      ((BOFEMGGNODC_o *)__this,NPLGCIFGFOK_01,pLVar5,pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

