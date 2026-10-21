// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$Close @ RVA 0x35400C8

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__Close
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04568aef & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_04568aef = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

