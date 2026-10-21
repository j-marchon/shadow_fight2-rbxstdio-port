// Nekki.SF2.GUI.Dialogs.Raids.ChatHandleButton$$Init @ RVA 0x309A070

void Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_0456610b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton_OnClick__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456610b = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__set_State(__this,1,in_x2);
  Nekki_SF2_GUI_Dialogs_Raids_ChatHandleButton__SetUnreadedMsgCount(__this,0,in_x2);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

