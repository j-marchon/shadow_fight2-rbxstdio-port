// TypeDefIndex 2579
// Namespace: 
// public class DODIFOIEPLP : CELDGLHBCAM
// Fields:
//   private readonly CompositeDisposable KGCEDNDGKAD; // 0x18

// ===== private void GFEADAEMHII(Unit HOKBHLPPCAH)  [RVA 0x33A1394]
// DODIFOIEPLP$$GFEADAEMHII @ RVA 0x33A1394

void DODIFOIEPLP__GFEADAEMHII(long __this)

{
  *(undefined1 *)(__this + 0x11) = 1;
  return;
}


// ===== public override void EABJNHKPJOM()  [RVA 0x33A13A0]
// DODIFOIEPLP$$EABJNHKPJOM @ RVA 0x33A13A0

void DODIFOIEPLP__EABJNHKPJOM(DODIFOIEPLP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  CELDGLHBCAM__EABJNHKPJOM((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).KGCEDNDGKAD;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IObservable<Unit> KMNMAAMFCEI()  [RVA 0x33A13C8]
// DODIFOIEPLP$$KMNMAAMFCEI @ RVA 0x33A13C8

System_IObservable_Unit__o * DODIFOIEPLP__KMNMAAMFCEI(DODIFOIEPLP_o *__this,MethodInfo *method)

{
  System_Func_IObserver_Unit___IDisposable__o **ppSVar1;
  System_IObservable_T__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Func_IObserver_Unit___IDisposable__o *subscribe;
  
  if ((DAT_04567cb9 & 1) == 0) {
    FUN_01bab630(&System_Func<IObserver<Unit>,_IDisposable>_TypeInfo);
    FUN_01bab630(&Method_UniRx_Observable_Create<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_<>c_MPJHDKFCNEA__);
    FUN_01bab630(&DODIFOIEPLP_<>c_TypeInfo);
    DAT_04567cb9 = 1;
    method = extraout_x1;
  }
  if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  subscribe = DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__3_0;
  if (subscribe == (System_Func_IObserver_Unit___IDisposable__o *)0x0) {
    if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo,method);
    }
    subscribe = (System_Func_IObserver_Unit___IDisposable__o *)
                thunk_FUN_01bda818(System_Func<IObserver<Unit>,_IDisposable>_TypeInfo);
    System_Func<object,_object>___ctor();
    ppSVar1 = &DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = subscribe;
    thunk_FUN_01c20e04(ppSVar1,subscribe);
    method = extraout_x1_01;
  }
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UniRx_Observable_TypeInfo,method);
  }
  pSVar2 = UniRx_Observable__Create<Unit>
                     ((System_Func_IObserver_T___IDisposable__o *)subscribe,
                      Method_UniRx_Observable_Create<Unit>__);
  return (System_IObservable_Unit__o *)pSVar2;
}


// ===== public override void IELLEFEFFJD()  [RVA 0x33A14DC]
// DODIFOIEPLP$$IELLEFEFFJD @ RVA 0x33A14DC

