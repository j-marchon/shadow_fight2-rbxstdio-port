// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$Init @ RVA 0x3199BA0

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_o *__this,int32_t ACCIHBHMFPN,
               System_String_o *CJNHFNHJHPE,bool BDMNPNHEAEC,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  System_String_o *pSVar3;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  SFButton_o *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566a98 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell_LHHLFBBBJLD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04566a98 = 1;
  }
  pNVar2 = (__this->fields)._value;
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    if (BDMNPNHEAEC) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      method_00 = extraout_x1;
    }
    else {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,CJNHFNHJHPE,(pNVar2->klass->vtable)._75_set_text.method);
      method_00 = extraout_x1_00;
    }
    pNVar2 = (__this->fields)._label;
    pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__BLFMANONEBE(ACCIHBHMFPN,method_00);
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,pSVar3,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._image;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        uVar1 = StringLiteral_14092._4_4_;
        (pNVar4->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14092;
        (pNVar4->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
        thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
        pNVar4 = (__this->fields)._image;
        pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__HHKGCCCAAAE
                           (ACCIHBHMFPN,method_01);
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,pSVar3,(MethodInfo *)0x0);
          pSVar5 = (__this->fields)._hintButton;
          if ((pSVar5 != (SFButton_o *)0x0) &&
             (__this_00 = (pSVar5->fields).super.m_OnClick,
             __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
            pSVar5 = (__this->fields)._hintButton;
            if (pSVar5 != (SFButton_o *)0x0) {
              __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar5->fields).super.m_OnClick;
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                pSVar5 = (__this->fields)._hintButton;
                if (pSVar5 != (SFButton_o *)0x0) {
                  UnityEngine_UI_Selectable__set_interactable
                            ((UnityEngine_UI_Selectable_o *)pSVar5,true,(MethodInfo *)0x0);
                  return;
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

