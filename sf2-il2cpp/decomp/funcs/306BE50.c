// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$JGOEDIHMJLB @ RVA 0x306BE50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__JGOEDIHMJLB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  UnityEngine_Events_UnityAction_o *pUVar1;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  
  if ((DAT_04565f3b & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_BABOCPBBDJP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_NAGPFPHJOEI__);
    FUN_01bab630(&Method_TabView_KGHLJNMCILN__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04565f3b = 1;
    method = extraout_x1;
  }
  pLVar2 = (__this->fields)._closeBtn;
  IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo,method)
  ;
  System_Action<object>___ctor();
  if (pLVar2 != (LabelButton_o *)0x0) {
    SFButton__AddEventListener((SFButton_o *)pLVar2,2,IELDNEAAPBE,(MethodInfo *)0x0);
    pLVar2 = (__this->fields)._editBtn;
    if (pLVar2 != (LabelButton_o *)0x0) {
      pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
      pUVar1 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields)._joinBtn;
        if (pLVar2 != (LabelButton_o *)0x0) {
          pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
          pUVar1 = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

