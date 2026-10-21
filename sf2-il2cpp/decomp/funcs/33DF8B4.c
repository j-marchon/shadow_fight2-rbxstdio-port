// Nekki.SF2.GUI.Pvp.PhaseWeapon$$get_SelectedWeapon @ RVA 0x33DF8B4

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__get_SelectedWeapon
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  HOOAAGABMBL_o *pHVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034df8b4 to 035df8bb has its CatchHandler @ 034e0168 */
  if ((DAT_04567e8f & 1) == 0) {
                    /* try { // try from 034df8cc to 035df8d3 has its CatchHandler @ 034e0170 */
                    /* try { // try from 034df8d4 to 035df8f3 has its CatchHandler @ 034e0188 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    DAT_04567e8f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).LGHNHMJIDIB;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar1 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (__this->fields).CCOCEGOEFNL,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034df904 to 035df907 has its CatchHandler @ 034e0104 */
  FUN_01bab8c8(0,method);
}

