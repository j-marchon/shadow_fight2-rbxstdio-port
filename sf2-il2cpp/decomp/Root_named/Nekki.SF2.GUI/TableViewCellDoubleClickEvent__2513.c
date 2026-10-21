// TypeDefIndex 2513
// Namespace: Nekki.SF2.GUI
// [Serializable]
// public class TableViewCellDoubleClickEvent : UnityEvent<int>
// Fields:

// ===== public void .ctor()  [RVA 0x338DB48]
// Nekki.SF2.GUI.TableViewCellDoubleClickEvent$$.ctor @ RVA 0x338DB48

void Nekki_SF2_GUI_TableViewCellDoubleClickEvent___ctor
               (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *__this,MethodInfo *method)

{
  if ((DAT_04567bf9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>__ctor__);
    DAT_04567bf9 = 1;
  }
  UnityEngine_Events_UnityEvent<int>___ctor
            ((UnityEngine_Events_UnityEvent_int__o *)__this,
             Method_UnityEngine_Events_UnityEvent<int>__ctor__);
  return;
}

