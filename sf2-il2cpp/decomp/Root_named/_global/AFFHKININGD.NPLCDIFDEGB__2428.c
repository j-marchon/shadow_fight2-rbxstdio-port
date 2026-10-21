// TypeDefIndex 2428
// Namespace: 
// [CompilerGenerated]
// private sealed class FightList.NPLCDIFDEGB
// Fields:
//   public string currencyName; // 0x10

// ===== public void .ctor()  [RVA 0x333FE7C]
// FightList.NPLCDIFDEGB$$.ctor @ RVA 0x333FE7C

void FightList_NPLCDIFDEGB___ctor(FightList_NPLCDIFDEGB_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe6c with catch @ 0343fe7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0343fe68 with catch @ 0343fe80
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool DBMNOOPHIGI(NIAFDKHDBMA rule)  [RVA 0x33433C4]
// FightList.NPLCDIFDEGB$$DBMNOOPHIGI @ RVA 0x33433C4

bool FightList_NPLCDIFDEGB__DBMNOOPHIGI
               (FightList_NPLCDIFDEGB_o *__this,NIAFDKHDBMA_o *rule,MethodInfo *method)

{
  bool bVar1;
  
  if (rule != (NIAFDKHDBMA_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((rule->fields).MLNFANFAMOO,(__this->fields).currencyName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

