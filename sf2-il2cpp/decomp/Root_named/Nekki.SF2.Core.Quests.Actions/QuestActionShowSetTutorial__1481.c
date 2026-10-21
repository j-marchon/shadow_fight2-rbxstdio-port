// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionShowSetTutorial  (obfuscated MLDIGNOAANN)
// TypeDefIndex 1481
// Namespace: 
// public class QuestActionShowSetTutorial : QuestAction
// Fields:

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x319785C]
// QuestActionShowSetTutorial$$MAHFCKJGBPP @ RVA 0x319785C

void QuestActionShowSetTutorial__MAHFCKJGBPP(QuestActionShowSetTutorial_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  PKHMIGFEJCL_o *extraout_x1;
  
  if ((DAT_04566a84 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_10665/*"QuestActionShowSetTutorial::RunAction"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566a84 = 1;
    AAJBIMFNMBB = extraout_x1;
  }
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo,AAJBIMFNMBB);
  }
  OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_10665/*"QuestActionShowSetTutorial::RunAction"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31978EC]
// QuestActionShowSetTutorial$$.ctor @ RVA 0x31978EC

void QuestActionShowSetTutorial___ctor(QuestActionShowSetTutorial_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

