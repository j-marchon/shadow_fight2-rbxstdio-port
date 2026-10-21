// TypeDefIndex 3220
// Namespace: 
// [Serializable]
// private sealed class PNEKMHMACLG.<>c
// Fields:
//   public static readonly PNEKMHMACLG.<>c <>9; // 0x0
//   public static Action<AJNNHGGLGIF> <>9__6_0; // 0x8

// ===== internal void NBNIOBMFCOB(AJNNHGGLGIF x)  [RVA 0x3504078]
// PNEKMHMACLG.<>c$$NBNIOBMFCOB @ RVA 0x3504078

void PNEKMHMACLG_<>c__NBNIOBMFCOB(PNEKMHMACLG___c_o *__this,AJNNHGGLGIF_o *x,MethodInfo *method)

{
  if (x != (AJNNHGGLGIF_o *)0x0) {
                    /* try { // try from 03604080 to 0370408b has its CatchHandler @ 03604118 */
                    /* WARNING: Could not recover jumptable at 0x03604094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(x->klass->vtable)._11_RandomizeObscuredVars.methodPtr)
              (x,(x->klass->vtable)._11_RandomizeObscuredVars.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x350409C]
// PNEKMHMACLG.<>c$$.cctor @ RVA 0x350409C

void PNEKMHMACLG_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_0456887e & 1) == 0) {
                    /* try { // try from 036040c0 to 037040cb has its CatchHandler @ 03604114 */
    FUN_01bab630(&PNEKMHMACLG_<>c_TypeInfo);
    DAT_0456887e = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(PNEKMHMACLG_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  PNEKMHMACLG_<>c_TypeInfo->static_fields->__9 = (PNEKMHMACLG___c_o *)__this;
                    /* try { // try from 036040f0 to 037040f7 has its CatchHandler @ 036041c4 */
  thunk_FUN_01c20e04(PNEKMHMACLG_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3504104]
// PNEKMHMACLG.<>c$$.ctor @ RVA 0x3504104

void PNEKMHMACLG_<>c___ctor(PNEKMHMACLG___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

