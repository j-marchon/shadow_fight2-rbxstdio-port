// Nekki.SF2.GUI.Menu.MenuEnergyPanel$$HMOFDGEDBCL @ RVA 0x344E9F0

void Nekki_SF2_GUI_Menu_MenuEnergyPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuEnergyPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568291 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuEnergyPanel_JOGNKBJCLPL__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568291 = 1;
    method = extraout_x1;
  }
  pUVar1 = (__this->fields)._dialogButton;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

