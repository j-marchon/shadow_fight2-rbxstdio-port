// TypeDefIndex 1858
// Namespace: 
// [CompilerGenerated]
// private sealed class ANLLODMHLHE.AJKDFEMFECB
// Fields:
//   public object logContext; // 0x10
//   public string logTag; // 0x18
//   public Action callback; // 0x20

// ===== internal void OHFNPFMOKLM(IReadOnlyList<GEIHBHEDJJM> args)  [RVA 0x3249554]
// ANLLODMHLHE.AJKDFEMFECB$$OHFNPFMOKLM @ RVA 0x3249554

void ANLLODMHLHE_AJKDFEMFECB__OHFNPFMOKLM
               (ANLLODMHLHE_AJKDFEMFECB_o *__this,
               System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *args,MethodInfo *method)

{
  Il2CppObject *ODHBNGEGFCJ;
  System_String_o *JLNPKGGFFDD;
  System_Action_o *pSVar1;
  
  if ((DAT_045670de & 1) == 0) {
    FUN_01bab630(&StringLiteral_2092/*": ENDED!"*/);
    DAT_045670de = 1;
  }
  ODHBNGEGFCJ = (__this->fields).logContext;
  JLNPKGGFFDD = System_String__Concat((__this->fields).logTag,StringLiteral_2092/*": ENDED!"*/,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA(ODHBNGEGFCJ,JLNPKGGFFDD,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).callback;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 033495c0 to 034495c7 has its CatchHandler @ 03349928 */
                    /* WARNING: Could not recover jumptable at 0x033495c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x324954C]
// ANLLODMHLHE.AJKDFEMFECB$$.ctor @ RVA 0x324954C

void ANLLODMHLHE_AJKDFEMFECB___ctor(ANLLODMHLHE_AJKDFEMFECB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

