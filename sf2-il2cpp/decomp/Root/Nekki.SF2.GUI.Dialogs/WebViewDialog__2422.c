// TypeDefIndex 2422
// Namespace: Nekki.SF2.GUI.Dialogs
// public class WebViewDialog : BaseDialog
// Fields:
//   private CloseButton _closeButton; // 0xC8
//   private readonly CompositeDisposable HBJPBPBIOOB; // 0xD0
//   private GOLIJCLCCBA PAAIEEFEBKK; // 0xD8
//   private UniWebView APELOJBHPPJ; // 0xE0

// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x333B550]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$LCGFJKFJKJK @ RVA 0x333B550

void Nekki_SF2_GUI_Dialogs_WebViewDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,int32_t DNBBBGEENMM,MethodInfo *method
               )

{
  return;
}


// ===== private bool LJBOEFKHPCC(UniWebView OGCBKKDCJGJ)  [RVA 0x333B554]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$LJBOEFKHPCC @ RVA 0x333B554

bool Nekki_SF2_GUI_Dialogs_WebViewDialog__LJBOEFKHPCC
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,UniWebView_o *OGCBKKDCJGJ,
               MethodInfo *method)

{
  (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
  return false;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x333B574]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$GLJGIJNALCA @ RVA 0x333B574

void Nekki_SF2_GUI_Dialogs_WebViewDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void Start()  [RVA 0x333B578]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$Start @ RVA 0x333B578

void Nekki_SF2_GUI_Dialogs_WebViewDialog__Start
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void IGNPLEMOFKA(UniWebView OGCBKKDCJGJ, UniWebViewMessage NONPLOOOOAG)  [RVA 0x333B57C]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$IGNPLEMOFKA @ RVA 0x333B57C

void Nekki_SF2_GUI_Dialogs_WebViewDialog__IGNPLEMOFKA
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,UniWebView_o *OGCBKKDCJGJ,
               UniWebViewMessage_o *NONPLOOOOAG,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  GOLIJCLCCBA_o *pGVar3;
  System_Collections_Generic_IList_string__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IList_string__o *pSVar7;
  System_String_o *pSVar8;
  undefined1 auVar9 [16];
  
  auVar9._8_8_ = OGCBKKDCJGJ;
  auVar9._0_8_ = __this;
  if ((DAT_0456796e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    auVar9 = FUN_01bab630(&System_Collections_Generic_ICollection<string>_TypeInfo);
    DAT_0456796e = 1;
  }
  pGVar3 = (__this->fields).PAAIEEFEBKK;
  if (pGVar3 == (GOLIJCLCCBA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar9._0_8_,auVar9._8_8_);
  }
  pSVar7 = (pGVar3->fields).PPOHBBJFABG;
  if (pSVar7 != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar4 = pSVar7->klass;
    pSVar8 = (NONPLOOOOAG->fields)._Scheme_k__BackingField;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<string>_TypeInfo) {
          pVVar2 = pSVar4->vtable + (*piVar6 + 4);
          goto LAB_0343b624;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)
             FUN_01b81914(pSVar7,System_Collections_Generic_ICollection<string>_TypeInfo,4);
LAB_0343b624:
    uVar5 = (*pVVar2->methodPtr)(pSVar7,pSVar8,pVVar2->method);
    if ((uVar5 & 1) != 0) {
      pSVar8 = (NONPLOOOOAG->fields)._RawMessage_k__BackingField;
      if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Application__OpenURL(pSVar8,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x333B678]
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
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
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
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_1/*""*/,StringLiteral_9679/*"OK"*/,
             StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x333BD18]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$GLANJNFACKI @ RVA 0x333BD18

void Nekki_SF2_GUI_Dialogs_WebViewDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void DGGOJPBDGJC()  [RVA 0x333BD1C]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$DGGOJPBDGJC @ RVA 0x333BD1C

/* WARNING: Removing unreachable block (ram,0x0343c030) */
/* WARNING: Removing unreachable block (ram,0x0343c060) */
/* WARNING: Removing unreachable block (ram,0x0343c07c) */

void Nekki_SF2_GUI_Dialogs_WebViewDialog__DGGOJPBDGJC
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UniWebView_ShouldCloseDelegate_o *value;
  UniWebView_MessageReceivedDelegate_o *value_00;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_String_o *scheme;
  MethodInfo *extraout_x1;
  GOLIJCLCCBA_o *pGVar6;
  System_Collections_Generic_IList_string__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  UniWebView_o **ppUVar12;
  System_Collections_Generic_IList_string__o *pSVar13;
  UniWebView_o *pUVar14;
  
  if ((DAT_04567970 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UniWebView_MessageReceivedDelegate_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UniWebView_ShouldCloseDelegate_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_IGNPLEMOFKA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_WebViewDialog_LJBOEFKHPCC__);
    DAT_04567970 = 1;
    method = extraout_x1;
  }
  ppUVar12 = &(__this->fields).APELOJBHPPJ;
  pUVar14 = *ppUVar12;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar14,(MethodInfo *)0x0);
  if (!bVar2) goto LAB_0343c044;
  pUVar14 = (__this->fields).APELOJBHPPJ;
  value = (UniWebView_ShouldCloseDelegate_o *)
          thunk_FUN_01bda818(UniWebView_ShouldCloseDelegate_TypeInfo);
  UniWebView_ShouldCloseDelegate___ctor();
  if (pUVar14 == (UniWebView_o *)0x0) {
LAB_0343c074:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UniWebView__remove_OnShouldClose(pUVar14,value,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).APELOJBHPPJ;
  value_00 = (UniWebView_MessageReceivedDelegate_o *)
             thunk_FUN_01bda818(UniWebView_MessageReceivedDelegate_TypeInfo);
  UniWebView_MessageReceivedDelegate___ctor();
  if (pUVar14 == (UniWebView_o *)0x0) goto LAB_0343c074;
  UniWebView__remove_OnMessageReceived(pUVar14,value_00,(MethodInfo *)0x0);
  pGVar6 = (__this->fields).PAAIEEFEBKK;
  if (pGVar6 == (GOLIJCLCCBA_o *)0x0) goto LAB_0343c074;
  pSVar13 = (pGVar6->fields).PPOHBBJFABG;
  if (pSVar13 != (System_Collections_Generic_IList_string__o *)0x0) {
    pSVar7 = pSVar13->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
          pVVar3 = pSVar7->vtable + *piVar10;
          goto LAB_0343bec8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pSVar13,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_0343bec8:
    plVar4 = (long *)(*pVVar3->methodPtr)(pSVar13,pVVar3->method);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0343bf38;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0343bf38:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar4 == (long *)0x0) break;
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_0343bffc;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0343bfe4;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar11 + -2) ==
              System_Collections_Generic_IEnumerator<string>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0343bf94;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_0343bf94:
      scheme = (System_String_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (*ppUVar12 == (UniWebView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UniWebView__RemoveUrlScheme(*ppUVar12,scheme,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_0343c034;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_0343bfe4:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0343c018;
    }
  }
LAB_0343bffc:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0343c018:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0343c034:
  Util__JODGPLBHHIA((UnityEngine_Component_o *)*ppUVar12,false,(MethodInfo *)0x0);
LAB_0343c044:
  *ppUVar12 = (UniWebView_o *)0x0;
  thunk_FUN_01c20e04(ppUVar12,0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x333C144]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$GKPJMHOFIOO @ RVA 0x333C144

void Nekki_SF2_GUI_Dialogs_WebViewDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x333C148]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$EJHAPHAHMHG @ RVA 0x333C148

void Nekki_SF2_GUI_Dialogs_WebViewDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  return;
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x333C14C]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$OnClose @ RVA 0x333C14C

void Nekki_SF2_GUI_Dialogs_WebViewDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  GOLIJCLCCBA_o *pGVar1;
  System_Action_o *pSVar2;
  
  pGVar1 = (__this->fields).PAAIEEFEBKK;
  if ((pGVar1 != (GOLIJCLCCBA_o *)0x0) &&
     (pSVar2 = (pGVar1->fields).MIMKJIKCPGP, pSVar2 != (System_Action_o *)0x0)) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x333C194]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$.ctor @ RVA 0x333C194

void Nekki_SF2_GUI_Dialogs_WebViewDialog___ctor
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567971 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567971 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x333C200]
// Nekki.SF2.GUI.Dialogs.WebViewDialog$$OnDestroy @ RVA 0x333C200

void Nekki_SF2_GUI_Dialogs_WebViewDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  GOLIJCLCCBA_o **ppGVar1;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    ppGVar1 = &(__this->fields).PAAIEEFEBKK;
    *ppGVar1 = (GOLIJCLCCBA_o *)0x0;
    thunk_FUN_01c20e04(ppGVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

