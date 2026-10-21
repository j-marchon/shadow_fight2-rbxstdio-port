// KPLJFEEMAOH$$PFJCEDKNOCK @ RVA 0x347D838

void KPLJFEEMAOH__PFJCEDKNOCK(KPLJFEEMAOH_o *__this,HCBNEFEHCBM_o *HPACPFLKHPK,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  
                    /* try { // try from 0357d83c to 0367d84f has its CatchHandler @ 0357dadc */
  if ((DAT_04568366 & 1) == 0) {
                    /* try { // try from 0357d854 to 0367d85f has its CatchHandler @ 0357da9c */
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
                    /* try { // try from 0357d860 to 0367d86b has its CatchHandler @ 0357dac4 */
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    DAT_04568366 = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d87c to 0367d883 has its CatchHandler @ 0357daa8 */
                    /* try { // try from 0357d88c to 0367d893 has its CatchHandler @ 0357dae4 */
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)HPACPFLKHPK,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    __this_01 = (__this->fields).OAGOJKAFAEA;
    if (__this_01 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
                    /* try { // try from 0357d8a4 to 0367d8ab has its CatchHandler @ 0357dab4 */
                    /* try { // try from 0357d8b0 to 0367d8b7 has its CatchHandler @ 0357dad8 */
      UniRx_Subject<object>__OnNext
                ((UniRx_Subject_T__o *)__this_01,(Il2CppObject *)HPACPFLKHPK,
                 Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

