// BDJDLHKNBGH$$EABJNHKPJOM @ RVA 0x30D85B4

void BDJDLHKNBGH__EABJNHKPJOM(BDJDLHKNBGH_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  
  if ((DAT_0456633d & 1) == 0) {
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    DAT_0456633d = 1;
  }
  CELDGLHBCAM__EABJNHKPJOM((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BINFBNNNALO;
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
    UniRx_SerialDisposable__set_Disposable
              (__this_00,UniRx_Disposable_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

