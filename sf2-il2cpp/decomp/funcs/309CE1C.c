// Nekki.SF2.GUI.Fight.EndFightContent$$OnDestroy @ RVA 0x309CE1C

void Nekki_SF2_GUI_Fight_EndFightContent__OnDestroy
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar1;
  LabelButton_o *pLVar2;
  
  if ((DAT_04566122 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    DAT_04566122 = 1;
  }
  pLVar2 = (__this->fields)._buttonOk;
  if ((pLVar2 != (LabelButton_o *)0x0) &&
     (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
     pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
    pLVar2 = (__this->fields)._buttonRetry;
    if ((pLVar2 != (LabelButton_o *)0x0) &&
       (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
       pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
      pLVar2 = (__this->fields)._buttonShop;
      if ((pLVar2 != (LabelButton_o *)0x0) &&
         (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
         pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
        pLVar2 = (__this->fields)._buttonVideoAD;
        if ((pLVar2 != (LabelButton_o *)0x0) &&
           (pUVar1 = (pLVar2->fields).super.super.super.m_OnClick,
           pUVar1 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)pUVar1,(MethodInfo *)0x0);
          if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          BBBBKBBFNOG__NDNPGAKJLHM((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

