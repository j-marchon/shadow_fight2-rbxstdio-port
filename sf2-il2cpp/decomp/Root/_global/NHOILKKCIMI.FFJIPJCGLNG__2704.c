// TypeDefIndex 2704
// Namespace: 
// [CompilerGenerated]
// private sealed class NHOILKKCIMI.FFJIPJCGLNG
// Fields:
//   public Action<NHOILKKCIMI.BGFGPENCLEA> h; // 0x10

// ===== public void .ctor()  [RVA 0x33D0598]
// NHOILKKCIMI.FFJIPJCGLNG$$.ctor @ RVA 0x33D0598

void NHOILKKCIMI_FFJIPJCGLNG___ctor(NHOILKKCIMI_FFJIPJCGLNG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void ECHAGFGBPAL(string condition, string stackTrace, LogType type)  [RVA 0x33D05A0]
// NHOILKKCIMI.FFJIPJCGLNG$$ECHAGFGBPAL @ RVA 0x33D05A0

void NHOILKKCIMI_FFJIPJCGLNG__ECHAGFGBPAL
               (NHOILKKCIMI_FFJIPJCGLNG_o *__this,System_String_o *condition,
               System_String_o *stackTrace,int32_t type,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_NHOILKKCIMI_BGFGPENCLEA__o *pSVar1;
  
  if ((DAT_04567e5b & 1) == 0) {
    FUN_01bab630(&NHOILKKCIMI_BGFGPENCLEA_TypeInfo);
    DAT_04567e5b = 1;
  }
  pSVar1 = (__this->fields).h;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NHOILKKCIMI_BGFGPENCLEA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)condition;
    thunk_FUN_01c20e04(__this_00 + 1,condition);
    __this_00[1].monitor = stackTrace;
    thunk_FUN_01c20e04(&__this_00[1].monitor,stackTrace);
    *(int32_t *)&__this_00[2].klass = type;
    if (pSVar1 != (System_Action_NHOILKKCIMI_BGFGPENCLEA__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,__this_00,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

