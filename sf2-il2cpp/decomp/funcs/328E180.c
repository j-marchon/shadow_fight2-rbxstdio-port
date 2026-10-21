// Nekki.SF2.GUI.Dialogs.LotteryDialog$$GKPJMHOFIOO @ RVA 0x328E180

void Nekki_SF2_GUI_Dialogs_LotteryDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  LabelButton_o *pLVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  
  if ((DAT_045672fb & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_BPBPDDAAFAD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_LEPLABNPMEL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_ODLKDPJMNKD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045672fb = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__CHPPPEONOME(__this,method);
  pLVar3 = (__this->fields).BtnSpin;
  if (pLVar3 != (LabelButton_o *)0x0) {
    pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
    pUVar2 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
      pLVar3 = (__this->fields).BtnSpinCurrency;
      if (pLVar3 != (LabelButton_o *)0x0) {
        pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pLVar3->fields).super.super.super.m_OnClick;
        pUVar2 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
          pLVar3 = (__this->fields).BtnSpinAD;
          if (pLVar3 != (LabelButton_o *)0x0) {
            bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                              ((UnityEngine_Behaviour_o *)pLVar3,(MethodInfo *)0x0);
            method_00 = extraout_x1_00;
            if (!bVar1) {
LAB_0338e2c4:
              Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,method_00);
              Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_01);
              Nekki_SF2_GUI_Dialogs_LotteryDialog__GIDNPADMKMG(__this,method_02);
              return;
            }
            pLVar3 = (__this->fields).BtnSpinAD;
            if (pLVar3 != (LabelButton_o *)0x0) {
              pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                       (pLVar3->fields).super.super.super.m_OnClick;
              pUVar2 = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar2,(MethodInfo *)0x0);
                method_00 = extraout_x1_01;
                goto LAB_0338e2c4;
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

