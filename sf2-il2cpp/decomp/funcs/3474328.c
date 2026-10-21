// FMNPEJKMBMB$$Dispose @ RVA 0x3474328

void FMNPEJKMBMB__Dispose(FMNPEJKMBMB_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
                    /* try { // try from 03574328 to 0367440f has its CatchHandler @ 03573d00 */
  __this_00 = (__this->fields).IHADHPMEOFI;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

