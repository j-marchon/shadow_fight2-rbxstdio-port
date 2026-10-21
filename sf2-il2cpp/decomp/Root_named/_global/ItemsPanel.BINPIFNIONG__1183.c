// TypeDefIndex 1183
// Namespace: 
// public class ItemsPanel.BINPIFNIONG : UnityEvent<TableViewCell>
// Fields:

// ===== public void .ctor()  [RVA 0x31277D0]
// Nekki.SF2.GUI.Shop.ItemsPanel.BINPIFNIONG$$.ctor @ RVA 0x31277D0

void Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this,MethodInfo *method)

{
                    /* try { // try from 032277dc to 033277e7 has its CatchHandler @ 03227cd0 */
  if ((DAT_04566666 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>__ctor__);
    DAT_04566666 = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<TableViewCell>__ctor__);
  return;
}

