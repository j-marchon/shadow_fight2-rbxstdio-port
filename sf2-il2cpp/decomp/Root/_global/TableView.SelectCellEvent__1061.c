// TypeDefIndex 1061
// Namespace: 
// [Serializable]
// public class TableView.SelectCellEvent : UnityEvent<TableViewCell>
// Fields:

// ===== public void .ctor()  [RVA 0x30DAAD8]
// Nekki.SF2.GUI.TableView.SelectCellEvent$$.ctor @ RVA 0x30DAAD8

void Nekki_SF2_GUI_TableView_SelectCellEvent___ctor
               (Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this,MethodInfo *method)

{
  if ((DAT_04566356 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>__ctor__);
    DAT_04566356 = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<TableViewCell>__ctor__);
  return;
}

