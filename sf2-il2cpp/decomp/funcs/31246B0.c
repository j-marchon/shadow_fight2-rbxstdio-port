// Nekki.SF2.GUI.Profile.AchievementsController$$NumberOfRowsInTableView @ RVA 0x31246B0

int32_t Nekki_SF2_GUI_Profile_AchievementsController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_0456664c & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__
                         );
    DAT_0456664c = 1;
  }
  pSVar1 = (__this->fields).OBNPKCCKLIJ;
  if (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

