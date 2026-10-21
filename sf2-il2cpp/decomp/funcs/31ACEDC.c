// FBAABPGMPCC$$NHFHOLBGIHI @ RVA 0x31ACEDC

void FBAABPGMPCC__NHFHOLBGIHI
               (FBAABPGMPCC_o *__this,KAKGABBLHGP_o *HHCLIDIIJMI,
               System_Action_KHODJHFHCDE__o *BLMFLPJJMPF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_IObservable_KHODJHFHCDE__o *source;
  System_Action_T__o *onNext;
  System_IDisposable_o *value;
  System_Action_KHODJHFHCDE__o *method_00;
  UniRx_SerialDisposable_o *__this_01;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04566b56 & 1) == 0) {
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&Method_FBAABPGMPCC_MAJLIEBBIJM_EOMHBOCLDAD__);
    FUN_01bab630(&FBAABPGMPCC_MAJLIEBBIJM_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    DAT_04566b56 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FBAABPGMPCC_MAJLIEBBIJM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BLMFLPJJMPF;
    thunk_FUN_01c20e04(__this_00 + 1,BLMFLPJJMPF);
    __this_01 = (__this->fields).IDBDJDHDKGG;
    source = FBAABPGMPCC__BJHCDNCMKAC(__this,HHCLIDIIJMI,(MethodInfo *)method_00);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
    System_Action<object>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<object>
                      ((System_IObservable_T__o *)source,onNext,
                       Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    if (__this_01 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

