// Nekki.SF2.GUI.Common.TouchHandler$$OnPointerDown @ RVA 0x30E0E30

void Nekki_SF2_GUI_Common_TouchHandler__OnPointerDown
               (Nekki_SF2_GUI_Common_TouchHandler_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  UnityEngine_UI_Selectable__OnPointerDown
            ((UnityEngine_UI_Selectable_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  __this_00 = (__this->fields).OMEOMGINDAD;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

