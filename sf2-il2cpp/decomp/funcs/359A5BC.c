// LPEBBHNDFCG$$.ctor @ RVA 0x359A5BC

void LPEBBHNDFCG___ctor(LPEBBHNDFCG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  int64_t iVar6;
  System_Xml_XmlNode_o **ppSVar7;
  
  if ((DAT_04568dbc & 1) == 0) {
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568dbc = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar7 = &(__this->fields)._OLIGHNIEIGK_k__BackingField;
  *ppSVar7 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar7,AHDGNOJPPIB);
  pSVar2 = *ppSVar7;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar7,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0369a794;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,StringLiteral_1,(pSVar4->klass->vtable)._10_set_Value.method);
      }
      pSVar2 = *ppSVar7;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_5750,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
          if (bVar1) {
                    /* try { // try from 0369a6e0 to 0379a6e7 has its CatchHandler @ 0369ac6c */
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar7,StringLiteral_5750,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0369a794;
                    /* try { // try from 0369a6fc to 0379a703 has its CatchHandler @ 0369ac68 */
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,StringLiteral_1567,(pSVar4->klass->vtable)._10_set_Value.method);
          }
          pSVar2 = *ppSVar7;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 0369a73c to 0379a743 has its CatchHandler @ 0369ac58 */
              (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar5;
                    /* try { // try from 0369a744 to 0379ac43 has its CatchHandler @ 0369a494 */
              thunk_FUN_01c20e04(&__this->fields,pSVar5);
              pSVar2 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
              if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                   (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_5750,(MethodInfo *)0x0);
                  iVar6 = EIABCPKDEBD__HNIGPBMJJOL(pSVar4,0,(MethodInfo *)0x0);
                  (__this->fields)._PGKPHJLHJCO_k__BackingField = iVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0369a794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

