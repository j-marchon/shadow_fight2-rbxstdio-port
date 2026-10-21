// NLPJLHOEAOE$$BDAKNLMEKCN @ RVA 0x31EE7A0

NLPJLHOEAOE_NNODIMKLNFM_o *
NLPJLHOEAOE__BDAKNLMEKCN(NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  NLPJLHOEAOE_NNODIMKLNFM_o *__this_00;
  System_Xml_XmlNode_o **ppSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  PJKHAJKEHEL_o *pPVar5;
  MethodInfo *in_x4;
  
  if ((DAT_04566e23 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_NNODIMKLNFM_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566e23 = 1;
  }
  __this_00 = (NLPJLHOEAOE_NNODIMKLNFM_o *)thunk_FUN_01bda818(NLPJLHOEAOE_NNODIMKLNFM_TypeInfo);
  NLPJLHOEAOE_NNODIMKLNFM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
    ppSVar1 = &(__this_00->fields).AHDGNOJPPIB;
    *ppSVar1 = AHDGNOJPPIB;
    thunk_FUN_01c20e04(ppSVar1,AHDGNOJPPIB);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12864,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        (__this_00->fields).NFHDILMBKLK = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
          (__this_00->fields).KGLJICLJHEL = pSVar4;
          thunk_FUN_01c20e04();
          pPVar5 = NLPJLHOEAOE__MDEGKNMDKPN(__this,AHDGNOJPPIB,(PJKHAJKEHEL_o *)0x0,true,in_x4);
          (__this_00->fields).BAKIMFMMFMP = pPVar5;
          thunk_FUN_01c20e04();
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

