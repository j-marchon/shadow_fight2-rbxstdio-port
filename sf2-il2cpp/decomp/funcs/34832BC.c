// Nekki.SF2.GUI.Dialogs.SettingsDialog$$LCGFJKFJKJK @ RVA 0x34832BC

void Nekki_SF2_GUI_Dialogs_SettingsDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *__this_02;
  LabelButton_o *pLVar4;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((DAT_0456838d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,DNBBBGEENMM);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_GMFJLPFKNBH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_HMMCECAGIPB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_SettingsDialog_MOGHLOMBKHP__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456838d = 1;
  }
  __this_00 = (__this->fields).super._bottomStripe;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_03 = (__this->fields).BtnContainer;
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UVar6 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
      if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
        auVar1._4_8_ = 0;
        auVar1._0_4_ = UVar6.fields.y + 100.0;
        UnityEngine_Transform__set_localPosition
                  ((UnityEngine_Transform_o *)__this_03,(UnityEngine_Vector3_o)(auVar1 << 0x20),
                   (MethodInfo *)0x0);
        pLVar4 = (__this->fields).super._btnOK;
        if (pLVar4 != (LabelButton_o *)0x0) {
          pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
          pUVar3 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
            pLVar4 = (__this->fields).super._btnCancel;
            if (pLVar4 != (LabelButton_o *)0x0) {
              pUVar5 = (UnityEngine_Events_UnityEvent_o *)
                       (pLVar4->fields).super.super.super.m_OnClick;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
                pLVar4 = (__this->fields).BtnCloudSaves;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pLVar4,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (!bVar2) {
                  return;
                }
                pLVar4 = (__this->fields).BtnCloudSaves;
                if ((pLVar4 != (LabelButton_o *)0x0) &&
                   (__this_02 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pLVar4,(MethodInfo *)0x0),
                   __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
                  pLVar4 = (__this->fields).BtnCloudSaves;
                  if (pLVar4 != (LabelButton_o *)0x0) {
                    pUVar5 = (UnityEngine_Events_UnityEvent_o *)
                             (pLVar4->fields).super.super.super.m_OnClick;
                    pUVar3 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      UnityEngine_Events_UnityEvent__AddListener(pUVar5,pUVar3,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

