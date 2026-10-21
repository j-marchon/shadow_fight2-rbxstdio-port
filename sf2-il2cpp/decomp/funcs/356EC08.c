// Nekki.SF2.GUI.Menu.MainMenu$$DGMNFAKGPBG @ RVA 0x356EC08

void Nekki_SF2_GUI_Menu_MainMenu__DGMNFAKGPBG
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366ec08 to 0376ec0f has its CatchHandler @ 03672d14 */
  if ((DAT_04568c49 & 1) == 0) {
                    /* try { // try from 0366ec20 to 0376ec27 has its CatchHandler @ 03672d10 */
                    /* try { // try from 0366ec28 to 0376ec3b has its CatchHandler @ 03672d0c */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568c49 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366ec44 to 0376ec4b has its CatchHandler @ 03672d08 */
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366ec5c to 0376ec63 has its CatchHandler @ 03673110 */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__HMGOIPKIDBB((MethodInfo *)0x0);
                    /* try { // try from 0366ec70 to 0376ec77 has its CatchHandler @ 0367311c */
  MGNPHCAAEIO__BHMIDFLCAHJ((MethodInfo *)0x0);
  return;
}

