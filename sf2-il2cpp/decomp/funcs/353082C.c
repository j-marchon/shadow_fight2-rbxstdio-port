// IJCLCKIJJDH$$LGEIKGPODJO @ RVA 0x353082C

void IJCLCKIJJDH__LGEIKGPODJO
               (IJCLCKIJJDH_o *__this,System_ValueTuple_bool__bool__o ALKAAKFOJAN,MethodInfo *method
               )

{
  bool bVar1;
  NDPMLPGANCI_o *pNVar2;
  System_IObservable_bool__o *source;
  System_Func_bool__bool__o **ppSVar3;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  AAPGCAPGBLG_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GLINEGMOOBM_o *pGVar4;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_04568a56 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&Method_IJCLCKIJJDH_GAAECCDEKPA__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_IJCLCKIJJDH_<>c_CFPGAPBEAND__);
    FUN_01bab630(&IJCLCKIJJDH_<>c_TypeInfo);
    DAT_04568a56 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566e5a == '\0') {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566e5a = '\x01';
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (MGNPHCAAEIO_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField != false) {
    pNVar2 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pNVar2 == (NDPMLPGANCI_o *)0x0) ||
       (pGVar4 = (pNVar2->fields).KLPOKEJLDHG, pGVar4 == (GLINEGMOOBM_o *)0x0)) goto LAB_03630ab0;
    if ((((ushort)ALKAAKFOJAN.fields >> 8 & 1) == 0) &&
       (((pGVar4->fields).DBMPKPJGIPI != 6 &&
        (bVar1 = IJCLCKIJJDH__FAKAFGPJOIG(__this,method_00), bVar1)))) {
      source = IJCEPJPIDON__IFJDHHGCGHE((FGOGONIFJFD_o *)__this,(MethodInfo *)0x0);
      if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
      }
      predicate = IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__15_4;
      if (predicate == (System_Func_bool__bool__o *)0x0) {
        if ((IJCLCKIJJDH_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IJCLCKIJJDH_<>c_TypeInfo);
        }
        predicate = (System_Func_bool__bool__o *)
                    thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
        System_Func<bool,_bool>___ctor();
        ppSVar3 = &IJCLCKIJJDH_<>c_TypeInfo->static_fields->__9__15_4;
        *ppSVar3 = predicate;
        thunk_FUN_01c20e04(ppSVar3,predicate);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      source_00 = UniRx_Observable__Where<bool>
                            ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                             Method_UniRx_Observable_Where<bool>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<bool>
                             (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
      method_01 = Method_UniRx_DisposableExtensions_AddTo<IDisposable>__;
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).MEMOAFOBLCM,
                 (MethodInfo_1E90590 *)Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
      IJCLCKIJJDH__EGPGOOBHNIM(__this,1,method_01);
      return;
    }
  }
  __this_00 = (__this->fields).APEEANDPFCG;
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    AAPGCAPGBLG__CKDJOILBJPC(__this_00,(MethodInfo *)0x0);
    return;
  }
LAB_03630ab0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

