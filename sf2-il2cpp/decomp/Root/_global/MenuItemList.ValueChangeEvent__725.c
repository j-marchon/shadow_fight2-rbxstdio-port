// TypeDefIndex 725
// Namespace: 
// [Serializable]
// public class MenuItemList.ValueChangeEvent : UnityEvent<int>
// Fields:

// ===== public void .ctor()  [RVA 0x30465F8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemList.ValueChangeEvent$$.ctor @ RVA 0x30465F8

void Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_o *__this,MethodInfo *method
               )

{
  if ((DAT_04565dda & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>__ctor__);
    DAT_04565dda = 1;
  }
  UnityEngine_Events_UnityEvent<int>___ctor
            ((UnityEngine_Events_UnityEvent_int__o *)__this,
             Method_UnityEngine_Events_UnityEvent<int>__ctor__);
  return;
}

