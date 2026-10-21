// Nekki.SF2.GUI.TableViewCell$$OnSubmit @ RVA 0x31BD0B8

void Nekki_SF2_GUI_TableViewCell__OnSubmit
               (Nekki_SF2_GUI_TableViewCell_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566bfb & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566bfb = 1;
  }
  (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
            (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}

