// TypeDefIndex 1088
// Namespace: Nekki.SF2.GUI.Common
// public class TouchHandler : Selectable
// Fields:
//   private UnityEvent OMEOMGINDAD; // 0x100

// ===== public UnityEvent get_OnTouch()  [RVA 0x30E0E28]
// Nekki.SF2.GUI.Common.TouchHandler$$get_OnTouch @ RVA 0x30E0E28

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Common_TouchHandler__get_OnTouch
          (Nekki_SF2_GUI_Common_TouchHandler_o *__this,MethodInfo *method)

{
  return (__this->fields).OMEOMGINDAD;
}


// ===== public override void OnPointerDown(PointerEventData OHNNFPGGEFK)  [RVA 0x30E0E30]
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


// ===== protected override void OnDestroy()  [RVA 0x30E0E58]
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


// ===== public void .ctor()  [RVA 0x30E0E80]
// Nekki.SF2.GUI.Common.TouchHandler$$.ctor @ RVA 0x30E0E80

void Nekki_SF2_GUI_Common_TouchHandler___ctor
               (Nekki_SF2_GUI_Common_TouchHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456639f & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Selectable_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456639f = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).OMEOMGINDAD = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).OMEOMGINDAD,__this_00);
  if ((UnityEngine_UI_Selectable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}

