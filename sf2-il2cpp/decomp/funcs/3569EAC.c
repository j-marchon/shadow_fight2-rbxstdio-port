// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayerScreen$$IDLCAAOONHG @ RVA 0x3569EAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen__IDLCAAOONHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_o *__this,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568c1e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayerScreen_OFAOOGMDICD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_11956);
    DAT_04568c1e = 1;
  }
  pLVar1 = (__this->fields)._back;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar1,StringLiteral_11956,(MethodInfo *)0x0);
    pLVar1 = (__this->fields)._back;
    if (pLVar1 != (LabelButton_o *)0x0) {
      LabelButton__set_ButtonColor(pLVar1,0,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._back;
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__RemoveAllEventListener((SFButton_o *)pLVar1,(MethodInfo *)0x0);
        pLVar1 = (__this->fields)._back;
        if (pLVar1 != (LabelButton_o *)0x0) {
          __this_00 = (UnityEngine_Events_UnityEvent_o *)
                      (pLVar1->fields).super.super.super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

