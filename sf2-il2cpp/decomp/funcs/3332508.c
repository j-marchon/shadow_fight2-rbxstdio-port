// EBBCMCKFDAE$$FFPHHAMLLNM @ RVA 0x3332508

System_IObservable_ValueTuple_MPAKDCNMLEG__int__int___o *
EBBCMCKFDAE__FFPHHAMLLNM(KKEKKPIDGBK_o *KMIOAIFNJJD,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Func_Action_ValueTuple_MPAKDCNMLEG__int__int____Action_MPAKDCNMLEG__int__int___o **ppSVar1;
  System_Action_TDelegate__o *addHandler;
  System_Action_TDelegate__o *removeHandler;
  System_IObservable_TEventArgs__o *pSVar2;
  MethodInfo *extraout_x1;
  System_Func_Action_ValueTuple_MPAKDCNMLEG__int__int____Action_MPAKDCNMLEG__int__int___o
  *conversion;
  
  if ((DAT_0456791d & 1) == 0) {
    FUN_01bab630(&System_Action<Action<MPAKDCNMLEG,_int,_int>>_TypeInfo);
    FUN_01bab630(&Method_EBBCMCKFDAE_DJMOFAOLPGA_AOEMPKKDDHH__);
    FUN_01bab630(&Method_EBBCMCKFDAE_DJMOFAOLPGA_KCAKPNGNPEM__);
    FUN_01bab630(&EBBCMCKFDAE_DJMOFAOLPGA_TypeInfo);
    FUN_01bab630(&
                 System_Func<Action<ValueTuple<MPAKDCNMLEG,_int,_int>>,_Action<MPAKDCNMLEG,_int,_int>>_TypeInfo
                );
    FUN_01bab630(&
                 Method_UniRx_Observable_FromEvent<Action<MPAKDCNMLEG,_int,_int>,_ValueTuple<MPAKDCNMLEG,_int,_int>>__
                );
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_EBBCMCKFDAE_<>c_BAGECGCNKFB__);
    FUN_01bab630(&EBBCMCKFDAE_<>c_TypeInfo);
    DAT_0456791d = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(EBBCMCKFDAE_DJMOFAOLPGA_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)KMIOAIFNJJD;
    thunk_FUN_01c20e04(__this + 1,KMIOAIFNJJD);
    if ((EBBCMCKFDAE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    conversion = EBBCMCKFDAE_<>c_TypeInfo->static_fields->__9__4_0;
    if (conversion ==
        (System_Func_Action_ValueTuple_MPAKDCNMLEG__int__int____Action_MPAKDCNMLEG__int__int___o *)
        0x0) {
      if ((EBBCMCKFDAE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      conversion = (System_Func_Action_ValueTuple_MPAKDCNMLEG__int__int____Action_MPAKDCNMLEG__int__int___o
                    *)thunk_FUN_01bda818(
                                        System_Func<Action<ValueTuple<MPAKDCNMLEG,_int,_int>>,_Action<MPAKDCNMLEG,_int,_int>>_TypeInfo
                                        );
      System_Func<object,_object>___ctor();
      ppSVar1 = &EBBCMCKFDAE_<>c_TypeInfo->static_fields->__9__4_0;
      *ppSVar1 = conversion;
      thunk_FUN_01c20e04(ppSVar1,conversion);
    }
    addHandler = (System_Action_TDelegate__o *)
                 thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG,_int,_int>>_TypeInfo);
    System_Action<object>___ctor();
    removeHandler =
         (System_Action_TDelegate__o *)
         thunk_FUN_01bda818(System_Action<Action<MPAKDCNMLEG,_int,_int>>_TypeInfo);
    System_Action<object>___ctor();
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = UniRx_Observable__FromEvent<object,_ValueTuple<Int32Enum,_int,_int>>
                       ((System_Func_Action_TEventArgs___TDelegate__o *)conversion,addHandler,
                        removeHandler,
                        Method_UniRx_Observable_FromEvent<Action<MPAKDCNMLEG,_int,_int>,_ValueTuple<MPAKDCNMLEG,_int,_int>>__
                       );
    return (System_IObservable_ValueTuple_MPAKDCNMLEG__int__int___o *)pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

