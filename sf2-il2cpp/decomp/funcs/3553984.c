// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesCell$$ReInit @ RVA 0x3553984

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ReInit
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  System_Action_o *pSVar1;
  SFButton_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568b56 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_KGNBJLLJHOC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_NPODNPOEIJD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568b56 = 1;
  }
  pSVar2 = (__this->fields)._nameButton;
  (__this->fields).AOIPPGELMBD = 0;
  (__this->fields).FNDKDKKMFGN = 0;
  if ((pSVar2 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar2->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._nameButton;
    if (pSVar2 != (SFButton_o *)0x0) {
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar2->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._points;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_TextPic__remove_OnBoundsUpdated
                    ((Nekki_SF2_GUI_TextPic_o *)pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._points;
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_TextPic__add_OnBoundsUpdated
                      ((Nekki_SF2_GUI_TextPic_o *)pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

