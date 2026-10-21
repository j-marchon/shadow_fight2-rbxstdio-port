// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidCell$$Init @ RVA 0x313D00C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this,
               GEKCMGLDMEE_o *DKMMBMBMJBO,Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_0456673d & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_OnClick__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_3442);
    FUN_01bab630(&StringLiteral_10927);
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456673d = 1;
  }
  pNVar4 = (__this->fields)._icon;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(undefined1 *)&(pNVar4->fields)._SpriteName = 1;
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = pSVar1;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier);
    pNVar2 = (__this->fields)._name;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__Clear(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._name;
      if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                   (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                   (pNVar2->klass->vtable)._23_set_color.method);
        pNVar4 = (__this->fields)._danRestrictionIcon;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar4,StringLiteral_10927,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._danRestrictionLabel;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                       (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar2,
                       (pNVar2->klass->vtable)._23_set_color.method);
            pNVar2 = (__this->fields)._danRestrictionLabel;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              method_00 = (pNVar2->klass->vtable)._75_set_text.method;
              (*(pNVar2->klass->vtable)._75_set_text.methodPtr)(pNVar2,StringLiteral_1567);
              if (DKMMBMBMJBO != (GEKCMGLDMEE_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__ONFCBLFMGHN
                          (__this,(DKMMBMBMJBO->fields).CCJJPOBJFIF,method_00);
                (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
                thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
                __this_00 = (__this->fields).super.super.m_OnClick;
                if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
                  UnityEngine_Events_UnityEventBase__RemoveAllListeners
                            ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
                  __this_01 = (UnityEngine_Events_UnityEvent_o *)
                              (__this->fields).super.super.m_OnClick;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                    pNVar4 = (__this->fields)._icon;
                    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                      pSVar1 = System_String__Concat
                                         (StringLiteral_3442,(pNVar4->fields)._TexturePath,
                                          (MethodInfo *)0x0);
                      UnityEngine_Object__set_name
                                ((UnityEngine_Object_o *)__this,pSVar1,(MethodInfo *)0x0);
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

