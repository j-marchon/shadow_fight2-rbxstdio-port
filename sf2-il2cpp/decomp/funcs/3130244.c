// Nekki.SF2.GUI.Fight.EndPvpFightContent$$DNADIJHIICK @ RVA 0x3130244

void Nekki_SF2_GUI_Fight_EndPvpFightContent__DNADIJHIICK
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar3;
  Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *pLVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  
  if ((DAT_045666c3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndPvpFightContent_DNADIJHIICK__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045666c3 = 1;
    method = extraout_x1;
  }
  pLVar4 = (__this->fields)._buttonExit;
  if (pLVar4 != (LabelButton_o *)0x0) {
    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
    pUVar2 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
      pLVar4 = (__this->fields)._buttonReplay;
      if (pLVar4 != (LabelButton_o *)0x0) {
        pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pLVar4->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar2,(MethodInfo *)0x0);
          pUVar6 = (__this->fields).BLJFLADGIJC;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                     (__this->fields).BLJFLADGIJC;
            if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
            goto LAB_032303bc;
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar3,(__this->fields).MEBLCDOKBAB,(MethodInfo *)0x0);
          }
          pUVar6 = (__this->fields).OPOHEPKDHPD;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pUVar3 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                     (__this->fields).OPOHEPKDHPD;
            if (pUVar3 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
            goto LAB_032303bc;
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar3,(__this->fields).JAFGONJHCNL,(MethodInfo *)0x0);
          }
          __this_00 = (__this->fields).AAJALAEDAAG;
          if (__this_00 != (Nekki_SF2_GUI_Fight_ItemRewardHardmode_o *)0x0) {
            LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Fight_EndPvpFightContent__GPCOJMMLMLG(__this,method_00);
            return;
          }
        }
      }
    }
  }
LAB_032303bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

