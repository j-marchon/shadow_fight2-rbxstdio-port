// Nekki.SF2.GUI.Profile.SealsController$$CellForRowInTableView @ RVA 0x311E488

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_SealsController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_SealsController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this_01;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  
  if ((DAT_0456660c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<SealsTableViewCell>__);
    DAT_0456660c = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<SealsTableViewCell>__);
    __this_02 = (__this->fields).BMEJJFBFFIH;
    if (((__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) &&
        (pIVar1 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                             Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__),
        pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_01 != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_Profile_SealsTableViewCell__SetItemInfo
                (__this_01,pIVar1[1].monitor,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

