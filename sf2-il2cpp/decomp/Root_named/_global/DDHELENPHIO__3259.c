// TypeDefIndex 3259
// Namespace: 
// public class DDHELENPHIO : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x3514460]
// DDHELENPHIO$$.ctor @ RVA 0x3514460

void DDHELENPHIO___ctor(DDHELENPHIO_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3514468]
// DDHELENPHIO$$MAHFCKJGBPP @ RVA 0x3514468

void DDHELENPHIO__MAHFCKJGBPP(DDHELENPHIO_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  GGHCLMEFIGO_o *__this_00;
  Roster_o *pAVar1;
  
  if ((DAT_04568914 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568914 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar1 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar1->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    GGHCLMEFIGO__BEEIOBJADLA(__this_00,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

