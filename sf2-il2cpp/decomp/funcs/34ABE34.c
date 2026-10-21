// FGFPOFBKHMM$$.ctor @ RVA 0x34ABE34

void FGFPOFBKHMM___ctor(FGFPOFBKHMM_o *__this,MethodInfo *method)

{
  HCBNEFEHCBM_o *__this_00;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_01;
  UniRx_ReactiveProperty_HCBNEFEHCBM__o **ppUVar1;
  UniRx_Subject_HCBNEFEHCBM__o *__this_02;
  UniRx_Subject_HCBNEFEHCBM__o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568533 & 1) == 0) {
    FUN_01bab630(&HCBNEFEHCBM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
    FUN_01bab630(&UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
    DAT_04568533 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCBNEFEHCBM_o *)thunk_FUN_01bda818(HCBNEFEHCBM_TypeInfo,method);
  HCBNEFEHCBM___ctor(__this_00,true,(System_String_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).EEDBKKBFKCP = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<HCBNEFEHCBM>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_01,
             Method_UniRx_ReactiveProperty<HCBNEFEHCBM>__ctor__);
  ppUVar1 = &(__this->fields).OMMGLBIMPDI;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  __this_02 = (UniRx_Subject_HCBNEFEHCBM__o *)
              thunk_FUN_01bda818(UniRx_Subject<HCBNEFEHCBM>_TypeInfo);
  UniRx_Subject<object>___ctor
            ((UniRx_Subject_T__o *)__this_02,Method_UniRx_Subject<HCBNEFEHCBM>__ctor__);
  ppUVar2 = &(__this->fields).POPPKIFIINN;
  *ppUVar2 = __this_02;
  thunk_FUN_01c20e04(ppUVar2,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

