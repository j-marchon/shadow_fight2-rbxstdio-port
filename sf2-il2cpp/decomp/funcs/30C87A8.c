// ADAHHFAPLLM$$Dispose @ RVA 0x30C87A8

void ADAHHFAPLLM__Dispose(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  LNADBMOHMKN_o **ppLVar1;
  
                    /* try { // try from 031c87b8 to 032c87bb has its CatchHandler @ 031c87d0 */
  if ((DAT_045662be & 1) == 0) {
                    /* catch() { ... } // from try @ 031c87b8 with catch @ 031c87d0 */
    FUN_01bab630(&StringLiteral_5422);
    DAT_045662be = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    ppLVar1 = &(__this->fields).IOPFMDCMMLD;
    *ppLVar1 = (LNADBMOHMKN_o *)0x0;
                    /* try { // try from 031c8808 to 032c882f has its CatchHandler @ 031c8844 */
    thunk_FUN_01c20e04(ppLVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

