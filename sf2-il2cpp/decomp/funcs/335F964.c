// Nekki.SF2.GUI.GeneralMenu.ControlAction$$HCBAKFNPGDN @ RVA 0x335F964

void Nekki_SF2_GUI_GeneralMenu_ControlAction__HCBAKFNPGDN
               (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((uint)(__this->fields).controlEvent < 2) {
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).action;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

