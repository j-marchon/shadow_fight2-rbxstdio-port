// DOPEEDABNEK$$HNIHOIAMDPC @ RVA 0x32E4354

void DOPEEDABNEK__HNIHOIAMDPC(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Action_Action_HOOAAGABMBL___o **ppSVar4;
  System_IObservable_T__o *pSVar5;
  System_Action_T__o *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  undefined8 *puVar9;
  NDPMLPGANCI_o *DHMOPKGOBHL;
  System_IObservable_GLINEGMOOBM__o *source;
  System_Func_GLINEGMOOBM__bool__o **ppSVar10;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  ulong uVar12;
  int *piVar13;
  System_Action_Action_HOOAAGABMBL___o *addHandler;
  KBCOFHAJOCK_o *__this_00;
  System_Action_Action_HOOAAGABMBL___o *removeHandler;
  System_Func_GLINEGMOOBM__bool__o *predicate;
  
  if ((DAT_045675fd & 1) == 0) {
    FUN_01bab630(&System_Action<Action<HOOAAGABMBL>>_TypeInfo);
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&System_Action<KHODJHFHCDE>_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_ABPLAAFFKIE__);
    FUN_01bab630(&Method_DOPEEDABNEK_HIALOHNIDEO__);
    FUN_01bab630(&Method_DOPEEDABNEK_LDMKKAPAJCN__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&System_Func<GLINEGMOOBM,_bool>_TypeInfo);
    FUN_01bab630(&Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__);
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<GLINEGMOOBM>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<HOOAAGABMBL>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<HOOAAGABMBL>__);
    FUN_01bab630(&Method_UniRx_Observable_Where<GLINEGMOOBM>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_AOMDLEBNFEL__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_FHKDBPPPMNI__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_IGLKAFAIECC__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_8116);
    FUN_01bab630(&StringLiteral_14590);
    FUN_01bab630(&StringLiteral_19452);
    FUN_01bab630(&StringLiteral_8472);
    FUN_01bab630(&StringLiteral_8114);
    DAT_045675fd = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_19452,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_8472,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      pMVar11 = *(MethodInfo **)(*plVar2 + 0x470);
      pSVar3 = (System_Xml_XmlNode_o *)(**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_14590);
      DOPEEDABNEK__COFFDBGHAEC(__this,pSVar3,pMVar11);
      pMVar11 = *(MethodInfo **)(*plVar2 + 0x470);
      pSVar3 = (System_Xml_XmlNode_o *)(**(code **)(*plVar2 + 0x468))(plVar2,StringLiteral_8116);
      DOPEEDABNEK__CAJMJMJHCAD(__this,pSVar3,pMVar11);
      __this_00 = (__this->fields)._GMODBKFPHPN_k__BackingField;
      pSVar3 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar2 + 0x468))
                         (plVar2,StringLiteral_8114,*(undefined8 *)(*plVar2 + 0x470));
      if (__this_00 != (KBCOFHAJOCK_o *)0x0) {
        KBCOFHAJOCK__HNIHOIAMDPC(__this_00,pSVar3,(MethodInfo *)0x0);
        if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        addHandler = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_0;
        if (addHandler == (System_Action_Action_HOOAAGABMBL___o *)0x0) {
          if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          addHandler = (System_Action_Action_HOOAAGABMBL___o *)
                       thunk_FUN_01bda818(System_Action<Action<HOOAAGABMBL>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_0;
          *ppSVar4 = addHandler;
          thunk_FUN_01c20e04(ppSVar4,addHandler);
        }
        if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        removeHandler = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_1;
        if (removeHandler == (System_Action_Action_HOOAAGABMBL___o *)0x0) {
          if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          removeHandler =
               (System_Action_Action_HOOAAGABMBL___o *)
               thunk_FUN_01bda818(System_Action<Action<HOOAAGABMBL>>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar4 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_1;
          *ppSVar4 = removeHandler;
          thunk_FUN_01c20e04(ppSVar4,removeHandler);
        }
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = UniRx_Observable__FromEvent<object>
                           ((System_Action_Action_T___o *)addHandler,
                            (System_Action_Action_T___o *)removeHandler,
                            Method_UniRx_Observable_FromEvent<HOOAAGABMBL>__);
        pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
        System_Action<object>___ctor();
        pIVar7 = (Il2CppObject *)
                 UniRx_ObservableExtensions__Subscribe<object>
                           (pSVar5,pSVar6,Method_UniRx_ObservableExtensions_Subscribe<HOOAAGABMBL>__
                           );
        UniRx_DisposableExtensions__AddTo<object>
                  (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                          (__this->fields).BNAIPPCOGPE,
                   Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
        lVar8 = *(long *)(Method_GOCLIOIANDK<FBAABPGMPCC,_JNDFOKIMHPB>_AIHNLLGNBLC__ + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01b81620();
        }
        plVar2 = (long *)**(undefined8 **)(lVar8 + 0xb8);
        if (plVar2 != (long *)0x0) {
          lVar8 = *plVar2;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(JNDFOKIMHPB_c **)(piVar13 + -2) == JNDFOKIMHPB_TypeInfo) {
                puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_033e47e8;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_01b81914(plVar2,JNDFOKIMHPB_TypeInfo,1);
LAB_033e47e8:
          pSVar5 = (System_IObservable_T__o *)(*(code *)*puVar9)(plVar2,puVar9[1]);
          pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KHODJHFHCDE>_TypeInfo);
          System_Action<object>___ctor();
          pIVar7 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (pSVar5,pSVar6,
                              Method_UniRx_ObservableExtensions_Subscribe<KHODJHFHCDE>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          DHMOPKGOBHL = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          source = KMFOEBNKLEO__FGGPIDCDHHG(DHMOPKGOBHL,method_00);
          if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
          }
          predicate = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_3;
          if (predicate == (System_Func_GLINEGMOOBM__bool__o *)0x0) {
            if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo);
            }
            predicate = (System_Func_GLINEGMOOBM__bool__o *)
                        thunk_FUN_01bda818(System_Func<GLINEGMOOBM,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            ppSVar10 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__48_3;
            *ppSVar10 = predicate;
            thunk_FUN_01c20e04(ppSVar10,predicate);
          }
          if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = UniRx_Observable__Where<object>
                             ((System_IObservable_T__o *)source,(System_Func_T__bool__o *)predicate,
                              Method_UniRx_Observable_Where<GLINEGMOOBM>__);
          pSVar6 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
          System_Action<object>___ctor();
          pIVar7 = (Il2CppObject *)
                   UniRx_ObservableExtensions__Subscribe<object>
                             (pSVar5,pSVar6,
                              Method_UniRx_ObservableExtensions_Subscribe<GLINEGMOOBM>__);
          UniRx_DisposableExtensions__AddTo<object>
                    (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                            (__this->fields).BNAIPPCOGPE,
                     Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

