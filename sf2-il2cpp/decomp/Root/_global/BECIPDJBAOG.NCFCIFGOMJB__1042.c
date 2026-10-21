// TypeDefIndex 1042
// Namespace: 
// [CompilerGenerated]
// private sealed class BECIPDJBAOG.NCFCIFGOMJB
// Fields:
//   public PIADCKMDDAK consumable; // 0x10

// ===== public void .ctor()  [RVA 0x30D220C]
// BECIPDJBAOG.NCFCIFGOMJB$$.ctor @ RVA 0x30D220C

void BECIPDJBAOG_NCFCIFGOMJB___ctor(BECIPDJBAOG_NCFCIFGOMJB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool AAOMFCHBHIA(PIADCKMDDAK c)  [RVA 0x30D28BC]
// BECIPDJBAOG.NCFCIFGOMJB$$AAOMFCHBHIA @ RVA 0x30D28BC

bool BECIPDJBAOG_NCFCIFGOMJB__AAOMFCHBHIA
               (BECIPDJBAOG_NCFCIFGOMJB_o *__this,PIADCKMDDAK_o *c,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  PIADCKMDDAK_o *pPVar2;
  
  if (((c != (PIADCKMDDAK_o *)0x0) &&
      (pPVar2 = (__this->fields).consumable, pPVar2 != (PIADCKMDDAK_o *)0x0)) &&
     (__this_00 = (c->fields).GJNOEAKNMOG, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(pPVar2->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

