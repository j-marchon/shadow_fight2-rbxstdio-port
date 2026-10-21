// KPLJFEEMAOH$$Dispose @ RVA 0x347D728

void KPLJFEEMAOH__Dispose(KPLJFEEMAOH_o *__this,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *pUVar1;
  
                    /* try { // try from 0357d728 to 0367d733 has its CatchHandler @ 0357db04 */
                    /* try { // try from 0357d734 to 0367d73f has its CatchHandler @ 0357db00 */
  if ((DAT_04568364 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
                    /* try { // try from 0357d754 to 0367d75b has its CatchHandler @ 0357db14 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
                    /* try { // try from 0357d764 to 0367d76b has its CatchHandler @ 0357da7c */
    DAT_04568364 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d77c to 0367d783 has its CatchHandler @ 0357daf0 */
    UniRx_ReactiveProperty<object>__Dispose
              ((UniRx_ReactiveProperty_T__o *)__this_00,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_Dispose__);
  }
  pUVar1 = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d788 to 0367d78f has its CatchHandler @ 0357da80 */
  if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
    UniRx_Subject<object>__OnCompleted
              ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_OnCompleted__);
    pUVar1 = (__this->fields).OAGOJKAFAEA;
                    /* try { // try from 0357d7a0 to 0367d7a7 has its CatchHandler @ 0357dac0 */
    if (pUVar1 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d7a8 to 0367d7bb has its CatchHandler @ 0357daec */
      UniRx_Subject<object>__Dispose
                ((UniRx_Subject_T__o *)pUVar1,Method_UniRx_Subject<HCBNEFEHCBM>_Dispose__);
      return;
    }
  }
                    /* try { // try from 0357d7c0 to 0367d7cb has its CatchHandler @ 0357dad4 */
  return;
}

