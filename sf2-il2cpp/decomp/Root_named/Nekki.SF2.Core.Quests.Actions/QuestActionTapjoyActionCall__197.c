// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionTapjoyActionCall  (obfuscated CJPHJGABBNE)
// TypeDefIndex 197
// Namespace: 
// public class QuestActionTapjoyActionCall : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x311907C]
// QuestActionTapjoyActionCall$$.ctor @ RVA 0x311907C

void QuestActionTapjoyActionCall___ctor(QuestActionTapjoyActionCall_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3119084]
// QuestActionTapjoyActionCall$$MAHFCKJGBPP @ RVA 0x3119084

void QuestActionTapjoyActionCall__MAHFCKJGBPP(QuestActionTapjoyActionCall_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  PKHMIGFEJCL_o *extraout_x1;
  
  if ((DAT_045665d5 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 032190bc to 033191bb has its CatchHandler @ 032190bc
                       catch() { ... } // from try @ 032190bc with catch @ 032190bc
                       catch() { ... } // from try @ 03219244 with catch @ 032190bc
                       catch() { ... } // from try @ 03219274 with catch @ 032190bc
                       catch() { ... } // from try @ 032192ec with catch @ 032190bc
                       catch() { ... } // from try @ 03219324 with catch @ 032190bc
                       catch() { ... } // from try @ 03219360 with catch @ 032190bc */
    FUN_01bab630(&StringLiteral_10666/*"QuestActionTapjoyActionCall::RunAction"*/);
    DAT_045665d5 = 1;
    AAJBIMFNMBB = extraout_x1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,AAJBIMFNMBB);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10666/*"QuestActionTapjoyActionCall::RunAction"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

