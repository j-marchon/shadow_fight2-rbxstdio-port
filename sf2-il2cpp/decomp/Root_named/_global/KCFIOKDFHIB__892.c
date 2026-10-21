// TypeDefIndex 892
// Namespace: 
// public class KCFIOKDFHIB
// Fields:
//   private string NPFHCGIADBL; // 0x10
//   private string CIKGADOJJMG; // 0x18
//   private string LCHHKBLIBMM; // 0x20
//   private int MJJBDELFBOM; // 0x28
//   private int GMCNKDKMHII; // 0x2C
//   private int JKMLPKKLIDP; // 0x30
//   private int HBGJECJNMFN; // 0x34
//   private float GKCCFAAKMBO; // 0x38
//   public XmlNode JHFENACKNPG; // 0x40

// ===== public int OHPFFLBBKDO()  [RVA 0x3093CF4]
// KCFIOKDFHIB$$OHPFFLBBKDO @ RVA 0x3093CF4

int32_t KCFIOKDFHIB__OHPFFLBBKDO(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).JKMLPKKLIDP;
}


// ===== public string OHDLIHBBLFD()  [RVA 0x3093CFC]
// KCFIOKDFHIB$$OHDLIHBBLFD @ RVA 0x3093CFC

System_String_o * KCFIOKDFHIB__OHDLIHBBLFD(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFHCGIADBL;
}


