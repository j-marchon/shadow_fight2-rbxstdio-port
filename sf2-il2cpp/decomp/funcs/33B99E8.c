// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$OnDestroy @ RVA 0x33B99E8

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  LabelButton_o *pLVar2;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pLVar2 = (__this->fields).BtnQuit;
  if ((pLVar2 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields).BtnFight;
    if ((pLVar2 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).BtnStore;
      if ((pLVar2 != (LabelButton_o *)0x0) &&
         (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
         pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

