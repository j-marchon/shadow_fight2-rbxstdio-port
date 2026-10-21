// GDINNHKFKMB$$.ctor @ RVA 0x3072718

void GDINNHKFKMB___ctor(GDINNHKFKMB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04565f87 & 1) == 0) {
    FUN_01bab630(&StringLiteral_734);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_10262);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565f87 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,10,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03172870;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        ppSVar5 = &(__this->fields).NPFMOEOIEKM;
        *ppSVar5 = pSVar4;
        thunk_FUN_01c20e04(ppSVar5,pSVar4);
        bVar1 = System_String__op_Equality(*ppSVar5,StringLiteral_734,(MethodInfo *)0x0);
        (__this->fields).HFPDAIABKNH = bVar1;
      }
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10262,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
        (__this->fields).BEGOLMJFLCG = bVar1;
        return;
      }
    }
  }
LAB_03172870:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

