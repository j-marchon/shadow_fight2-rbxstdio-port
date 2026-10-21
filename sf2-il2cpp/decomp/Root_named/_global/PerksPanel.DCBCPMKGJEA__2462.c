// TypeDefIndex 2462
// Namespace: 
// public class PerksPanel.DCBCPMKGJEA : UnityEvent<bool, bool>
// Fields:

// ===== public void .ctor()  [RVA 0x336FD5C]
// Nekki.SF2.GUI.Shop.PerksPanel.DCBCPMKGJEA$$.ctor @ RVA 0x336FD5C

void Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA___ctor
               (Nekki_SF2_GUI_Shop_PerksPanel_DCBCPMKGJEA_o *__this,MethodInfo *method)

{
  if ((DAT_04567b10 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool,_bool>__ctor__);
    DAT_04567b10 = 1;
  }
  UnityEngine_Events_UnityEvent<bool,_bool>___ctor
            ((UnityEngine_Events_UnityEvent_bool__bool__o *)__this,
             Method_UnityEngine_Events_UnityEvent<bool,_bool>__ctor__);
  return;
}

