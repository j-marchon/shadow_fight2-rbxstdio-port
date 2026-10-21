// Nekki.SF2.GUI.Dialogs.SettingsCloudDialog$$BBKLOEFMHLE @ RVA 0x312DD58

void Nekki_SF2_GUI_Dialogs_SettingsCloudDialog__BBKLOEFMHLE
               (Nekki_SF2_GUI_Dialogs_SettingsCloudDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_045666a4 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_045666a4 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

