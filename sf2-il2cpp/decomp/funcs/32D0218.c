// Nekki.SF2.GUI.Profile.PerksController$$NumberOfRowsInTableView @ RVA 0x32D0218

int32_t Nekki_SF2_GUI_Profile_PerksController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_04567547 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    DAT_04567547 = 1;
  }
  pSVar1 = (__this->fields).GPFJGCCIHLB;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d025c to 034d0263 has its CatchHandler @ 033d02c0 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

