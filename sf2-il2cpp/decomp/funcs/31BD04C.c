// Nekki.SF2.GUI.TableViewCell$$OnSelect @ RVA 0x31BD04C

void Nekki_SF2_GUI_TableViewCell__OnSelect
               (Nekki_SF2_GUI_TableViewCell_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566bfa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566bfa = 1;
  }
  (*(__this->klass->vtable)._8_unknown.methodPtr)(__this,(__this->klass->vtable)._8_unknown.method);
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DidHighlightEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}

