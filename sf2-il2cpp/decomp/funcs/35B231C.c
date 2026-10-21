// FDJKKAFIEFB$$PCCPIHPECMA @ RVA 0x35B231C

void FDJKKAFIEFB__PCCPIHPECMA(FDJKKAFIEFB_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_04568ea3 & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    DAT_04568ea3 = 1;
    method = extraout_x1;
  }
  if ((FDJKKAFIEFB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FDJKKAFIEFB_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_00 = FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
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

