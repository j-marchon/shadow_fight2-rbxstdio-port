// Nekki.SF2.GUI.Profile.TricksController$$CellForRowInTableView @ RVA 0x31554F0

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_TricksController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_TricksController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_TrickCell_o *__this_01;
  KCLPNDAPADO_o *EKBENIDNAEE;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_02;
  
                    /* try { // try from 032554fc to 03355503 has its CatchHandler @ 032560f8 */
                    /* try { // try from 03255504 to 0335550f has its CatchHandler @ 032560f4 */
  if ((DAT_04566833 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
                    /* try { // try from 03255520 to 03355527 has its CatchHandler @ 03256108 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<TrickCell>__);
    DAT_04566833 = 1;
  }
  __this_00 = (__this->fields).super._TableView;
                    /* try { // try from 03255530 to 03355537 has its CatchHandler @ 032560ec */
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 03255538 to 03355543 has its CatchHandler @ 03256100 */
    __this_01 = (Nekki_SF2_GUI_Profile_TrickCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<TrickCell>__);
    __this_02 = (__this->fields).GLNEIGKMPDC;
                    /* try { // try from 03255554 to 0335555b has its CatchHandler @ 03256104 */
                    /* try { // try from 03255564 to 0335556b has its CatchHandler @ 032560fc */
                    /* try { // try from 0325556c to 0335558f has its CatchHandler @ 032561b4 */
    if ((__this_02 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) &&
       (EKBENIDNAEE = (KCLPNDAPADO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                                 Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_TrickCell_o *)0x0)) {
      Nekki_SF2_GUI_Profile_TrickCell__Init
                (__this_01,EKBENIDNAEE,(JEIEEMKCNOJ_o *)__this,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

