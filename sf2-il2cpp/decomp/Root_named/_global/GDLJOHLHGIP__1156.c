// TypeDefIndex 1156
// Namespace: 
// public class GDLJOHLHGIP : QuestAction
// Fields:
//   private string BHLFBMLDHBE; // 0x68

// ===== public void .ctor()  [RVA 0x3102724]
// GDLJOHLHGIP$$.ctor @ RVA 0x3102724

void GDLJOHLHGIP___ctor(GDLJOHLHGIP_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x310272C]
// GDLJOHLHGIP$$HNIHOIAMDPC @ RVA 0x310272C

void GDLJOHLHGIP__HNIHOIAMDPC
               (GDLJOHLHGIP_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664ce & 1) == 0) {
    FUN_01bab630(&StringLiteral_3262/*"Avatar"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664ce = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03202790 to 03302797 has its CatchHandler @ 0320282c */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03202798 to 0330279b has its CatchHandler @ 03202818 */
                    /* try { // try from 0320279c to 0330279f has its CatchHandler @ 0320233c */
                    /* try { // try from 032027a0 to 033027a3 has its CatchHandler @ 03202800 */
                    /* try { // try from 032027a4 to 033027ab has its CatchHandler @ 0320233c */
                    /* try { // try from 032027ac to 033027af has its CatchHandler @ 032027f4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_3262/*"Avatar"*/,(MethodInfo *)0x0);
                    /* try { // try from 032027b0 to 033027b3 has its CatchHandler @ 032027f0 */
                    /* try { // try from 032027b4 to 033027b7 has its CatchHandler @ 03202804 */
                    /* try { // try from 032027b8 to 033027bb has its CatchHandler @ 032027d8 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).BHLFBMLDHBE;
                    /* try { // try from 032027bc to 033027bf has its CatchHandler @ 032027d4 */
      *ppSVar2 = pSVar1;
                    /* try { // try from 032027c0 to 033027c3 has its CatchHandler @ 032027d0 */
                    /* try { // try from 032027c4 to 033027c7 has its CatchHandler @ 03202804 */
                    /* try { // try from 032027c8 to 033027cb has its CatchHandler @ 032027cc */
                    /* catch() { ... } // from try @ 032027c8 with catch @ 032027cc
                       try { // try from 032027cc to 03302843 has its CatchHandler @ 0320233c */
                    /* catch() { ... } // from try @ 032027c0 with catch @ 032027d0 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032027bc with catch @ 032027d4 */
  FUN_01bab8c8();
}


// ===== private void DLICHIJMCLK(ref string JAKHFEHMBIC)  [RVA 0x31027D8]
// GDLJOHLHGIP$$DLICHIJMCLK @ RVA 0x31027D8

void GDLJOHLHGIP__DLICHIJMCLK
               (GDLJOHLHGIP_o *__this,System_String_o **JAKHFEHMBIC,MethodInfo *method)

{
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  QuestCondition_o *__this_01;
  System_String_o *pSVar1;
  
                    /* catch() { ... } // from try @ 032027b8 with catch @ 032027d8 */
                    /* catch() { ... } // from try @ 032026e8 with catch @ 032027dc */
                    /* catch() { ... } // from try @ 03202588 with catch @ 032027e0 */
                    /* catch() { ... } // from try @ 03202690 with catch @ 032027e4 */
                    /* catch() { ... } // from try @ 032025b0 with catch @ 032027e8 */
                    /* catch() { ... } // from try @ 03202598 with catch @ 032027ec */
                    /* catch() { ... } // from try @ 032027b0 with catch @ 032027f0 */
                    /* catch() { ... } // from try @ 032027ac with catch @ 032027f4 */
                    /* catch() { ... } // from try @ 032026d4 with catch @ 032027f8 */
                    /* catch() { ... } // from try @ 032026b0 with catch @ 032027fc */
                    /* catch() { ... } // from try @ 032027a0 with catch @ 03202800 */
                    /* catch() { ... } // from try @ 032027b4 with catch @ 03202804
                       catch() { ... } // from try @ 032027c4 with catch @ 03202804 */
  if ((DAT_045664cf & 1) == 0) {
                    /* catch() { ... } // from try @ 032025cc with catch @ 03202808 */
                    /* catch() { ... } // from try @ 032025e8 with catch @ 0320280c */
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
                    /* catch() { ... } // from try @ 03202798 with catch @ 03202818 */
                    /* catch() { ... } // from try @ 03202570 with catch @ 0320281c */
    FUN_01bab630(&QuestCondition_TypeInfo);
                    /* catch() { ... } // from try @ 03202564 with catch @ 03202820 */
                    /* catch() { ... } // from try @ 032024fc with catch @ 03202824 */
    DAT_045664cf = 1;
  }
                    /* catch() { ... } // from try @ 032024a0 with catch @ 03202828 */
                    /* catch() { ... } // from try @ 03202790 with catch @ 0320282c */
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (QuestCondition_o *)thunk_FUN_01bda818(QuestCondition_TypeInfo);
                    /* try { // try from 03202844 to 03302847 has its CatchHandler @ 03202854 */
  QuestCondition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (QuestCondition_o *)0x0) {
                    /* catch() { ... } // from try @ 03202844 with catch @ 03202854 */
                    /* try { // try from 0320285c to 033028c3 has its CatchHandler @ 032028d8 */
    (__this_01->fields).AAJBIMFNMBB = (__this->fields).super.IJOKKFKPBEP;
    thunk_FUN_01c20e04();
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,(__this->fields).BHLFBMLDHBE,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      pSVar1 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      *JAKHFEHMBIC = pSVar1;
      thunk_FUN_01c20e04(JAKHFEHMBIC,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31028B4]
// GDLJOHLHGIP$$MAHFCKJGBPP @ RVA 0x31028B4

void GDLJOHLHGIP__MAHFCKJGBPP(GDLJOHLHGIP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_String_o *JAKHFEHMBIC;
  bool bVar1;
  Roster_o *__this_00;
  MethodInfo *method_00;
  System_String_o *local_38;
  
                    /* try { // try from 032028c4 to 033028cf has its CatchHandler @ 0320233c */
                    /* try { // try from 032028d0 to 033028d7 has its CatchHandler @ 032028d8 */
                    /* catch() { ... } // from try @ 0320285c with catch @ 032028d8
                       catch() { ... } // from try @ 032028d0 with catch @ 032028d8 */
                    /* try { // try from 032028dc to 03302a3f has its CatchHandler @ 032028dc
                       catch() { ... } // from try @ 032028dc with catch @ 032028dc
                       catch() { ... } // from try @ 03202c94 with catch @ 032028dc
                       catch() { ... } // from try @ 03202d3c with catch @ 032028dc
                       catch() { ... } // from try @ 03202d44 with catch @ 032028dc
                       catch() { ... } // from try @ 03202d6c with catch @ 032028dc
                       catch() { ... } // from try @ 03202e64 with catch @ 032028dc */
  if ((DAT_045664d0 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045664d0 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  local_38 = StringLiteral_1/*""*/;
  GDLJOHLHGIP__DLICHIJMCLK(__this,&local_38,method_00);
  JAKHFEHMBIC = local_38;
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = GameUtils__IENLGCHOJAB(JAKHFEHMBIC,(MethodInfo *)0x0);
  if (bVar1) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Roster__JFKFMHKDPEK(__this_00,local_38,(MethodInfo *)0x0);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

