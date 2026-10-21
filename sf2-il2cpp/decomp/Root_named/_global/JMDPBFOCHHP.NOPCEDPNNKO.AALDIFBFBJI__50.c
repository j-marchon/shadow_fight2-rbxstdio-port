// TypeDefIndex 50
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidConfig.NOPCEDPNNKO.AALDIFBFBJI
// Fields:
//   public string currencyName; // 0x10

// ===== public void .ctor()  [RVA 0x2FFB3B4]
// RaidConfig.NOPCEDPNNKO.AALDIFBFBJI$$.ctor @ RVA 0x2FFB3B4

void RaidConfig_NOPCEDPNNKO_AALDIFBFBJI___ctor
               (RaidConfig_NOPCEDPNNKO_AALDIFBFBJI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool GPPGBIMJGMK(RaidConfig.EFAJBOEHPLJ consumable)  [RVA 0x2FFB3E0]
// RaidConfig.NOPCEDPNNKO.AALDIFBFBJI$$GPPGBIMJGMK @ RVA 0x2FFB3E0

bool RaidConfig_NOPCEDPNNKO_AALDIFBFBJI__GPPGBIMJGMK
               (RaidConfig_NOPCEDPNNKO_AALDIFBFBJI_o *__this,RaidConfig_EFAJBOEHPLJ_o *consumable,
               MethodInfo *method)

{
  bool bVar1;
  
  if (consumable != (RaidConfig_EFAJBOEHPLJ_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((consumable->fields).super.JIJLBFGKNJK,(__this->fields).currencyName,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

