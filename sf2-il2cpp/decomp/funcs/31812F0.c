// PNHGEFAOFFE$$.ctor @ RVA 0x31812F0

void PNHGEFAOFFE___ctor(PNHGEFAOFFE_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_BehaviorSubject_DGGBFKNKEAH__o *__this_01;
  UniRx_BehaviorSubject_DGGBFKNKEAH__o **ppUVar1;
  UniRx_SerialDisposable_o *__this_02;
  UniRx_SerialDisposable_o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669bc & 1) == 0) {
    FUN_01bab630(&Method_UniRx_BehaviorSubject<DGGBFKNKEAH>__ctor__);
    FUN_01bab630(&UniRx_BehaviorSubject<DGGBFKNKEAH>_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045669bc = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BNAIPPCOGPE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_BehaviorSubject_DGGBFKNKEAH__o *)
              thunk_FUN_01bda818(UniRx_BehaviorSubject<DGGBFKNKEAH>_TypeInfo);
  UniRx_BehaviorSubject<object>___ctor
            ((UniRx_BehaviorSubject_T__o *)__this_01,(Il2CppObject *)0x0,
             Method_UniRx_BehaviorSubject<DGGBFKNKEAH>__ctor__);
  ppUVar1 = &(__this->fields).ELFMJMIENON;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  __this_02 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_02,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).MEMMAHEDCNO;
  *ppUVar2 = __this_02;
  thunk_FUN_01c20e04(ppUVar2,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

