// TypeDefIndex 43
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidConfig.EMDEPOFJFEF.IHLHEMAPMEM
// Fields:
//   public string containerName; // 0x10

// ===== internal bool GNFAHIKIJCG(RaidConfig.FNILDHLJBBJ lootContainer)  [RVA 0x2FFAD10]
// RaidConfig.EMDEPOFJFEF.IHLHEMAPMEM$$GNFAHIKIJCG @ RVA 0x2FFAD10

bool RaidConfig_EMDEPOFJFEF_IHLHEMAPMEM__GNFAHIKIJCG
               (RaidConfig_EMDEPOFJFEF_IHLHEMAPMEM_o *__this,
               RaidConfig_FNILDHLJBBJ_o *lootContainer,MethodInfo *method)

{
  bool bVar1;
  
  if (lootContainer != (RaidConfig_FNILDHLJBBJ_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((lootContainer->fields).JFDGLPNMELO,(__this->fields).containerName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FFAC80]
// RaidConfig.EMDEPOFJFEF.IHLHEMAPMEM$$.ctor @ RVA 0x2FFAC80

void RaidConfig_EMDEPOFJFEF_IHLHEMAPMEM___ctor
               (RaidConfig_EMDEPOFJFEF_IHLHEMAPMEM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

