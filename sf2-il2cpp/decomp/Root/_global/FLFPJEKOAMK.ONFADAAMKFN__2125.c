// TypeDefIndex 2125
// Namespace: 
// [CompilerGenerated]
// private sealed class FLFPJEKOAMK.ONFADAAMKFN
// Fields:
//   public UniTaskCompletionSource<bool> generalConfigUpdateTcs; // 0x10

// ===== public void .ctor()  [RVA 0x32CE860]
// FLFPJEKOAMK.ONFADAAMKFN$$.ctor @ RVA 0x32CE860

void FLFPJEKOAMK_ONFADAAMKFN___ctor(FLFPJEKOAMK_ONFADAAMKFN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void CHAMBJHKGEH(bool x)  [RVA 0x32CE868]
// FLFPJEKOAMK.ONFADAAMKFN$$CHAMBJHKGEH @ RVA 0x32CE868

void FLFPJEKOAMK_ONFADAAMKFN__CHAMBJHKGEH
               (FLFPJEKOAMK_ONFADAAMKFN_o *__this,bool x,MethodInfo *method)

{
  UniRx_Async_UniTaskCompletionSource_bool__o *__this_00;
  
  if ((DAT_0456753e & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Async_UniTaskCompletionSource<bool>_TrySetResult__);
    DAT_0456753e = 1;
  }
  __this_00 = (__this->fields).generalConfigUpdateTcs;
  if (__this_00 != (UniRx_Async_UniTaskCompletionSource_bool__o *)0x0) {
    UniRx_Async_UniTaskCompletionSource<bool>__TrySetResult
              (__this_00,x,Method_UniRx_Async_UniTaskCompletionSource<bool>_TrySetResult__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

