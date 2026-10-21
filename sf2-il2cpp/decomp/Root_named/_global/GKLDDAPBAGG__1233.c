// TypeDefIndex 1233
// Namespace: 
// public class GKLDDAPBAGG : QuestAction
// Fields:
//   private string OJEDDJHFLOG; // 0x68
//   private readonly LCKCDEKNLOA KFJLNJDDGDO; // 0x70
//   private readonly LCKCDEKNLOA MJMJIDBBMON; // 0x78

// ===== private void JCLPLBEJHGM(CFEFALDOEMD JNIBOOMFCEG)  [RVA 0x313B3EC]
// GKLDDAPBAGG$$JCLPLBEJHGM @ RVA 0x313B3EC

void GKLDDAPBAGG__JCLPLBEJHGM(GKLDDAPBAGG_o *__this,CFEFALDOEMD_o *JNIBOOMFCEG,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
  __this_00 = (__this->fields).KFJLNJDDGDO;
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDJAJHFFPKP()  [RVA 0x313B410]
// GKLDDAPBAGG$$NDJAJHFFPKP @ RVA 0x313B410

void GKLDDAPBAGG__NDJAJHFFPKP(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  GKLDDAPBAGG__DEILJOGCJJK(__this,method);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x313B574]
// GKLDDAPBAGG$$HNIHOIAMDPC @ RVA 0x313B574

void GKLDDAPBAGG__HNIHOIAMDPC
               (GKLDDAPBAGG_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Action_o *pSVar3;
  LCKCDEKNLOA_o *pLVar4;
  
  if ((DAT_0456672b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_GKLDDAPBAGG_NDJAJHFFPKP__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 0323b5c0 to 0333b653 has its CatchHandler @ 0323b2ec */
    FUN_01bab630(&StringLiteral_12524/*"Success"*/);
    FUN_01bab630(&StringLiteral_5840/*"Error"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456672b = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 0323b654 to 0333b657 has its CatchHandler @ 0323b698 */
                    /* try { // try from 0323b658 to 0333b65b has its CatchHandler @ 0323b69c */
                    /* try { // try from 0323b65c to 0333b65f has its CatchHandler @ 0323b688 */
      pSVar1 = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 0323b660 to 0333b663 has its CatchHandler @ 0323b684 */
                    /* try { // try from 0323b664 to 0333b667 has its CatchHandler @ 0323b69c */
                    /* try { // try from 0323b668 to 0333b66b has its CatchHandler @ 0323b2ec */
      (__this->fields).OJEDDJHFLOG = pSVar1;
                    /* try { // try from 0323b66c to 0333b66f has its CatchHandler @ 0323b678 */
      thunk_FUN_01c20e04();
                    /* try { // try from 0323b670 to 0333b6ab has its CatchHandler @ 0323b2ec */
                    /* catch() { ... } // from try @ 0323b66c with catch @ 0323b678 */
                    /* catch() { ... } // from try @ 0323b550 with catch @ 0323b67c */
                    /* catch() { ... } // from try @ 0323b544 with catch @ 0323b680 */
                    /* catch() { ... } // from try @ 0323b660 with catch @ 0323b684 */
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_12524/*"Success"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
                    /* catch() { ... } // from try @ 0323b65c with catch @ 0323b688 */
                    /* catch() { ... } // from try @ 0323b4d8 with catch @ 0323b68c */
      pLVar4 = (__this->fields).KFJLNJDDGDO;
                    /* catch() { ... } // from try @ 0323b47c with catch @ 0323b690 */
                    /* catch() { ... } // from try @ 0323b55c with catch @ 0323b694 */
                    /* catch() { ... } // from try @ 0323b654 with catch @ 0323b698 */
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0323b658 with catch @ 0323b69c
                       catch() { ... } // from try @ 0323b664 with catch @ 0323b69c */
                    /* try { // try from 0323b6ac to 0333b6af has its CatchHandler @ 0323b6c0 */
      System_Action___ctor();
                    /* catch() { ... } // from try @ 0323b6ac with catch @ 0323b6c0 */
      QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0323b6c8 to 0333b72f has its CatchHandler @ 0323b744 */
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_5840/*"Error"*/,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = (__this->fields).MJMJIDBBMON;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
                    /* try { // try from 0323b730 to 0333b73b has its CatchHandler @ 0323b2ec */
      QuestAction__KIBBEDPGMBB((QuestAction_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IHKHIJONLCM(BKLDKOMCOPN OPAEPDIIOEB)  [RVA 0x313B738]
// GKLDDAPBAGG$$IHKHIJONLCM @ RVA 0x313B738

void GKLDDAPBAGG__IHKHIJONLCM(GKLDDAPBAGG_o *__this,BKLDKOMCOPN_o *OPAEPDIIOEB,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  
                    /* try { // try from 0323b73c to 0333b743 has its CatchHandler @ 0323b744 */
  __this_00 = (__this->fields).MJMJIDBBMON;
                    /* catch() { ... } // from try @ 0323b6c8 with catch @ 0323b744
                       catch() { ... } // from try @ 0323b73c with catch @ 0323b744 */
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DOGMNNFIJLC()  [RVA 0x313B75C]
// GKLDDAPBAGG$$DOGMNNFIJLC @ RVA 0x313B75C

void GKLDDAPBAGG__DOGMNNFIJLC(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar1;
  
  if ((DAT_0456672c & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_GKLDDAPBAGG_IHKHIJONLCM__);
    FUN_01bab630(&Method_GKLDDAPBAGG_JCLPLBEJHGM__);
    DAT_0456672c = 1;
    method = extraout_x1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__OMNHIKEFCCG(pDVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__AOMBGFMAOMJ(pDVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DEILJOGCJJK()  [RVA 0x313B42C]
// GKLDDAPBAGG$$DEILJOGCJJK @ RVA 0x313B42C

void GKLDDAPBAGG__DEILJOGCJJK(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar1;
  
  if ((DAT_0456672d & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_GKLDDAPBAGG_IHKHIJONLCM__);
    FUN_01bab630(&Method_GKLDDAPBAGG_JCLPLBEJHGM__);
                    /* try { // try from 0323b47c to 0333b4a3 has its CatchHandler @ 0323b690 */
    DAT_0456672d = 1;
    method = extraout_x1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
                    /* try { // try from 0323b4d8 to 0333b503 has its CatchHandler @ 0323b68c */
  System_Action<object>___ctor();
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__MJJEHFDLAHD(pDVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
                    /* try { // try from 0323b544 to 0333b547 has its CatchHandler @ 0323b680 */
    System_Action<object>___ctor();
    if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
                    /* try { // try from 0323b550 to 0333b557 has its CatchHandler @ 0323b67c */
                    /* try { // try from 0323b55c to 0333b5bf has its CatchHandler @ 0323b694 */
      DGGBFKNKEAH__AHKPBJGPOMH(pDVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x313B8A4]
// GKLDDAPBAGG$$.ctor @ RVA 0x313B8A4

void GKLDDAPBAGG___ctor(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  LCKCDEKNLOA_o **ppLVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456672e & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_0456672e = 1;
    method = extraout_x1;
  }
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).KFJLNJDDGDO;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  pLVar1 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo);
  LCKCDEKNLOA___ctor(pLVar1,(MethodInfo *)0x0);
  ppLVar2 = &(__this->fields).MJMJIDBBMON;
  *ppLVar2 = pLVar1;
  thunk_FUN_01c20e04(ppLVar2,pLVar1);
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x313B934]
// GKLDDAPBAGG$$OFPHPMGMCAL @ RVA 0x313B934

System_String_o * GKLDDAPBAGG__OFPHPMGMCAL(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  return (__this->fields).OJEDDJHFLOG;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x313B93C]
// GKLDDAPBAGG$$MAHFCKJGBPP @ RVA 0x313B93C

void GKLDDAPBAGG__MAHFCKJGBPP(GKLDDAPBAGG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  System_String_o *pSVar6;
  KCJCIJHMEJF_o *pKVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_0456672f & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456672f = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).OJEDDJHFLOG;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar6,(MethodInfo *)0x0);
  GKLDDAPBAGG__DOGMNNFIJLC(__this,method_00);
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
  pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
    pKVar3 = pKVar7->klass;
    uVar1._0_1_ = (pKVar3->_2).rank;
    uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
          pVVar2 = pKVar3->vtable + *piVar5;
          goto LAB_0323ba8c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,0);
LAB_0323ba8c:
    auVar8 = (*pVVar2->methodPtr)(pKVar7,pSVar6,pVVar2->method);
    if ((auVar8._0_8_ & 1) != 0) {
      return;
    }
    GKLDDAPBAGG__DEILJOGCJJK(__this,auVar8._8_8_);
    __this_00 = (__this->fields).MJMJIDBBMON;
    if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x313BAE8]
// GKLDDAPBAGG$$PKIFMKGDJJN @ RVA 0x313BAE8

void GKLDDAPBAGG__PKIFMKGDJJN(GKLDDAPBAGG_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *pLVar1;
  MethodInfo *method_00;
  
  pLVar1 = (__this->fields).KFJLNJDDGDO;
  if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).MJMJIDBBMON;
    if (pLVar1 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(pLVar1,(MethodInfo *)0x0);
      GKLDDAPBAGG__DEILJOGCJJK(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

