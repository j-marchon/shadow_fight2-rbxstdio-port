// Nekki.SF2.GUI.Menu.MainMenu$$PDEBOICMAJG @ RVA 0x356DCB4

void Nekki_SF2_GUI_Menu_MainMenu__PDEBOICMAJG
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366dcbc to 0376dcc3 has its CatchHandler @ 03672e58 */
  if ((DAT_04568c38 & 1) == 0) {
                    /* try { // try from 0366dcd4 to 0376dcdb has its CatchHandler @ 03672e54 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0366dcdc to 0376dceb has its CatchHandler @ 03672e50 */
    DAT_04568c38 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
                    /* try { // try from 0366dcfc to 0376dd03 has its CatchHandler @ 03672e4c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__HMGOIPKIDBB((MethodInfo *)0x0);
                    /* try { // try from 0366dd14 to 0376dd1b has its CatchHandler @ 03672e48 */
  MGNPHCAAEIO__BHMIDFLCAHJ((MethodInfo *)0x0);
  return;
}

