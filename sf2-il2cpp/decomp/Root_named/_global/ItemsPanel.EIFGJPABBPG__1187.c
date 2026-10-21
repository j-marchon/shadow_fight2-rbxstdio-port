// TypeDefIndex 1187
// Namespace: 
// [CompilerGenerated]
// private sealed class ItemsPanel.EIFGJPABBPG
// Fields:
//   public string lastSelectedItemName; // 0x10

// ===== public void .ctor()  [RVA 0x3127CE0]
// Nekki.SF2.GUI.Shop.ItemsPanel.EIFGJPABBPG$$.ctor @ RVA 0x3127CE0

void Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG___ctor
               (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03227324 with catch @ 03227ce0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool LPCLNILHHOF(HOOAAGABMBL p_itemInfo)  [RVA 0x3127CE8]
// Nekki.SF2.GUI.Shop.ItemsPanel.EIFGJPABBPG$$LPCLNILHHOF @ RVA 0x3127CE8

bool Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG__LPCLNILHHOF
               (Nekki_SF2_GUI_Shop_ItemsPanel_EIFGJPABBPG_o *__this,HOOAAGABMBL_o *p_itemInfo,
               MethodInfo *method)

{
  bool bVar1;
  
                    /* catch() { ... } // from try @ 032277c8 with catch @ 03227cec */
  if (p_itemInfo != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 03227aec with catch @ 03227cf0 */
                    /* catch() { ... } // from try @ 03227970 with catch @ 03227cf4 */
                    /* catch() { ... } // from try @ 032278d8 with catch @ 03227cf8 */
                    /* catch() { ... } // from try @ 03227944 with catch @ 03227cfc */
                    /* catch() { ... } // from try @ 032278a0 with catch @ 03227d00 */
                    /* catch() { ... } // from try @ 03227878 with catch @ 03227d04 */
    bVar1 = System_String__op_Equality
                      ((p_itemInfo->fields)._COIPKAKHDFP_k__BackingField,
                       (__this->fields).lastSelectedItemName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

