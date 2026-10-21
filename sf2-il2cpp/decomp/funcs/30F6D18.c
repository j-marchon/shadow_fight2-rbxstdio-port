// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GJBIHHLINEG @ RVA 0x30F6D18

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GJBIHHLINEG
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *JNPCENEINON;
  
  if ((DAT_04566465 & 1) == 0) {
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04566465 = 1;
    method = extraout_x1;
  }
  JNPCENEINON = (__this->fields)._renderRoot;
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(WideScreenController_TypeInfo,method);
  }
  WideScreenController__RunCustom(JNPCENEINON,(MethodInfo *)0x0);
  return;
}

