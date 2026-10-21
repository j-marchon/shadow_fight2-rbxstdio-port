// LLDOMGIEPNE$$Dispose @ RVA 0x3379E7C

void LLDOMGIEPNE__Dispose(LLDOMGIEPNE_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 03479e88 to 03579f03 has its CatchHandler @ 0347a0ac */
  if ((DAT_04567b70 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422);
    DAT_04567b70 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  (__this->fields).IOPFMDCMMLD = (MNBNELNLOCB_o *)0x0;
  thunk_FUN_01c20e04(&__this->fields,0);
  return;
}

