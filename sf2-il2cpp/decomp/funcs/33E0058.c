// Nekki.SF2.GUI.Pvp.PhaseWeapon$$NumberOfRowsInTableView @ RVA 0x33E0058

int32_t Nekki_SF2_GUI_Pvp_PhaseWeapon__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
                  MethodInfo *method)

{
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = HDFMPLDOEJG;
  auVar2._0_8_ = __this;
                    /* try { // try from 034e0058 to 035e005f has its CatchHandler @ 034e01f8 */
                    /* try { // try from 034e0060 to 035e009b has its CatchHandler @ 034df29c */
  if ((DAT_04567e92 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    DAT_04567e92 = 1;
  }
  pSVar1 = (__this->fields).LGHNHMJIDIB;
  if (pSVar1 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e009c to 035e009f has its CatchHandler @ 034e0210 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

