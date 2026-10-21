// AJMOIOIBPGP$$GIMAJOGGBHM @ RVA 0x32726A4

void AJMOIOIBPGP__GIMAJOGGBHM
               (AJMOIOIBPGP_o *__this,DOPEEDABNEK_o *GHAAKPDHIJJ,ACHLOMELAJE_o *BHENDAGDGME,
               NCNJEIBHGBH_o *DPAPHDMGNHJ,MethodInfo *method)

{
  System_Action_Action_T___o *addHandler;
  System_Action_Action_T___o *removeHandler;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *method_00;
  undefined8 *puVar1;
  NCNJEIBHGBH_o **ppNVar2;
  ACHLOMELAJE_o **ppAVar3;
  DOPEEDABNEK_o **ppDVar4;
  
  if ((DAT_04567234 & 1) == 0) {
    FUN_01bab630(&Method_AJMOIOIBPGP_DKPJKIDCHKE__);
    FUN_01bab630(&Method_AJMOIOIBPGP_KCIAIPOFJDM__);
    FUN_01bab630(&Method_AJMOIOIBPGP_POHILILPKNG__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<Action<string>>_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<string>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&StringLiteral_7532);
    FUN_01bab630(&StringLiteral_7534);
    FUN_01bab630(&StringLiteral_7533);
    DAT_04567234 = 1;
  }
  if ((__this->fields).ECCPBJGMNPE != false) {
    return;
  }
  ppDVar4 = &(__this->fields).DPOPJKJLDEE;
  *ppDVar4 = GHAAKPDHIJJ;
  (__this->fields).ECCPBJGMNPE = true;
  thunk_FUN_01c20e04(ppDVar4,GHAAKPDHIJJ);
  if (*ppDVar4 == (DOPEEDABNEK_o *)0x0) {
    puVar1 = &StringLiteral_7532;
  }
  else {
    ppAVar3 = &(__this->fields).OKNKKHGBECG;
    *ppAVar3 = BHENDAGDGME;
    thunk_FUN_01c20e04(ppAVar3,BHENDAGDGME);
    if (*ppAVar3 == (ACHLOMELAJE_o *)0x0) {
      puVar1 = &StringLiteral_7534;
    }
    else {
      ppNVar2 = &(__this->fields).KMGFNKKPGIH;
      *ppNVar2 = DPAPHDMGNHJ;
      thunk_FUN_01c20e04(ppNVar2,DPAPHDMGNHJ);
      if (*ppNVar2 != (NCNJEIBHGBH_o *)0x0) {
        AJMOIOIBPGP__CPPMCNNDKHA(__this,method_00);
        addHandler = (System_Action_Action_T___o *)
                     thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
        System_Action<object>___ctor();
        removeHandler =
             (System_Action_Action_T___o *)
             thunk_FUN_01bda818(System_Action<Action<string>>_TypeInfo);
        System_Action<object>___ctor();
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromEvent<object>
                           (addHandler,removeHandler,Method_UniRx_Observable_FromEvent<string>__);
        onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
        System_Action<object>___ctor();
        disposable = (Il2CppObject *)
                     UniRx_ObservableExtensions__Subscribe<object>
                               (source,onNext,Method_UniRx_ObservableExtensions_Subscribe<string>__)
        ;
        UniRx_DisposableExtensions__AddTo<object>
                  (disposable,
                   (System_Collections_Generic_ICollection_IDisposable__o *)
                   (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        return;
      }
      puVar1 = &StringLiteral_7533;
    }
  }
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  return;
}

