// TypeDefIndex 1041
// Namespace: 
// [CompilerGenerated]
// private sealed class BECIPDJBAOG.KABKIJAMJNA
// Fields:
//   public PIADCKMDDAK currency; // 0x10

// ===== public void .ctor()  [RVA 0x30D2204]
// BECIPDJBAOG.KABKIJAMJNA$$.ctor @ RVA 0x30D2204

void BECIPDJBAOG_KABKIJAMJNA___ctor(BECIPDJBAOG_KABKIJAMJNA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool IOFCCBEEBKJ(PIADCKMDDAK c)  [RVA 0x30D2890]
// BECIPDJBAOG.KABKIJAMJNA$$IOFCCBEEBKJ @ RVA 0x30D2890

bool BECIPDJBAOG_KABKIJAMJNA__IOFCCBEEBKJ
               (BECIPDJBAOG_KABKIJAMJNA_o *__this,PIADCKMDDAK_o *c,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  PIADCKMDDAK_o *pPVar2;
  
  if (((c != (PIADCKMDDAK_o *)0x0) &&
      (pPVar2 = (__this->fields).currency, pPVar2 != (PIADCKMDDAK_o *)0x0)) &&
     (__this_00 = (c->fields).GJNOEAKNMOG, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(pPVar2->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

