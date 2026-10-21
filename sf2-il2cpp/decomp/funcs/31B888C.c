// Nekki.SF2.GUI.Map.MapButtonViewBase$$Init @ RVA 0x31B888C

void Nekki_SF2_GUI_Map_MapButtonViewBase__Init
               (Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar3;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar4;
  
  if ((DAT_04566bcd & 1) == 0) {
                    /* try { // try from 032b88a8 to 033b88af has its CatchHandler @ 032b8cb0 */
    FUN_01bab630(&
                 Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                );
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b88bc to 033b88bf has its CatchHandler @ 032b8ca0 */
    DAT_04566bcd = 1;
  }
  pNVar3 = (__this->fields)._hintButton;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (__this_00 = (pNVar3->fields).super.super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._hintButton;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(pNVar3->fields).super.super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 032b88f8 to 033b8933 has its CatchHandler @ 032b8cb8 */
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._hintButton;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          (pNVar3->fields).super.FlashingImage = (__this->fields)._hintFlashing;
          thunk_FUN_01c20e04(&(pNVar3->fields).super.FlashingImage);
                    /* try { // try from 032b893c to 033b893f has its CatchHandler @ 032b8ca8 */
          pNVar3 = (__this->fields)._hintButton;
          if (pNVar3 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            SFButton__set_IsFlashing((SFButton_o *)pNVar3,false,(MethodInfo *)0x0);
            __this_01 = (__this->fields)._hintRoot;
            if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Map_MapButtonViewBase__BGOAPKAMKOK(__this,method_00);
                    /* try { // try from 032b8978 to 033b899f has its CatchHandler @ 032b8cb4 */
              pUVar1 = (__this->fields)._keyPanel1;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                         UnityEngine_GameObject__GetComponentInChildren<object>
                                   (pUVar1,
                                    Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                                   );
                ppUVar4 = &(__this->fields).EGCJJLLHGHM;
                *ppUVar4 = pUVar2;
                thunk_FUN_01c20e04(ppUVar4,pUVar2);
                pUVar1 = (__this->fields)._keyPanel2;
                if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                           UnityEngine_GameObject__GetComponentInChildren<object>
                                     (pUVar1,
                                      Method_UnityEngine_GameObject_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                                     );
                  ppUVar4 = &(__this->fields).FHNILHOGNFF;
                    /* try { // try from 032b89b4 to 033b89b7 has its CatchHandler @ 032b8c94 */
                  *ppUVar4 = pUVar2;
                  thunk_FUN_01c20e04(ppUVar4,pUVar2);
                  __this_02 = (__this->fields)._hintRootCanvasGroup;
                  if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
                    UnityEngine_CanvasGroup__set_alpha(__this_02,0.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

