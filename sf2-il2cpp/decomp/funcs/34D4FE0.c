// MEKONFPICFH$$IBOCMDLPAMA @ RVA 0x34D4FE0

void MEKONFPICFH__IBOCMDLPAMA(MEKONFPICFH_o *__this,DGGBFKNKEAH_o *PDKOFIOIOFD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *JLNPKGGFFDD;
  System_IObservable_CFEFALDOEMD__o *source;
  System_Func_CFEFALDOEMD__bool__o **ppSVar2;
  System_IObservable_T__o *source_00;
  System_Action_T__o *onNext;
  DGGBFKNKEAH_o **ppDVar3;
  System_Func_CFEFALDOEMD__bool__o *predicate;
  int32_t local_44;
  
  if ((DAT_045686d1 & 1) == 0) {
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<CFEFALDOEMD,_bool>_TypeInfo);
    FUN_01bab630(&IKDJCPOJFNM_TypeInfo);
    FUN_01bab630(&Method_MEKONFPICFH_JLKIHHFHBCL__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<CFEFALDOEMD>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_MEKONFPICFH_<>c_JBCJCBALDKD__);
    FUN_01bab630(&MEKONFPICFH_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_11163);
    FUN_01bab630(&StringLiteral_22402);
    DAT_045686d1 = 1;
  }
  if (PDKOFIOIOFD != (DGGBFKNKEAH_o *)0x0) {
    local_44 = DGGBFKNKEAH__EPLDBAMLEGF(PDKOFIOIOFD,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(IKDJCPOJFNM_TypeInfo,&local_44);
    JLNPKGGFFDD = System_String__Format
                            (StringLiteral_22402,StringLiteral_11163,pIVar1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    ppDVar3 = &(__this->fields).FHCHDOILFGE;
    *ppDVar3 = PDKOFIOIOFD;
    thunk_FUN_01c20e04(ppDVar3,PDKOFIOIOFD);
    source = LKHEKMAGHDH__MBNHFJCHHAH(*ppDVar3,(MethodInfo *)0x0);
    if ((MEKONFPICFH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MEKONFPICFH_<>c_TypeInfo);
    }
    predicate = MEKONFPICFH_<>c_TypeInfo->static_fields->__9__7_0;
    if (predicate == (System_Func_CFEFALDOEMD__bool__o *)0x0) {
      if ((MEKONFPICFH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MEKONFPICFH_<>c_TypeInfo);
      }
      predicate = (System_Func_CFEFALDOEMD__bool__o *)
                  thunk_FUN_01bda818(System_Func<CFEFALDOEMD,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &MEKONFPICFH_<>c_TypeInfo->static_fields->__9__7_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source_00 = UniRx_Observable__Where<object>
                          ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                           Method_UniRx_Observable_Where<CFEFALDOEMD>__);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    pIVar1 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       (source_00,onNext,Method_UniRx_ObservableExtensions_Subscribe<CFEFALDOEMD>__)
    ;
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar1,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).IHADHPMEOFI,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

