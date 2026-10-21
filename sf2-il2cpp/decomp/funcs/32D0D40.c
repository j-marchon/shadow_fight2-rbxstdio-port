// Nekki.SF2.GUI.Profile.PerksController$$CellForRowInTableView @ RVA 0x32D0D40

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_PerksController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  
  if ((DAT_04567550 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    DAT_04567550 = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    pSVar1 = (__this->fields).GPFJGCCIHLB;
    if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
      PLKOKDEAMBE = (EANNACPOJFA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,HAJDGFPLGNK,
                               Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      pSVar1 = (__this->fields).GPFJGCCIHLB;
      if ((pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
        Nekki_SF2_GUI_Profile_PerkCell__Init
                  (__this_01,PLKOKDEAMBE,HAJDGFPLGNK == 0,HAJDGFPLGNK + 1 == (pSVar1->fields)._size,
                   (JEIEEMKCNOJ_o *)__this,95.0,(MethodInfo *)0x0);
        return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

