// TypeDefIndex 2002
// Namespace: 
// [Serializable]
// public class SidePanelScroll.ScrollDragEvent : UnityEvent<PointerEventData>
// Fields:

// ===== public void .ctor()  [RVA 0x3294AE8]
// Nekki.SF2.GUI.SidePanelScroll.ScrollDragEvent$$.ctor @ RVA 0x3294AE8

void Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent___ctor
               (Nekki_SF2_GUI_SidePanelScroll_ScrollDragEvent_o *__this,MethodInfo *method)

{
  if ((DAT_04567359 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<PointerEventData>__ctor__);
    DAT_04567359 = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<PointerEventData>__ctor__);
  return;
}

