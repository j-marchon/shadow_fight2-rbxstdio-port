// FJNIPMODEPO$$Dispose @ RVA 0x3035190

void FJNIPMODEPO__Dispose(FJNIPMODEPO_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04565d34 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422);
                    /* try { // try from 031351bc to 0323529f has its CatchHandler @ 031351bc
                       catch() { ... } // from try @ 031351bc with catch @ 031351bc
                       catch() { ... } // from try @ 0313538c with catch @ 031351bc
                       catch() { ... } // from try @ 03135464 with catch @ 031351bc
                       catch() { ... } // from try @ 031354c8 with catch @ 031351bc */
    DAT_04565d34 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

