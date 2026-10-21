// GNNIOHGGHAF$$.ctor @ RVA 0x3227998

void GNNIOHGGHAF___ctor(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f80 & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_04566f80 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).PIGOLBGJAEA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

