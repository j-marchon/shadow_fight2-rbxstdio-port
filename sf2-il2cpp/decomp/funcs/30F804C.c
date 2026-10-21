// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OnDestroy @ RVA 0x30F804C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OnDestroy
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o **ppNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar3;
  
  if ((DAT_04566474 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GJBIHHLINEG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GKFNLJGEFOE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_LIJIBDHAMDM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566474 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  WideScreenController__remove_UpdateEvent(pSVar1,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._scroll;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
    Nekki_SF2_GUI_Menu_MenuScroll__remove_OnChanging(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar3 != (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
      Nekki_SF2_GUI_Menu_MenuScroll__remove_OnClose(pNVar3,pSVar1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(method_00);
      __this_00 = (__this->fields)._inputBlocker;
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        ppNVar2 = &Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
        *ppNVar2 = (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0;
        thunk_FUN_01c20e04(ppNVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

