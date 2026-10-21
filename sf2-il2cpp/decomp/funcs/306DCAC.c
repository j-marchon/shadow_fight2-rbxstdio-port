// GMGALNFPLPA$$.ctor @ RVA 0x306DCAC

void GMGALNFPLPA___ctor(GMGALNFPLPA_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  bool bVar1;
  FKAKHBPABPA_o *pFVar2;
  FKAKHBPABPA_o **ppFVar3;
  GMGALNFPLPA_GPAPFODFLNH_o *pGVar4;
  GMGALNFPLPA_GPAPFODFLNH_o **ppGVar5;
  System_Collections_Generic_List_GMGALNFPLPA__o *__this_00;
  System_Collections_Generic_List_GMGALNFPLPA__o **ppSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  
  if ((DAT_04565f47 & 1) == 0) {
    FUN_01bab630(&FKAKHBPABPA_TypeInfo);
    FUN_01bab630(&GMGALNFPLPA_GPAPFODFLNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
    FUN_01bab630(&StringLiteral_11077);
    FUN_01bab630(&StringLiteral_5727);
    FUN_01bab630(&StringLiteral_7097);
    DAT_04565f47 = 1;
  }
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).CICPBJDCAOD;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).OBALFGOMLOL;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).OGLDEIPGBAF;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pFVar2 = (FKAKHBPABPA_o *)thunk_FUN_01bda818(FKAKHBPABPA_TypeInfo);
  FKAKHBPABPA___ctor(pFVar2,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields).DOEIKBGEBNC;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  pGVar4 = (GMGALNFPLPA_GPAPFODFLNH_o *)thunk_FUN_01bda818(GMGALNFPLPA_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  ppGVar5 = &(__this->fields).ENNJLAAEABK;
  *ppGVar5 = pGVar4;
  thunk_FUN_01c20e04(ppGVar5,pGVar4);
  pGVar4 = (GMGALNFPLPA_GPAPFODFLNH_o *)thunk_FUN_01bda818(GMGALNFPLPA_GPAPFODFLNH_TypeInfo);
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  ppGVar5 = &(__this->fields).JBPELKEMOCM;
  *ppGVar5 = pGVar4;
  thunk_FUN_01c20e04(ppGVar5,pGVar4);
  __this_00 = (System_Collections_Generic_List_GMGALNFPLPA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GMGALNFPLPA>_TypeInfo);
                    /* try { // try from 0316de3c to 0326df47 has its CatchHandler @ 0316de3c
                       catch() { ... } // from try @ 0316de3c with catch @ 0316de3c
                       catch() { ... } // from try @ 0316df80 with catch @ 0316de3c
                       catch() { ... } // from try @ 0316e184 with catch @ 0316de3c
                       catch() { ... } // from try @ 0316e204 with catch @ 0316de3c */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GMGALNFPLPA>__ctor__);
  ppSVar6 = &(__this->fields).DOLDMIEIMPL;
  *ppSVar6 = __this_00;
  thunk_FUN_01c20e04(ppSVar6,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).EPFNMABINOG = true;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_5727,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
      (__this->fields).LMMNFIDBANA = bVar1;
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_11077,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
        (__this->fields).FADPPLIEOGB = bVar1;
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_7097,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
          (__this->fields).DGGFJKAOEGD = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

