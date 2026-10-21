// DOPEEDABNEK$$ABPLAAFFKIE @ RVA 0x32E27B4

void DOPEEDABNEK__ABPLAAFFKIE(DOPEEDABNEK_o *__this,GLINEGMOOBM_o *HOKBHLPPCAH,MethodInfo *method)

{
  Core_Configs_Models_PacksConfig_o *__this_00;
  System_Collections_Generic_IEnumerable_PackSettings__o *source;
  System_Func_PackSettings__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_PackSettings__string__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  GLINEGMOOBM_o *extraout_x1;
  MethodInfo *method_00;
  System_Func_PackSettings__bool__o *predicate;
  System_Func_PackSettings__string__o *selector;
  
  if ((DAT_045675ee & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<PackSettings>__);
    FUN_01bab630(&System_Func<PackSettings,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<PackSettings,_string>_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_CENNOCLJDBD__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_DNNODJGFLLH__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    DAT_045675ee = 1;
    HOKBHLPPCAH = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,HOKBHLPPCAH);
  }
  __this_00 = (Core_Configs_Models_PacksConfig_o *)
              IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<PacksConfig>__);
  if (__this_00 != (Core_Configs_Models_PacksConfig_o *)0x0) {
    source = Core_Configs_Models_PacksConfig__get_Packs(__this_00,(MethodInfo *)0x0);
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
    }
    predicate = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__62_0;
    if (predicate == (System_Func_PackSettings__bool__o *)0x0) {
      if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
      }
      predicate = (System_Func_PackSettings__bool__o *)
                  thunk_FUN_01bda818(System_Func<PackSettings,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__62_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pSVar2 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<PackSettings>__);
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
    }
    selector = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__62_1;
    if (selector == (System_Func_PackSettings__string__o *)0x0) {
      if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
      }
      selector = (System_Func_PackSettings__string__o *)
                 thunk_FUN_01bda818(System_Func<PackSettings,_string>_TypeInfo);
      System_Func<object,_object>___ctor();
      ppSVar3 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__62_1;
      *ppSVar3 = selector;
      thunk_FUN_01c20e04(ppSVar3,selector);
    }
    method_00 = Method_System_Linq_Enumerable_Select<PackSettings,_string>__;
    source_00 = System_Linq_Enumerable__Select<object,_object>
                          (pSVar2,(System_Func_TSource__TResult__o *)selector,
                           (MethodInfo_1EA6FC0 *)
                           Method_System_Linq_Enumerable_Select<PackSettings,_string>__);
    pSVar2 = System_Linq_Enumerable__Distinct<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        Method_System_Linq_Enumerable_Distinct<string>__);
    if (__this != (DOPEEDABNEK_o *)0x0) {
      DOPEEDABNEK__FBNGJNMKBNM
                (__this,(System_Collections_Generic_IEnumerable_string__o *)pSVar2,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

