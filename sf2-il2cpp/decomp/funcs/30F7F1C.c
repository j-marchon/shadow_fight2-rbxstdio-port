// Nekki.SF2.GUI.Dialogs.NotificationsGame$$CloseNotifications @ RVA 0x30F7F1C

void Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar2;
  
  if ((DAT_04566473 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566473 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_Dialogs_NotificationsGame_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).BDDIHIFJADE != false) {
      Nekki_SF2_GUI_Dialogs_NotificationsGame__OHFPFJBPBAD(pNVar2,false,method_00);
      return;
    }
  }
  return;
}

