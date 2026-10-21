// Nekki.SF2.GUI.DebugUIModule$$.ctor @ RVA 0x33227EC

void Nekki_SF2_GUI_DebugUIModule___ctor(Nekki_SF2_GUI_DebugUIModule_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034227e0 with catch @ 034227ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03422798 with catch @ 034227f0
                        */
                    /* try { // try from 03422808 to 0352281f has its CatchHandler @ 03422918 */
  if ((DAT_04567855 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567855 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03422820 to 03522907 has its CatchHandler @ 03422788 */
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

