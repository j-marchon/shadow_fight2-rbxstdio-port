// Nekki.SF2.GUI.Dialogs.Raids.RaidConnectionScreen$$LMBDCNPMNEB @ RVA 0x31CEE58

void Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__LMBDCNPMNEB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_o *__this,bool MDEOLMMEEDM,
               MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  LabelButton_o *pLVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  BHEDGAKGKPO_StaticFields *pBVar3;
  UnityEngine_Events_UnityEvent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
  if ((DAT_04566c92 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen_KFGOAJEAPKE__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_3856);
    FUN_01bab630(&StringLiteral_10957);
    DAT_04566c92 = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._label;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->LDIIEEOLEMM).fields.r,(pBVar3->LDIIEEOLEMM).fields.g,
                 (pBVar3->LDIIEEOLEMM).fields.b,(pBVar3->LDIIEEOLEMM).fields.a,pNVar4,
                 (pNVar4->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields)._label;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,StringLiteral_10957,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._btnCancel;
        if (pLVar1 != (LabelButton_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0);
          if (MDEOLMMEEDM) {
            Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            LabelButton__set_ButtonColor(pLVar1,5,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            LabelButton__set_Alias(pLVar1,StringLiteral_3856,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if ((pLVar1 == (LabelButton_o *)0x0) ||
               (__this_01 = (pLVar1->fields).super.super.super.m_OnClick,
               __this_01 == (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) goto LAB_032cf020;
            UnityEngine_Events_UnityEventBase__RemoveAllListeners
                      ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
            pLVar1 = (__this->fields)._btnCancel;
            if (pLVar1 == (LabelButton_o *)0x0) goto LAB_032cf020;
            __this_02 = (UnityEngine_Events_UnityEvent_o *)
                        (pLVar1->fields).super.super.super.m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_032cf020;
            UnityEngine_Events_UnityEvent__AddListener(__this_02,call,(MethodInfo *)0x0);
          }
          else {
            Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
          }
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032cf020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

