// TypeDefIndex 2247
// Namespace: Nekki.SF2.GUI
// [Serializable]
// public class TableViewCellDidSelectEvent : UnityEvent<int>
// Fields:

// ===== public void .ctor()  [RVA 0x32FC694]
// Nekki.SF2.GUI.TableViewCellDidSelectEvent$$.ctor @ RVA 0x32FC694

void Nekki_SF2_GUI_TableViewCellDidSelectEvent___ctor
               (Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *__this,MethodInfo *method)

{
  if ((DAT_045676ea & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>__ctor__);
    DAT_045676ea = 1;
  }
  UnityEngine_Events_UnityEvent<int>___ctor
            ((UnityEngine_Events_UnityEvent_int__o *)__this,
             Method_UnityEngine_Events_UnityEvent<int>__ctor__);
  return;
}

