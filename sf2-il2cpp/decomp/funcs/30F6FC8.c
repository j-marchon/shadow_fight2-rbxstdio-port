// Nekki.SF2.GUI.Dialogs.NotificationsGame$$POIOFMEMHBP @ RVA 0x30F6FC8

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_NotificationsGame__POIOFMEMHBP
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar2;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  MethodInfo *method_01;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_04;
  float fVar5;
  UnityEngine_Vector3_o value;
  System_String_o *local_30;
  float local_24;
  
  if ((DAT_04566475 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_BCGEIDJJAHG__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566475 = 1;
  }
  local_24 = 0.0;
  local_30 = (System_String_o *)0x0;
  if ((__this->fields).BDDIHIFJADE != false) {
    (__this->fields).ONFGAANLDKH = true;
    Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(__this,false,in_x2);
    return;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__GBHBDMMKPLO(__this,(__this->fields).NMBDHGCKNII,in_x2);
  pSVar4 = (__this->fields).FDLMOCMIBDJ;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MGNPHCAAEIO__FDEPCEJJGLO(pSVar4,&local_24,&local_30,(MethodInfo *)0x0);
  if ((__this->fields).EBAEBONPCMI != 1.0) {
    pNVar2 = (__this->fields)._image;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_031f72a4;
    fVar5 = (__this->fields).EBAEBONPCMI;
    value.fields.y = fVar5 * 1.86;
    value.fields.x = fVar5 * local_24 * 1.86;
    value.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._image;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar2,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._image;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).CNMMJHJNNAJ,(MethodInfo *)0x0);
    if (bVar1) {
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    }
    else {
      pSVar4 = (__this->fields).CNMMJHJNNAJ;
    }
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier = pSVar4;
      thunk_FUN_01c20e04(&(pNVar2->fields).super.super.m_PixelsPerUnitMultiplier);
      pNVar2 = (__this->fields)._image;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar2,local_30,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._label;
        if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias
                    (__this_01,(__this->fields).PMHMOJGEAAN,(MethodInfo *)0x0);
          if (DAT_0456647e == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
            DAT_0456647e = '\x01';
          }
          if ((Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->
               _AFMLJPEEJGB_k__BackingField != false) ||
             (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).HLOPBFJEDLK,(MethodInfo *)0x0),
             bVar1)) {
            bVar1 = false;
          }
          else {
            bVar1 = (__this->fields).BLNMHHKCCOD != (System_Action_object__o *)0x0;
          }
          pLVar3 = (__this->fields)._button;
          if ((pLVar3 != (LabelButton_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pLVar3,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_02,bVar1,(MethodInfo *)0x0);
            pLVar3 = (__this->fields)._button;
            if (pLVar3 != (LabelButton_o *)0x0) {
              method_01 = (MethodInfo *)0x0;
              UnityEngine_UI_Selectable__set_interactable
                        ((UnityEngine_UI_Selectable_o *)pLVar3,bVar1,(MethodInfo *)0x0);
              if (!bVar1) {
                method_00 = extraout_x1;
                if ((__this->fields).HELEHEHDHMO == false) {
                  Nekki_SF2_GUI_Dialogs_NotificationsGame__LFLEKGKEMDG(__this,false,method_01);
                  method_00 = extraout_x1_01;
                }
LAB_031f727c:
                Nekki_SF2_GUI_Dialogs_NotificationsGame__BEDNMMNONLC(__this,method_00);
                return;
              }
              pLVar3 = (__this->fields)._button;
              if (pLVar3 != (LabelButton_o *)0x0) {
                LabelButton__set_ButtonColor(pLVar3,(__this->fields).HFJAAPFLDEO,(MethodInfo *)0x0);
                pLVar3 = (__this->fields)._button;
                if (pLVar3 != (LabelButton_o *)0x0) {
                  LabelButton__set_Alias(pLVar3,(__this->fields).HLOPBFJEDLK,(MethodInfo *)0x0);
                  pLVar3 = (__this->fields)._button;
                    /* try { // try from 031f7204 to 032f72cb has its CatchHandler @ 031f7204
                       catch() { ... } // from try @ 031f7204 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7510 with catch @ 031f7204
                       catch() { ... } // from try @ 031f754c with catch @ 031f7204
                       catch() { ... } // from try @ 031f75b0 with catch @ 031f7204
                       catch() { ... } // from try @ 031f75e0 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7710 with catch @ 031f7204
                       catch() { ... } // from try @ 031f7758 with catch @ 031f7204
                       catch() { ... } // from try @ 031f77c8 with catch @ 031f7204 */
                  if ((pLVar3 != (LabelButton_o *)0x0) &&
                     (__this_03 = (pLVar3->fields).super.super.super.m_OnClick,
                     __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
                    pLVar3 = (__this->fields)._button;
                    if (pLVar3 != (LabelButton_o *)0x0) {
                      __this_04 = (UnityEngine_Events_UnityEvent_o *)
                                  (pLVar3->fields).super.super.super.m_OnClick;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0)
                        ;
                        method_00 = extraout_x1_00;
                        goto LAB_031f727c;
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
  }
LAB_031f72a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

