// Nekki.SF2.GUI.Map.RaidKey$$InitButton @ RVA 0x31B42FC

void Nekki_SF2_GUI_Map_RaidKey__InitButton(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566b9c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidKey_OnClick__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566b9c = 1;
  }
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._button;
    if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = (pUVar1->fields).m_OnClick,
       __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._button;
      if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

