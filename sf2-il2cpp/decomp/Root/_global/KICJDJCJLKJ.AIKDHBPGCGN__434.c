// TypeDefIndex 434
// Namespace: 
// private class KICJDJCJLKJ.AIKDHBPGCGN
// Fields:
//   public string KLHHABGHKHA; // 0x10
//   public int CKMCIBNMADJ; // 0x18
//   public readonly SerialDisposable KKDOGECGHBO; // 0x20

// ===== public void .ctor()  [RVA 0x348C834]
// KICJDJCJLKJ.AIKDHBPGCGN$$.ctor @ RVA 0x348C834

void KICJDJCJLKJ_AIKDHBPGCGN___ctor(KICJDJCJLKJ_AIKDHBPGCGN_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_SerialDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683f3 & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045683f3 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).KKDOGECGHBO;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

