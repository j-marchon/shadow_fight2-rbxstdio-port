// Nekki.SF2.GUI.Shop.ParameterScrollItem$$.ctor @ RVA 0x3031758

void Nekki_SF2_GUI_Shop_ParameterScrollItem___ctor
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031316e8 with catch @ 03131758
                        */
                    /* try { // try from 03131770 to 03231773 has its CatchHandler @ 03131780 */
  if ((DAT_04565d05 & 1) == 0) {
                    /* catch() { ... } // from try @ 03131770 with catch @ 03131780 */
    FUN_01bab630(&StringLiteral_3209);
    DAT_04565d05 = 1;
  }
                    /* try { // try from 0313178c to 03231793 has its CatchHandler @ 031317a8 */
                    /* try { // try from 03131794 to 0323179f has its CatchHandler @ 03131634 */
  (__this->fields).ONONPELCDGE = StringLiteral_3209;
  thunk_FUN_01c20e04(&(__this->fields).ONONPELCDGE);
                    /* try { // try from 031317a0 to 032317a7 has its CatchHandler @ 031317a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313178c with catch @ 031317a8
                       catch(type#2 @ 00000000) { ... } // from try @ 031317a0 with catch @ 031317a8
                        */
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}

