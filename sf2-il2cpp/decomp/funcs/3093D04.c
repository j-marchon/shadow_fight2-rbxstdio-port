// KCFIOKDFHIB$$.ctor @ RVA 0x3093D04

void KCFIOKDFHIB___ctor(KCFIOKDFHIB_o *__this,System_Xml_XmlNode_o *PCAIKIGGBMJ,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  System_Xml_XmlElement_o *pSVar6;
  long *plVar7;
  System_String_o *pSVar8;
  KCFIOKDFHIB_Fields *pKVar9;
  System_Xml_XmlNode_o **ppSVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  float fVar13;
  
  if ((DAT_045660bc & 1) == 0) {
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_10385);
    FUN_01bab630(&StringLiteral_6356);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11735);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_8423);
    FUN_01bab630(&StringLiteral_4324);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6331);
    FUN_01bab630(&StringLiteral_10960);
    FUN_01bab630(&StringLiteral_1567);
    DAT_045660bc = 1;
  }
  pKVar9 = &__this->fields;
  pKVar9->NPFHCGIADBL = StringLiteral_1;
  thunk_FUN_01c20e04(pKVar9);
  ppSVar12 = &(__this->fields).CIKGADOJJMG;
  *ppSVar12 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar12);
  ppSVar11 = &(__this->fields).LCHHKBLIBMM;
  *ppSVar11 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar11);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar10 = &(__this->fields).JHFENACKNPG;
  *ppSVar10 = PCAIKIGGBMJ;
  thunk_FUN_01c20e04(ppSVar10,PCAIKIGGBMJ);
  pSVar2 = *ppSVar10;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11735,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar10,StringLiteral_11735,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,StringLiteral_1567,(pSVar4->klass->vtable)._10_set_Value.method);
      }
      pSVar2 = *ppSVar10;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_4324,(MethodInfo *)0x0);
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar10,StringLiteral_4324,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,StringLiteral_1567,(pSVar4->klass->vtable)._10_set_Value.method);
          }
          pSVar2 = *ppSVar10;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar2,StringLiteral_6356,(pSVar2->klass->vtable)._51_get_Item.method
                              );
            if (lVar5 == 0) {
              pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_6356,(MethodInfo *)0x0);
              EIABCPKDEBD__HBGAGFJBGKD
                        ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
            }
            pSVar2 = *ppSVar10;
            if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03193f58 to 0329408b has its CatchHandler @ 03193f58
                       catch() { ... } // from try @ 03193f58 with catch @ 03193f58
                       catch() { ... } // from try @ 0319409c with catch @ 03193f58
                       catch() { ... } // from try @ 031940b8 with catch @ 03193f58
                       catch() { ... } // from try @ 03194194 with catch @ 03193f58
                       catch() { ... } // from try @ 03194258 with catch @ 03193f58 */
              lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                (pSVar2,StringLiteral_10960,
                                 (pSVar2->klass->vtable)._51_get_Item.method);
              if (lVar5 == 0) {
                pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_10960,(MethodInfo *)0x0);
                EIABCPKDEBD__HBGAGFJBGKD
                          ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
              }
              pSVar2 = *ppSVar10;
              if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar2,StringLiteral_6310,
                                   (pSVar2->klass->vtable)._51_get_Item.method);
                if (lVar5 == 0) {
                  pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_6310,(MethodInfo *)0x0);
                  EIABCPKDEBD__HBGAGFJBGKD
                            ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
                }
                pSVar2 = *ppSVar10;
                if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                  lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar2,StringLiteral_8423,
                                     (pSVar2->klass->vtable)._51_get_Item.method);
                  if (lVar5 == 0) {
                    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                       (*ppSVar10,StringLiteral_8423,(MethodInfo *)0x0);
                    pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                       ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694,
                                        (MethodInfo *)0x0);
                    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                    (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                              (pSVar4,StringLiteral_1567,
                               (pSVar4->klass->vtable)._10_set_Value.method);
                  }
                  pSVar2 = *ppSVar10;
                  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                      (pSVar2,StringLiteral_10385,
                                       (pSVar2->klass->vtable)._51_get_Item.method);
                    if (lVar5 == 0) {
                      pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                         (*ppSVar10,StringLiteral_10385,(MethodInfo *)0x0);
                      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                         ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694,
                                          (MethodInfo *)0x0);
                      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                    /* try { // try from 0319408c to 0329409b has its CatchHandler @ 03194160 */
                      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                                (pSVar4,StringLiteral_1567,
                                 (pSVar4->klass->vtable)._10_set_Value.method);
                    }
                    pSVar2 = *ppSVar10;
                    /* try { // try from 0319409c to 032940af has its CatchHandler @ 03193f58 */
                    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031940b0 to 032940b7 has its CatchHandler @ 03194164 */
                    /* try { // try from 031940b8 to 0329417b has its CatchHandler @ 03193f58 */
                      lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                        (pSVar2,StringLiteral_6331,
                                         (pSVar2->klass->vtable)._51_get_Item.method);
                      if (lVar5 == 0) {
                        pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                           (*ppSVar10,StringLiteral_6331,(MethodInfo *)0x0);
                        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                           ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694,
                                            (MethodInfo *)0x0);
                        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar4,StringLiteral_1567,
                                   (pSVar4->klass->vtable)._10_set_Value.method);
                      }
                      pSVar2 = *ppSVar10;
                      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method
                                           );
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_11735,(MethodInfo *)0x0);
                          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                          pSVar2 = (__this->fields).JHFENACKNPG;
                          (__this->fields).JKMLPKKLIDP = iVar1;
                          if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                             (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.
                                                         method),
                             pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0319408c with catch @ 03194160
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031940b0 with catch @ 03194164
                        */
                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar3,StringLiteral_4324,(MethodInfo *)0x0);
                            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                            pSVar2 = (__this->fields).JHFENACKNPG;
                    /* try { // try from 0319417c to 03294193 has its CatchHandler @ 03194250 */
                            (__this->fields).HBGJECJNMFN = iVar1;
                    /* try { // try from 03194194 to 0329423f has its CatchHandler @ 03193f58 */
                            if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                               (plVar7 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                                           (pSVar2,StringLiteral_6356,
                                                            (pSVar2->klass->vtable)._51_get_Item.
                                                            method), plVar7 != (long *)0x0)) {
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar7 + 0x238))
                                                 (plVar7,*(undefined8 *)(*plVar7 + 0x240));
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
                                pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                   (pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                                *ppSVar12 = pSVar8;
                                thunk_FUN_01c20e04(ppSVar12,pSVar8);
                                pSVar2 = *ppSVar10;
                                if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                                  plVar7 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                                             (pSVar2,StringLiteral_10960,
                                                              (pSVar2->klass->vtable)._51_get_Item.
                                                              method);
                                  if (plVar7 != (long *)0x0) {
                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                             (**(code **)(*plVar7 + 0x238))
                                                       (plVar7,*(undefined8 *)(*plVar7 + 0x240));
                                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar3,StringLiteral_9327,
                                                          (MethodInfo *)0x0);
                                      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                         (pSVar4,StringLiteral_1,(MethodInfo *)0x0);
                                      *ppSVar11 = pSVar8;
                                      thunk_FUN_01c20e04(ppSVar11,pSVar8);
                                      pSVar2 = *ppSVar10;
                                      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03194240 to 0329424f has its CatchHandler @ 03194250 */
                    /* catch() { ... } // from try @ 0319417c with catch @ 03194250
                       catch() { ... } // from try @ 03194240 with catch @ 03194250 */
                    /* try { // try from 03194254 to 03294257 has its CatchHandler @ 03194260 */
                    /* try { // try from 03194258 to 03294263 has its CatchHandler @ 03193f58 */
                                        plVar7 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.
                                                           methodPtr)(pSVar2,StringLiteral_6310,
                                                                      (pSVar2->klass->vtable).
                                                                      _51_get_Item.method);
                                        if (plVar7 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03194254 with catch @ 03194260
                        */
                                          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                   (**(code **)(*plVar7 + 0x238))
                                                             (plVar7,*(undefined8 *)
                                                                      (*plVar7 + 0x240));
                                          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar3,StringLiteral_9327,
                                                                (MethodInfo *)0x0);
                                            pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                               (pSVar4,StringLiteral_1,
                                                                (MethodInfo *)0x0);
                                            pKVar9->NPFHCGIADBL = pSVar8;
                                            thunk_FUN_01c20e04(pKVar9,pSVar8);
                                            pSVar2 = *ppSVar10;
                                            if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                                              plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                 _51_get_Item.methodPtr)
                                                                         (pSVar2,StringLiteral_8423,
                                                                          (pSVar2->klass->vtable).
                                                                          _51_get_Item.method);
                                              if (plVar7 != (long *)0x0) {
                                                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                         (**(code **)(*plVar7 + 0x238))
                                                                   (plVar7,*(undefined8 *)
                                                                            (*plVar7 + 0x240));
                                                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *
                                                              )0x0) {
                                                  pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_14694,
                                                             (MethodInfo *)0x0);
                                                  iVar1 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar4,0,(MethodInfo *)0x0);
                                                  pSVar2 = (__this->fields).JHFENACKNPG;
                                                  (__this->fields).MJJBDELFBOM = iVar1;
                                                  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                         _51_get_Item.methodPtr)
                                                                                 (pSVar2,
                                                  StringLiteral_10385,
                                                  (pSVar2->klass->vtable)._51_get_Item.method),
                                                  plVar7 != (long *)0x0)) {
                                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                             (**(code **)(*plVar7 + 0x238))
                                                                       (plVar7,*(undefined8 *)
                                                                                (*plVar7 + 0x240));
                                                    if (pSVar3 != (
                                                  System_Xml_XmlAttributeCollection_o *)0x0) {
                                                    pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_14694,
                                                             (MethodInfo *)0x0);
                                                  iVar1 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar4,0,(MethodInfo *)0x0);
                                                  pSVar2 = (__this->fields).JHFENACKNPG;
                                                  (__this->fields).GMCNKDKMHII = iVar1;
                                                  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                         _51_get_Item.methodPtr)
                                                                                 (pSVar2,
                                                  StringLiteral_6331,
                                                  (pSVar2->klass->vtable)._51_get_Item.method),
                                                  plVar7 != (long *)0x0)) {
                                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                             (**(code **)(*plVar7 + 0x238))
                                                                       (plVar7,*(undefined8 *)
                                                                                (*plVar7 + 0x240));
                                                    if (pSVar3 != (
                                                  System_Xml_XmlAttributeCollection_o *)0x0) {
                                                    pSVar4 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar3,StringLiteral_14694,
                                                             (MethodInfo *)0x0);
                                                  fVar13 = EIABCPKDEBD__GICIEKCGOHA
                                                                     (pSVar4,0.0,(MethodInfo *)0x0);
                                                  (__this->fields).GKCCFAAKMBO = fVar13;
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
LAB_031943c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

