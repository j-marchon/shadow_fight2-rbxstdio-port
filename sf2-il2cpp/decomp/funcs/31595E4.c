// LKPNOBFEAKD$$.ctor @ RVA 0x31595E4

void LKPNOBFEAKD___ctor(LKPNOBFEAKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  NGJHCIGFLFD_o *pNVar2;
  NGJHCIGFLFD_o **ppNVar3;
  PJNPKJMMNDI_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  PJNPKJMMNDI_o **ppPVar7;
  float fVar8;
  
  if ((DAT_0456685b & 1) == 0) {
    FUN_01bab630(&NGJHCIGFLFD_TypeInfo);
    FUN_01bab630(&PJNPKJMMNDI_TypeInfo);
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_8881);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9064);
    FUN_01bab630(&StringLiteral_4838);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_6313);
    FUN_01bab630(&StringLiteral_9866);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6359);
    DAT_0456685b = 1;
  }
  pNVar2 = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(NGJHCIGFLFD_TypeInfo);
  NGJHCIGFLFD___ctor(pNVar2,(MethodInfo *)0x0);
  ppNVar3 = &(__this->fields).KPFGHBEKJIM;
  *ppNVar3 = pNVar2;
  thunk_FUN_01c20e04(ppNVar3,pNVar2);
  __this_00 = (PJNPKJMMNDI_o *)thunk_FUN_01bda818(PJNPKJMMNDI_TypeInfo);
  PJNPKJMMNDI___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar7 = &(__this->fields).JJIJILBBGMJ;
  *ppPVar7 = __this_00;
  thunk_FUN_01c20e04(ppPVar7,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar6;
      thunk_FUN_01c20e04();
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
        (__this->fields).JAICMIMBIOA = fVar8;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_2968,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).BNGDONJEHMH = pSVar6;
          thunk_FUN_01c20e04();
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14870,(MethodInfo *)0x0);
            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
            (__this->fields).GNCBIPJFEGB = pSVar6;
            thunk_FUN_01c20e04();
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_6310,(MethodInfo *)0x0);
              pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
              (__this->fields).HMKKKKOPIJH = pSVar6;
              thunk_FUN_01c20e04();
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_6313,(MethodInfo *)0x0);
                pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                (__this->fields).BDJGFOGHDKK = pSVar6;
                thunk_FUN_01c20e04();
                pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar4,StringLiteral_13991,(MethodInfo *)0x0);
                  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                  (__this->fields).BGHFADDGPAD = pSVar6;
                  thunk_FUN_01c20e04();
                    /* try { // try from 03259920 to 03359a9f has its CatchHandler @ 03259920
                       catch() { ... } // from try @ 03259920 with catch @ 03259920
                       catch() { ... } // from try @ 03259bbc with catch @ 03259920
                       catch() { ... } // from try @ 03259be8 with catch @ 03259920
                       catch() { ... } // from try @ 03259c8c with catch @ 03259920
                       catch() { ... } // from try @ 03259cd8 with catch @ 03259920
                       catch() { ... } // from try @ 03259d1c with catch @ 03259920 */
                  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar4,StringLiteral_6359,(MethodInfo *)0x0);
                    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                    (__this->fields).JMCKAHCGMDD = pSVar6;
                    thunk_FUN_01c20e04();
                    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar4,StringLiteral_8881,(MethodInfo *)0x0);
                      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                      (__this->fields).KMNDDMGAHID = pSVar6;
                      thunk_FUN_01c20e04();
                      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar4,StringLiteral_9064,(MethodInfo *)0x0);
                        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                        (__this->fields).EAEAFBCHFML = pSVar6;
                        thunk_FUN_01c20e04();
                        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar4,StringLiteral_9866,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                          (__this->fields).KAFNDKOPMDH = 0;
                          (__this->fields).ODIDKGCHDKL = bVar1;
                          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar4,StringLiteral_4838,(MethodInfo *)0x0);
                            method_00 = (MethodInfo *)0x0;
                            pSVar6 = EIABCPKDEBD__JPKEHIBGOEM
                                               (pSVar5,StringLiteral_1,(MethodInfo *)0x0);
                            LKPNOBFEAKD__ODPPMDEEHEA(__this,pSVar6,method_00);
                            LKPNOBFEAKD__EOCKLMCDLEK(__this,AHDGNOJPPIB,method_00);
                            pNVar2 = (__this->fields).KPFGHBEKJIM;
                            if (pNVar2 != (NGJHCIGFLFD_o *)0x0) {
                              (pNVar2->fields).BGHFADDGPAD = 2;
                    /* try { // try from 03259aa0 to 03359aa7 has its CatchHandler @ 03259cc4 */
                              CKMOFDBAEKH__KEKELCCGNCE
                                        (AHDGNOJPPIB,pNVar2,*ppPVar7,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

