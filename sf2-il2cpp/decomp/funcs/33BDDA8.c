// CUDLR.Server$$CEOHKHGKEKL @ RVA 0x33BDDA8

void CUDLR_Server__CEOHKHGKEKL(CUDLR_Server_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04567dcb & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_04567dcb = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NBCJIGKEOGO;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Disposable_TypeInfo,method);
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

