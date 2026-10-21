// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$OCAPCHIKABJ @ RVA 0x347C400

void Nekki_SF2_GUI_Dialogs_ItemSetDialog__OCAPCHIKABJ
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04568359 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04568359 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

