// IJIHLBLCJMG$$FGNINNOOCCL @ RVA 0x34A5FF4

void IJIHLBLCJMG__FGNINNOOCCL(IJIHLBLCJMG_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_Subject_bool__o *__this_01;
  
  if ((DAT_045684f0 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_Subject<bool>_OnNext__);
    DAT_045684f0 = 1;
  }
  __this_00 = (__this->fields).ACHHOOFKHLD;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).POPPKIFIINN;
    if (__this_01 != (UniRx_Subject_bool__o *)0x0) {
                    /* try { // try from 035a6040 to 036a6047 has its CatchHandler @ 035a60b4 */
      UniRx_Subject<bool>__OnNext(__this_01,IBEBJHMKFGE,Method_UniRx_Subject<bool>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

