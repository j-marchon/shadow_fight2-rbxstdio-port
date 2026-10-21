// Nekki.SF2.GUI.Fight.EndFightContent$$EPEMNFNGBGG @ RVA 0x309B2EC

void Nekki_SF2_GUI_Fight_EndFightContent__EPEMNFNGBGG
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar2;
  Nekki_SF2_GUI_Fight_CurrencyReward_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar4;
  
  if ((DAT_04566114 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_EPEMNFNGBGG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566114 = 1;
    method = extraout_x1;
  }
  pLVar3 = (__this->fields)._buttonOk;
  if (pLVar3 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).BLJFLADGIJC;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).BLJFLADGIJC;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319b430;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).MEBLCDOKBAB,(MethodInfo *)0x0);
      }
      pUVar4 = (__this->fields).OPOHEPKDHPD;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields).OPOHEPKDHPD;
        if (pUVar2 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_0319b430;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (pUVar2,(__this->fields).JAFGONJHCNL,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).JMOPMNAODMP;
      if (__this_00 != (Nekki_SF2_GUI_Fight_CurrencyReward_o *)0x0) {
        LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Fight_EndFightContent__GPCOJMMLMLG(__this,method_00);
        return;
      }
    }
  }
LAB_0319b430:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

