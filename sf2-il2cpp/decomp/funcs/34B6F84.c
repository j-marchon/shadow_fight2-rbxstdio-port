// OFHNGNKMJGM$$.ctor @ RVA 0x34B6F84

void OFHNGNKMJGM___ctor(OFHNGNKMJGM_o *__this,CICHCAJBCHK_o *FMEHMMHEJNN,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  
                    /* try { // try from 035b6f8c to 036b6f9b has its CatchHandler @ 035b7068 */
                    /* try { // try from 035b6f9c to 036b704b has its CatchHandler @ 035b6d98 */
  if ((DAT_04568594 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04568594 = 1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).IHADHPMEOFI;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).FCBJIODFGDB = FMEHMMHEJNN;
  thunk_FUN_01c20e04(&__this->fields,FMEHMMHEJNN);
  return;
}

