// Nekki.SF2.GUI.Dialogs.WebViewDialog$$Init @ RVA 0x333B678

/* WARNING: Removing unreachable block (ram,0x0343bc58) */

void Nekki_SF2_GUI_Dialogs_WebViewDialog__Init
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *value;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_String_o *scheme;
  UniWebView_ShouldCloseDelegate_o *value_00;
  UniWebView_MessageReceivedDelegate_o *value_01;
  System_Action_o *disposeAction;
  Il2CppObject *pIVar7;
  System_IObservable_object__o *source;
  System_Action_T__o *onNext;
  System_Collections_Generic_IList_string__c *pSVar8;
  long lVar9;
  GOLIJCLCCBA_o *pGVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  UniWebView_o **ppUVar14;
  CloseButton_o *pCVar15;
  GOLIJCLCCBA_o **ppGVar16;
  UniWebView_o *pUVar17;
  System_Collections_Generic_IList_string__o *pSVar18;
  
  if ((DAT_0456796f & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&GOLIJCLCCBA_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<UniWebView>__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UniWebView_MessageReceivedDelegate_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<object>__);
    FUN_01bab630(&UniWebView_ShouldCloseDelegate_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_DGGOJPBDGJC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_IGNPLEMOFKA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_LJBOEFKHPCC__);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456796f = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (GOLIJCLCCBA_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)GOLIJCLCCBA_TypeInfo)) {
      ppGVar16 = &(__this->fields).PAAIEEFEBKK;
      *ppGVar16 = (GOLIJCLCCBA_o *)IMMNELPBGIF;
      thunk_FUN_01c20e04(ppGVar16,IMMNELPBGIF);
      ppUVar14 = &(__this->fields).APELOJBHPPJ;
      pUVar17 = *ppUVar14;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar17,(MethodInfo *)0x0);
      if (!bVar3) {
        __this_00 = (__this->fields).super._content;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0343bc50;
        pUVar17 = (UniWebView_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_AddComponent<UniWebView>__);
        (__this->fields).APELOJBHPPJ = pUVar17;
        thunk_FUN_01c20e04(ppUVar14,pUVar17);
        pUVar17 = (__this->fields).APELOJBHPPJ;
        value = Nekki_SF2_GUI_Dialogs_BaseDialog__BHIPAGACGFO
                          ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar17 == (UniWebView_o *)0x0) goto LAB_0343bc50;
        UniWebView__set_ReferenceRectTransform(pUVar17,value,(MethodInfo *)0x0);
      }
      if (*ppGVar16 == (GOLIJCLCCBA_o *)0x0) goto LAB_0343bc50;
      pSVar18 = ((*ppGVar16)->fields).PPOHBBJFABG;
      if (pSVar18 != (System_Collections_Generic_IList_string__o *)0x0) {
        pSVar8 = pSVar18->klass;
        uVar2._0_1_ = (pSVar8->_2).rank;
        uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pSVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
              pVVar4 = pSVar8->vtable + *piVar12;
              goto LAB_0343b8c0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar4 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar18,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_0343b8c0:
        plVar5 = (long *)(*pVVar4->methodPtr)(pSVar18,pVVar4->method);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar9 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0343b930;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0343b930:
          uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar11 & 1) == 0) {
            if (plVar5 == (long *)0x0) break;
            lVar9 = *plVar5;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 == 0) goto LAB_0343b9f0;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_0343b9d8;
          }
          lVar9 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar13 + -2) ==
                  System_Collections_Generic_IEnumerator<string>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0343b98c;
              }
              uVar11 = uVar11 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_0343b98c:
          scheme = (System_String_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (*ppUVar14 == (UniWebView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UniWebView__AddUrlScheme(*ppUVar14,scheme,(MethodInfo *)0x0);
        } while( true );
      }
      goto LAB_0343ba1c;
    }
  }
  goto LAB_0343bb6c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_0343b9d8:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0343ba0c;
    }
  }
LAB_0343b9f0:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0343ba0c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0343ba1c:
  pUVar17 = (__this->fields).APELOJBHPPJ;
  value_00 = (UniWebView_ShouldCloseDelegate_o *)
             thunk_FUN_01bda818(UniWebView_ShouldCloseDelegate_TypeInfo);
  UniWebView_ShouldCloseDelegate___ctor();
  if (pUVar17 == (UniWebView_o *)0x0) goto LAB_0343bc50;
  UniWebView__add_OnShouldClose(pUVar17,value_00,(MethodInfo *)0x0);
  pUVar17 = (__this->fields).APELOJBHPPJ;
  value_01 = (UniWebView_MessageReceivedDelegate_o *)
             thunk_FUN_01bda818(UniWebView_MessageReceivedDelegate_TypeInfo);
  UniWebView_MessageReceivedDelegate___ctor();
  if (pUVar17 == (UniWebView_o *)0x0) goto LAB_0343bc50;
  UniWebView__add_OnMessageReceived(pUVar17,value_01,(MethodInfo *)0x0);
  disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar7 = (Il2CppObject *)UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).HBJPBPBIOOB,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pGVar10 = (__this->fields).PAAIEEFEBKK;
  if ((pGVar10 == (GOLIJCLCCBA_o *)0x0) ||
     (pUVar17 = (__this->fields).APELOJBHPPJ, pUVar17 == (UniWebView_o *)0x0)) goto LAB_0343bc50;
  UniWebView__SetZoomEnabled(pUVar17,(pGVar10->fields).FCLKPJIKDNJ,(MethodInfo *)0x0);
  if ((*ppGVar16 == (GOLIJCLCCBA_o *)0x0) || (*ppUVar14 == (UniWebView_o *)0x0)) goto LAB_0343bc50;
  UniWebView__Load(*ppUVar14,((*ppGVar16)->fields).PHONOLEMBHN,false,(System_String_o *)0x0,
                   (MethodInfo *)0x0);
  if (*ppUVar14 == (UniWebView_o *)0x0) goto LAB_0343bc50;
  UniWebView__Show(*ppUVar14,false,0,0.4,(System_Action_o *)0x0,(MethodInfo *)0x0);
LAB_0343bb6c:
  pCVar15 = (__this->fields)._closeButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar15,(MethodInfo *)0x0);
  if (bVar3) {
    source = HABIFHOHHOF__ELOBMGDKLPK((__this->fields)._closeButton,(MethodInfo *)0x0);
    onNext = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    pIVar7 = (Il2CppObject *)
             UniRx_ObservableExtensions__Subscribe<object>
                       ((System_IObservable_T__o *)source,onNext,
                        Method_UniRx_ObservableExtensions_Subscribe<object>__);
    UniRx_DisposableExtensions__AddTo<object>
              (pIVar7,(System_Collections_Generic_ICollection_IDisposable__o *)
                      (__this->fields).HBJPBPBIOOB,
               Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    pCVar15 = (__this->fields)._closeButton;
    if (pCVar15 == (CloseButton_o *)0x0) {
LAB_0343bc50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CloseButton__PlayIdleAnimation(pCVar15,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1,StringLiteral_9679,
             StringLiteral_3640,0,(MethodInfo *)0x0);
  return;
}

