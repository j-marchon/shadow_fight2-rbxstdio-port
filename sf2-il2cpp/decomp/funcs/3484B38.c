// Nekki.SF2.GUI.Dialogs.SettingsDialog$$.ctor @ RVA 0x3484B38

void Nekki_SF2_GUI_Dialogs_SettingsDialog___ctor
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456839d & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_0456839d = 1;
    method = extraout_x1;
  }
  (__this->fields).NLBHDJMJDCE = -1;
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).LIFKALBPENI = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).LIFKALBPENI,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

