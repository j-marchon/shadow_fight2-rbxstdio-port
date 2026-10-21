// TypeDefIndex 43
// Namespace: 
// [CompilerGenerated]
// private sealed class JMDPBFOCHHP.EMDEPOFJFEF.IHLHEMAPMEM
// Fields:
//   public string containerName; // 0x10

// ===== internal bool GNFAHIKIJCG(JMDPBFOCHHP.FNILDHLJBBJ lootContainer)  [RVA 0x2FFAD10]
// JMDPBFOCHHP.EMDEPOFJFEF.IHLHEMAPMEM$$GNFAHIKIJCG @ RVA 0x2FFAD10

bool JMDPBFOCHHP_EMDEPOFJFEF_IHLHEMAPMEM__GNFAHIKIJCG
               (JMDPBFOCHHP_EMDEPOFJFEF_IHLHEMAPMEM_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_o *lootContainer,MethodInfo *method)

{
  bool bVar1;
  
  if (lootContainer != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((lootContainer->fields).JFDGLPNMELO,(__this->fields).containerName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FFAC80]
// JMDPBFOCHHP.EMDEPOFJFEF.IHLHEMAPMEM$$.ctor @ RVA 0x2FFAC80

void JMDPBFOCHHP_EMDEPOFJFEF_IHLHEMAPMEM___ctor
               (JMDPBFOCHHP_EMDEPOFJFEF_IHLHEMAPMEM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

