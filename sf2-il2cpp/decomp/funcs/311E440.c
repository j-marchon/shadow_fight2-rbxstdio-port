// Nekki.SF2.GUI.Profile.SealsController$$NumberOfRowsInTableView @ RVA 0x311E440

int32_t Nekki_SF2_GUI_Profile_SealsController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_SealsController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_0456660b & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    DAT_0456660b = 1;
  }
  pSVar1 = (__this->fields).BMEJJFBFFIH;
  if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

