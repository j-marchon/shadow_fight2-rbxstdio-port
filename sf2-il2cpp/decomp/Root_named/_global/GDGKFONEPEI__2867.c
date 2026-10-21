// TypeDefIndex 2867
// Namespace: 
// public class GDGKFONEPEI : QuestAction
// Fields:

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x343B574]
// GDGKFONEPEI$$MAHFCKJGBPP @ RVA 0x343B574

void GDGKFONEPEI__MAHFCKJGBPP(GDGKFONEPEI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  
  if ((DAT_045681d4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045681d4 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    NLPJLHOEAOE__AJCMAICAKLL(__this_00,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x343B600]
// GDGKFONEPEI$$.ctor @ RVA 0x343B600

void GDGKFONEPEI___ctor(GDGKFONEPEI_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

