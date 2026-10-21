// TypeDefIndex 2095
// Namespace: 
// [CompilerGenerated]
// private sealed class PNFHEJAEPHI.HGGJEIBEHPF
// Fields:
//   public PNFHEJAEPHI <>4__this; // 0x10
//   public LevelPlayAdError errorInfo; // 0x18

// ===== public void .ctor()  [RVA 0x32C771C]
// PNFHEJAEPHI.HGGJEIBEHPF$$.ctor @ RVA 0x32C771C

void PNFHEJAEPHI_HGGJEIBEHPF___ctor(PNFHEJAEPHI_HGGJEIBEHPF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void DNKODIPDBBF()  [RVA 0x32C7974]
// PNFHEJAEPHI.HGGJEIBEHPF$$DNKODIPDBBF @ RVA 0x32C7974

void PNFHEJAEPHI_HGGJEIBEHPF__DNKODIPDBBF(PNFHEJAEPHI_HGGJEIBEHPF_o *__this,MethodInfo *method)

{
  System_String_o *str1;
  Unity_Services_LevelPlay_LevelPlayAdError_o *pUVar1;
  System_String_o *str0;
  System_String_o *pSVar2;
  PNFHEJAEPHI_o *pPVar3;
  System_Action_MPAKDCNMLEG__o *pSVar4;
  
  if ((DAT_045674f8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_593/*"!'"*/);
    FUN_01bab630(&StringLiteral_19927/*"null error"*/);
    FUN_01bab630(&StringLiteral_9837/*"OnAdFailedToLoad - '"*/);
    DAT_045674f8 = 1;
  }
  str0 = StringLiteral_9837/*"OnAdFailedToLoad - '"*/;
                    /* try { // try from 033c79c8 to 034c7c7f has its CatchHandler @ 033c79c8
                       catch() { ... } // from try @ 033c79c8 with catch @ 033c79c8
                       catch() { ... } // from try @ 033c7d68 with catch @ 033c79c8
                       catch() { ... } // from try @ 033c7f58 with catch @ 033c79c8
                       catch() { ... } // from try @ 033c7fac with catch @ 033c79c8
                       catch() { ... } // from try @ 033c813c with catch @ 033c79c8
                       catch() { ... } // from try @ 033c81b4 with catch @ 033c79c8
                       catch() { ... } // from try @ 033c82ec with catch @ 033c79c8
                       catch() { ... } // from try @ 033c832c with catch @ 033c79c8
                       catch() { ... } // from try @ 033c8598 with catch @ 033c79c8
                       catch() { ... } // from try @ 033c8644 with catch @ 033c79c8 */
  pPVar3 = (__this->fields).__4__this;
  pUVar1 = (__this->fields).errorInfo;
  pSVar2 = (System_String_o *)0x0;
  if (pUVar1 != (Unity_Services_LevelPlay_LevelPlayAdError_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(pUVar1->klass->vtable)._3_ToString.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._3_ToString.method);
  }
  str1 = StringLiteral_19927/*"null error"*/;
  if (pSVar2 != (System_String_o *)0x0) {
    str1 = pSVar2;
  }
  pSVar2 = System_String__Concat(str0,str1,StringLiteral_593/*"!'"*/,(MethodInfo *)0x0);
  if (pPVar3 != (PNFHEJAEPHI_o *)0x0) {
    FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)pPVar3,pSVar2,(MethodInfo *)0x0);
    pPVar3 = (__this->fields).__4__this;
    if (pPVar3 != (PNFHEJAEPHI_o *)0x0) {
      pSVar4 = (pPVar3->fields).super.HABJODEHCNL;
      (pPVar3->fields).HNIADPLNEII = false;
      if (pSVar4 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c7a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,(pPVar3->fields).super.JBNGADJBDHB,
                   (pSVar4->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

