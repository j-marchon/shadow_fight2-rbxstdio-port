// PNHGEFAOFFE$$Dispose @ RVA 0x317FE60

void PNHGEFAOFFE__Dispose(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_BehaviorSubject_DGGBFKNKEAH__o *pUVar1;
  UniRx_SerialDisposable_o *__this_01;
  
  if ((DAT_045669b5 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_Dispose__);
    FUN_01bab630(&Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_OnCompleted__);
    DAT_045669b5 = 1;
  }
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields).ELFMJMIENON;
  if (pUVar1 != (UniRx_BehaviorSubject_DGGBFKNKEAH__o *)0x0) {
                    /* try { // try from 0327feb0 to 0337fed7 has its CatchHandler @ 03280428 */
    UniRx_BehaviorSubject<object>__OnCompleted
              ((UniRx_BehaviorSubject_T__o *)pUVar1,
               Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_OnCompleted__);
    pUVar1 = (__this->fields).ELFMJMIENON;
    if (pUVar1 != (UniRx_BehaviorSubject_DGGBFKNKEAH__o *)0x0) {
      UniRx_BehaviorSubject<object>__Dispose
                ((UniRx_BehaviorSubject_T__o *)pUVar1,
                 Method_UniRx_BehaviorSubject<DGGBFKNKEAH>_Dispose__);
    }
  }
  __this_01 = (__this->fields).MEMMAHEDCNO;
  if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__Dispose(__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}

