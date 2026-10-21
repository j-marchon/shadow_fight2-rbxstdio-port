// GAEHKDPPOBL$$HNIHOIAMDPC @ RVA 0x3072C70

void GAEHKDPPOBL__HNIHOIAMDPC
               (GAEHKDPPOBL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04565f8b & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_6472);
    FUN_01bab630(&StringLiteral_5354);
    FUN_01bab630(&StringLiteral_2810);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_9152);
    DAT_04565f8b = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9152,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_6472,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_2810,(MethodInfo *)0x0);
      (__this->fields).JBLIGNDDFLK = (uint)bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_5354,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).POCNHBONDGB = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3508,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).POCNHBONDGB;
          (__this->fields).AMEMBOKNDHB = bVar1;
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
            ppSVar5 = &(__this->fields).KOGCJJABJHN;
            *ppSVar5 = pSVar4;
            thunk_FUN_01c20e04(ppSVar5,pSVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

