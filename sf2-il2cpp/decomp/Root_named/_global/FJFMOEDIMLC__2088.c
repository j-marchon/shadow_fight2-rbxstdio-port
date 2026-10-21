// TypeDefIndex 2088
// Namespace: 
// public class FJFMOEDIMLC : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x32C49F4]
// FJFMOEDIMLC$$.ctor @ RVA 0x32C49F4

void FJFMOEDIMLC___ctor(FJFMOEDIMLC_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c49d8 with catch @ 033c49f4
                        */
  if ((DAT_04567527 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
    FUN_01bab630(&QuestAction_<>c_TypeInfo);
    DAT_04567527 = 1;
    method = extraout_x1;
  }
  if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (FJFMOEDIMLC_o *)0x0) {
    ppSVar1 = &(__this->fields).super.EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).super.BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32C4B90]
// FJFMOEDIMLC$$MAHFCKJGBPP @ RVA 0x32C4B90

void FJFMOEDIMLC__MAHFCKJGBPP(FJFMOEDIMLC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCJCIJHMEJF_o *pKVar6;
  
  if ((DAT_045674e9 & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045674e9 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar6 == (KCJCIJHMEJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 4);
        goto LAB_033c4c8c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCJCIJHMEJF_TypeInfo,4);
LAB_033c4c8c:
  (*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32C5064]
// FJFMOEDIMLC$$HNIHOIAMDPC @ RVA 0x32C5064

void FJFMOEDIMLC__HNIHOIAMDPC
               (FJFMOEDIMLC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  uint8_t uVar1;
  System_String_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  MethodInfo *method_00;
  System_String_o **ppSVar5;
  
  if ((DAT_04567528 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8598/*"Lock"*/);
    FUN_01bab630(&StringLiteral_12226/*"Sound"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567528 = 1;
  }
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(NPLGCIFGFOK->klass->vtable)._8_unknown.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._8_unknown.method);
    (__this->fields).super.LEMICKEFMOJ = pSVar2;
    thunk_FUN_01c20e04();
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_8598/*"Lock"*/,(MethodInfo *)0x0);
      pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      uVar1 = QuestAction__FOLPIHAMEJE(pSVar2,method_00);
      (__this->fields).super.EPPJLCHLIDH = uVar1;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_12226/*"Sound"*/,(MethodInfo *)0x0);
        pSVar2 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar5 = &(__this->fields).super.BNCJPLDMJMH;
        *ppSVar5 = pSVar2;
        thunk_FUN_01c20e04(ppSVar5,pSVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

