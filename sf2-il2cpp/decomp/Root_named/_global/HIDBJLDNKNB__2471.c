// TypeDefIndex 2471
// Namespace: 
// public class HIDBJLDNKNB : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x3371AD0]
// HIDBJLDNKNB$$.ctor @ RVA 0x3371AD0

void HIDBJLDNKNB___ctor(HIDBJLDNKNB_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3371AD8]
// HIDBJLDNKNB$$MAHFCKJGBPP @ RVA 0x3371AD8

void HIDBJLDNKNB__MAHFCKJGBPP(HIDBJLDNKNB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03471ab4 with catch @ 03471ae0 */
                    /* try { // try from 03471af0 to 03571b03 has its CatchHandler @ 03471b94 */
  if ((DAT_04567b26 & 1) == 0) {
                    /* catch() { ... } // from try @ 03471a14 with catch @ 03471b04
                       try { // try from 03471b04 to 03571b3b has its CatchHandler @ 034714a4 */
                    /* catch() { ... } // from try @ 03471a0c with catch @ 03471b08 */
    FUN_01bab630(&BattlePeriodic_TypeInfo);
                    /* catch() { ... } // from try @ 03471a08 with catch @ 03471b0c */
                    /* catch() { ... } // from try @ 03471a04 with catch @ 03471b10 */
    DAT_04567b26 = 1;
  }
                    /* catch() { ... } // from try @ 034717e8 with catch @ 03471b14 */
                    /* catch() { ... } // from try @ 03471868 with catch @ 03471b18 */
                    /* catch() { ... } // from try @ 03471818 with catch @ 03471b1c */
                    /* catch() { ... } // from try @ 03471804 with catch @ 03471b20 */
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03471a00 with catch @ 03471b24
                       catch() { ... } // from try @ 03471a10 with catch @ 03471b24 */
  if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03471b3c to 03571b3f has its CatchHandler @ 03471b68 */
  BattlePeriodic__DGLJCGNHLIG(false,(MethodInfo *)0x0);
                    /* try { // try from 03471b40 to 03571b77 has its CatchHandler @ 034714a4 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

