// Nekki.SF2.GUI.Dialogs.CheckTicketsDialog$$AJIKGMMOPBK @ RVA 0x33B9B4C

void Nekki_SF2_GUI_Dialogs_CheckTicketsDialog__AJIKGMMOPBK
               (Nekki_SF2_GUI_Dialogs_CheckTicketsDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04567d96 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04567d96 = 1;
  }
  local_24 = 0;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

