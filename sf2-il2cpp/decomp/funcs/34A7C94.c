// Nekki.SF2.GUI.Profile.UserPerksPanel$$NumberOfRowsInTableView @ RVA 0x34A7C94

int32_t Nekki_SF2_GUI_Profile_UserPerksPanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_04568501 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
                    /* try { // try from 035a7cbc to 036a7ce7 has its CatchHandler @ 035a7e90 */
    DAT_04568501 = 1;
  }
  pSVar1 = (__this->fields).MHOLLBLFLAH;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

