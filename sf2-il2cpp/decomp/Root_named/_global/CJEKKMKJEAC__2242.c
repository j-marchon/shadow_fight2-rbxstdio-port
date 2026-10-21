// TypeDefIndex 2242
// Namespace: 
// public class CJEKKMKJEAC : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x32FB378]
// CJEKKMKJEAC$$.ctor @ RVA 0x32FB378

void CJEKKMKJEAC___ctor(CJEKKMKJEAC_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32FB380]
// CJEKKMKJEAC$$HNIHOIAMDPC @ RVA 0x32FB380

void CJEKKMKJEAC__HNIHOIAMDPC
               (CJEKKMKJEAC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32FB388]
// CJEKKMKJEAC$$MAHFCKJGBPP @ RVA 0x32FB388

void CJEKKMKJEAC__MAHFCKJGBPP(CJEKKMKJEAC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCJCIJHMEJF_o *pKVar6;
  
                    /* try { // try from 033fb3ac to 034fb3d3 has its CatchHandler @ 033fb6f4 */
  if ((DAT_045676d8 & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045676d8 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033fb408 to 034fb433 has its CatchHandler @ 033fb6f0 */
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar6 == (KCJCIJHMEJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033fb4ac to 034fb4b7 has its CatchHandler @ 033fb6a8 */
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
                    /* try { // try from 033fb484 to 034fb48b has its CatchHandler @ 033fb6d0 */
        pVVar2 = pKVar3->vtable + (*piVar5 + 8);
        goto LAB_033fb488;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCJCIJHMEJF_TypeInfo,8);
                    /* try { // try from 033fb474 to 034fb47b has its CatchHandler @ 033fb6e4 */
LAB_033fb488:
                    /* try { // try from 033fb490 to 034fb497 has its CatchHandler @ 033fb6d8 */
  (*pVVar2->methodPtr)(pKVar6,pVVar2->method);
                    /* try { // try from 033fb4a0 to 034fb4a7 has its CatchHandler @ 033fb6d4 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

