// TypeDefIndex 2479
// Namespace: 
// public sealed class MCLOEMMHNIA : KFHIPIPCOHK
// Fields:
//   private readonly Action DGGOKOMGBAH; // 0x18

// ===== public void .ctor(Action KBJBLFOHFDH)  [RVA 0x3372D18]
// MCLOEMMHNIA$$.ctor @ RVA 0x3372D18

void MCLOEMMHNIA___ctor(MCLOEMMHNIA_o *__this,System_Action_o *KBJBLFOHFDH,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  
                    /* try { // try from 03472d2c to 03572d4f has its CatchHandler @ 03472ed8 */
  KFHIPIPCOHK___ctor((KFHIPIPCOHK_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).DGGOKOMGBAH;
  *ppSVar1 = KBJBLFOHFDH;
  thunk_FUN_01c20e04(ppSVar1,KBJBLFOHFDH);
  return;
}


// ===== protected override void HJKJNLIKHMM()  [RVA 0x3372D48]
// MCLOEMMHNIA$$HJKJNLIKHMM @ RVA 0x3372D48

void MCLOEMMHNIA__HJKJNLIKHMM(MCLOEMMHNIA_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).DGGOKOMGBAH;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 03472d60 to 03572d67 has its CatchHandler @ 03472ed4 */
                    /* WARNING: Could not recover jumptable at 0x03472d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

