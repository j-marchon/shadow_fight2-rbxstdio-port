// DBIINAFCKME$$ALNBOKFNFFK @ RVA 0x31BAEE4

void DBIINAFCKME__ALNBOKFNFFK(DBIINAFCKME_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_Xml_XmlDocument_o *__this_00;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  int64_t iVar6;
  MethodInfo *extraout_x1;
  System_Xml_XmlNode_o **ppSVar7;
  System_String_o **ppSVar8;
  
  if ((DAT_04566bdd & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&StringLiteral_11934);
    FUN_01bab630(&StringLiteral_9079);
    FUN_01bab630(&StringLiteral_11168);
    FUN_01bab630(&StringLiteral_8335);
    FUN_01bab630(&StringLiteral_11871);
    DAT_04566bdd = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  MGENAMAJALB__GIENGNEGHPJ((MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__EEPEGMMLEMA((MethodInfo *)0x0);
  __this_00 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar2,2,true,true,false,(MethodInfo *)0x0);
  if (__this_00 == (System_Xml_XmlDocument_o *)0x0) {
    __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (System_Xml_XmlDocument_o *)0x0) goto LAB_032bb19c;
  }
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(__this_00->klass->vtable)._51_get_Item.methodPtr)
                     (__this_00,StringLiteral_11934,(__this_00->klass->vtable)._51_get_Item.method);
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = EIABCPKDEBD__KPODFFHOHGK(__this_00,StringLiteral_11934,(MethodInfo *)0x0);
  }
  if (__this != (DBIINAFCKME_o *)0x0) {
    ppSVar7 = &(__this->fields).DMLGJFCNNJF;
    *ppSVar7 = pSVar3;
    thunk_FUN_01c20e04(ppSVar7);
    pSVar3 = *ppSVar7;
    if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_8335,(MethodInfo *)0x0);
        if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NGFEKJBMGEB_TypeInfo);
        }
        pSVar2 = NGFEKJBMGEB__MDLAKLCAEPK((MethodInfo *)0x0);
        pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,pSVar2,(MethodInfo *)0x0);
        ppSVar8 = &(__this->fields).MIGGLEOLMPE;
        *ppSVar8 = pSVar2;
        thunk_FUN_01c20e04(ppSVar8,pSVar2);
        pSVar3 = (__this->fields).DMLGJFCNNJF;
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_9079,(MethodInfo *)0x0);
            pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            ppSVar8 = &(__this->fields).MEMLDPNJDBK;
            *ppSVar8 = pSVar2;
            thunk_FUN_01c20e04(ppSVar8,pSVar2);
            pSVar3 = (__this->fields).DMLGJFCNNJF;
            if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_11871,(MethodInfo *)0x0);
                iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,-1,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).DMLGJFCNNJF;
                (__this->fields).GLNNPKDAIPI = iVar1;
                if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
                   (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
                   pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_11168,(MethodInfo *)0x0);
                  iVar6 = EIABCPKDEBD__HNIGPBMJJOL(pSVar5,-1,(MethodInfo *)0x0);
                  (__this->fields).ELFHKFNFIPL = iVar6;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032bb19c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

