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

