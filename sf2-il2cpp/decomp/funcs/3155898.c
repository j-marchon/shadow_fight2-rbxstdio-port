// Nekki.SF2.GUI.Profile.TricksController$$NumberOfRowsInTableView @ RVA 0x3155898

int32_t Nekki_SF2_GUI_Profile_TricksController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_TricksController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
                    /* try { // try from 032558a8 to 033558af has its CatchHandler @ 03256120 */
  if ((DAT_04566837 & 1) == 0) {
                    /* try { // try from 032558b8 to 033558bf has its CatchHandler @ 03256128 */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
                    /* try { // try from 032558c0 to 033558cb has its CatchHandler @ 03256124 */
    DAT_04566837 = 1;
  }
  pSVar1 = (__this->fields).GLNEIGKMPDC;
  if (pSVar1 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032558dc to 033558e3 has its CatchHandler @ 03256138 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

