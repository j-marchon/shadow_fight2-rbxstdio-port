// Nekki.SF2.GUI.Shop.SidePanel$$CCPABLFBFFA @ RVA 0x326B0B8

void Nekki_SF2_GUI_Shop_SidePanel__CCPABLFBFFA
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).IDMFMIPALLP;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
                    /* catch() { ... } // from try @ 0336b0b0 with catch @ 0336b0d8 */
                    /* try { // try from 0336b0e0 to 0346b0e7 has its CatchHandler @ 0336b0fc */
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
                    /* try { // try from 0336b0e8 to 0346b0f3 has its CatchHandler @ 0336aad8 */
  return;
}

