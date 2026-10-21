// IJIHLBLCJMG$$Dispose @ RVA 0x34A605C

void IJIHLBLCJMG__Dispose(IJIHLBLCJMG_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 035a605c to 036a6067 has its CatchHandler @ 035a60ac */
  __this_00 = (__this->fields).KOLGEOBAJHM;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
                    /* try { // try from 035a6068 to 036a60a3 has its CatchHandler @ 035a5fac */
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

