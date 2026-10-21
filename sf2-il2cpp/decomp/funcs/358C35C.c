// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$IHJKELCFHIE @ RVA 0x358C35C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__IHJKELCFHIE
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *IMMNELPBGIF;
  undefined4 local_24;
  
  if ((DAT_04568d53 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04568d53 = 1;
  }
  Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,2,(Il2CppObject *)0x0,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
  local_24 = 2;
  IMMNELPBGIF = (Il2CppObject *)
                thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_SettingsDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