// ===== public void .ctor(XmlNode PCAIKIGGBMJ)  [RVA 0x3093D04]
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
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_10385/*"PowerAmount"*/);
    FUN_01bab630(&StringLiteral_6356/*"FightResult"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11735/*"ScreenIndex"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_8423/*"LevelUp"*/);
    FUN_01bab630(&StringLiteral_4324/*"ChekPointIndex"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6331/*"FightAvgFPS"*/);
    FUN_01bab630(&StringLiteral_10960/*"RaidResult"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_045660bc = 1;
  }
  pKVar9 = &__this->fields;
  pKVar9->NPFHCGIADBL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pKVar9);
  ppSVar12 = &(__this->fields).CIKGADOJJMG;
  *ppSVar12 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar12);
  ppSVar11 = &(__this->fields).LCHHKBLIBMM;
  *ppSVar11 = StringLiteral_1/*""*/;
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
                         (pSVar3,StringLiteral_11735/*"ScreenIndex"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar10,StringLiteral_11735/*"ScreenIndex"*/,(MethodInfo *)0x0);
        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,StringLiteral_1567/*"0"*/,(pSVar4->klass->vtable)._10_set_Value.method);
      }
      pSVar2 = *ppSVar10;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_4324/*"ChekPointIndex"*/,(MethodInfo *)0x0);
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar10,StringLiteral_4324/*"ChekPointIndex"*/,(MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,StringLiteral_1567/*"0"*/,(pSVar4->klass->vtable)._10_set_Value.method);
          }
          pSVar2 = *ppSVar10;
          if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
            lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                              (pSVar2,StringLiteral_6356/*"FightResult"*/,(pSVar2->klass->vtable)._51_get_Item.method
                              );
            if (lVar5 == 0) {
              pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_6356/*"FightResult"*/,(MethodInfo *)0x0);
              EIABCPKDEBD__HBGAGFJBGKD
                        ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
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
                                (pSVar2,StringLiteral_10960/*"RaidResult"*/,
                                 (pSVar2->klass->vtable)._51_get_Item.method);
              if (lVar5 == 0) {
                pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_10960/*"RaidResult"*/,(MethodInfo *)0x0);
                EIABCPKDEBD__HBGAGFJBGKD
                          ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
              }
              pSVar2 = *ppSVar10;
              if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                  (pSVar2,StringLiteral_6310/*"Fight"*/,
                                   (pSVar2->klass->vtable)._51_get_Item.method);
                if (lVar5 == 0) {
                  pSVar6 = EIABCPKDEBD__BHPIHHJHELJ(*ppSVar10,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
                  EIABCPKDEBD__HBGAGFJBGKD
                            ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                }
                pSVar2 = *ppSVar10;
                if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                  lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar2,StringLiteral_8423/*"LevelUp"*/,
                                     (pSVar2->klass->vtable)._51_get_Item.method);
                  if (lVar5 == 0) {
                    pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                       (*ppSVar10,StringLiteral_8423/*"LevelUp"*/,(MethodInfo *)0x0);
                    pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                       ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694/*"Value"*/,
                                        (MethodInfo *)0x0);
                    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                    (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                              (pSVar4,StringLiteral_1567/*"0"*/,
                               (pSVar4->klass->vtable)._10_set_Value.method);
                  }
                  pSVar2 = *ppSVar10;
                  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                      (pSVar2,StringLiteral_10385/*"PowerAmount"*/,
                                       (pSVar2->klass->vtable)._51_get_Item.method);
                    if (lVar5 == 0) {
                      pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                         (*ppSVar10,StringLiteral_10385/*"PowerAmount"*/,(MethodInfo *)0x0);
                      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                         ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694/*"Value"*/,
                                          (MethodInfo *)0x0);
                      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                    /* try { // try from 0319408c to 0329409b has its CatchHandler @ 03194160 */
                      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                                (pSVar4,StringLiteral_1567/*"0"*/,
                                 (pSVar4->klass->vtable)._10_set_Value.method);
                    }
                    pSVar2 = *ppSVar10;
                    /* try { // try from 0319409c to 032940af has its CatchHandler @ 03193f58 */
                    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031940b0 to 032940b7 has its CatchHandler @ 03194164 */
                    /* try { // try from 031940b8 to 0329417b has its CatchHandler @ 03193f58 */
                      lVar5 = (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                        (pSVar2,StringLiteral_6331/*"FightAvgFPS"*/,
                                         (pSVar2->klass->vtable)._51_get_Item.method);
                      if (lVar5 == 0) {
                        pSVar6 = EIABCPKDEBD__BHPIHHJHELJ
                                           (*ppSVar10,StringLiteral_6331/*"FightAvgFPS"*/,(MethodInfo *)0x0);
                        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                                           ((System_Xml_XmlNode_o *)pSVar6,StringLiteral_14694/*"Value"*/,
                                            (MethodInfo *)0x0);
                        if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031943c8;
                        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar4,StringLiteral_1567/*"0"*/,
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
                                             (pSVar3,StringLiteral_11735/*"ScreenIndex"*/,(MethodInfo *)0x0);
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
                                               (pSVar3,StringLiteral_4324/*"ChekPointIndex"*/,(MethodInfo *)0x0);
                            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
                            pSVar2 = (__this->fields).JHFENACKNPG;
                    /* try { // try from 0319417c to 03294193 has its CatchHandler @ 03194250 */
                            (__this->fields).HBGJECJNMFN = iVar1;
                    /* try { // try from 03194194 to 0329423f has its CatchHandler @ 03193f58 */
                            if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                               (plVar7 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                                           (pSVar2,StringLiteral_6356/*"FightResult"*/,
                                                            (pSVar2->klass->vtable)._51_get_Item.
                                                            method), plVar7 != (long *)0x0)) {
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (**(code **)(*plVar7 + 0x238))
                                                 (plVar7,*(undefined8 *)(*plVar7 + 0x240));
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                                pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                   (pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                                *ppSVar12 = pSVar8;
                                thunk_FUN_01c20e04(ppSVar12,pSVar8);
                                pSVar2 = *ppSVar10;
                                if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                                  plVar7 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                                                             (pSVar2,StringLiteral_10960/*"RaidResult"*/,
                                                              (pSVar2->klass->vtable)._51_get_Item.
                                                              method);
                                  if (plVar7 != (long *)0x0) {
                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                             (**(code **)(*plVar7 + 0x238))
                                                       (plVar7,*(undefined8 *)(*plVar7 + 0x240));
                                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar3,StringLiteral_9327/*"Name"*/,
                                                          (MethodInfo *)0x0);
                                      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                         (pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
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
                                                           methodPtr)(pSVar2,StringLiteral_6310/*"Fight"*/,
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
                                                               (pSVar3,StringLiteral_9327/*"Name"*/,
                                                                (MethodInfo *)0x0);
                                            pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                                                               (pSVar4,StringLiteral_1/*""*/,
                                                                (MethodInfo *)0x0);
                                            pKVar9->NPFHCGIADBL = pSVar8;
                                            thunk_FUN_01c20e04(pKVar9,pSVar8);
                                            pSVar2 = *ppSVar10;
                                            if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                                              plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                 _51_get_Item.methodPtr)
                                                                         (pSVar2,StringLiteral_8423/*"LevelUp"*/,
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
                                                            (pSVar3,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar1 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar4,0,(MethodInfo *)0x0);
                                                  pSVar2 = (__this->fields).JHFENACKNPG;
                                                  (__this->fields).MJJBDELFBOM = iVar1;
                                                  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                         _51_get_Item.methodPtr)
                                                                                 (pSVar2,
                                                  StringLiteral_10385/*"PowerAmount"*/,
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
                                                            (pSVar3,StringLiteral_14694/*"Value"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar1 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar4,0,(MethodInfo *)0x0);
                                                  pSVar2 = (__this->fields).JHFENACKNPG;
                                                  (__this->fields).GMCNKDKMHII = iVar1;
                                                  if ((pSVar2 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (plVar7 = (long *)(*(pSVar2->klass->vtable).
                                                                         _51_get_Item.methodPtr)
                                                                                 (pSVar2,
                                                  StringLiteral_6331/*"FightAvgFPS"*/,
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
                                                            (pSVar3,StringLiteral_14694/*"Value"*/,
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


// ===== public void MNGPLNIAIHH(string CJNHFNHJHPE)  [RVA 0x30943CC]
// KCFIOKDFHIB$$MNGPLNIAIHH @ RVA 0x30943CC

void KCFIOKDFHIB__MNGPLNIAIHH(KCFIOKDFHIB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_045660bd & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10960/*"RaidResult"*/);
    DAT_045660bd = 1;
  }
  ppSVar5 = &(__this->fields).LCHHKBLIBMM;
  *ppSVar5 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
  pSVar2 = (__this->fields).JHFENACKNPG;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_10960/*"RaidResult"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
                    /* try { // try from 03194474 to 032947d3 has its CatchHandler @ 03194474
                       catch() { ... } // from try @ 03194474 with catch @ 03194474
                       catch() { ... } // from try @ 03194c88 with catch @ 03194474
                       catch() { ... } // from try @ 03194cec with catch @ 03194474
                       catch() { ... } // from try @ 03194e1c with catch @ 03194474
                       catch() { ... } // from try @ 03194e24 with catch @ 03194474
                       catch() { ... } // from try @ 03194f00 with catch @ 03194474 */
      if ((__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar1 = StringLiteral_1/*""*/;
        if (*ppSVar5 != (System_String_o *)0x0) {
          pSVar1 = *ppSVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x031944a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string MPNFLJGKDDP()  [RVA 0x30944A8]
// KCFIOKDFHIB$$MPNFLJGKDDP @ RVA 0x30944A8

System_String_o * KCFIOKDFHIB__MPNFLJGKDDP(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).LCHHKBLIBMM;
}


// ===== public void EPICBGAJMIG(float CJNHFNHJHPE)  [RVA 0x30944B0]
// KCFIOKDFHIB$$EPICBGAJMIG @ RVA 0x30944B0

void KCFIOKDFHIB__EPICBGAJMIG(KCFIOKDFHIB_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  float *method_00;
  float __this_01;
  
  if ((DAT_045660be & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_6331/*"FightAvgFPS"*/);
    DAT_045660be = 1;
  }
  method_00 = &(__this->fields).GKCCFAAKMBO;
  *method_00 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_6331/*"FightAvgFPS"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar4 = System_Single__ToString(__this_01,(MethodInfo *)method_00);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03194574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CMFFHPHIHCG()  [RVA 0x309457C]
// KCFIOKDFHIB$$CMFFHPHIHCG @ RVA 0x309457C

int32_t KCFIOKDFHIB__CMFFHPHIHCG(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).MJJBDELFBOM;
}


// ===== public float KMNODIJIFDO()  [RVA 0x3094584]
// KCFIOKDFHIB$$KMNODIJIFDO @ RVA 0x3094584

float KCFIOKDFHIB__KMNODIJIFDO(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).GKCCFAAKMBO;
}


// ===== public string DOPKIFMKAMI()  [RVA 0x309458C]
// KCFIOKDFHIB$$DOPKIFMKAMI @ RVA 0x309458C

System_String_o * KCFIOKDFHIB__DOPKIFMKAMI(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).CIKGADOJJMG;
}


// ===== public void GFABHCMJOLH(string CJNHFNHJHPE)  [RVA 0x3094594]
// KCFIOKDFHIB$$GFABHCMJOLH @ RVA 0x3094594

void KCFIOKDFHIB__GFABHCMJOLH(KCFIOKDFHIB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_045660bf & 1) == 0) {
    FUN_01bab630(&StringLiteral_6356/*"FightResult"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045660bf = 1;
  }
  ppSVar5 = &(__this->fields).CIKGADOJJMG;
  *ppSVar5 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
  pSVar2 = (__this->fields).JHFENACKNPG;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_6356/*"FightResult"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if ((__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar1 = StringLiteral_1/*""*/;
        if (*ppSVar5 != (System_String_o *)0x0) {
          pSVar1 = *ppSVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x03194668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DMGAKPLCJEL(int CJNHFNHJHPE)  [RVA 0x3094670]
// KCFIOKDFHIB$$DMGAKPLCJEL @ RVA 0x3094670

void KCFIOKDFHIB__DMGAKPLCJEL(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_045660c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4324/*"ChekPointIndex"*/);
    DAT_045660c0 = 1;
  }
  piVar4 = &(__this->fields).HBGJECJNMFN;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_4324/*"ChekPointIndex"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03194700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GKKEMMNPNJE(int CJNHFNHJHPE)  [RVA 0x3094708]
// KCFIOKDFHIB$$GKKEMMNPNJE @ RVA 0x3094708

void KCFIOKDFHIB__GKKEMMNPNJE(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_045660c1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10385/*"PowerAmount"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_045660c1 = 1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  (__this->fields).GMCNKDKMHII = CJNHFNHJHPE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_10385/*"PowerAmount"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar4 = System_Int32__ToString((int)__this + 0x28,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031947c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int FMNEFEMHCGG()  [RVA 0x30947CC]
// KCFIOKDFHIB$$FMNEFEMHCGG @ RVA 0x30947CC

int32_t KCFIOKDFHIB__FMNEFEMHCGG(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).GMCNKDKMHII;
}


// ===== public void GNCKPENHMCA(int CJNHFNHJHPE)  [RVA 0x30947D4]
// KCFIOKDFHIB$$GNCKPENHMCA @ RVA 0x30947D4

void KCFIOKDFHIB__GNCKPENHMCA(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
                    /* try { // try from 031947d4 to 032947fb has its CatchHandler @ 03194e6c */
  if ((DAT_045660c2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_8423/*"LevelUp"*/);
    DAT_045660c2 = 1;
  }
  piVar5 = &(__this->fields).MJJBDELFBOM;
  *piVar5 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_8423/*"LevelUp"*/,
                                (pSVar1->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03194838 to 0329485f has its CatchHandler @ 03194e68 */
    if (plVar2 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* try { // try from 03194870 to 03294873 has its CatchHandler @ 03194e54 */
        pSVar4 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03194888 to 032948d3 has its CatchHandler @ 03194e64 */
                    /* WARNING: Could not recover jumptable at 0x03194890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LBFJIIGMLDE()  [RVA 0x3094898]
// KCFIOKDFHIB$$LBFJIIGMLDE @ RVA 0x3094898

int32_t KCFIOKDFHIB__LBFJIIGMLDE(KCFIOKDFHIB_o *__this,MethodInfo *method)

{
  return (__this->fields).HBGJECJNMFN;
}


// ===== public void DLGLNFNKONH(int CJNHFNHJHPE)  [RVA 0x30948A0]
// KCFIOKDFHIB$$DLGLNFNKONH @ RVA 0x30948A0

void KCFIOKDFHIB__DLGLNFNKONH(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_045660c3 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11735/*"ScreenIndex"*/);
    DAT_045660c3 = 1;
  }
  piVar4 = &(__this->fields).JKMLPKKLIDP;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031948e4 to 032948fb has its CatchHandler @ 03194e58 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_11735/*"ScreenIndex"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03194930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NBFLGFJIJCL(string CJNHFNHJHPE)  [RVA 0x3094938]
// KCFIOKDFHIB$$NBFLGFJIJCL @ RVA 0x3094938

void KCFIOKDFHIB__NBFLGFJIJCL(KCFIOKDFHIB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar4;
  KCFIOKDFHIB_Fields *pKVar5;
  
                    /* try { // try from 03194938 to 03294943 has its CatchHandler @ 03194e50 */
  if ((DAT_045660c4 & 1) == 0) {
                    /* try { // try from 03194954 to 0329495b has its CatchHandler @ 03194e64 */
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 03194970 to 03294977 has its CatchHandler @ 03194e50 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045660c4 = 1;
  }
  pKVar5 = &__this->fields;
  pKVar5->NPFHCGIADBL = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pKVar5,CJNHFNHJHPE);
  pSVar2 = (__this->fields).JHFENACKNPG;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031949b0 to 032949d7 has its CatchHandler @ 03194cc4 */
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_6310/*"Fight"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
                    /* try { // try from 031949e0 to 032949ef has its CatchHandler @ 03194cc8 */
      if ((__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar1 = StringLiteral_1/*""*/;
        if (pKVar5->NPFHCGIADBL != (System_String_o *)0x0) {
          pSVar1 = pKVar5->NPFHCGIADBL;
        }
                    /* WARNING: Could not recover jumptable at 0x03194a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

