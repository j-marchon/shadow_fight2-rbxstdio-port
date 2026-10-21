// Nekki.SF2.GUI.Shop.SidePanel$$GCABPBPHIMA @ RVA 0x326B0F0

UnityEngine_Vector2_o
Nekki_SF2_GUI_Shop_SidePanel__GCABPBPHIMA(Nekki_SF2_GUI_Shop_SidePanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_Vector2_Fields UVar1;
  
                    /* try { // try from 0336b0f4 to 0346b0fb has its CatchHandler @ 0336b0fc */
  __this_00 = (__this->fields)._ScrollRect;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    /* catch() { ... } // from try @ 0336b00c with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b078 with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b0e0 with catch @ 0336b0fc
                       catch() { ... } // from try @ 0336b0f4 with catch @ 0336b0fc */
    UVar1 = (UnityEngine_Vector2_Fields)
            UnityEngine_UI_ScrollRect__get_normalizedPosition(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector2_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

