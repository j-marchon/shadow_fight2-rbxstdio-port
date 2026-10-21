// TypeDefIndex 1993
// Namespace: Nekki.SF2.GUI.Dialogs
// public class ScrollDialogButton : ScrollDialogElement
// Fields:
//   private LabelAlias _text; // 0x20
//   private Button _button; // 0x28
//   private string BPOCMBDOBOC; // 0x30
//   private float KEBBGENKNPN; // 0x38
//   private string EINOLPHENJI; // 0x40
//   private IEnumerator CGBIOLDFDNK; // 0x48

// ===== private IEnumerator NFPFHEBMNGO()  [RVA 0x3292038]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$NFPFHEBMNGO @ RVA 0x3292038

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_ScrollDialogButton__NFPFHEBMNGO
          (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456732f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_TypeInfo);
    DAT_0456732f = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HGJNEFFPGDG_TypeInfo,
                                 method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void Init(NBLEEDEAPHB NOLAOGFOPJG)  [RVA 0x32920CC]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$Init @ RVA 0x32920CC

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__Init
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,NBLEEDEAPHB_o *NOLAOGFOPJG,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  System_String_o **ppSVar4;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  
  if ((DAT_04567330 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ScrollDialogButton_HBJOIOKGNKP__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567330 = 1;
  }
  if (NOLAOGFOPJG != (NBLEEDEAPHB_o *)0x0) {
    (__this->fields).BPOCMBDOBOC = (NOLAOGFOPJG->fields).DKLALAAPKNG;
    thunk_FUN_01c20e04();
    ppSVar4 = &(__this->fields).EINOLPHENJI;
    *ppSVar4 = (NOLAOGFOPJG->fields).ABCHAOKFLGL;
    thunk_FUN_01c20e04(ppSVar4);
    pNVar1 = (__this->fields)._text;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.r,
                 (NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.g,
                 (NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.b,
                 (NOLAOGFOPJG->fields).ONNNBMCAJMN.fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._text;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pNVar1,1,(pNVar1->klass->vtable)._25_set_raycastTarget.method);
        fVar5 = (NOLAOGFOPJG->fields).LIDCBOLHIEO;
        pNVar1 = (__this->fields)._text;
        (__this->fields).KEBBGENKNPN = fVar5;
        if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
          if (UVar6.fields.y < fVar5) {
            pNVar1 = (__this->fields)._text;
            if (pNVar1 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03392238;
            pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar1,(MethodInfo *)0x0);
            UnityEngine_TransformExtensions__SetSizeDeltaY
                      (pUVar2,(NOLAOGFOPJG->fields).LIDCBOLHIEO,(MethodInfo *)0x0);
          }
          pUVar3 = (__this->fields)._button;
          if ((pUVar3 != (UnityEngine_UI_Button_o *)0x0) &&
             (__this_00 = (pUVar3->fields).m_OnClick,
             __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._button;
            if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
              __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03392234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(__this->klass->vtable)._4_UpdateHeightOrLocalization.methodPtr)
                          (__this,(__this->klass->vtable)._4_UpdateHeightOrLocalization.method);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03392238:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x329223C]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$.ctor @ RVA 0x329223C

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton___ctor
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_ScrollDialogElement___ctor
            ((Nekki_SF2_GUI_Dialogs_ScrollDialogElement_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void MLDPDENJCPI()  [RVA 0x3292244]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$MLDPDENJCPI @ RVA 0x3292244

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__MLDPDENJCPI
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567331 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567331 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).CGBIOLDFDNK;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_033922dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_033922dc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public override void UpdateHeightOrLocalization()  [RVA 0x3292308]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$UpdateHeightOrLocalization @ RVA 0x3292308

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__UpdateHeightOrLocalization
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar9;
  Il2CppClass *pIVar10;
  PBAKFOBIHEG_c *pPVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_Collections_IEnumerator_o **ppSVar14;
  System_String_o *pSVar15;
  undefined8 uVar16;
  
  if ((DAT_04567332 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_2458/*"<strike offsety=-1 textcolor=1 >"*/);
    FUN_01bab630(&StringLiteral_2184/*"</strike>"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567332 = 1;
  }
  pNVar3 = (__this->fields)._text;
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._text;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    pSVar15 = (__this->fields).EINOLPHENJI;
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar5 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar4->klass;
      uVar16 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar10->vtable + (*piVar13 + 0xc);
            goto LAB_03392480;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03392480:
      pSVar15 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,pSVar15,uVar16,pVVar6->method);
      pSVar15 = System_String__Concat
                          (StringLiteral_2458/*"<strike offsety=-1 textcolor=1 >"*/,pSVar15,StringLiteral_2184/*"</strike>"*/,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                  (pNVar3,pSVar15,(pNVar3->klass->vtable)._75_set_text.method);
        Nekki_SF2_GUI_Dialogs_ScrollDialogButton__MLDPDENJCPI(__this,method_00);
        pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
        pSVar8 = Nekki_SF2_GUI_Dialogs_ScrollDialogButton__NFPFHEBMNGO(__this,method_01);
        if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
          pPVar11 = pPVar7->klass;
          uVar2._0_1_ = (pPVar11->_2).rank;
          uVar2._1_1_ = (pPVar11->_2).minimumAlignment;
          uVar12 = (ulong)uVar2;
          if (uVar12 != 0) {
            piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar6 = pPVar11->vtable + *piVar13;
                goto LAB_03392540;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_03392540:
          pSVar8 = (System_Collections_IEnumerator_o *)
                   (*pVVar6->methodPtr)(pPVar7,pSVar8,1,pVVar6->method);
          ppSVar14 = &(__this->fields).CGBIOLDFDNK;
          *ppSVar14 = pSVar8;
          thunk_FUN_01c20e04(ppSVar14,pSVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HBJOIOKGNKP()  [RVA 0x3292578]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$HBJOIOKGNKP @ RVA 0x3292578

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__HBJOIOKGNKP
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_String_o *url;
  
  if ((DAT_04567333 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_04567333 = 1;
    method = extraout_x1;
  }
  url = (__this->fields).BPOCMBDOBOC;
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x32925D4]
// Nekki.SF2.GUI.Dialogs.ScrollDialogButton$$OnDestroy @ RVA 0x32925D4

void Nekki_SF2_GUI_Dialogs_ScrollDialogButton__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ScrollDialogButton_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04567331 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567331 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).CGBIOLDFDNK;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_033922dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_033922dc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

