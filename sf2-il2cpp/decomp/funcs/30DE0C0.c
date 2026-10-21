// KIHIPAJGNBF$$.ctor @ RVA 0x30DE0C0

void KIHIPAJGNBF___ctor(KIHIPAJGNBF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_long__o *__this_00;
  System_Collections_Generic_List_long__o **ppSVar3;
  System_Xml_XmlNode_o **ppSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  LPKCAMIJFOP_o *__this_01;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *pMVar7;
  float fVar8;
  System_DateTime_Fields local_48;
  
  if ((DAT_0456637f & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&LPKCAMIJFOP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&StringLiteral_13893);
    FUN_01bab630(&StringLiteral_10190);
    FUN_01bab630(&StringLiteral_14865);
    FUN_01bab630(&StringLiteral_11703);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_7575);
    DAT_0456637f = 1;
  }
  local_48._dateData = 0;
  (__this->fields).GEONGCPLLFJ = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_long__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
  System_Collections_Generic_List<long>___ctor
            (__this_00,Method_System_Collections_Generic_List<long>__ctor__);
  ppSVar3 = &(__this->fields).LLDABLJEMBM;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar4 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar4,AHDGNOJPPIB);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_7575,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
      (__this->fields).BBOPCFFCNIA = iVar1;
      if (iVar1 == 0) {
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
        uVar2 = System_DateTime__get_Millisecond((System_DateTime_o)&local_48,(MethodInfo *)0x0);
        __this_01 = (LPKCAMIJFOP_o *)thunk_FUN_01bda818(LPKCAMIJFOP_TypeInfo);
        pMVar7 = (MethodInfo *)0x0;
        LPKCAMIJFOP___ctor(__this_01,uVar2,(MethodInfo *)0x0);
        if (__this_01 == (LPKCAMIJFOP_o *)0x0) goto LAB_031de3c0;
        uVar2 = LPKCAMIJFOP__PKJEMJJCPAL(__this_01,(MethodInfo *)0x0);
        KIHIPAJGNBF__IHNDJDDBHNG(__this,uVar2,pMVar7);
      }
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_13893,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
        (__this->fields).ECAPNIBOPKP = fVar8;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_10190,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
          (__this->fields).BJGOCKADFEB = iVar1;
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_11703,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
            (__this->fields).MNPJJPBJCCO = iVar1;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_14865,(MethodInfo *)0x0);
              pMVar7 = (MethodInfo *)0x0;
              EHNFGMGKCHO = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
              KIHIPAJGNBF__PLHJPEHILIJ(__this,EHNFGMGKCHO,pMVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_031de3c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

