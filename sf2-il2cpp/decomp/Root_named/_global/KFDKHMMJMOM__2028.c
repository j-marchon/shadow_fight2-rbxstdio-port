// TypeDefIndex 2028
// Namespace: 
// public class KFDKHMMJMOM : QuestAction
// Fields:
//   private string FDGJPLBDOIA; // 0x68

// ===== public void .ctor()  [RVA 0x32A5960]
// KFDKHMMJMOM$$.ctor @ RVA 0x32A5960

void KFDKHMMJMOM___ctor(KFDKHMMJMOM_o *__this,MethodInfo *method)

{
  if ((DAT_045673ed & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045673ed = 1;
  }
  (__this->fields).FDGJPLBDOIA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32A59B8]
// KFDKHMMJMOM$$HNIHOIAMDPC @ RVA 0x32A59B8

void KFDKHMMJMOM__HNIHOIAMDPC
               (KFDKHMMJMOM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 033a59c0 to 034a5a57 has its CatchHandler @ 033a59c0
                       catch() { ... } // from try @ 033a59c0 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5a80 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5ad0 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5af8 with catch @ 033a59c0
                       catch() { ... } // from try @ 033a5b38 with catch @ 033a59c0 */
  if ((DAT_045673ee & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045673ee = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).FDGJPLBDOIA;
      *ppSVar2 = pSVar1;
                    /* try { // try from 033a5a58 to 034a5a5f has its CatchHandler @ 033a5ad8 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32A5A64]
// KFDKHMMJMOM$$MAHFCKJGBPP @ RVA 0x32A5A64

void KFDKHMMJMOM__MAHFCKJGBPP(KFDKHMMJMOM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  Roster_o *pAVar1;
  LPAPAMPGDFN_o *__this_00;
  
                    /* try { // try from 033a5a6c to 034a5a7f has its CatchHandler @ 033a5adc */
                    /* try { // try from 033a5a80 to 034a5acb has its CatchHandler @ 033a59c0 */
  if ((DAT_045673ef & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045673ef = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 033a5acc to 034a5acf has its CatchHandler @ 033a5ad4 */
                    /* try { // try from 033a5ad0 to 034a5af3 has its CatchHandler @ 033a59c0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5acc with catch @ 033a5ad4
                        */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5a58 with catch @ 033a5ad8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5a6c with catch @ 033a5adc
                        */
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033a5af4 to 034a5af7 has its CatchHandler @ 033a5b20 */
                    /* try { // try from 033a5af8 to 034a5b2f has its CatchHandler @ 033a59c0 */
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
    __this_00 = (pAVar1->fields).LMCDOMHENMC;
    CJNHFNHJHPE = CONLFJJLALA__LJFOPOPKNCL((__this->fields).FDGJPLBDOIA,(MethodInfo *)0x0);
    if (__this_00 != (LPAPAMPGDFN_o *)0x0) {
                    /* catch() { ... } // from try @ 033a5af4 with catch @ 033a5b20 */
      LPAPAMPGDFN__MBIEJFDDPAG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 033a5b30 to 034a5b37 has its CatchHandler @ 033a5b4c */
                    /* try { // try from 033a5b38 to 034a5b43 has its CatchHandler @ 033a59c0 */
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

