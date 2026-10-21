// TypeDefIndex 2985
// Namespace: 
// public class CDALLFPPGAM : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x34A2F94]
// CDALLFPPGAM$$.ctor @ RVA 0x34A2F94

void CDALLFPPGAM___ctor(CDALLFPPGAM_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34A2F9C]
// CDALLFPPGAM$$MAHFCKJGBPP @ RVA 0x34A2F9C

void CDALLFPPGAM__MAHFCKJGBPP(CDALLFPPGAM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  System_Action_o *CONGNMGDFPP;
  
  if ((DAT_045684bc & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    DAT_045684bc = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  CONGNMGDFPP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create(CONGNMGDFPP,(MethodInfo *)0x0);
  return;
}

