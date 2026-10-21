// HNFFPPPDKDK$$.ctor @ RVA 0x3298078

void HNFFPPPDKDK___ctor(HNFFPPPDKDK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o **ppSVar7;
  System_Xml_XmlNode_o **ppSVar8;
  
  if ((DAT_0456737a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_14589);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456737a = 1;
  }
  ppSVar7 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar7 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar8 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar8,AHDGNOJPPIB);
  pSVar3 = *ppSVar8;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03398288;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03398288;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_8409,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_0339816c:
    pSVar5 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar8,StringLiteral_8409,(MethodInfo *)0x0);
    if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_03398288;
    (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
              (pSVar5,StringLiteral_1567,(pSVar5->klass->vtable)._10_set_Value.method);
  }
  else {
    pSVar6 = (System_String_o *)
             (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
    bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar1) goto LAB_0339816c;
  }
  pSVar3 = *ppSVar8;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03398288;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03398288;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
  if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
LAB_033981ec:
    LBJNDMNEJJB = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar8,StringLiteral_9327,(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar1) goto LAB_033981ec;
  }
  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
  (__this->fields).GHPHFGBIPCI = iVar2;
  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
  (__this->fields).DEKCPPOJFEH = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  pSVar3 = (__this->fields).HJKLIDCAEOE;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14589,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
      (__this->fields).IPFKFHHBDDI = iVar2;
      return;
    }
  }
LAB_03398288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

