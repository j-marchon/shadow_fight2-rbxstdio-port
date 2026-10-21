// TypeDefIndex 560
// Namespace: 
// [Serializable]
// private sealed class PMFNDKKBEKN.<>c
// Fields:
//   public static readonly PMFNDKKBEKN.<>c <>9; // 0x0
//   public static Action<AJNNHGGLGIF> <>9__27_0; // 0x8
//   public static Action<PJKHAJKEHEL> <>9__27_1; // 0x10

// ===== internal void KIECENPIMPB(AJNNHGGLGIF x)  [RVA 0x35AC6D4]
// PMFNDKKBEKN.<>c$$KIECENPIMPB @ RVA 0x35AC6D4

void PMFNDKKBEKN_<>c__KIECENPIMPB(PMFNDKKBEKN___c_o *__this,AJNNHGGLGIF_o *x,MethodInfo *method)

{
  if (x != (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036ac6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(x->klass->vtable)._11_RandomizeObscuredVars.methodPtr)
              (x,(x->klass->vtable)._11_RandomizeObscuredVars.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void MBCOECLGJCG(PJKHAJKEHEL x)  [RVA 0x35AC6F8]
// PMFNDKKBEKN.<>c$$MBCOECLGJCG @ RVA 0x35AC6F8

void PMFNDKKBEKN_<>c__MBCOECLGJCG(PMFNDKKBEKN___c_o *__this,PJKHAJKEHEL_o *x,MethodInfo *method)

{
  if (x != (PJKHAJKEHEL_o *)0x0) {
    PJKHAJKEHEL__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35AC710]
// PMFNDKKBEKN.<>c$$.ctor @ RVA 0x35AC710

void PMFNDKKBEKN_<>c___ctor(PMFNDKKBEKN___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x35AC718]
// PMFNDKKBEKN.<>c$$.cctor @ RVA 0x35AC718

void PMFNDKKBEKN_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568e59 & 1) == 0) {
    FUN_01bab630(&PMFNDKKBEKN_<>c_TypeInfo);
    DAT_04568e59 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(PMFNDKKBEKN_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  PMFNDKKBEKN_<>c_TypeInfo->static_fields->__9 = (PMFNDKKBEKN___c_o *)__this;
  thunk_FUN_01c20e04(PMFNDKKBEKN_<>c_TypeInfo->static_fields,__this);
  return;
}

