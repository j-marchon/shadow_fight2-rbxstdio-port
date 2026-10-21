// TypeDefIndex 1826
// Namespace: 
// [CompilerGenerated]
// private sealed class FPPKHNNABAD.KEBLPKFOJNI
// Fields:
//   public Type questActionType; // 0x10
//   public Func<QuestAction, bool> <>9__1; // 0x18

// ===== internal bool OAHPGDEEAMB(QuestAction action)  [RVA 0x3221814]
// FPPKHNNABAD.KEBLPKFOJNI$$OAHPGDEEAMB @ RVA 0x3221814

bool FPPKHNNABAD_KEBLPKFOJNI__OAHPGDEEAMB
               (FPPKHNNABAD_KEBLPKFOJNI_o *__this,QuestAction_o *action,MethodInfo *method)

{
  bool bVar1;
  System_Type_o *left;
  System_Type_o *right;
  
  if ((DAT_04566f3a & 1) == 0) {
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566f3a = 1;
  }
  if (action != (QuestAction_o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)action,(MethodInfo *)0x0);
    right = (__this->fields).questActionType;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo);
    }
    bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool HBCPAGHAAAJ(QuestAction action)  [RVA 0x3221894]
// FPPKHNNABAD.KEBLPKFOJNI$$HBCPAGHAAAJ @ RVA 0x3221894

bool FPPKHNNABAD_KEBLPKFOJNI__HBCPAGHAAAJ
               (FPPKHNNABAD_KEBLPKFOJNI_o *__this,QuestAction_o *action,MethodInfo *method)

{
  bool bVar1;
  System_Type_o *left;
  System_Type_o *right;
  
  if ((DAT_04566f3b & 1) == 0) {
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04566f3b = 1;
  }
  if (action != (QuestAction_o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)action,(MethodInfo *)0x0);
    right = (__this->fields).questActionType;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo);
    }
    bVar1 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3220234]
// FPPKHNNABAD.KEBLPKFOJNI$$.ctor @ RVA 0x3220234

void FPPKHNNABAD_KEBLPKFOJNI___ctor(FPPKHNNABAD_KEBLPKFOJNI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