void DODIFOIEPLP__IELLEFEFFJD(DODIFOIEPLP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *EBGAKMNEJHA;
  UniRx_CompositeDisposable_o *__this_00;
  IMPJOEHKNBA_o *pIVar3;
  VirtualInvokeData *pVVar4;
  System_IObservable_T__o *pSVar5;
  System_Func_bool__bool__o **ppSVar6;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  AAPGCAPGBLG_o *__this_01;
  IMPJOEHKNBA_c *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Func_bool__bool__o *predicate;
  
  if ((DAT_04567cba & 1) == 0) {
    FUN_01bab630(&GameSettings_TypeInfo);
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_KHNBAJIGOMA__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Func<bool,_bool>_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&IMPJOEHKNBA_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Take<bool>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<bool>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_<>c_DLDCIBFCNCP__);
    FUN_01bab630(&DODIFOIEPLP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17715/*"devices.xml"*/);
    DAT_04567cba = 1;
  }
  CELDGLHBCAM__IELLEFEFFJD((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  ADAHHFAPLLM__EOHMFJFFFIN((MethodInfo *)0x0);
  LLDOMGIEPNE__EOHMFJFFFIN((MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EOAOCPLIKOI__BPKFDPCMDMM((MethodInfo *)0x0);
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = SF2Paths__GNOADHJNPCJ((MethodInfo *)0x0);
  EBGAKMNEJHA = GIAMPEGMNHE__IBJOMPOLPCC
                          (EIJDDKJONFO,StringLiteral_17715/*"devices.xml"*/,1,true,true,false,(MethodInfo *)0x0);
  EOAOCPLIKOI__KLEKBEIJHDE(EBGAKMNEJHA,(MethodInfo *)0x0);
  if ((GameSettings_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameSettings__HNAFEENBKLL((MethodInfo *)0x0);
  GameSettings__GGGLOMJOGNP((MethodInfo *)0x0);
  Nekki_SF2_Core_ApplicationController__LogBuildStats((MethodInfo *)0x0);
  __this_00 = (__this->fields).KGCEDNDGKAD;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Clear(__this_00,(MethodInfo *)0x0);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar3 = IFAMAAGNCBJ__CKCJGDIIOKP((MethodInfo *)0x0);
    if (pIVar3 != (IMPJOEHKNBA_o *)0x0) {
      pIVar7 = pIVar3->klass;
      uVar1._0_1_ = (pIVar7->_2).rank;
      uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
            pVVar4 = pIVar7->vtable + *piVar9;
            goto LAB_034a1718;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,IMPJOEHKNBA_TypeInfo,0);
LAB_034a1718:
      pSVar5 = (System_IObservable_T__o *)(*pVVar4->methodPtr)(pIVar3,pVVar4->method);
      if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo);
      }
      predicate = DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__1_0;
      if (predicate == (System_Func_bool__bool__o *)0x0) {
        if ((DODIFOIEPLP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(DODIFOIEPLP_<>c_TypeInfo);
        }
        predicate = (System_Func_bool__bool__o *)
                    thunk_FUN_01bda818(System_Func<bool,_bool>_TypeInfo);
        System_Func<bool,_bool>___ctor();
        ppSVar6 = &DODIFOIEPLP_<>c_TypeInfo->static_fields->__9__1_0;
        *ppSVar6 = predicate;
        thunk_FUN_01c20e04(ppSVar6,predicate);
      }
      if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = UniRx_Observable__Where<bool>
                         (pSVar5,(System_Func_T__bool__o *)predicate,
                          Method_UniRx_Observable_Where<bool>__);
      pSVar5 = UniRx_Observable__Take<bool>(pSVar5,1,Method_UniRx_Observable_Take<bool>__);
      onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      disposable = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<bool>
                             (pSVar5,onNext,Method_UniRx_ObservableExtensions_Subscribe<bool>__);
      UniRx_DisposableExtensions__AddTo<object>
                (disposable,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).KGCEDNDGKAD,Method_UniRx_DisposableExtensions_AddTo<IDisposable>__
                );
      Core_Network_ServerProvider__Create((MethodInfo *)0x0);
      __this_01 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_01 != (AAPGCAPGBLG_o *)0x0) {
        AAPGCAPGBLG__OBNDAKKCCKB(__this_01,(MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pIVar3 = IFAMAAGNCBJ__CKCJGDIIOKP((MethodInfo *)0x0);
        if (pIVar3 != (IMPJOEHKNBA_o *)0x0) {
          pIVar7 = pIVar3->klass;
          uVar2._0_1_ = (pIVar7->_2).rank;
          uVar2._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)IMPJOEHKNBA_TypeInfo) {
                pVVar4 = pIVar7->vtable + (*piVar9 + 1);
                goto LAB_034a18d8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,IMPJOEHKNBA_TypeInfo,1);
LAB_034a18d8:
                    /* WARNING: Could not recover jumptable at 0x034a18f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar4->methodPtr)(pIVar3,pVVar4->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33A1900]
// DODIFOIEPLP$$.ctor @ RVA 0x33A1900

void DODIFOIEPLP___ctor(DODIFOIEPLP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567cbb & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567cbb = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).KGCEDNDGKAD;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  CELDGLHBCAM___ctor((CELDGLHBCAM_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KHNBAJIGOMA(bool HOKBHLPPCAH)  [RVA 0x33A196C]
// DODIFOIEPLP$$KHNBAJIGOMA @ RVA 0x33A196C

void DODIFOIEPLP__KHNBAJIGOMA(DODIFOIEPLP_o *__this,bool HOKBHLPPCAH,MethodInfo *method)

{
  System_IObservable_Unit__o *source;
  System_Action_T__o *onNext;
  Il2CppObject *disposable;
  MethodInfo *method_00;
  undefined1 auVar1 [16];
  DODIFOIEPLP_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)HOKBHLPPCAH;
  __this_00 = __this;
  if ((DAT_04567cbc & 1) == 0) {
    FUN_01bab630(&System_Action<Unit>_TypeInfo);
    FUN_01bab630(&Method_DODIFOIEPLP_GFEADAEMHII__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    auVar1 = FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    method_00 = auVar1._8_8_;
    __this_00 = auVar1._0_8_;
    DAT_04567cbc = 1;
  }
  source = DODIFOIEPLP__KMNMAAMFCEI(__this_00,method_00);
  onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Unit>_TypeInfo);
  System_Action<Unit>___ctor();
  disposable = (Il2CppObject *)
               UniRx_ObservableExtensions__Subscribe<Unit>
                         ((System_IObservable_T__o *)source,onNext,
                          Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
  UniRx_DisposableExtensions__AddTo<object>
            (disposable,
             (System_Collections_Generic_ICollection_IDisposable__o *)(__this->fields).KGCEDNDGKAD,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}

