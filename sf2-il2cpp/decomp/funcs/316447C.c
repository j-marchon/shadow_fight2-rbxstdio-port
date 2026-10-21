// MFLHNKGKEGA$$.ctor @ RVA 0x316447C

void MFLHNKGKEGA___ctor(MFLHNKGKEGA_o *__this,NFHJEHCAGBD_o *MMOHDGFFADJ,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  UniRx_ReactiveProperty_string____o *__this_01;
  UniRx_ReactiveProperty_string____o **ppUVar1;
  NFHJEHCAGBD_o **ppNVar2;
  
  if ((DAT_045668a1 & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>__ctor__);
    FUN_01bab630(&UniRx_ReactiveProperty<string[]>_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_045668a1 = 1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FMLPNCFMLCI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (UniRx_ReactiveProperty_string____o *)
              thunk_FUN_01bda818(UniRx_ReactiveProperty<string[]>_TypeInfo);
  UniRx_ReactiveProperty<object>___ctor
            ((UniRx_ReactiveProperty_T__o *)__this_01,
             Method_UniRx_ReactiveProperty<string[]>__ctor__);
  ppUVar1 = &(__this->fields).IDPIHPBEHFC;
  *ppUVar1 = __this_01;
  thunk_FUN_01c20e04(ppUVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).CGDMPPJGIPH;
  *ppNVar2 = MMOHDGFFADJ;
  thunk_FUN_01c20e04(ppNVar2,MMOHDGFFADJ);
  return;
}

