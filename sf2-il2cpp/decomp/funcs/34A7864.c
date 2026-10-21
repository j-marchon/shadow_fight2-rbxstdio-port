// Nekki.SF2.GUI.Profile.UserPerksPanel$$CellForRowInTableView @ RVA 0x34A7864

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_02;
  
                    /* try { // try from 035a7874 to 036a78e7 has its CatchHandler @ 035a8030 */
  if ((DAT_045684fe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    DAT_045684fe = 1;
  }
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    __this_02 = (__this->fields).MHOLLBLFLAH;
    if ((__this_02 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
       (PLKOKDEAMBE = (EANNACPOJFA_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                                 Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
                    /* try { // try from 035a78e8 to 036a7a03 has its CatchHandler @ 035a7464 */
      Nekki_SF2_GUI_Profile_PerkCell__Init
                (__this_01,PLKOKDEAMBE,(JEIEEMKCNOJ_o *)__this,15.0,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

