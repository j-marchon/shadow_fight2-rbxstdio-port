// LPAPAMPGDFN$$HNIHOIAMDPC @ RVA 0x347AF6C

void LPAPAMPGDFN__HNIHOIAMDPC
               (LPAPAMPGDFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar9;
  LPAPAMPGDFN_Fields *pLVar10;
  System_Xml_XmlAttribute_o **ppSVar11;
  
  if ((DAT_04568346 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10983);
    FUN_01bab630(&StringLiteral_4418);
    FUN_01bab630(&StringLiteral_9626);
    FUN_01bab630(&StringLiteral_10984);
    FUN_01bab630(&StringLiteral_13974);
    DAT_04568346 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13974,(MethodInfo *)0x0);
      pLVar10 = &__this->fields;
      pLVar10->ALNEACNLPDH = pSVar4;
      thunk_FUN_01c20e04(pLVar10,pSVar4);
      pSVar4 = pLVar10->ALNEACNLPDH;
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_13974,(MethodInfo *)0x0);
        pLVar10->ALNEACNLPDH = pSVar4;
        thunk_FUN_01c20e04(pLVar10,pSVar4);
        pSVar4 = pLVar10->ALNEACNLPDH;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
        if (((pMVar9 == (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) ||
            (pSVar5 = (pMVar9->fields).PKPJOJCIDGA,
            pSVar5 == (System_Collections_Generic_List_string__o *)0x0)) ||
           (pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,0,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           pSVar4 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_0357b2e4;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pIVar6,(pSVar4->klass->vtable)._10_set_Value.method);
        pSVar4 = pLVar10->ALNEACNLPDH;
      }
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
      if (pMVar9 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
        bVar1 = MGNPHCAAEIO_LLBEEBNCOND__KAAFKKOAMKP(pMVar9,pSVar7,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
          if ((pMVar9 == (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) ||
             (pSVar5 = (pMVar9->fields).PKPJOJCIDGA,
             pSVar5 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0357b2e4;
          pSVar7 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,0,
                              Method_System_Collections_Generic_List<string>_get_Item__);
        }
        ppSVar8 = &(__this->fields).HEADCHPANBF;
        *ppSVar8 = pSVar7;
        thunk_FUN_01c20e04(ppSVar8,pSVar7);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_10984,(MethodInfo *)0x0);
          ppSVar11 = &(__this->fields).PGPKOCNNKKJ;
          *ppSVar11 = pSVar4;
          thunk_FUN_01c20e04(ppSVar11,pSVar4);
          pSVar4 = *ppSVar11;
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_10984,(MethodInfo *)0x0);
            *ppSVar11 = pSVar4;
            thunk_FUN_01c20e04(ppSVar11,pSVar4);
            pSVar4 = *ppSVar11;
          }
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_9626,(MethodInfo *)0x0);
          iVar2 = CONLFJJLALA__LJFOPOPKNCL(pSVar7,(MethodInfo *)0x0);
          (__this->fields).AMIMEMOELHE = iVar2;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_10983,(MethodInfo *)0x0);
            ppSVar11 = &(__this->fields).AFMFLLCLLMM;
            *ppSVar11 = pSVar4;
            thunk_FUN_01c20e04(ppSVar11,pSVar4);
            pSVar4 = *ppSVar11;
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
              pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_10983,(MethodInfo *)0x0);
              *ppSVar11 = pSVar4;
              thunk_FUN_01c20e04(ppSVar11,pSVar4);
              pSVar4 = *ppSVar11;
            }
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).LMGCAJEGBGI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_4418,(MethodInfo *)0x0);
              ppSVar11 = &(__this->fields).OPFLPGECHDE;
              *ppSVar11 = pSVar4;
              thunk_FUN_01c20e04(ppSVar11,pSVar4);
              pSVar4 = *ppSVar11;
              if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_4418,(MethodInfo *)0x0);
                *ppSVar11 = pSVar4;
                thunk_FUN_01c20e04(ppSVar11,pSVar4);
                pSVar4 = *ppSVar11;
              }
              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
              (__this->fields).AHLHMBIFONA = iVar2;
              return;
            }
          }
        }
      }
    }
  }
LAB_0357b2e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

