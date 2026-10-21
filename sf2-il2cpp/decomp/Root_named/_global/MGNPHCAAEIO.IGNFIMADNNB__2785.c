// TypeDefIndex 2785
// Namespace: 
// [CompilerGenerated]
// private sealed class GameUtils.IGNFIMADNNB
// Fields:
//   public string name; // 0x10

// ===== public void .ctor()  [RVA 0x3414444]
// GameUtils.IGNFIMADNNB$$.ctor @ RVA 0x3414444

void GameUtils_IGNFIMADNNB___ctor(GameUtils_IGNFIMADNNB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool LJLJBBHPPMG(KCLPNDAPADO t)  [RVA 0x341444C]
// GameUtils.IGNFIMADNNB$$LJLJBBHPPMG @ RVA 0x341444C

bool GameUtils_IGNFIMADNNB__LJLJBBHPPMG
               (GameUtils_IGNFIMADNNB_o *__this,KCLPNDAPADO_o *t,MethodInfo *method)

{
  bool bVar1;
  
  if (t != (KCLPNDAPADO_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((t->fields).JIJLBFGKNJK,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

