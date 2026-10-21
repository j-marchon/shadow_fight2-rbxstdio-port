// Nekki.SF2.GUI.Common.TouchHandler$$OnDestroy @ RVA 0x30E0E58

void Nekki_SF2_GUI_Common_TouchHandler__OnDestroy
               (Nekki_SF2_GUI_Common_TouchHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).OMEOMGINDAD;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

