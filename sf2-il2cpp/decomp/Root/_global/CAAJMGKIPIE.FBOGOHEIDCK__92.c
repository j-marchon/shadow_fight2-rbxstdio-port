// TypeDefIndex 92
// Namespace: 
// public class CAAJMGKIPIE.FBOGOHEIDCK
// Fields:
//   public float APFANODMCKP; // 0x10
//   public float BAJKKDHKEPH; // 0x14

// ===== public void .ctor()  [RVA 0x300232C]
// CAAJMGKIPIE.FBOGOHEIDCK$$.ctor @ RVA 0x300232C

void CAAJMGKIPIE_FBOGOHEIDCK___ctor(CAAJMGKIPIE_FBOGOHEIDCK_o *__this,MethodInfo *method)

{
  CAAJMGKIPIE_FBOGOHEIDCK_Fields CVar1;
  
  CVar1 = (CAAJMGKIPIE_FBOGOHEIDCK_Fields)NEON_fmov(0x41200000,4);
  __this->fields = CVar1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(CAAJMGKIPIE.FBOGOHEIDCK PGAKMCBLJEJ)  [RVA 0x3004338]
// CAAJMGKIPIE.FBOGOHEIDCK$$.ctor @ RVA 0x3004338

void CAAJMGKIPIE_FBOGOHEIDCK___ctor
               (CAAJMGKIPIE_FBOGOHEIDCK_o *__this,CAAJMGKIPIE_FBOGOHEIDCK_o *PGAKMCBLJEJ,
               MethodInfo *method)

{
  CAAJMGKIPIE_FBOGOHEIDCK_Fields CVar1;
  
  CVar1 = (CAAJMGKIPIE_FBOGOHEIDCK_Fields)NEON_fmov(0x41200000,4);
  __this->fields = CVar1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PGAKMCBLJEJ != (CAAJMGKIPIE_FBOGOHEIDCK_o *)0x0) {
    __this->fields = PGAKMCBLJEJ->fields;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

