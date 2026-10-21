// MFLHNKGKEGA$$KAJLNAAGGED @ RVA 0x3163F50

void MFLHNKGKEGA__KAJLNAAGGED(MFLHNKGKEGA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_IObservable_T__o *source;
  System_Action_T__o *onNext;
  System_Action_Exception__o *onError;
  System_IDisposable_o *value;
  NFHJEHCAGBD_c *pNVar3;
  ulong uVar4;
  int32_t *piVar5;
  UniRx_SerialDisposable_o *__this_00;
  NFHJEHCAGBD_o *pNVar6;
  
  if ((DAT_0456689b & 1) == 0) {
    FUN_01bab630(&System_Action<string[]>_TypeInfo);
    FUN_01bab630(&System_Action<Exception>_TypeInfo);
    FUN_01bab630(&Method_MFLHNKGKEGA_GFDCGNNBDLH__);
    FUN_01bab630(&Method_MFLHNKGKEGA_MMFLJBDEHAD__);
    FUN_01bab630(&NFHJEHCAGBD_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<string[]>__);
    DAT_0456689b = 1;
  }
  pNVar6 = (__this->fields).CGDMPPJGIPH;
  if (pNVar6 != (NFHJEHCAGBD_o *)0x0) {
    pNVar3 = pNVar6->klass;
    __this_00 = (__this->fields).FMLPNCFMLCI;
    uVar1._0_1_ = (pNVar3->_2).rank;
    uVar1._1_1_ = (pNVar3->_2).minimumAlignment;
    uVar4 = (ulong)uVar1;
    if (uVar4 != 0) {
      piVar5 = &((pNVar3->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
            (Il2CppClass *)NFHJEHCAGBD_TypeInfo) {
          pVVar2 = pNVar3->vtable + *piVar5;
          goto LAB_0326404c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pNVar6,NFHJEHCAGBD_TypeInfo,0);
LAB_0326404c:
    source = (System_IObservable_T__o *)(*pVVar2->methodPtr)(pNVar6,pVVar2->method);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string[]>_TypeInfo);
    System_Action<object>___ctor();
    onError = (System_Action_Exception__o *)thunk_FUN_01bda818(System_Action<Exception>_TypeInfo);
    System_Action<object>___ctor();
    value = UniRx_ObservableExtensions__Subscribe<object>
                      (source,onNext,onError,Method_UniRx_ObservableExtensions_Subscribe<string[]>__
                      );
    if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

