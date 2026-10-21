// TypeDefIndex 611
// Namespace: 
// [CompilerGenerated]
// private sealed class IMAPABEJECG.LJMPHPOOEHE
// Fields:
//   public Action callback; // 0x10

// ===== public void .ctor()  [RVA 0x35C2120]
// IMAPABEJECG.LJMPHPOOEHE$$.ctor @ RVA 0x35C2120

void IMAPABEJECG_LJMPHPOOEHE___ctor(IMAPABEJECG_LJMPHPOOEHE_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void FIFJEPLJFGO(bool _)  [RVA 0x35C2238]
// IMAPABEJECG.LJMPHPOOEHE$$FIFJEPLJFGO @ RVA 0x35C2238

void IMAPABEJECG_LJMPHPOOEHE__FIFJEPLJFGO
               (IMAPABEJECG_LJMPHPOOEHE_o *__this,bool __,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).callback;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 036c2244 to 037c224f has its CatchHandler @ 036c232c */
                    /* WARNING: Could not recover jumptable at 0x036c224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}

