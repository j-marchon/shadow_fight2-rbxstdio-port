// TypeDefIndex 783
// Namespace: 
// [CompilerGenerated]
// private sealed class Roster.EJEAJMINBIM
// Fields:
//   public string name; // 0x10

// ===== public void .ctor()  [RVA 0x305C2C8]
// Roster.EJEAJMINBIM$$.ctor @ RVA 0x305C2C8

void Roster_EJEAJMINBIM___ctor(Roster_EJEAJMINBIM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool MAFBGIIDJHB(BNKBGIIJNLF c)  [RVA 0x3068A7C]
// Roster.EJEAJMINBIM$$MAFBGIIDJHB @ RVA 0x3068A7C

bool Roster_EJEAJMINBIM__MAFBGIIDJHB
               (Roster_EJEAJMINBIM_o *__this,BNKBGIIJNLF_o *c,MethodInfo *method)

{
  bool bVar1;
  HBNENINHPGF_o *pHVar2;
  System_String_o *__this_00;
  
  if (((c != (BNKBGIIJNLF_o *)0x0) &&
      (pHVar2 = (c->fields)._GDNLFJIBAAI_k__BackingField, pHVar2 != (HBNENINHPGF_o *)0x0)) &&
     (__this_00 = (pHVar2->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0
     )) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

