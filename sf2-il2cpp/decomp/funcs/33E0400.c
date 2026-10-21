// Nekki.SF2.GUI.Pvp.PhaseWeapon$$CellForRowInTableView @ RVA 0x33E0400

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Pvp_PhaseWeapon__CellForRowInTableView
          (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
          int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *__this_00;
  HOOAAGABMBL_o *CJNHFNHJHPE;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04567e96 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<WeaponPvpCell>__);
    DAT_04567e96 = 1;
  }
  if (HDFMPLDOEJG != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (HDFMPLDOEJG,JDEFJPHCNMM,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<WeaponPvpCell>__);
    __this_01 = (__this->fields).LGHNHMJIDIB;
    if ((__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (CJNHFNHJHPE = (HOOAAGABMBL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__),
       __this_00 != (Nekki_SF2_GUI_Pvp_WeaponPvpCell_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_WeaponPvpCell__set_ItemInfo(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

