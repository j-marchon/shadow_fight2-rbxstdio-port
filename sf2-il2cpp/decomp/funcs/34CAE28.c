// Nekki.SF2.GUI.BaseScrollItem$$OnPointerClick @ RVA 0x34CAE28

void Nekki_SF2_GUI_BaseScrollItem__OnPointerClick
               (Nekki_SF2_GUI_BaseScrollItem_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  UnityEngine_UI_Button__OnPointerClick
            ((UnityEngine_UI_Button_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._clickCount_k__BackingField < 2) {
      return;
    }
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields)._HCMPFAOMMHO_k__BackingField;
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

