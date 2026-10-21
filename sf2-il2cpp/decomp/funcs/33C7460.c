// MEMHEPBAJJA.HIAEDCDJJDJ$$.ctor @ RVA 0x33C7460

void MEMHEPBAJJA_HIAEDCDJJDJ___ctor
               (MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar5;
  System_Xml_XmlNode_o **ppSVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04567dfb & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567dfb = 1;
  }
  pMVar5 = &__this->fields;
  pMVar5->JAICMIMBIOA = StringLiteral_1;
  thunk_FUN_01c20e04(pMVar5);
  ppSVar7 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar7 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar6 = &(__this->fields).JHFENACKNPG;
  *ppSVar6 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar6,CJNHFNHJHPE);
  pSVar1 = *ppSVar6;
  (__this->fields).OGKFDMIMMAD = 0;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      *ppSVar7 = pSVar4;
      thunk_FUN_01c20e04(ppSVar7,pSVar4);
      pSVar1 = *ppSVar6;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14694,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
          pMVar5->JAICMIMBIOA = pSVar4;
          thunk_FUN_01c20e04(pMVar5,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

