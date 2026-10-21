// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$NumberOfRowsInTableView @ RVA 0x33DB96C

int32_t Nekki_SF2_GUI_Shop_Forge_ForgePanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
                    /* try { // try from 034db974 to 035db97b has its CatchHandler @ 034dbbac */
  if ((DAT_04567e71 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
                    /* try { // try from 034db994 to 035db99b has its CatchHandler @ 034dbb98 */
    DAT_04567e71 = 1;
  }
  pSVar1 = (__this->fields).OKIANCELJJF;
  if (pSVar1 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034db9b0 to 035db9b7 has its CatchHandler @ 034dba68 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

