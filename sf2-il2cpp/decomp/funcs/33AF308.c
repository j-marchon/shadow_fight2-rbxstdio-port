// Nekki.SF2.GUI.Dialogs.BaseDialog$$Close @ RVA 0x33AF308

void Nekki_SF2_GUI_Dialogs_BaseDialog__Close
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if ((DAT_04567d36 & 1) == 0) {
                    /* try { // try from 034af334 to 035af3ab has its CatchHandler @ 034af69c */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    DAT_04567d36 = 1;
  }
  local_24 = 1;
  uVar1 = thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,&local_24);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar1,(__this->klass->vtable)._13_OnClose.method);
  return;
}

