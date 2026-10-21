// Nekki.SF2.GUI.Shop.SidePanel$$TryGetSidePanelScroll @ RVA 0x326BA9C

Nekki_SF2_GUI_SidePanelScroll_o *
Nekki_SF2_GUI_Shop_SidePanel__TryGetSidePanelScroll
          (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_SidePanelScroll_o *pNVar2;
  
                    /* try { // try from 0336baa4 to 0346bd17 has its CatchHandler @ 0336baa4
                       catch() { ... } // from try @ 0336baa4 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336be04 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336bf68 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336bf70 with catch @ 0336baa4
                       catch() { ... } // from try @ 0336c03c with catch @ 0336baa4 */
  if ((DAT_045671e5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_SidePanelScroll_TypeInfo);
    DAT_045671e5 = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_SidePanelScroll_o *)(__this->fields)._ScrollRect;
  if (pNVar2 != (Nekki_SF2_GUI_SidePanelScroll_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_SidePanelScroll_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (((UnityEngine_UI_ScrollRect_c *)pNVar2->klass)->_2).naturalAligment) {
      if ((((UnityEngine_UI_ScrollRect_c *)pNVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_SidePanelScroll_TypeInfo) {
        return pNVar2;
      }
      return (Nekki_SF2_GUI_SidePanelScroll_o *)0x0;
    }
  }
  return (Nekki_SF2_GUI_SidePanelScroll_o *)0x0;
}

