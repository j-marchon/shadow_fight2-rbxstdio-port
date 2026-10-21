// AJNFLEPFBJG$$LJAFGHFICCB @ RVA 0x3568448

void AJNFLEPFBJG__LJAFGHFICCB(AJNFLEPFBJG_o *__this,HCBNEFEHCBM_o *HPACPFLKHPK,MethodInfo *method)

{
  UniRx_ReactiveProperty_HCBNEFEHCBM__o *__this_00;
  UniRx_Subject_HCBNEFEHCBM__o *__this_01;
  
  if ((DAT_04568c0b & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    FUN_01bab630(&Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
    DAT_04568c0b = 1;
  }
  __this_00 = (__this->fields).OMMGLBIMPDI;
  if (__this_00 != (UniRx_ReactiveProperty_HCBNEFEHCBM__o *)0x0) {
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,(Il2CppObject *)HPACPFLKHPK,
               Method_UniRx_ReactiveProperty<HCBNEFEHCBM>_set_Value__);
    __this_01 = (__this->fields).POPPKIFIINN;
    if (__this_01 != (UniRx_Subject_HCBNEFEHCBM__o *)0x0) {
      UniRx_Subject<object>__OnNext
                ((UniRx_Subject_T__o *)__this_01,(Il2CppObject *)HPACPFLKHPK,
                 Method_UniRx_Subject<HCBNEFEHCBM>_OnNext__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

