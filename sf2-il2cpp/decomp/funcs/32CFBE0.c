// PCGLKFBEGCD$$.ctor @ RVA 0x32CFBE0

void PCGLKFBEGCD___ctor(PCGLKFBEGCD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  
  if ((DAT_04567543 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508);
    FUN_01bab630(&StringLiteral_3160);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_7903);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567543 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,9,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).NPFMOEOIEKM = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        iVar5 = 0;
      }
      else {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033cfd98;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_13991,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3160,(MethodInfo *)0x0);
        if (bVar1) {
          iVar5 = 4;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3508,(MethodInfo *)0x0);
          if (bVar1) {
            iVar5 = 5;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_7903,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            iVar5 = 6;
          }
        }
      }
      (__this->fields).JBNGADJBDHB = iVar5;
      return;
    }
  }
LAB_033cfd98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

