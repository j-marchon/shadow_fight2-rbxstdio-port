// Nekki.SF2.GUI.Dialogs.NotificationsGame$$OnBackKeyClicked @ RVA 0x30F7FC8

void Nekki_SF2_GUI_Dialogs_NotificationsGame__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_EscapeClickHidesNotification
                    ((MethodInfo *)__this);
  if (bVar1) {
    Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,false,method);
    return;
  }
  return;
}

